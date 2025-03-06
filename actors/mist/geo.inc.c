#include "src/game/envfx_snow.h"

const GeoLayout mist_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(0, geo_update_layer_transparency),
	GEO_CLOSE_NODE(),
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, mist_3_mist_geo_display_list_mist_seg3_dl_03000880_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
