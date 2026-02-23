// User specific config file.  Any items listed in config.h can be overridden here.

// uncomment the lines below to disable features (flash sizes listed are for APM2 boards and will underestimate savings on Pixhawk and other boards)
//#define LOGGING_ENABLED       0            // disable logging to save 11K of flash space
//#define MOUNT                 0            // disable the camera gimbal to save 8K of flash space
//#define AUTOTUNE_ENABLED      0            // disable the auto tune functionality to save 7k of flash
//#define NAV_GUIDED            0            // disable external navigation computer ability to control vehicle through MAV_CMD_NAV_GUIDED mission commands
//#define MODE_ACRO_ENABLED     0            // disable acrobatic mode support
//#define MODE_AUTO_ENABLED     0            // disable auto mode support
//#define MODE_BRAKE_ENABLED    0            // disable brake mode support
//#define MODE_CIRCLE_ENABLED   0            // disable circle mode support
//#define MODE_DRIFT_ENABLED    0            // disable drift mode support
//#define MODE_FLIP_ENABLED     0            // disable flip mode support
//#define MODE_FOLLOW_ENABLED   0            // disable follow mode support
//#define MODE_GUIDED_ENABLED   0            // disable guided mode support
//#define MODE_GUIDED_NOGPS_ENABLED   0      // disable guided/nogps mode support
//#define MODE_LOITER_ENABLED   0            // disable loiter mode support
//#define MODE_POSHOLD_ENABLED  0            // disable poshold mode support
//#define MODE_RTL_ENABLED      0            // disable rtl mode support
//#define MODE_SMARTRTL_ENABLED 0            // disable smartrtl mode support
//#define MODE_SPORT_ENABLED    0            // disable sport mode support
//#define MODE_SYSTEMID_ENABLED 0            // disable system ID mode support
//#define MODE_THROW_ENABLED    0            // disable throw mode support
//#define MODE_ZIGZAG_ENABLED   0            // disable zigzag mode support
//#define OSD_ENABLED           0            // disable on-screen-display support

// features below are disabled by default on all boards
//#define CAL_ALWAYS_REBOOT                         // flight controller will reboot after compass or accelerometer calibration completes
//#define DISALLOW_GCS_MODE_CHANGE_DURING_RC_FAILSAFE   // disable mode changes from GCS during Radio failsafes.  Avoids a race condition for vehicle like Solo in which the RC and telemetry travel along the same link
//#define AP_COPTER_ADVANCED_FAILSAFE_ENABLED     1             // enabled advanced failsafe which allows running a portion of the mission in failsafe events

// other settings
//#define THROTTLE_IN_DEADBAND   100                // redefine size of throttle deadband in pwm (0 ~ 1000)

// User Hooks : For User Developed code that you wish to run
// Put your variable definitions into the UserVariables.h file (or another file name and then change the #define below).
//#define USERHOOK_VARIABLES "UserVariables.h"
// Put your custom code into the UserCode.cpp with function names matching those listed below and ensure the appropriate #define below is uncommented below
//#define USERHOOK_INIT userhook_init();                      // for code to be run once at startup
//#define USERHOOK_FASTLOOP userhook_FastLoop();            // for code to be run at 100hz
//#define USERHOOK_50HZLOOP userhook_50Hz();                  // for code to be run at 50hz
//#define USERHOOK_MEDIUMLOOP userhook_MediumLoop();        // for code to be run at 10hz
//#define USERHOOK_SLOWLOOP userhook_SlowLoop();            // for code to be run at 3.3hz
//#define USERHOOK_SUPERSLOWLOOP userhook_SuperSlowLoop();  // for code to be run at 1hz
//#define USERHOOK_AUXSWITCH 1                        // for code to handle user aux switches
//#define USER_PARAMS_ENABLED 1                       // to enable user parameters


#undef HAL_NAVEKF2_AVAILABLE
#define HAL_NAVEKF2_AVAILABLE 0

#undef HAL_NAVEKF3_AVAILABLE
#define HAL_NAVEKF3_AVAILABLE 1

#undef MODE_ACRO_ENABLED
#define MODE_ACRO_ENABLED 0

#undef MODE_SPORT_ENABLED
#define MODE_SPORT_ENABLED 0

#undef MODE_FLIP_ENABLED
#define MODE_FLIP_ENABLED 0

#undef MODE_AUTOTUNE_ENABLED
#define MODE_AUTOTUNE_ENABLED 1

#undef MODE_SMARTRTL_ENABLED
#define MODE_SMARTRTL_ENABLED 1

