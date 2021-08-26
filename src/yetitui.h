#pragma once
#include <stdint.h>
#include <stdbool.h>
#include "yetitui_colours.h"
#include "yetitui_element.h"

void enMode_raw();
void disMode_raw();
void curs_move(uint16_t x, uint16_t y);
void scr_clear();
void setColour(uint8_t colour);
void setColourBright(uint8_t colour);
void resetColour();
void printBox(uint16_t x, uint16_t y, uint16_t w, uint16_t h);
void printBoxWithElements(uint16_t x, uint16_t y, uint16_t w, uint16_t h, box_element elements[], size_t elementArraySize);
int getmaxy();
int getmaxx();
void showCursor(bool show);
char getch();
box_element* eputs(uint16_t x, uint16_t y, const char str[]);