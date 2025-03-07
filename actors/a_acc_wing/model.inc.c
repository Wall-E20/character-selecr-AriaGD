Lights1 a_acc_wing_Boots2_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 a_acc_wing_Boots_lights = gdSPDefLights1(
	0x23, 0x5, 0x3,
	0x50, 0x14, 0xE, 0x28, 0x28, 0x28);

Lights1 a_acc_wing_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx a_acc_wing_metal_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 a_acc_wing_metal_rgba16_rgba16[] = {
	#include "actors/aria/metal.rgba16.inc.c"
};

Gfx a_acc_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 a_acc_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/aria/Metal_Light.rgba16.inc.c"
};

Gfx a_acc_wing_wing_2_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 a_acc_wing_wing_2_rgba16[] = {
	#include "actors/aria/wing_2.rgba16.inc.c"
};

Gfx a_acc_wing_wing1_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 a_acc_wing_wing1_rgba16[] = {
	#include "actors/aria/wing1.rgba16.inc.c"
};

Vtx a_acc_wing_Wing_Cap_mesh_layer_1_vtx_0[54] = {
	{{ {16, -2, 61}, 0, {-16, 1008}, {0, 129, 0, 255} }},
	{{ {-42, -2, 86}, 0, {470, 1008}, {0, 129, 0, 255} }},
	{{ {4, -2, 4}, 0, {-16, 500}, {0, 129, 0, 255} }},
	{{ {-5, -2, -43}, 0, {-16, -16}, {0, 129, 0, 255} }},
	{{ {-78, -2, 1}, 0, {1008, 481}, {0, 129, 0, 255} }},
	{{ {-91, -2, 61}, 0, {1008, 1008}, {0, 129, 0, 255} }},
	{{ {-70, -2, -43}, 0, {1008, -16}, {0, 129, 0, 255} }},
	{{ {-15, -2, 61}, 0, {-16, 1008}, {0, 129, 0, 255} }},
	{{ {-2, -2, 4}, 0, {-16, 500}, {0, 129, 0, 255} }},
	{{ {44, -2, 86}, 0, {470, 1008}, {0, 129, 0, 255} }},
	{{ {6, -2, -43}, 0, {-16, -16}, {0, 129, 0, 255} }},
	{{ {79, -2, 1}, 0, {1008, 481}, {0, 129, 0, 255} }},
	{{ {72, -2, -43}, 0, {1008, -16}, {0, 129, 0, 255} }},
	{{ {92, -2, 61}, 0, {1008, 1008}, {0, 129, 0, 255} }},
	{{ {22, 14, 64}, 0, {-16, 1008}, {105, 210, 54, 255} }},
	{{ {-42, -2, 86}, 0, {470, 1008}, {252, 208, 118, 255} }},
	{{ {16, -2, 61}, 0, {-16, 1008}, {107, 211, 53, 255} }},
	{{ {-43, 14, 93}, 0, {470, 1008}, {252, 207, 117, 255} }},
	{{ {-96, 14, 64}, 0, {1008, 1008}, {149, 211, 51, 255} }},
	{{ {-91, -2, 61}, 0, {1008, 1008}, {147, 211, 48, 255} }},
	{{ {-82, 14, -2}, 0, {1008, 481}, {136, 221, 233, 255} }},
	{{ {-78, -2, 1}, 0, {1008, 481}, {136, 221, 232, 255} }},
	{{ {-70, -2, -43}, 0, {1008, -16}, {177, 204, 171, 255} }},
	{{ {-74, 14, -50}, 0, {1008, -16}, {185, 203, 165, 255} }},
	{{ {-5, -2, -43}, 0, {-16, -16}, {79, 204, 171, 255} }},
	{{ {-1, 14, -50}, 0, {-16, -16}, {71, 203, 165, 255} }},
	{{ {8, 14, 1}, 0, {-16, 500}, {120, 221, 232, 255} }},
	{{ {4, -2, 4}, 0, {-16, 500}, {120, 221, 232, 255} }},
	{{ {-20, 14, 64}, 0, {-16, 1008}, {151, 210, 54, 255} }},
	{{ {-15, -2, 61}, 0, {-16, 1008}, {149, 211, 53, 255} }},
	{{ {44, -2, 86}, 0, {470, 1008}, {4, 208, 118, 255} }},
	{{ {-6, 14, 1}, 0, {-16, 500}, {136, 221, 232, 255} }},
	{{ {-6, 14, 1}, 0, {-16, 500}, {136, 221, 232, 255} }},
	{{ {-2, -2, 4}, 0, {-16, 500}, {136, 221, 232, 255} }},
	{{ {-15, -2, 61}, 0, {-16, 1008}, {149, 211, 53, 255} }},
	{{ {6, -2, -43}, 0, {-16, -16}, {177, 204, 171, 255} }},
	{{ {2, 14, -50}, 0, {-16, -16}, {185, 203, 165, 255} }},
	{{ {75, 14, -50}, 0, {1008, -16}, {71, 203, 165, 255} }},
	{{ {72, -2, -43}, 0, {1008, -16}, {79, 204, 171, 255} }},
	{{ {83, 14, -2}, 0, {1008, 481}, {120, 221, 233, 255} }},
	{{ {79, -2, 1}, 0, {1008, 481}, {120, 221, 232, 255} }},
	{{ {92, -2, 61}, 0, {1008, 1008}, {109, 211, 48, 255} }},
	{{ {98, 14, 64}, 0, {1008, 1008}, {107, 211, 51, 255} }},
	{{ {44, -2, 86}, 0, {470, 1008}, {4, 208, 118, 255} }},
	{{ {44, 14, 93}, 0, {470, 1008}, {4, 207, 117, 255} }},
	{{ {-20, 14, 64}, 0, {-16, 1008}, {151, 210, 54, 255} }},
	{{ {-56, 51, 37}, 0, {420, 496}, {208, 203, 105, 255} }},
	{{ {-12, 50, 22}, 0, {629, 496}, {85, 204, 79, 255} }},
	{{ {-13, 115, 31}, 0, {620, 65}, {73, 210, 93, 255} }},
	{{ {-59, 117, 37}, 0, {483, 45}, {181, 243, 102, 255} }},
	{{ {58, 51, 37}, 0, {420, 496}, {48, 203, 105, 255} }},
	{{ {15, 115, 31}, 0, {620, 65}, {183, 210, 93, 255} }},
	{{ {14, 50, 22}, 0, {629, 496}, {171, 204, 79, 255} }},
	{{ {61, 117, 37}, 0, {483, 45}, {75, 243, 102, 255} }},
};

