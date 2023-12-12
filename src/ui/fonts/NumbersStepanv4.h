#include "../gfxfont.h"

const uint8_t dig_11_Bitmaps[] PROGMEM = {
  0xFF, 0xFC, 0x00, 0xFC, 0x00, 0x7F, 0x7F, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 
  0x8F, 0xC7, 0xE3, 0xFF, 0xDF, 0xC0, 0x38, 0x73, 0xE7, 0xC3, 0x87, 0x0E, 
  0x1C, 0x39, 0xFF, 0xF8, 0x00, 0x7F, 0x7F, 0xF8, 0xE0, 0x70, 0x70, 0x70, 
  0x70, 0x70, 0x70, 0x7F, 0xFF, 0xE0, 0x7F, 0x7F, 0xF8, 0xE0, 0x71, 0xF0, 
  0xFC, 0x0E, 0x07, 0xE3, 0xFF, 0xDF, 0xC0, 0x03, 0x03, 0x83, 0xC3, 0xE3, 
  0xF3, 0xBB, 0x9D, 0xCE, 0xFF, 0xFF, 0xC1, 0xC0, 0xFF, 0xFF, 0xF8, 0x1C, 
  0x0F, 0xF7, 0xFC, 0x0E, 0x07, 0xE3, 0xFF, 0xDF, 0xC0, 0x7F, 0x7F, 0xF8, 
  0xFC, 0x0F, 0xF7, 0xFF, 0x8F, 0xC7, 0xE3, 0xFF, 0xDF, 0xC0, 0xFF, 0xFF, 
  0xF8, 0xE0, 0x70, 0x70, 0x70, 0x38, 0x38, 0x1C, 0x1C, 0x0E, 0x00, 0x7F, 
  0x7F, 0xF8, 0xFC, 0x77, 0xF7, 0xFF, 0x8F, 0xC7, 0xE3, 0xFF, 0xDF, 0xC0, 
  0x7F, 0x7F, 0xF8, 0xFC, 0x7F, 0xFB, 0xFC, 0x0E, 0x07, 0xE3, 0xFF, 0xDF, 
  0xC0
};

const GFXglyph dig_11_Glyphs[] PROGMEM = {
  {     0,   7,   2,   8,    0,   -6 },   // 0x2D '-'
  {     3,   3,   2,   4,    0,   -1 },   // 0x2E '.'
  {     0,   0,   0,   0,    0,    0 },   // 0x2F '/'
  {     5,   9,  11,  10,    0,  -10 },   // 0x30 '0'
  {    18,   7,  11,   8,    0,  -10 },   // 0x31 '1'
  {    29,   9,  11,  10,    0,  -10 },   // 0x32 '2'
  {    42,   9,  11,  10,    0,  -10 },   // 0x33 '3'
  {    55,   9,  11,  10,    0,  -10 },   // 0x34 '4'
  {    68,   9,  11,  10,    0,  -10 },   // 0x35 '5'
  {    81,   9,  11,  10,    0,  -10 },   // 0x36 '6'
  {    94,   9,  11,  10,    0,  -10 },   // 0x37 '7'
  {   107,   9,  11,  10,    0,  -10 },   // 0x38 '8'
  {   120,   9,  11,  10,    0,  -10 }    // 0x39 '9'
};

const GFXfont dig_11 PROGMEM = {(uint8_t *) dig_11_Bitmaps,    (GFXglyph *)dig_11_Glyphs, 0x2D, 0x39,    11};
