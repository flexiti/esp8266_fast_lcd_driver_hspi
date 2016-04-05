/*
 * Created by Martin Winkelhofer 03/2016
 * W-Dimension / wdim / wdim0 / maarty.w@gmail.com
 *  _      ____   ________       __    _
 * | | /| / / /  / ___/ _ \  ___/ /___(_)  _____ ____
 * | |/ |/ / /__/ /__/ // / / _  / __/ / |/ / -_) __/
 * |__/|__/____/\___/____/  \_,_/_/ /_/|___/\__/_/
 *
 * This file is part of WLCD - W-Dimension's LCD driver (for ESP8266).
 *
 * WLCD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * WLCD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with WLCD. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __WLCD_FONT_TERM_8X16_0_127_H__
#define __WLCD_FONT_TERM_8X16_0_127_H__

#include <espressif/esp_common.h>

/* ============================================================================
 * FONT: "Term", 8x16, regular, chars 0..127
 * ============================================================================
 *
 * fonter.c used to create content of CharOffs[], Rects[] arrays. Thanks!
 *
 * uint16_t CharOffs[] - offsets to array Rects[]
 *
 * Example for char with ASCII value 65 - "A":
 * CharOffs[65] = 0x0170
 * CharOffs[66] = 0x0177
 * => for drawing of char "A" we'll use 7 rectangles, first rectangle is here -> Rects[0x0170]
 *
 * uint16_t Rects[] - each 16-bit value describes one rectangle:
 * 0 b 0000 0000 0000 0000
 *       H    W    Y    X
 * note: add 1 to W, H to get real width, height.
 */

#define WLCD_FONT_TERM_8X16_0_127_CHAR_WIDTH			8
#define WLCD_FONT_TERM_8X16_0_127_CHAR_HEIGHT			16
#define WLCD_FONT_TERM_8X16_0_127_FIRST_CHAR_CODE		0
#define WLCD_FONT_TERM_8X16_0_127_LAST_CHAR_CODE		127

