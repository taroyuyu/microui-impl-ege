#ifndef RENDERER_H
#define RENDERER_H

#include "microui.h"
#include "ege.h"

// 初始化 EGE 与 mu_Context 后调用此初始化函数
void microui_impl_ege_init(mu_Context *ctx);

// 调用 ege::closegraph() 前调用此函数
void microui_impl_ege_shutdown();

void r_draw_rect(mu_Rect rect, mu_Color color);
void r_draw_text(const char *text, mu_Vec2 pos, mu_Color color);
void r_draw_icon(int id, mu_Rect rect, mu_Color color);

void r_set_clip_rect(mu_Rect rect);

int ege2mu_key_map(int key);

void ege2mu_input_mouse(mu_Context *ctx, ege::mouse_msg mmsg);

void loop_process_kbhit(mu_Context * ctx);

#endif

