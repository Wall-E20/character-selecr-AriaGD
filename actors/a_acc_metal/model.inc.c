Lights1 a_acc_metal_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx a_acc_metal_metal_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 a_acc_metal_metal_rgba16_rgba16[] = {
	#include "actors/aria/metal.rgba16.inc.c"
};

Gfx a_acc_metal_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 a_acc_metal_Metal_Light_rgba16_rgba16[] = {
	#include "actors/aria/Metal_Light.rgba16.inc.c"
};

Vtx a_acc_metal_Metal_Cap_DL_mesh_layer_1_vtx_0[62] = {
	{{ {-53, 26, -44}, 0, {1020, 495}, {185, 75, 182, 255} }},
	{{ {-53, 2, 50}, 0, {508, 239}, {181, 184, 73, 255} }},
	{{ {-53, 26, 50}, 0, {508, 495}, {184, 75, 73, 255} }},
	{{ {-53, 2, -44}, 0, {1020, 239}, {181, 184, 183, 255} }},
	{{ {45, 0, 50}, 0, {508, -17}, {71, 181, 74, 255} }},
	{{ {45, 0, -44}, 0, {1020, -17}, {72, 181, 183, 255} }},
	{{ {45, 24, 50}, 0, {508, -273}, {75, 72, 73, 255} }},
	{{ {45, 24, -44}, 0, {1020, -273}, {75, 72, 183, 255} }},
	{{ {-53, 2, -44}, 0, {1532, -17}, {181, 184, 183, 255} }},
	{{ {-53, 26, -44}, 0, {1532, -273}, {185, 75, 182, 255} }},
	{{ {-53, 26, 50}, 0, {508, -529}, {184, 75, 73, 255} }},
	{{ {-53, 26, -44}, 0, {1020, -529}, {185, 75, 182, 255} }},
	{{ {-53, 26, 50}, 0, {-4, -273}, {184, 75, 73, 255} }},
	{{ {-53, 2, 50}, 0, {-4, -17}, {181, 184, 73, 255} }},
	{{ {-95, 16, -113}, 0, {1788, 495}, {189, 176, 184, 255} }},
	{{ {-83, 13, -55}, 0, {-260, -529}, {87, 242, 91, 255} }},
	{{ {-121, 16, -89}, 0, {-260, 495}, {191, 171, 187, 255} }},
	{{ {-61, 14, -76}, 0, {1788, -529}, {88, 0, 92, 255} }},
	{{ {-95, 17, -113}, 0, {1788, 495}, {198, 97, 198, 255} }},
	{{ {-120, 17, -89}, 0, {-260, 495}, {194, 92, 194, 255} }},
	{{ {87, 16, -113}, 0, {1788, 495}, {67, 176, 184, 255} }},
	{{ {113, 16, -89}, 0, {-260, 495}, {65, 171, 187, 255} }},
	{{ {75, 13, -55}, 0, {-260, -529}, {169, 242, 91, 255} }},
	{{ {113, 17, -89}, 0, {-260, 495}, {62, 92, 194, 255} }},
	{{ {87, 17, -113}, 0, {1788, 495}, {58, 97, 198, 255} }},
	{{ {53, 14, -76}, 0, {1788, -529}, {168, 0, 92, 255} }},
	{{ {-95, 16, 120}, 0, {1788, 495}, {189, 176, 72, 255} }},
	{{ {-121, 16, 95}, 0, {-260, 495}, {191, 171, 69, 255} }},
	{{ {-83, 13, 61}, 0, {-260, -529}, {87, 242, 165, 255} }},
	{{ {-120, 17, 95}, 0, {-260, 495}, {194, 92, 62, 255} }},
	{{ {-95, 17, 120}, 0, {1788, 495}, {198, 97, 58, 255} }},
	{{ {-61, 14, 82}, 0, {1788, -529}, {88, 0, 164, 255} }},
	{{ {87, 16, 120}, 0, {1788, 495}, {67, 176, 72, 255} }},
	{{ {75, 13, 61}, 0, {-260, -529}, {169, 242, 165, 255} }},
	{{ {113, 16, 95}, 0, {-260, 495}, {65, 171, 69, 255} }},
	{{ {53, 14, 82}, 0, {1788, -529}, {168, 0, 164, 255} }},
	{{ {87, 17, 120}, 0, {1788, 495}, {58, 97, 58, 255} }},
	{{ {113, 17, 95}, 0, {-260, 495}, {62, 92, 62, 255} }},
	{{ {190, 19, 47}, 0, {1788, 495}, {98, 175, 0, 255} }},
	{{ {76, 19, -40}, 0, {-260, -529}, {129, 245, 0, 255} }},
	{{ {190, 19, -45}, 0, {-260, 495}, {91, 168, 0, 255} }},
	{{ {76, 19, 41}, 0, {1788, -529}, {129, 9, 0, 255} }},
	{{ {190, 21, -45}, 0, {-260, 495}, {90, 90, 0, 255} }},
	{{ {190, 21, 47}, 0, {1788, 495}, {83, 96, 0, 255} }},
	{{ {-198, 19, 47}, 0, {1788, 495}, {158, 175, 0, 255} }},
	{{ {-198, 19, -45}, 0, {-260, 495}, {165, 168, 0, 255} }},
	{{ {-83, 19, -40}, 0, {-260, -529}, {127, 245, 0, 255} }},
	{{ {-198, 21, -45}, 0, {-260, 495}, {166, 90, 0, 255} }},
	{{ {-198, 21, 47}, 0, {1788, 495}, {173, 96, 0, 255} }},
	{{ {-83, 19, 41}, 0, {1788, -529}, {127, 9, 0, 255} }},
	{{ {44, 19, -181}, 0, {1788, 495}, {0, 156, 178, 255} }},
	{{ {-46, 19, -71}, 0, {-260, -529}, {0, 31, 123, 255} }},
	{{ {-52, 19, -181}, 0, {-260, 495}, {0, 178, 155, 255} }},
	{{ {38, 19, -71}, 0, {1788, -529}, {0, 223, 123, 255} }},
	{{ {43, 21, -181}, 0, {1788, 495}, {0, 78, 156, 255} }},
	{{ {-53, 21, -181}, 0, {-260, 495}, {0, 101, 179, 255} }},
	{{ {44, 19, 187}, 0, {1788, 495}, {0, 156, 78, 255} }},
	{{ {-52, 19, 187}, 0, {-260, 495}, {0, 178, 101, 255} }},
	{{ {-46, 19, 77}, 0, {-260, -529}, {0, 31, 133, 255} }},
	{{ {43, 21, 187}, 0, {1788, 495}, {0, 78, 100, 255} }},
	{{ {-53, 21, 187}, 0, {-260, 495}, {0, 101, 77, 255} }},
	{{ {38, 19, 77}, 0, {1788, -529}, {0, 223, 133, 255} }},
};