const uint16_t wlcd_font_term_8x16_0_127_Rects[] = {
	0x17d0, 0x7030, 0x7037, 0x0521, 0x05b1, 0x0372, 0x1173, 0x0042, 0x0045, 0x2591, 0x1750, 0x1521, 0x7130, 0x7136, 0x2123, 0x0280, 
	0x0085, 0x3650, 0x5252, 0x5141, 0x5144, 0x6053, 0x4252, 0x2461, 0x6043, 0x0670, 0x2260, 0x2265, 0x1342, 0x2193, 0x0133, 0x03b2, 
	0x3551, 0x8133, 0x1760, 0x0342, 0x03b2, 0x3163, 0x1372, 0x5700, 0x57a0, 0x9100, 0x9106, 0x6200, 0x6005, 0x0290, 0x0095, 0x0352, 
	0x3061, 0x3066, 0x03a2, 0x1052, 0x1055, 0x0191, 0x0095, 0x4700, 0x47b0, 0x3163, 0xa000, 0xa007, 0x1372, 0x5100, 0x5006, 0x01a0, 
	0x00a6, 0x3170, 0x3174, 0x1224, 0x1152, 0x03b1, 0x3026, 0x0143, 0x0361, 0x0023, 0x4173, 0x3131, 0x3135, 0x0322, 0x0591, 0x0372, 
	0x8122, 0x2126, 0x12a0, 0x0322, 0x0342, 0x0091, 0x9121, 0x8126, 0x2195, 0x21a0, 0x0421, 0x0441, 0x3133, 0x3183, 0x2062, 0x2065, 
	0x0150, 0x0156, 0x0170, 0x0275, 0x0190, 0x0196, 0x6230, 0x2450, 0xa010, 0x8120, 0x4340, 0x0660, 0x6234, 0x2152, 0xa016, 0x8025, 
	0x4043, 0x0160, 0x8123, 0x1332, 0x0581, 0x0541, 0x1382, 0x6121, 0x6125, 0x11a1, 0x11a5, 0x9123, 0x9126, 0x2130, 0x0421, 0x0161, 
	0x0411, 0x04c1, 0x3051, 0x3055, 0x2032, 0x2084, 0x2011, 0x0125, 0x0242, 0x1060, 0x1165, 0x1082, 0x10a5, 0x01b0, 0x0020, 0x1044, 
	0x0192, 0x01b5, 0x3680, 0x9123, 0x1332, 0x0581, 0x05b1, 0x0541, 0x1382, 0x9123, 0x1332, 0x0541, 0x9123, 0x0591, 0x1392, 0x0670, 
	0x4054, 0x2164, 0x0053, 0x0093, 0x0670, 0x4052, 0x2061, 0x0152, 0x0192, 0x3160, 0x0690, 0x0770, 0x4052, 0x4055, 0x2061, 0x2165, 
	0x3471, 0x1252, 0x1690, 0x0043, 0x3441, 0x5242, 0x1640, 0x6043, 0x6123, 0x2332, 0x11a3, 0x2111, 0x2115, 0x3012, 0x3015, 0x8131, 
	0x8134, 0x0650, 0x0690, 0x3175, 0x2103, 0x2130, 0x21b3, 0x0461, 0x0421, 0x04b1, 0x0135, 0x1090, 0x1036, 0x01a0, 0x1140, 0x11a5, 
	0x1046, 0x1055, 0x1064, 0x1073, 0x1082, 0x1091, 0x10a0, 0x3170, 0x3174, 0x4022, 0x3024, 0x2053, 0x02b1, 0x1031, 0x1134, 0x0165, 
	0x01b5, 0x0122, 0x0061, 0x2112, 0x0141, 0x5142, 0x0124, 0x0133, 0x01a3, 0x01b4, 0x5144, 0x0122, 0x0133, 0x01a3, 0x01b2, 0x2362, 
	0x0770, 0x0151, 0x0155, 0x0191, 0x0195, 0x4153, 0x0571, 0x2193, 0x01c2, 0x0670, 0x11a3, 0x1046, 0x1055, 0x1064, 0x1073, 0x1082, 
	0x1091, 0x10a0, 0x5140, 0x5146, 0x0322, 0x1163, 0x03b2, 0x0131, 0x0135, 0x01a1, 0x01a5, 0x9123, 0x05b1, 0x1032, 0x0041, 0x06b0, 
	0x0421, 0x1135, 0x1190, 0x0130, 0x0154, 0x0163, 0x0172, 0x0181, 0x01a5, 0x9025, 0x0321, 0x3175, 0x03b1, 0x2135, 0x0262, 0x0130, 
	0x01a0, 0x9124, 0x0670, 0x1033, 0x1042, 0x1051, 0x03b3, 0x0060, 0x4120, 0x3175, 0x0620, 0x04b1, 0x0560, 0x01a0, 0x6140, 0x3175, 
	0x04b1, 0x0560, 0x0222, 0x0131, 0x3125, 0x3182, 0x0420, 0x1120, 0x0164, 0x0173, 0x9021, 0x9025, 0x3070, 0x3175, 0x0321, 0x2030, 
	0x2135, 0x0361, 0x03b1, 0x6135, 0x2130, 0x0421, 0x0361, 0x03b1, 0x01a4, 0x1143, 0x1193, 0x1143, 0x1193, 0x01b2, 0x2062, 0x0135, 
	0x0144, 0x0153, 0x1083, 0x1094, 0x10a5, 0x1053, 0x0071, 0x01b5, 0x0551, 0x0581, 0x2065, 0x0131, 0x0142, 0x0153, 0x1084, 0x1093, 
	0x10a2, 0x1054, 0x0175, 0x00b1, 0x2163, 0x0421, 0x1130, 0x1135, 0x11a3, 0x0154, 0x6140, 0x2363, 0x0431, 0x04b1, 0x1145, 0x3263, 
	0x6150, 0x6155, 0x0232, 0x0470, 0x0141, 0x0144, 0x0023, 0x9121, 0x9025, 0x3175, 0x0420, 0x2135, 0x04b0, 0x0361, 0x5140, 0x0322, 
	0x03b2, 0x0131, 0x0135, 0x1096, 0x01a1, 0x1036, 0x00a5, 0x9121, 0x5145, 0x0420, 0x04b0, 0x0134, 0x01a4, 0x9121, 0x0620, 0x06b0, 
	0x2054, 0x1125, 0x1096, 0x2026, 0x0261, 0x00a5, 0x9121, 0x0620, 0x2054, 0x1125, 0x03b0, 0x2026, 0x0261, 0x5140, 0x3175, 0x0322, 
	0x02b2, 0x0131, 0x0135, 0x0173, 0x01a1, 0x1036, 0x4076, 0x9120, 0x9125, 0x0460, 0x9123, 0x0322, 0x03b2, 0x8124, 0x2180, 0x03b1, 
	0x0323, 0x9121, 0x2125, 0x2195, 0x3054, 0x1261, 0x0020, 0x3025, 0x0184, 0x00b0, 0x9121, 0x06b0, 0x0320, 0x1096, 0x00a5, 0x9120, 
	0x9126, 0x1540, 0x2143, 0x0230, 0x0035, 0x9120, 0x9125, 0x1340, 0x1153, 0x0230, 0x2054, 0x7130, 0x7135, 0x0421, 0x04b1, 0x9121, 
	0x2135, 0x0520, 0x0461, 0x03b0, 0x7130, 0x7135, 0x31a4, 0x0421, 0x2093, 0x01b1, 0x02d4, 0x9121, 0x9025, 0x3185, 0x0420, 0x2135, 
	0x0361, 0x1064, 0x00b0, 0x2185, 0x0421, 0x04b1, 0x1130, 0x1135, 0x1190, 0x0262, 0x0151, 0x0174, 0x9123, 0x0720, 0x1120, 0x1126, 
	0x03b2, 0x2020, 0x2027, 0x8120, 0x8125, 0x04b1, 0x6120, 0x6126, 0x03a2, 0x0191, 0x0195, 0x11a3, 0x7120, 0x7126, 0x2173, 0x2191, 
	0x2195, 0x3153, 0x1120, 0x1126, 0x11a0, 0x11a6, 0x0141, 0x0145, 0x0352, 0x0382, 0x0191, 0x0195, 0x5163, 0x2120, 0x2126, 0x0151, 
	0x0155, 0x0362, 0x03b2, 0x0720, 0x07b0, 0x1190, 0x1120, 0x1126, 0x0145, 0x0154, 0x0163, 0x0172, 0x0181, 0x1097, 0x2020, 0x00a6, 
	0x9122, 0x0322, 0x03b2, 0x1140, 0x1162, 0x1184, 0x1195, 0x1151, 0x1173, 0x0030, 0x2096, 0x9124, 0x0122, 0x01b2, 0x0212, 0x0121, 
	0x0124, 0x0130, 0x0135, 0x0003, 0x07d0, 0x1102, 0x0123, 0x4164, 0x2180, 0x0351, 0x0271, 0x02b1, 0x01b5, 0x9121, 0x3175, 0x04b1, 
	0x0351, 0x0164, 0x0020, 0x4160, 0x0451, 0x04b1, 0x0165, 0x01a5, 0x8124, 0x3170, 0x02b1, 0x0152, 0x0161, 0x01b5, 0x0023, 0x4160, 
	0x0451, 0x0670, 0x04b1, 0x0165, 0x01a5, 0x8131, 0x0222, 0x0134, 0x0360, 0x03b0, 0x1035, 0x7164, 0x4160, 0x03e1, 0x0251, 0x02b1, 
	0x0155, 0x01d0, 0x9121, 0x5165, 0x0154, 0x0020, 0x0261, 0x00b0, 0x6153, 0x1123, 0x03b2, 0x0052, 0x8155, 0x1125, 0x11c1, 0x03e2, 
	0x0054, 0x9121, 0x3064, 0x11a5, 0x0155, 0x1271, 0x0020, 0x1055, 0x0194, 0x00b0, 0x9123, 0x03b2, 0x0022, 0x6150, 0x5163, 0x5166, 
	0x1155, 0x1250, 0x5161, 0x5165, 0x0253, 0x0150, 0x4160, 0x4165, 0x0451, 0x04b1, 0x8161, 0x4165, 0x0253, 0x04b1, 0x0150, 0x03e0, 
	0x8164, 0x4160, 0x0251, 0x02b1, 0x0155, 0x03e3, 0x5161, 0x1165, 0x0253, 0x0150, 0x03b0, 0x1053, 0x0451, 0x04b1, 0x0282, 0x2051, 
	0x0165, 0x0194, 0x01a0, 0x01a5, 0x0060, 0x0171, 0x7132, 0x0550, 0x02b3, 0x01a5, 0x0023, 0x5150, 0x5154, 0x02b1, 0x01b5, 0x3150, 
	0x3156, 0x03a2, 0x0191, 0x0195, 0x11a3, 0x5150, 0x5156, 0x2183, 0x11a1, 0x11a5, 0x2173, 0x0150, 0x0156, 0x0161, 0x0165, 0x0372, 
	0x0392, 0x01a1, 0x01a5, 0x01b0, 0x01b6, 0x7155, 0x5150, 0x04e0, 0x03b1, 0x01d4, 0x0650, 0x06b0, 0x1150, 0x1154, 0x0173, 0x0182, 
	0x0191, 0x01a0, 0x01a5, 0x7033, 0x4074, 0x3024, 0x0224, 0x0161, 0x02b4, 0x4173, 0x3123, 0x7034, 0x4073, 0x3023, 0x0121, 0x0264, 
	0x01b1, 0x0221, 0x0233, 0x0125, 0x0130, 0x3170, 0x3175, 0x0252, 0x04a0, 0x0161, 0x0164, 0x0043
};

