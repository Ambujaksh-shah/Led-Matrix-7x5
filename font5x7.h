#include <avr/pgmspace.h>
const uint8_t smallFont[] PROGMEM =
{
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //
 0x00,0x3C,0x7F,0x7F,0x3C,0x00,0x00,0x00  , // !
 0x00,0x7C,0x7C,0x00,0x7C,0x7C,0x00,0x00  , // "
 0x06,0x7F,0x7F,0x06,0x7F,0x7F,0x06,0x00  , // #
 0x06,0x0E,0x11,0x70,0x70,0x10,0x08,0x00  , // $
 0x30,0x30,0x00,0x03,0x0F,0x3C,0x30,0x00  , // %
 0x00,0x1D,0x3E,0x23,0x3E,0x1C,0x00,0x00  , // &
 0x04,0x78,0x70,0x60,0x00,0x00,0x00,0x00  , // '
 0x00,0x1F,0x3F,0x60,0x40,0x00,0x00,0x00  , // (
 0x00,0x40,0x60,0x3F,0x1F,0x00,0x00,0x00  , // )
 0x01,0x09,0x07,0x03,0x03,0x07,0x09,0x01  , // *
 0x01,0x01,0x1F,0x1F,0x01,0x01,0x00,0x00  , // +
 0x00,0x05,0x07,0x06,0x00,0x00,0x00,0x00  , // ,
 0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00  , // -
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00  , // .
 0x00,0x00,0x00,0x03,0x0F,0x3C,0x30,0x00  , // /
 0x3F,0x7F,0x40,0x43,0x4F,0x7F,0x3F,0x00  , // 0
 0x00,0x10,0x20,0x7F,0x7F,0x00,0x00,0x00  , // 1
 0x20,0x60,0x40,0x41,0x41,0x3E,0x1C,0x00  , // 2
 0x44,0xc6,0x92,0x92,0xfe,0x6c,0x00,0x00  , // 3
 0x18,0x38,0x68,0xc8,0xfe,0xfe,0x08,0x00  , // 4
 0xe4,0xe6,0xa2,0xa2,0xbe,0x9c,0x00,0x00  , // 5
 0x3c,0x7e,0xd2,0x92,0x9e,0x0c,0x00,0x00  , // 6
 0xc0,0xc6,0x8e,0x98,0xf0,0xe0,0x00,0x00  , // 7
 0x6c,0xfe,0x92,0x92,0xfe,0x6c,0x00,0x00  , // 8
 0x60,0xf2,0x92,0x96,0xfc,0x78,0x00,0x00  , // 9
 0x00,0x00,0x36,0x36,0x00,0x00,0x00,0x00  , // :
 0x00,0x05,0x37,0x36,0x00,0x00,0x00,0x00  , // ;
 0x10,0x38,0x6c,0xc6,0x82,0x00,0x00,0x00  , // <
 0x28,0x28,0x28,0x28,0x28,0x28,0x00,0x00  , // =
 0x00,0x82,0xc6,0x6c,0x38,0x10,0x00,0x00  , // >
 0x40,0xc0,0x8a,0x9a,0xf0,0x60,0x00,0x00  , // ?
 0x7c,0xfe,0x82,0xba,0xba,0xf8,0x78,0x00  , // @
 0x1F,0x3F,0x61,0x61,0x61,0x3F,0x1F,0x00  , // A
 0x40,0x7F,0x7F,0x41,0x41,0x7F,0x3E,0x00  , // B
 0x0F,0x3F,0x60,0x40,0x40,0x60,0x20,0x00  , // C
 0x40,0x7F,0x7F,0x40,0x60,0x7F,0x3F,0x00  , // D
 0x40,0x7F,0x7F,0x41,0x43,0x40,0x60,0x00  , // E
 0x40,0x7F,0x7F,0x41,0x41,0x43,0x60,0x00  , // F
 0x1F,0x3F,0x60,0x40,0x40,0x60,0x20,0x00  , // G
 0x7F,0x7F,0x01,0x01,0x01,0x7F,0x7F,0x00  , // H
 0x00,0x60,0x60,0x7F,0x7F,0x60,0x60,0x00  , // I
 0x00,0x00,0x60,0x60,0x7F,0x7F,0x60,0x00  , // J
 0x40,0x7F,0x7F,0x03,0x0F,0x3C,0x38,0x00  , // K
 0x40,0x7F,0x7F,0x40,0x00,0x00,0x00,0x00  , // L
 0x7F,0x3F,0x1C,0x0E,0x1C,0x3F,0x7F,0x00  , // M
 0x7E,0x7E,0x3C,0x07,0x00,0x7E,0x7E,0x00  , // N
 0x1F,0x3F,0x70,0x60,0x70,0x3F,0x1F,0x00  , // O
 0x41,0x7F,0x7F,0x40,0x40,0x3F,0x1F,0x00  , // P
 0x3F,0x7F,0x40,0x40,0x40,0x7F,0x3F,0x00  , // Q
 0x41,0x7F,0x7F,0x40,0x40,0x3F,0x1F,0x00  ,// 0x82,0xfe,0xfe,0x98,0x9c,0xf6,0x62,0x00  , // R
 0x1C,0x3E,0x63,0x61,0x60,0x70,0x30,0x00  ,  //S
 0x60,0x40,0x7F,0x7F,0x40,0x60,0x00,0x00  , // T
 0x7F,0x7F,0x00,0x00,0x00,0x7F,0x7F,0x00  , // U
 0x7F,0x7F,0x00,0x00,0x00,0x7F,0x7F,0x00  , // V
 0x7F,0x7F,0x00,0x00,0x00,0x7F,0x7F,0x00  , // W
 0x7C,0x7E,0x03,0x01,0x03,0x7E,0x7C,0x00  , // X
 0x7E,0x7F,0x01,0x01,0x7F,0x7E,0x00,0x00  , // Y
 0x78,0x70,0x60,0x63,0x6F,0x7C,0x70,0x00,   //0xe6,0xce,0x9a,0xb2,0xe2,0xc6,0x8e,0x00  , // Z
 0x00,0xfe,0xfe,0x82,0x82,0x00,0x00,0x00  , // [
 0x80,0xc0,0x60,0x30,0x18,0x0c,0x06,0x00  , // "\"
 0x00,0x82,0x82,0xfe,0xfe,0x00,0x00,0x00  , // ]
 0x10,0x30,0x60,0xc0,0x60,0x30,0x10,0x00  , // ^
 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01  , // _
 0x00,0x00,0xc0,0xe0,0x20,0x00,0x00,0x00  , // `
 0x04,0x2e,0x2a,0x2a,0x3c,0x1e,0x02,0x00  , // a
 0x82,0xfc,0xfe,0x22,0x22,0x3e,0x1c,0x00  , // b
 0x1c,0x3e,0x22,0x22,0x36,0x14,0x00,0x00  , // c
 0x0c,0x1e,0x12,0x92,0xfc,0xfe,0x02,0x00  , // d
 0x1c,0x3e,0x2a,0x2a,0x3a,0x18,0x00,0x00  , // e
 0x12,0x7e,0xfe,0x92,0xc0,0x40,0x00,0x00  , // f
 0x19,0x3d,0x25,0x25,0x1f,0x3e,0x20,0x00  , // g
 0x82,0xfe,0xfe,0x10,0x20,0x3e,0x1e,0x00  , // h
 0x00,0x22,0xbe,0xbe,0x02,0x00,0x00,0x00  , // i
 0x02,0x23,0x21,0xbf,0xbe,0x00,0x00,0x00  , // j
 0x82,0xfe,0xfe,0x08,0x1c,0x36,0x22,0x00  , // k
 0x00,0x82,0xfe,0xfe,0x02,0x00,0x00,0x00  , // l
 0x3e,0x3e,0x30,0x18,0x30,0x3e,0x1e,0x00  , // m
 0x3e,0x3e,0x20,0x20,0x3e,0x1e,0x00,0x00  , // n
 0x1c,0x3e,0x22,0x22,0x3e,0x1c,0x00,0x00  , // o
 0x21,0x3f,0x1f,0x25,0x24,0x3c,0x18,0x00  , // p
 0x18,0x3c,0x24,0x25,0x1f,0x3f,0x21,0x00  , // q
 0x22,0x3e,0x1e,0x22,0x38,0x18,0x00,0x00  , // r
 0x12,0x3a,0x2a,0x2a,0x2e,0x24,0x00,0x00  , // s
 0x00,0x20,0x7c,0xfe,0x22,0x24,0x00,0x00  , // t
 0x3c,0x3e,0x02,0x02,0x3c,0x3e,0x02,0x00  , // u
 0x38,0x3c,0x06,0x06,0x3c,0x38,0x00,0x00  , // v
 0x3c,0x3e,0x06,0x0c,0x06,0x3e,0x3c,0x00  , // w
 0x22,0x36,0x1c,0x08,0x1c,0x36,0x22,0x00  , // x
 0x39,0x3d,0x05,0x05,0x3f,0x3e,0x00,0x00  , // y
 0x32,0x26,0x2e,0x3a,0x32,0x26,0x00,0x00  , // z
 0x10,0x10,0x7c,0xee,0x82,0x82,0x00,0x00  , //  
 0x00,0x00,0x00,0xee,0xee,0x00,0x00,0x00  , // |
 0x82,0x82,0xee,0x7c,0x10,0x10,0x00,0x00  , //   
 0x40,0xc0,0x80,0xc0,0x40,0xc0,0x80,0x00  , // ~
 0x1e,0x3e,0x62,0xc2,0x62,0x3e,0x1e,0x00  , //
 } ;
