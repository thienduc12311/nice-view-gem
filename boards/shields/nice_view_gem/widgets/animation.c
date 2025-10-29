#include <stdlib.h>
#include <zephyr/kernel.h>
#include "animation.h"

LV_IMG_DECLARE(cross);

const lv_img_dsc_t *anim_imgs[] = {
    &cross,
};

void draw_animation(lv_obj_t *canvas) {
    lv_obj_t *art = lv_img_create(canvas);
    lv_img_set_src(art, anim_imgs[0]);
    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
}