#undef MODE_FLOWHOLD_ENABLED
#define MODE_FLOWHOLD_ENABLED 0

#undef MODE_FOLLOW_ENABLED
#define MODE_FOLLOW_ENABLED 0

#undef MODE_ZIGZAG_ENABLED
#define MODE_ZIGZAG_ENABLED 0

#undef MODE_AUTOROTATE_ENABLED
#define MODE_AUTOROTATE_ENABLED 0

#undef MODE_SYSTEMID_ENABLED
#define MODE_SYSTEMID_ENABLED 0

#undef MODE_TURTLE_ENABLED
#define MODE_TURTLE_ENABLED 0

#undef OSD_ENABLED
#define OSD_ENABLED 0

#undef HAL_OSD_ENABLED
#define HAL_OSD_ENABLED 0

#undef HAL_ADSB_ENABLED
#define HAL_ADSB_ENABLED 0

#undef HAL_GRIPPER_ENABLED
#define HAL_GRIPPER_ENABLED 0

#undef HAL_SPRAYER_ENABLED
#define HAL_SPRAYER_ENABLED 0

#undef HAL_PARACHUTE_ENABLED
#define HAL_PARACHUTE_ENABLED 0

#undef HAL_WINCH_ENABLED
#define HAL_WINCH_ENABLED 0

#undef HAL_LANDING_GEAR_ENABLED
#define HAL_LANDING_GEAR_ENABLED 0

#undef HAL_MOUNT_ENABLED
#define HAL_MOUNT_ENABLED 1

#undef AP_MOUNT_ALEXMOS_ENABLED
#define AP_MOUNT_ALEXMOS_ENABLED 0

#undef AP_MOUNT_GREMSY_ENABLED
#define AP_MOUNT_GREMSY_ENABLED 0

#undef HAL_SOLO_GIMBAL_ENABLED
#define HAL_SOLO_GIMBAL_ENABLED 1

#undef AP_MOUNT_MAVLINK_ENABLED
#define AP_MOUNT_MAVLINK_ENABLED 1

#undef AP_MOUNT_STORM32_ENABLED
#define AP_MOUNT_STORM32_ENABLED 0

#undef AP_GPS_UBLOX_ENABLED
#define AP_GPS_UBLOX_ENABLED 1

#undef AP_GPS_NMEA_ENABLED
#define AP_GPS_NMEA_ENABLED 1

#undef AP_GPS_MAV_ENABLED
#define AP_GPS_MAV_ENABLED 1

#undef AP_GPS_SBF_ENABLED
#define AP_GPS_SBF_ENABLED 1

#undef AP_GPS_GSOF_ENABLED
#define AP_GPS_GSOF_ENABLED 1

#undef AP_GPS_NOVA_ENABLED
#define AP_GPS_NOVA_ENABLED 1

#undef AP_GPS_SIRF_ENABLED
#define AP_GPS_SIRF_ENABLED 1

#undef AP_GPS_ERB_ENABLED
#define AP_GPS_ERB_ENABLED 1

#undef AP_COMPASS_ENABLED
#define AP_COMPASS_ENABLED 1

#undef AP_COMPASS_MAX_SENSORS
#define AP_COMPASS_MAX_SENSORS 1

#undef AP_RANGEFINDER_ENABLED
#define AP_RANGEFINDER_ENABLED 1

#undef AP_AIRSPEED_ENABLED
#define AP_AIRSPEED_ENABLED 1

#undef AP_BATTERY_ENABLED
#define AP_BATTERY_ENABLED 1

#undef AP_DRONECAN_ENABLED
#define AP_DRONECAN_ENABLED 1

#undef AP_BATTERY_SMBUS_ENABLED
#define AP_BATTERY_SMBUS_ENABLED 1

#undef AP_BATTERY_BEBOP_ENABLED
#define AP_BATTERY_BEBOP_ENABLED 1

#undef AP_BATTERY_ANALOG_ENABLED
#define AP_BATTERY_ANALOG_ENABLED 1

#undef AP_FRSKY_TELEM_ENABLED
#define AP_FRSKY_TELEM_ENABLED 0

#undef AP_CRSF_TELEM_ENABLED
#define AP_CRSF_TELEM_ENABLED 0

#undef AP_SPEKTRUM_TELEM_ENABLED
#define AP_SPEKTRUM_TELEM_ENABLED 0

#undef AP_GHST_ENABLED
#define AP_GHST_ENABLED 0

#undef AP_AVOIDANCE_ENABLED
#define AP_AVOIDANCE_ENABLED 0

#undef AP_TERRAIN_AVAILABLE
#define AP_TERRAIN_AVAILABLE 1