Gfx a_acc_metal_Metal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(a_acc_metal_Metal_Cap_DL_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
	gsSP2Triangles(5, 6, 4, 0, 5, 7, 6, 0),
	gsSP2Triangles(8, 7, 5, 0, 8, 9, 7, 0),
	gsSP2Triangles(7, 10, 6, 0, 7, 11, 10, 0),
	gsSP2Triangles(4, 12, 13, 0, 4, 6, 12, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
	gsSP2Triangles(18, 15, 17, 0, 18, 19, 15, 0),
	gsSP2Triangles(14, 19, 18, 0, 14, 16, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSP2Triangles(20, 24, 23, 0, 24, 22, 23, 0),
	gsSP2Triangles(24, 25, 22, 0, 20, 22, 25, 0),
	gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
	gsSP2Triangles(26, 30, 29, 0, 30, 28, 29, 0),
	gsSP2Triangles(30, 31, 28, 0, 26, 28, 31, 0),
	gsSPVertex(a_acc_metal_Metal_Cap_DL_mesh_layer_1_vtx_0 + 32, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 1, 3, 0, 4, 5, 1, 0),
	gsSP2Triangles(0, 5, 4, 0, 0, 2, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(9, 10, 7, 0, 9, 11, 10, 0),
	gsSP2Triangles(6, 10, 11, 0, 6, 8, 10, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(12, 16, 15, 0, 17, 15, 16, 0),
	gsSP2Triangles(17, 14, 15, 0, 12, 14, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
	gsSP2Triangles(22, 19, 21, 0, 22, 23, 19, 0),
	gsSP2Triangles(20, 23, 22, 0, 20, 22, 18, 0),
	gsSP2Triangles(24, 25, 26, 0, 25, 24, 27, 0),
	gsSP2Triangles(25, 27, 28, 0, 27, 26, 28, 0),
	gsSP2Triangles(27, 29, 26, 0, 24, 26, 29, 0),
	gsSPEndDisplayList(),
};


Gfx mat_a_acc_metal_Metal[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(HAIR),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, a_acc_metal_metal_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, a_acc_metal_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_a_acc_metal_Metal[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx a_acc_metal_Metal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_a_acc_metal_Metal),
	gsSPDisplayList(a_acc_metal_Metal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_a_acc_metal_Metal),
	gsSPEndDisplayList(),
};

Gfx a_acc_metal_Metal_Cap_DL_mesh_layer_1_mat_override_Metal_0[] = {
	gsSPDisplayList(mat_a_acc_metal_Metal),
	gsSPDisplayList(a_acc_metal_Metal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_a_acc_metal_Metal),
	gsSPEndDisplayList(),
};

Gfx a_acc_metal_material_revert_render_settings[] = {
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