const uint16_t wlcd_font_term_8x16_0_127_CharOffs[129] = {
	0x0000, 0x0001, 0x0009, 0x0011, 0x0016, 0x001a, 0x0020, 0x0025, 0x0027, 0x002f, 0x0037, 0x0041, 0x004a, 0x0050, 0x0056, 0x005c,
	0x0066, 0x006c, 0x0072, 0x0077, 0x007b, 0x0080, 0x0092, 0x0093, 0x0099, 0x009c, 0x009f, 0x00a4, 0x00a9, 0x00ab, 0x00b0, 0x00b4,
	0x00b8, 0x00b8, 0x00bb, 0x00bf, 0x00c3, 0x00ce, 0x00d7, 0x00e3, 0x00e5, 0x00ea, 0x00ef, 0x00f5, 0x00f7, 0x00f9, 0x00fa, 0x00fb,
	0x0102, 0x010b, 0x010f, 0x0119, 0x0121, 0x0128, 0x012e, 0x0134, 0x013a, 0x0143, 0x0149, 0x014b, 0x014e, 0x0158, 0x015a, 0x0164,
	0x016a, 0x0170, 0x0177, 0x017e, 0x0187, 0x018d, 0x0196, 0x019d, 0x01a7, 0x01aa, 0x01ad, 0x01b1, 0x01ba, 0x01bf, 0x01c5, 0x01cb,
	0x01cf, 0x01d4, 0x01db, 0x01e3, 0x01ec, 0x01f3, 0x01f6, 0x01fc, 0x0201, 0x020c, 0x0213, 0x0220, 0x0223, 0x022b, 0x022e, 0x0234,
	0x0235, 0x0237, 0x023d, 0x0243, 0x0248, 0x024f, 0x0255, 0x025b, 0x0262, 0x0268, 0x026c, 0x0271, 0x027a, 0x027d, 0x0282, 0x0286,
	0x028a, 0x0290, 0x0296, 0x029c, 0x02a6, 0x02ab, 0x02af, 0x02b5, 0x02ba, 0x02c5, 0x02ca, 0x02d3, 0x02d9, 0x02db, 0x02e1, 0x02e5,
	0x02ec //last item is not offset to real char, but is here just to be able to count how many rectangles we use for last char
};

#endif