Gfx a_acc_wing_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(a_acc_wing_Wing_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(3, 1, 4, 0, 4, 1, 5, 0),
	gsSP2Triangles(3, 4, 6, 0, 7, 8, 9, 0),
	gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
	gsSP2Triangles(10, 12, 11, 0, 11, 13, 9, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
	gsSP2Triangles(15, 17, 18, 0, 15, 18, 19, 0),
	gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
	gsSP2Triangles(20, 22, 21, 0, 20, 23, 22, 0),
	gsSP2Triangles(23, 24, 22, 0, 23, 25, 24, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(26, 16, 27, 0, 26, 14, 16, 0),
	gsSP2Triangles(28, 29, 30, 0, 31, 29, 28, 0),
	gsSPVertex(a_acc_wing_Wing_Cap_mesh_layer_1_vtx_0 + 32, 22, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 0, 4, 0, 5, 3, 4, 0),
	gsSP2Triangles(5, 6, 3, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 6, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 7, 10, 0, 11, 9, 10, 0),
	gsSP2Triangles(11, 10, 12, 0, 13, 11, 12, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
	gsSPEndDisplayList(),
};

Vtx a_acc_wing_Wing_Cap_mesh_layer_1_vtx_1[88] = {
	{{ {14, 139, -27}, 0, {828, -16}, {103, 54, 205, 255} }},
	{{ {-35, 124, -41}, 0, {985, 63}, {254, 201, 142, 255} }},
	{{ {-37, 138, -54}, 0, {996, -16}, {250, 43, 137, 255} }},
	{{ {5, 115, -20}, 0, {816, 71}, {116, 225, 214, 255} }},
	{{ {-13, 115, 31}, 0, {620, 65}, {73, 210, 93, 255} }},
	{{ {3, 138, 41}, 0, {619, -16}, {85, 43, 84, 255} }},
	{{ {-59, 117, 37}, 0, {483, 45}, {181, 243, 102, 255} }},
	{{ {-53, 135, 47}, 0, {492, -16}, {217, 53, 108, 255} }},
	{{ {-80, 118, -10}, 0, {283, 96}, {135, 229, 229, 255} }},
	{{ {-89, 141, -13}, 0, {316, -16}, {148, 63, 234, 255} }},
	{{ {-37, 138, -54}, 0, {66, -16}, {250, 43, 137, 255} }},
	{{ {-35, 124, -41}, 0, {55, 63}, {254, 201, 142, 255} }},
	{{ {-78, 53, -8}, 0, {164, 496}, {144, 205, 225, 255} }},
	{{ {-32, 51, -37}, 0, {-4, 496}, {1, 200, 142, 255} }},
	{{ {-56, 51, 37}, 0, {420, 496}, {208, 203, 105, 255} }},
	{{ {-37, 138, -54}, 0, {140, 554}, {250, 43, 137, 255} }},
	{{ {-89, 141, -13}, 0, {42, 852}, {148, 63, 234, 255} }},
	{{ {-53, 135, 47}, 0, {234, 995}, {217, 53, 108, 255} }},
	{{ {14, 139, -27}, 0, {438, 652}, {103, 54, 205, 255} }},
	{{ {3, 138, 41}, 0, {401, 924}, {85, 43, 84, 255} }},
	{{ {-12, 50, 22}, 0, {629, 496}, {85, 204, 79, 255} }},
	{{ {-2, 50, -16}, 0, {756, 496}, {106, 198, 217, 255} }},
	{{ {-32, 51, -37}, 0, {926, 496}, {1, 200, 142, 255} }},
	{{ {-12, 139, -27}, 0, {828, -16}, {153, 54, 205, 255} }},
	{{ {38, 138, -54}, 0, {996, -16}, {6, 43, 137, 255} }},
	{{ {36, 124, -41}, 0, {985, 63}, {2, 201, 142, 255} }},
	{{ {-4, 115, -20}, 0, {816, 71}, {140, 225, 214, 255} }},
	{{ {34, 51, -37}, 0, {926, 496}, {255, 200, 142, 255} }},
	{{ {3, 50, -16}, 0, {756, 496}, {150, 198, 217, 255} }},
	{{ {14, 50, 22}, 0, {629, 496}, {171, 204, 79, 255} }},
	{{ {15, 115, 31}, 0, {620, 65}, {183, 210, 93, 255} }},
	{{ {-2, 138, 41}, 0, {619, -16}, {171, 43, 84, 255} }},
	{{ {61, 117, 37}, 0, {483, 45}, {75, 243, 102, 255} }},
	{{ {-2, 138, 41}, 0, {619, -16}, {171, 43, 84, 255} }},
	{{ {15, 115, 31}, 0, {620, 65}, {183, 210, 93, 255} }},
	{{ {55, 135, 47}, 0, {492, -16}, {39, 53, 108, 255} }},
	{{ {81, 118, -10}, 0, {283, 96}, {121, 229, 229, 255} }},
	{{ {80, 53, -8}, 0, {164, 496}, {112, 205, 225, 255} }},
	{{ {58, 51, 37}, 0, {420, 496}, {48, 203, 105, 255} }},
	{{ {36, 124, -41}, 0, {55, 63}, {2, 201, 142, 255} }},
	{{ {38, 138, -54}, 0, {66, -16}, {6, 43, 137, 255} }},
	{{ {90, 141, -13}, 0, {316, -16}, {108, 63, 234, 255} }},
	{{ {34, 51, -37}, 0, {-4, 496}, {255, 200, 142, 255} }},
	{{ {38, 138, -54}, 0, {140, 554}, {6, 43, 137, 255} }},
	{{ {55, 135, 47}, 0, {234, 995}, {39, 53, 108, 255} }},
	{{ {90, 141, -13}, 0, {42, 852}, {108, 63, 234, 255} }},
	{{ {-12, 139, -27}, 0, {438, 652}, {153, 54, 205, 255} }},
	{{ {-2, 138, 41}, 0, {401, 924}, {171, 43, 84, 255} }},
	{{ {8, 14, 1}, 0, {-16, 500}, {114, 52, 235, 255} }},
	{{ {-1, 14, -50}, 0, {-16, -16}, {71, 62, 171, 255} }},
	{{ {-15, 54, -33}, 0, {-16, -16}, {53, 97, 193, 255} }},
	{{ {-59, 54, -33}, 0, {1008, -16}, {203, 97, 193, 255} }},
	{{ {-74, 14, -50}, 0, {1008, -16}, {184, 62, 171, 255} }},
	{{ {-82, 14, -2}, 0, {1008, 481}, {142, 52, 235, 255} }},
	{{ {-65, 56, 11}, 0, {1008, 481}, {189, 106, 234, 255} }},
	{{ {-96, 14, 64}, 0, {1008, 1008}, {154, 60, 45, 255} }},
	{{ {-75, 61, 50}, 0, {1008, 1008}, {182, 101, 19, 255} }},
	{{ {-42, 56, 75}, 0, {470, 1008}, {252, 89, 91, 255} }},
	{{ {-43, 14, 93}, 0, {470, 1008}, {252, 51, 116, 255} }},
	{{ {22, 14, 64}, 0, {-16, 1008}, {100, 61, 49, 255} }},
	{{ {0, 61, 50}, 0, {-16, 1008}, {74, 101, 24, 255} }},
	{{ {-9, 56, 12}, 0, {-16, 500}, {67, 105, 234, 255} }},
	{{ {-6, 14, 1}, 0, {-16, 500}, {142, 52, 235, 255} }},
	{{ {17, 54, -33}, 0, {-16, -16}, {203, 97, 193, 255} }},
	{{ {2, 14, -50}, 0, {-16, -16}, {185, 62, 171, 255} }},
	{{ {11, 56, 12}, 0, {-16, 500}, {189, 105, 234, 255} }},
	{{ {-20, 14, 64}, 0, {-16, 1008}, {156, 61, 49, 255} }},
	{{ {1, 61, 50}, 0, {-16, 1008}, {182, 101, 24, 255} }},
	{{ {44, 56, 75}, 0, {470, 1008}, {4, 89, 91, 255} }},
	{{ {44, 14, 93}, 0, {470, 1008}, {4, 51, 116, 255} }},
	{{ {98, 14, 64}, 0, {1008, 1008}, {102, 60, 45, 255} }},
	{{ {76, 61, 50}, 0, {1008, 1008}, {74, 101, 19, 255} }},
	{{ {66, 56, 11}, 0, {1008, 481}, {67, 106, 234, 255} }},
	{{ {83, 14, -2}, 0, {1008, 481}, {114, 52, 235, 255} }},
	{{ {61, 54, -33}, 0, {1008, -16}, {53, 97, 193, 255} }},
	{{ {75, 14, -50}, 0, {1008, -16}, {72, 62, 171, 255} }},
	{{ {-2, 50, -16}, 0, {995, 746}, {106, 198, 217, 255} }},
	{{ {-37, 22, 3}, 0, {766, 778}, {1, 129, 7, 255} }},
	{{ {-32, 51, -37}, 0, {852, 554}, {1, 200, 142, 255} }},
	{{ {-12, 50, 22}, 0, {924, 913}, {85, 204, 79, 255} }},
	{{ {-56, 51, 37}, 0, {652, 950}, {208, 203, 105, 255} }},
	{{ {-78, 53, -8}, 0, {554, 652}, {144, 205, 225, 255} }},
	{{ {3, 50, -16}, 0, {995, 746}, {150, 198, 217, 255} }},
	{{ {34, 51, -37}, 0, {852, 554}, {255, 200, 142, 255} }},
	{{ {38, 22, 3}, 0, {766, 778}, {255, 129, 7, 255} }},
	{{ {80, 53, -8}, 0, {554, 652}, {112, 205, 225, 255} }},
	{{ {58, 51, 37}, 0, {652, 950}, {48, 203, 105, 255} }},
	{{ {14, 50, 22}, 0, {924, 913}, {171, 204, 79, 255} }},
};

Gfx a_acc_wing_Wing_Cap_mesh_layer_1_tri_1[] = {
	gsSPVertex(a_acc_wing_Wing_Cap_mesh_layer_1_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 0, 5, 0),
	gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(7, 8, 6, 0, 7, 9, 8, 0),
	gsSP2Triangles(10, 8, 9, 0, 10, 11, 8, 0),
	gsSP2Triangles(11, 12, 8, 0, 11, 13, 12, 0),
	gsSP2Triangles(6, 8, 12, 0, 6, 12, 14, 0),
	gsSP2Triangles(15, 16, 17, 0, 18, 15, 17, 0),
	gsSP2Triangles(17, 19, 18, 0, 20, 3, 4, 0),
	gsSP2Triangles(20, 21, 3, 0, 3, 21, 22, 0),
	gsSP2Triangles(3, 22, 1, 0, 23, 24, 25, 0),
	gsSP2Triangles(23, 25, 26, 0, 26, 25, 27, 0),
	gsSP2Triangles(26, 27, 28, 0, 29, 26, 28, 0),
	gsSP2Triangles(29, 30, 26, 0, 30, 23, 26, 0),
	gsSP1Triangle(30, 31, 23, 0),
	gsSPVertex(a_acc_wing_Wing_Cap_mesh_layer_1_vtx_1 + 32, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 7, 4, 5, 0),
	gsSP2Triangles(8, 4, 7, 0, 8, 9, 4, 0),
	gsSP2Triangles(3, 4, 9, 0, 7, 5, 10, 0),
	gsSP2Triangles(11, 12, 13, 0, 14, 12, 11, 0),
	gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
	gsSP2Triangles(17, 19, 18, 0, 17, 20, 19, 0),
	gsSP2Triangles(21, 19, 20, 0, 21, 22, 19, 0),
	gsSP2Triangles(23, 22, 21, 0, 23, 24, 22, 0),
	gsSP2Triangles(23, 25, 24, 0, 23, 26, 25, 0),
	gsSP2Triangles(27, 25, 26, 0, 27, 28, 25, 0),
	gsSP2Triangles(27, 29, 28, 0, 27, 16, 29, 0),
	gsSP2Triangles(16, 18, 29, 0, 29, 18, 19, 0),
	gsSP2Triangles(29, 19, 22, 0, 24, 29, 22, 0),
	gsSP2Triangles(28, 29, 24, 0, 24, 25, 28, 0),
	gsSPVertex(a_acc_wing_Wing_Cap_mesh_layer_1_vtx_1 + 62, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 9, 6, 0),
	gsSP2Triangles(8, 10, 9, 0, 8, 11, 10, 0),
	gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
	gsSP2Triangles(2, 12, 13, 0, 2, 1, 12, 0),
	gsSP2Triangles(3, 12, 1, 0, 3, 10, 12, 0),
	gsSP2Triangles(9, 10, 3, 0, 5, 9, 3, 0),
	gsSP2Triangles(9, 5, 6, 0, 14, 15, 16, 0),
	gsSP2Triangles(17, 15, 14, 0, 18, 15, 17, 0),
	gsSP2Triangles(19, 15, 18, 0, 16, 15, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
	gsSP2Triangles(23, 24, 22, 0, 24, 25, 22, 0),
	gsSP1Triangle(25, 20, 22, 0),
	gsSPEndDisplayList(),
};

Vtx a_acc_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {-175, 14, -127}, 0, {1008, 2032}, {166, 237, 88, 255} }},
	{{ {-117, 37, -62}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-227, 186, -143}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-169, 210, -77}, 0, {-16, -16}, {166, 237, 88, 255} }},
	{{ {228, 186, -143}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {117, 37, -62}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {176, 14, -127}, 0, {1008, 2032}, {90, 237, 88, 255} }},
	{{ {169, 210, -77}, 0, {-16, -16}, {90, 237, 88, 255} }},
};

