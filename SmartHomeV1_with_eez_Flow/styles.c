#include "styles.h"
#include "images.h"
#include "fonts.h"

#include "ui.h"
#include "screens.h"

//
// Style: arc red
//

void init_style_arc_red_INDICATOR_DEFAULT(lv_style_t *style) {
    lv_style_set_arc_color(style, lv_color_hex(0xffff0000));
};

lv_style_t *get_style_arc_red_INDICATOR_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_arc_red_INDICATOR_DEFAULT(style);
    }
    return style;
};

void add_style_arc_red(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_arc_red_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
};

void remove_style_arc_red(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_arc_red_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
};

//
// Style: arc white
//

void init_style_arc_white_INDICATOR_DEFAULT(lv_style_t *style) {
    lv_style_set_arc_color(style, lv_color_hex(0xffffffff));
};

lv_style_t *get_style_arc_white_INDICATOR_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_arc_white_INDICATOR_DEFAULT(style);
    }
    return style;
};

void add_style_arc_white(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_arc_white_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
};

void remove_style_arc_white(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_arc_white_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
};

//
// Style: arc yellow
//

void init_style_arc_yellow_INDICATOR_DEFAULT(lv_style_t *style) {
    lv_style_set_arc_color(style, lv_color_hex(0xffff5b00));
};

lv_style_t *get_style_arc_yellow_INDICATOR_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_arc_yellow_INDICATOR_DEFAULT(style);
    }
    return style;
};

void add_style_arc_yellow(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_arc_yellow_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
};

void remove_style_arc_yellow(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_arc_yellow_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
};

//
//
//

void add_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*AddStyleFunc)(lv_obj_t *obj);
    static const AddStyleFunc add_style_funcs[] = {
        add_style_arc_red,
        add_style_arc_white,
        add_style_arc_yellow,
    };
    add_style_funcs[styleIndex](obj);
}

void remove_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*RemoveStyleFunc)(lv_obj_t *obj);
    static const RemoveStyleFunc remove_style_funcs[] = {
        remove_style_arc_red,
        remove_style_arc_white,
        remove_style_arc_yellow,
    };
    remove_style_funcs[styleIndex](obj);
}

