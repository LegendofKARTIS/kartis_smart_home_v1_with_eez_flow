#ifndef EEZ_LVGL_UI_STYLES_H
#define EEZ_LVGL_UI_STYLES_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Style: arc red
lv_style_t *get_style_arc_red_INDICATOR_DEFAULT();
void add_style_arc_red(lv_obj_t *obj);
void remove_style_arc_red(lv_obj_t *obj);

// Style: arc white
lv_style_t *get_style_arc_white_INDICATOR_DEFAULT();
void add_style_arc_white(lv_obj_t *obj);
void remove_style_arc_white(lv_obj_t *obj);

// Style: arc yellow
lv_style_t *get_style_arc_yellow_INDICATOR_DEFAULT();
void add_style_arc_yellow(lv_obj_t *obj);
void remove_style_arc_yellow(lv_obj_t *obj);



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_STYLES_H*/