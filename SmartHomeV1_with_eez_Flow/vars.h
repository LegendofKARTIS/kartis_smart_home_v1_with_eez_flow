#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations

typedef enum {
    DayOfWeek_SAT = 6,
    DayOfWeek_FRI = 5,
    DayOfWeek_THU = 4,
    DayOfWeek_WED = 3,
    DayOfWeek_TUE = 2,
    DayOfWeek_MON = 1,
    DayOfWeek_SUN = 0
} DayOfWeek;

// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_ARC_VALUE = 0,
    FLOW_GLOBAL_VARIABLE_SERIAL_VALUE = 1,
    FLOW_GLOBAL_VARIABLE_DAYOF_WEEK_VAR = 2,
    FLOW_GLOBAL_VARIABLE_AIR_QUALITY_STATUS = 3,
    FLOW_GLOBAL_VARIABLE_AIR_QUALITY_VALUE = 4,
    FLOW_GLOBAL_VARIABLE_HUMIDITY_VALUE = 5,
    FLOW_GLOBAL_VARIABLE_LDR_VALUE = 6,
    FLOW_GLOBAL_VARIABLE_MONTH = 7,
    FLOW_GLOBAL_VARIABLE_TEMPERTURE_VALUE = 8,
    FLOW_GLOBAL_VARIABLE_TIME_HOUR = 9,
    FLOW_GLOBAL_VARIABLE_TIME_MINUTE = 10,
    FLOW_GLOBAL_VARIABLE_LIGHT_STATE = 11,
    FLOW_GLOBAL_VARIABLE_DATE = 12
};

// Native global variables



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/