Gfx a_acc_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(a_acc_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx a_acc_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {-117, 37, -62}, 0, {1008, 2032}, {167, 237, 88, 255} }},
	{{ {-58, 60, 2}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-169, 210, -77}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-111, 233, -13}, 0, {-16, -16}, {167, 237, 88, 255} }},
	{{ {169, 210, -77}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {59, 60, 2}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {117, 37, -62}, 0, {1008, 2032}, {89, 237, 88, 255} }},
	{{ {111, 233, -13}, 0, {-16, -16}, {89, 237, 88, 255} }},
};

Gfx a_acc_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(a_acc_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_a_acc_wing_Boots2[] = {
	gsSPSetLights1(a_acc_wing_Boots2_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_a_acc_wing_Boots2[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_a_acc_wing_Boots[] = {
	gsSPCopyLightsPlayerPart(SHOES),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_a_acc_wing_Boots[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_a_acc_wing_Metal[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(HAIR),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, a_acc_wing_metal_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, a_acc_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_a_acc_wing_Metal[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_a_acc_wing_Wing_Tip[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, a_acc_wing_wing_2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_a_acc_wing_Wing_Tip[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_a_acc_wing_Wing_Base[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, a_acc_wing_wing1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_a_acc_wing_Wing_Base[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx a_acc_wing_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_a_acc_wing_Boots2),
	gsSPDisplayList(a_acc_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_a_acc_wing_Boots2),
	gsSPDisplayList(mat_a_acc_wing_Boots),
	gsSPDisplayList(a_acc_wing_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_a_acc_wing_Boots),
	gsSPEndDisplayList(),
};

Gfx a_acc_wing_Wing_Cap_mesh_layer_1_mat_override_Metal_0[] = {
	gsSPDisplayList(mat_a_acc_wing_Metal),
	gsSPDisplayList(a_acc_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(a_acc_wing_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_a_acc_wing_Metal),
	gsSPEndDisplayList(),
};

Gfx a_acc_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_a_acc_wing_Wing_Tip),
	gsSPDisplayList(a_acc_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_a_acc_wing_Wing_Tip),
	gsSPDisplayList(mat_a_acc_wing_Wing_Base),
	gsSPDisplayList(a_acc_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_a_acc_wing_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx a_acc_wing_Wings_mesh_layer_4_mat_override_Metal_0[] = {
	gsSPDisplayList(mat_a_acc_wing_Wing_Tip),
	gsSPDisplayList(a_acc_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_a_acc_wing_Wing_Tip),
	gsSPDisplayList(mat_a_acc_wing_Wing_Base),
	gsSPDisplayList(a_acc_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_a_acc_wing_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx a_acc_wing_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP  | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

