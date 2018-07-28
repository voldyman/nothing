#ifndef CAMERA_H_
#define CAMERA_H_

#include "color.h"
#include "game/sprite_font.h"
#include "math/point.h"
#include "math/rect.h"
#include "math/triangle.h"

typedef struct camera_t camera_t;

camera_t *create_camera(SDL_Renderer *renderer,
                        sprite_font_t *font);
void destroy_camera(camera_t *camera);

int camera_clear_background(camera_t *camera,
                            color_t color);

int camera_fill_rect(camera_t *camera,
                     rect_t rect,
                     color_t color);

int camera_draw_rect(camera_t * camera,
                     rect_t rect,
                     color_t color);

int camera_draw_triangle(camera_t *camera,
                         triangle_t t,
                         color_t color);

int camera_fill_triangle(camera_t *camera,
                         triangle_t t,
                         color_t color);

int camera_render_text(camera_t *camera,
                       const char *text,
                       vec_t size,
                       color_t color,
                       vec_t position);

void camera_center_at(camera_t *camera, point_t position);

void camera_toggle_debug_mode(camera_t *camera);
void camera_disable_debug_mode(camera_t *camera);

void camera_toggle_blackwhite_mode(camera_t *camera);

int camera_is_point_visible(const camera_t *camera, point_t p);

rect_t camera_view_port(const camera_t *camera);

#endif  // CAMERA_H_
