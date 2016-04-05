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
#ifndef __WLCD_FONT_CR_8X13_CP1250_H__
#define __WLCD_FONT_CR_8X13_CP1250_H__

#include <espressif/esp_common.h>

/* ============================================================================
 * FONT: "Cr", 8x13, regular, code page 1250 � Central and East European Latin
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

#define WLCD_FONT_CR_8X13_CP1250_CHAR_WIDTH				8
#define WLCD_FONT_CR_8X13_CP1250_CHAR_HEIGHT			13
#define WLCD_FONT_CR_8X13_CP1250_FIRST_CHAR_CODE		32
#define WLCD_FONT_CR_8X13_CP1250_LAST_CHAR_CODE			255

const uint16_t wlcd_font_cr_8x13_cp1250_Rects[1449] = {
	0x6024, 0x00a4, 0x2023, 0x2025, 0x0542, 0x0581, 0x3043, 0x3045, 0x1024, 0x1026, 0x2082, 0x2084, 0x0233, 0x0263, 0x0293, 0x1042, 
	0x1076, 0x0024, 0x0046, 0x0082, 0x1094, 0x0022, 0x0031, 0x0033, 0x0037, 0x0042, 0x0046, 0x0055, 0x0064, 0x0073, 0x0082, 0x0086, 
	0x0091, 0x0095, 0x0097, 0x00a6, 0x2071, 0x02a2, 0x0123, 0x1032, 0x1053, 0x1074, 0x01a6, 0x0062, 0x0077, 0x0086, 0x0095, 0x2024, 
	0x4053, 0x1034, 0x10a4, 0x0025, 0x00c5, 0x4055, 0x1034, 0x10a4, 0x0023, 0x00c3, 0x2253, 0x0661, 0x0142, 0x0145, 0x0182, 0x0185, 
	0x6044, 0x0671, 0x00a4, 0x00b3, 0x0671, 0x00a4, 0x0037, 0x0046, 0x0055, 0x0064, 0x0073, 0x0082, 0x0091, 0x6032, 0x6036, 0x0223, 
	0x02a3, 0x8024, 0x04a2, 0x0132, 0x04a2, 0x0223, 0x2036, 0x0032, 0x0065, 0x0074, 0x0083, 0x0092, 0x0223, 0x2036, 0x2076, 0x02a3, 
	0x0164, 0x0032, 0x0092, 0x8025, 0x0482, 0x1034, 0x1053, 0x02a4, 0x0072, 0x0422, 0x4022, 0x0362, 0x2076, 0x02a3, 0x0092, 0x5042, 
	0x0362, 0x2076, 0x02a3, 0x0124, 0x0033, 0x0422, 0x2026, 0x1055, 0x1074, 0x1093, 0x1022, 0x0223, 0x2032, 0x2036, 0x0263, 0x2072, 
	0x2076, 0x02a3, 0x5036, 0x0223, 0x2032, 0x0263, 0x01a3, 0x0095, 0x0054, 0x00a4, 0x0054, 0x00a4, 0x00b3, 0x0045, 0x0054, 0x0063, 
	0x0072, 0x0083, 0x0094, 0x00a5, 0x0452, 0x0472, 0x0043, 0x0054, 0x0065, 0x0076, 0x0085, 0x0094, 0x00a3, 0x0223, 0x2036, 0x1074, 
	0x0032, 0x0065, 0x00a4, 0x4037, 0x4041, 0x4045, 0x0323, 0x2053, 0x02a3, 0x0284, 0x0032, 0x0044, 0x0092, 0x0482, 0x2024, 0x3072, 
	0x3076, 0x1053, 0x1055, 0x02a1, 0x02a5, 0x0023, 0x8022, 0x0521, 0x05a1, 0x0462, 0x2037, 0x2077, 0x4041, 0x0323, 0x03a3, 0x0032, 
	0x0037, 0x0092, 0x0097, 0x8022, 0x4047, 0x0421, 0x04a1, 0x0036, 0x0096, 0x8022, 0x0621, 0x06a1, 0x2055, 0x0262, 0x1027, 0x0097, 
	0x8022, 0x0621, 0x2055, 0x03a1, 0x0262, 0x1027, 0x4041, 0x0323, 0x03a3, 0x0275, 0x2077, 0x0032, 0x0037, 0x0092, 0x8022, 0x8026, 
	0x0362, 0x0221, 0x0225, 0x02a1, 0x02a5, 0x8024, 0x0422, 0x04a2, 0x7025, 0x0323, 0x02a2, 0x1081, 0x8022, 0x0221, 0x0126, 0x1045, 
	0x1064, 0x1096, 0x02a1, 0x1026, 0x0172, 0x0085, 0x01a6, 0x8023, 0x06a1, 0x0421, 0x0097, 0x8022, 0x8026, 0x1142, 0x1045, 0x1064, 
	0x02a1, 0x02a5, 0x0021, 0x0126, 0x8022, 0x8026, 0x0225, 0x1142, 0x1075, 0x02a1, 0x0021, 0x0064, 0x4041, 0x4047, 0x0223, 0x02a3, 
	0x0032, 0x0036, 0x0092, 0x0096, 0x8022, 0x0521, 0x0462, 0x2037, 0x03a1, 0x4041, 0x4047, 0x11a3, 0x0223, 0x01b6, 0x0032, 0x0036, 
	0x0092, 0x0096, 0x02a3, 0x8022, 0x0521, 0x0462, 0x2037, 0x2065, 0x1096, 0x02a1, 0x01a6, 0x0422, 0x0462, 0x04a2, 0x2031, 0x2077, 
	0x0037, 0x0091, 0x8024, 0x0621, 0x02a3, 0x1021, 0x1027, 0x7022, 0x7026, 0x02a3, 0x0221, 0x0225, 0x3022, 0x3026, 0x2063, 0x2065, 
	0x0221, 0x0225, 0x1094, 0x6022, 0x6026, 0x2064, 0x0221, 0x0225, 0x1093, 0x1095, 0x0221, 0x0225, 0x02a1, 0x02a5, 0x1043, 0x1045, 
	0x1073, 0x1075, 0x1022, 0x1026, 0x0064, 0x0092, 0x0096, 0x3074, 0x0221, 0x0225, 0x2022, 0x2026, 0x1053, 0x1055, 0x02a3, 0x0621, 
	0x06a1, 0x1045, 0x1073, 0x1021, 0x1026, 0x0064, 0x0092, 0x0097, 0xa023, 0x0223, 0x02c3, 0x0031, 0x0042, 0x0053, 0x0064, 0x0075, 
	0x0086, 0x0097, 0x9035, 0x0133, 0x01c3, 0x0014, 0x0023, 0x0025, 0x0032, 0x0036, 0x07c0, 0x0023, 0x0034, 0x0472, 0x0352, 0x03a2, 
	0x3066, 0x1081, 0x00a7, 0x8022, 0x05a1, 0x0452, 0x3067, 0x0021, 0x0452, 0x04a2, 0x3061, 0x0067, 0x0097, 0x8026, 0x05a2, 0x0352, 
	0x3061, 0x0025, 0x0671, 0x0452, 0x04a2, 0x3061, 0x0067, 0x0097, 0x7033, 0x0352, 0x03a2, 0x0124, 0x6056, 0x0552, 0x0392, 0x03c2, 
	0x2061, 0x8022, 0x4066, 0x0154, 0x02a1, 0x02a5, 0x0021, 0x0162, 0x5054, 0x04a2, 0x0152, 0x0024, 0x6055, 0x0252, 0x02c2, 0x0025, 
	0x8022, 0x0155, 0x1074, 0x01a6, 0x0021, 0x1055, 0x0182, 0x0095, 0x00a1, 0x8024, 0x04a2, 0x0023, 0x5052, 0x4064, 0x4066, 0x0251, 
	0x0055, 0x00a1, 0x01a6, 0x5052, 0x4066, 0x0154, 0x02a1, 0x02a5, 0x0051, 0x0162, 0x0452, 0x04a2, 0x3061, 0x3067, 0x7052, 0x0551, 
	0x3067, 0x04a2, 0x02c1, 0x7056, 0x0552, 0x3061, 0x03a2, 0x02c5, 0x5053, 0x04a1, 0x0151, 0x0155, 0x0163, 0x0067, 0x0452, 0x04a2, 
	0x0272, 0x0185, 0x0061, 0x0067, 0x0091, 0x0097, 0x6033, 0x0352, 0x01a4, 0x0096, 0x5056, 0x4052, 0x01a3, 0x0051, 0x0055, 0x0095, 
	0x01a6, 0x0251, 0x0255, 0x2052, 0x2056, 0x1083, 0x1085, 0x00a4, 0x3052, 0x3056, 0x0251, 0x0255, 0x1074, 0x1093, 0x1095, 0x1273, 
	0x0251, 0x0255, 0x02a1, 0x02a5, 0x1052, 0x1056, 0x0092, 0x0096, 0x0251, 0x0255, 0x2052, 0x2056, 0x1083, 0x1085, 0x10a4, 0x01c2, 
	0x0551, 0x05a1, 0x1051, 0x1055, 0x0074, 0x0083, 0x0092, 0x0096, 0x3034, 0x3084, 0x0125, 0x0172, 0x01c5, 0xb014, 0x3034, 0x3084, 
	0x0122, 0x0175, 0x01c2, 0x0132, 0x1037, 0x1041, 0x0155, 0x0044, 0x8233, 0x4043, 0x0134, 0x0252, 0x0272, 0x0194, 0x0046, 0x0086, 
	0x00a4, 0x00a4, 0x00b3, 0x00a4, 0x00a2, 0x00a5, 0x00b1, 0x00b4, 0x00a1, 0x00a3, 0x00a5, 0x8023, 0x0441, 0x8023, 0x0441, 0x0481, 
	0x00a4, 0x0194, 0x0022, 0x0027, 0x0031, 0x0033, 0x0036, 0x0042, 0x0045, 0x0054, 0x0063, 0x0072, 0x0081, 0x0083, 0x0086, 0x0090, 
	0x0092, 0x0097, 0x00a3, 0x00a6, 0x0422, 0x0462, 0x04a2, 0x2031, 0x2077, 0x0003, 0x0005, 0x0014, 0x0037, 0x0091, 0x0065, 0x0074, 
	0x0083, 0x0094, 0x00a5, 0x0422, 0x0462, 0x04a2, 0x2031, 0x2077, 0x0005, 0x0014, 0x0037, 0x0091, 0x9014, 0x0621, 0x02a3, 0x0003, 
	0x0005, 0x1021, 0x1027, 0x0621, 0x06a1, 0x1045, 0x1073, 0x0003, 0x0005, 0x0014, 0x1021, 0x1026, 0x0064, 0x0092, 0x0097, 0x0621, 
	0x06a1, 0x1045, 0x1073, 0x0005, 0x0014, 0x1021, 0x1026, 0x0064, 0x0092, 0x0097, 0x00a4, 0x0022, 0x0033, 0x0024, 0x0033, 0x0022, 
	0x0025, 0x0033, 0x0036, 0x0023, 0x0026, 0x0032, 0x0035, 0x2153, 0x0362, 0x0261, 0x0560, 0x00a4, 0x0420, 0x2027, 0x2021, 0x2023, 
	0x0026, 0x0035, 0x0452, 0x04a2, 0x0272, 0x0185, 0x0023, 0x0025, 0x0034, 0x0061, 0x0067, 0x0091, 0x0097, 0x0062, 0x0073, 0x0084, 
	0x0093, 0x00a2, 0x0452, 0x04a2, 0x0272, 0x0185, 0x0025, 0x0034, 0x0061, 0x0067, 0x0091, 0x0097, 0x6033, 0x0352, 0x01a4, 0x0036, 
	0x0045, 0x0096, 0x0551, 0x05a1, 0x0022, 0x0024, 0x0033, 0x1051, 0x1055, 0x0074, 0x0083, 0x0092, 0x0096, 0x0551, 0x05a1, 0x0024, 
	0x0033, 0x1051, 0x1055, 0x0074, 0x0083, 0x0092, 0x0096, 0x0023, 0x0025, 0x0034, 0x0233, 0x0022, 0x0026, 0x8023, 0x06a1, 0x0421, 
	0x0055, 0x0163, 0x0082, 0x0097, 0x0432, 0x0472, 0x3032, 0x3036, 0x0021, 0x0027, 0x0081, 0x0087, 0x5076, 0x3072, 0x2024, 0x0382, 
	0x1053, 0x1055, 0x02a1, 0x02a5, 0x0023, 0x01c6, 0x4024, 0x4084, 0x0323, 0x03a1, 0x1041, 0x1076, 0x1026, 0x0032, 0x0043, 0x0054, 
	0x0062, 0x0065, 0x0073, 0x0084, 0x0091, 0x0095, 0x0022, 0x0026, 0x3041, 0x3047, 0x0223, 0x0293, 0x0144, 0x1053, 0x0174, 0x0032, 
	0x0036, 0x0082, 0x0086, 0x0422, 0x0462, 0x04a2, 0x2031, 0x2077, 0x20a4, 0x0037, 0x0091, 0x00c3, 0x0063, 0x0067, 0x0072, 0x0076, 
	0x0081, 0x0085, 0x0092, 0x0096, 0x00a3, 0x00a7, 0x0452, 0x1056, 0x0671, 0x3041, 0x3043, 0x3047, 0x0223, 0x0293, 0x0032, 0x0036, 
	0x0143, 0x0055, 0x0163, 0x0075, 0x0082, 0x0086, 0x0621, 0x06a1, 0x1045, 0x1073, 0x0004, 0x1021, 0x1026, 0x0064, 0x0092, 0x0097, 
	0x0024, 0x0033, 0x0035, 0x0044, 0x6024, 0x06a1, 0x0651, 0x01c4, 0x00a4, 0x00b3, 0x8024, 0x04a2, 0x0023, 0x0056, 0x0164, 0x0083, 
	0x0025, 0x0034, 0x6052, 0x4056, 0x03a2, 0x00c1, 0x4222, 0x8026, 0x8024, 0x2031, 0x0522, 0x00a3, 0x01a6, 0x0074, 0x01c3, 0x00a4, 
	0x00b5, 0x0472, 0x0352, 0x03a2, 0x3066, 0x1081, 0x10b6, 0x00a7, 0x01c6, 0x0452, 0x04a2, 0x0272, 0x0185, 0x20a4, 0x0061, 0x0067, 
	0x0091, 0x0097, 0x00c3, 0x0061, 0x0065, 0x0072, 0x0076, 0x0083, 0x0087, 0x0092, 0x0096, 0x00a1, 0x00a5, 0x8023, 0x06a1, 0x0421, 
	0x0027, 0x0036, 0x0097, 0x0023, 0x0026, 0x0032, 0x0035, 0x8024, 0x04a2, 0x0023, 0x0027, 0x0036, 0x0551, 0x05a1, 0x0024, 0x1051, 
	0x1055, 0x0074, 0x0083, 0x0092, 0x0096, 0x8022, 0x0521, 0x0462, 0x2037, 0x2065, 0x1096, 0x02a1, 0x0005, 0x0014, 0x01a6, 0x0482, 
	0x3014, 0x3072, 0x3076, 0x1053, 0x1055, 0x02a1, 0x02a5, 0x0005, 0x0023, 0x0482, 0x2024, 0x3072, 0x3076, 0x1013, 0x1053, 0x1055, 
	0x02a1, 0x02a5, 0x0004, 0x0015, 0x0482, 0x1113, 0x3072, 0x3076, 0x3014, 0x1053, 0x1055, 0x02a1, 0x02a5, 0x0002, 0x0006, 0x0213, 
	0x0482, 0x2024, 0x3072, 0x3076, 0x1053, 0x1055, 0x02a1, 0x02a5, 0x0002, 0x0006, 0x0023, 0x9013, 0x06a1, 0x0421, 0x0004, 0x0097, 
	0x4041, 0x0323, 0x03a3, 0x0005, 0x0014, 0x0032, 0x0037, 0x0092, 0x0097, 0x4041, 0x0323, 0x03a3, 0x20a5, 0x0032, 0x0037, 0x0092, 
	0x0097, 0x00c4, 0x4041, 0x0323, 0x03a3, 0x0003, 0x0005, 0x0014, 0x0032, 0x0037, 0x0092, 0x0097, 0x8022, 0x0621, 0x06a1, 0x2055, 
	0x0262, 0x0005, 0x0014, 0x1027, 0x0097, 0x8022, 0x0621, 0x06a1, 0x2055, 0x0262, 0x20a4, 0x1027, 0x0097, 0x01c4, 0x8022, 0x0621, 
	0x06a1, 0x2055, 0x0262, 0x0002, 0x0006, 0x1027, 0x0097, 0x8022, 0x0621, 0x06a1, 0x2055, 0x0262, 0x0003, 0x0005, 0x0014, 0x1027, 
	0x0097, 0x9014, 0x0422, 0x04a2, 0x0005, 0x8024, 0x0422, 0x04a2, 0x0004, 0x0013, 0x0015, 0x8022, 0x4047, 0x0421, 0x04a1, 0x0002, 
	0x0004, 0x0013, 0x0036, 0x0096, 0x8022, 0x4047, 0x0421, 0x0461, 0x04a1, 0x0036, 0x0096, 0x8022, 0x8026, 0x0225, 0x1142, 0x1075, 
	0x02a1, 0x0005, 0x0014, 0x0021, 0x0064, 0x8022, 0x8026, 0x0225, 0x1142, 0x1075, 0x02a1, 0x0003, 0x0005, 0x0014, 0x0021, 0x0064, 
	0x4041, 0x4047, 0x0223, 0x02a3, 0x0005, 0x0014, 0x0032, 0x0036, 0x0092, 0x0096, 0x4041, 0x4047, 0x0223, 0x02a3, 0x0004, 0x0013, 
	0x0015, 0x0032, 0x0036, 0x0092, 0x0096, 0x4041, 0x4047, 0x0223, 0x02a3, 0x0004, 0x0006, 0x0013, 0x0015, 0x0032, 0x0036, 0x0092, 
	0x0096, 0x4041, 0x4047, 0x0223, 0x02a3, 0x0002, 0x0006, 0x0032, 0x0036, 0x0092, 0x0096, 0x0041, 0x0047, 0x0052, 0x0056, 0x0063, 
	0x0065, 0x0074, 0x0083, 0x0085, 0x0092, 0x0096, 0x00a1, 0x00a7, 0x8022, 0x0521, 0x0462, 0x2037, 0x2065, 0x1096, 0x02a1, 0x0003, 
	0x0005, 0x0014, 0x01a6, 0x7022, 0x7026, 0x02a3, 0x0004, 0x0013, 0x0015, 0x0021, 0x0024, 0x0126, 0x7022, 0x7026, 0x02a3, 0x0221, 
	0x0225, 0x0005, 0x0014, 0x7022, 0x7026, 0x02a3, 0x1013, 0x1015, 0x0004, 0x0006, 0x0021, 0x0225, 0x7022, 0x7026, 0x02a3, 0x0221, 
	0x0225, 0x0002, 0x0006, 0x3074, 0x0221, 0x0225, 0x2022, 0x2026, 0x1053, 0x1055, 0x02a3, 0x0005, 0x0014, 0xa024, 0x0621, 0x02a3, 
	0x1021, 0x1027, 0x00c3, 0x7032, 0x3036, 0x0223, 0x2077, 0x02a4, 0x0164, 0x00a1, 0x5053, 0x04a1, 0x0151, 0x0155, 0x0025, 0x0034, 
	0x0163, 0x0067, 0x0472, 0x0352, 0x03a2, 0x3066, 0x1081, 0x0025, 0x0034, 0x00a7, 0x0472, 0x0352, 0x03a2, 0x3066, 0x1081, 0x0024, 
	0x0033, 0x0035, 0x00a7, 0x0472, 0x0352, 0x03a2, 0x0233, 0x3066, 0x1081, 0x0022, 0x0026, 0x00a7, 0x0472, 0x0352, 0x03a2, 0x3066, 
	0x1081, 0x0022, 0x0026, 0x00a7, 0x8024, 0x04a2, 0x1013, 0x0004, 0x0452, 0x04a2, 0x3061, 0x0025, 0x0034, 0x0067, 0x0097, 0x0452, 
	0x04a2, 0x3061, 0x20a5, 0x0067, 0x0097, 0x00c4, 0x0452, 0x04a2, 0x3061, 0x0023, 0x0025, 0x0034, 0x0067, 0x0097, 0x0671, 0x0452, 
	0x04a2, 0x3061, 0x0025, 0x0034, 0x0067, 0x0097, 0x0671, 0x0452, 0x04a2, 0x3061, 0x20a4, 0x0067, 0x0097, 0x01c4, 0x0671, 0x0452, 
	0x04a2, 0x3061, 0x0022, 0x0026, 0x0067, 0x0097, 0x0671, 0x0452, 0x04a2, 0x3061, 0x0023, 0x0025, 0x0034, 0x0067, 0x0097, 0x5054, 
	0x04a2, 0x0152, 0x0024, 0x0033, 0x5054, 0x04a2, 0x0152, 0x0024, 0x0033, 0x0035, 0x8025, 0x05a1, 0x0351, 0x3060, 0x0024, 0x0027, 
	0x0135, 0x8026, 0x05a2, 0x0352, 0x3061, 0x0334, 0x5052, 0x4066, 0x0154, 0x02a1, 0x02a5, 0x0025, 0x0034, 0x0051, 0x0162, 0x5052, 
	0x4066, 0x0154, 0x02a1, 0x02a5, 0x0023, 0x0025, 0x0034, 0x0051, 0x0162, 0x0452, 0x04a2, 0x3061, 0x3067, 0x0025, 0x0034, 0x0452, 
	0x04a2, 0x3061, 0x3067, 0x0024, 0x0033, 0x0035, 0x0452, 0x04a2, 0x3061, 0x3067, 0x0024, 0x0026, 0x0033, 0x0035, 0x0452, 0x04a2, 
	0x3061, 0x3067, 0x0022, 0x0026, 0x0671, 0x0044, 0x00a4, 0x5053, 0x04a1, 0x0151, 0x0155, 0x0023, 0x0025, 0x0034, 0x0163, 0x0067, 
	0x5056, 0x4052, 0x01a3, 0x0024, 0x0033, 0x0035, 0x0044, 0x0051, 0x0055, 0x0095, 0x01a6, 0x5056, 0x4052, 0x01a3, 0x0025, 0x0034, 
	0x0051, 0x0055, 0x0095, 0x01a6, 0x5056, 0x4052, 0x01a3, 0x0023, 0x0026, 0x0032, 0x0035, 0x0051, 0x0055, 0x0095, 0x01a6, 0x5056, 
	0x4052, 0x01a3, 0x0022, 0x0026, 0x0051, 0x0055, 0x0095, 0x01a6, 0x0251, 0x0255, 0x2052, 0x2056, 0x1083, 0x1085, 0x10a4, 0x01c2, 
	0x0025, 0x0034, 0x6033, 0x0352, 0x20a4, 0x0096, 0x01a4, 0x00c3, 0x0022
};

const uint16_t wlcd_font_cr_8x13_cp1250_CharOffs[257] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0002, 0x0004, 0x000c, 0x0015, 0x0024, 0x002f, 0x0030, 0x0035, 0x003a, 0x0040, 0x0042, 0x0044, 0x0045, 0x0046, 
	0x004d, 0x0051, 0x0054, 0x005c, 0x0063, 0x0069, 0x006f, 0x0075, 0x007b, 0x0082, 0x0088, 0x008a, 0x008d, 0x0094, 0x0096, 0x009d, 
	0x00a3, 0x00ad, 0x00b6, 0x00bc, 0x00c3, 0x00c9, 0x00d0, 0x00d6, 0x00de, 0x00e5, 0x00e8, 0x00ec, 0x00f7, 0x00fb, 0x0104, 0x010c, 
	0x0114, 0x0119, 0x0123, 0x012b, 0x0132, 0x0137, 0x013c, 0x0143, 0x014a, 0x0157, 0x015f, 0x0168, 0x016b, 0x0172, 0x0175, 0x017a, 
	0x017b, 0x017d, 0x0183, 0x0188, 0x018d, 0x0192, 0x0198, 0x019c, 0x01a1, 0x01a8, 0x01ac, 0x01b0, 0x01b9, 0x01bc, 0x01c3, 0x01ca, 
	0x01ce, 0x01d3, 0x01d8, 0x01de, 0x01e6, 0x01ea, 0x01f1, 0x01f8, 0x01ff, 0x0208, 0x0210, 0x0218, 0x021d, 0x021e, 0x0223, 0x0228, 
	0x0229, 0x0230, 0x0231, 0x0233, 0x0234, 0x0238, 0x023b, 0x023d, 0x0240, 0x0241, 0x0254, 0x025e, 0x0263, 0x026c, 0x0273, 0x027f, 
	0x028a, 0x028b, 0x028d, 0x028f, 0x0293, 0x0297, 0x0299, 0x029a, 0x029b, 0x029c, 0x02a2, 0x02ad, 0x02b2, 0x02bc, 0x02c2, 0x02cd, 
	0x02d7, 0x02d7, 0x02da, 0x02dd, 0x02e4, 0x02ec, 0x02f6, 0x02f8, 0x0306, 0x0308, 0x0313, 0x031c, 0x0326, 0x0328, 0x0329, 0x0336, 
	0x0340, 0x0344, 0x0347, 0x034a, 0x0350, 0x0352, 0x0356, 0x035d, 0x035e, 0x0361, 0x0369, 0x0373, 0x037d, 0x0383, 0x0387, 0x038c, 
	0x0395, 0x039f, 0x03a9, 0x03b4, 0x03c0, 0x03cb, 0x03d0, 0x03d9, 0x03e2, 0x03ec, 0x03f5, 0x03fe, 0x0407, 0x0411, 0x0415, 0x041b, 
	0x0424, 0x042b, 0x0435, 0x0440, 0x044a, 0x0455, 0x0461, 0x046b, 0x0478, 0x0483, 0x048c, 0x0493, 0x049c, 0x04a3, 0x04ad, 0x04b3, 
	0x04ba, 0x04c2, 0x04ca, 0x04d3, 0x04dc, 0x04e4, 0x04e8, 0x04ef, 0x04f6, 0x04fe, 0x0506, 0x050e, 0x0516, 0x051f, 0x0524, 0x052a, 
	0x0531, 0x0536, 0x053f, 0x0549, 0x054f, 0x0556, 0x055e, 0x0564, 0x0567, 0x0570, 0x057b, 0x0584, 0x058f, 0x0598, 0x05a2, 0x05a8, 
	0x05a9 //last item is not offset to real char, but is here just to be able to count how many rectangles we use for last char
};

#endif
