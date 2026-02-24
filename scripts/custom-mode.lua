local MODE_NUM       = 101
local MODE_FULLNAME  = "MY_MODE"
local MODE_SHORTNAME = "MMOD"
local LOOP_RATE_HZ   = 1

local custom_mode_state = vehicle:register_custom_mode(MODE_NUM, MODE_FULLNAME, MODE_SHORTNAME)

if not custom_mode_state then
    gcs:send_text(3, "[MMOD] ERROR: Failed to register mode")
    return
end

custom_mode_state:allow_entry(true)
-- gcs:send_text(6, "[MMOD] Registered as mode " .. tostring(MODE_NUM))

local state = {
    active      = false,
    tick        = 0,
    entry_count = 0,
}


local function our_mode_is_active()
    return vehicle:get_mode() == MODE_NUM
end

local function log(severity, msg)
    -- gcs:send_text(severity, "[MMOD] " .. msg)
end

local function get_alt_m()
    local pos = ahrs:get_position()
    if pos == nil then return nil end
    return pos:alt() * 0.01
end

local function on_enter()
    state.entry_count = state.entry_count + 1
    state.tick = 0

    local alt = get_alt_m()
    local alt_str = alt and string.format("%.1fm", alt) or "unknown"
    log(6, string.format("Entered (entry #%d) alt=%s", state.entry_count, alt_str))

end

local function on_exit()
    log(6, string.format("Exited after %d ticks (%.1fs)",
        state.tick, state.tick / LOOP_RATE_HZ))
end

local function run_my_mode()
    if state.tick % (LOOP_RATE_HZ * 5) == 0 then
        local alt = get_alt_m()
        local alt_str = alt and string.format("%.1fm", alt) or "unknown"
        log(6, string.format("Running tick=%d alt=%s", state.tick, alt_str))
    end

end

local function update()
    local now_active = our_mode_is_active()

    if now_active and not state.active then
        state.active = true
        on_enter()
    elseif not now_active and state.active then
        state.active = false
        on_exit()
    end

    if state.active then
        state.tick = state.tick + 1
        run_my_mode()
    end

    return update, 1000 / LOOP_RATE_HZ
end

return update()