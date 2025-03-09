-- name: [CS] Aria_GD [WIP]
-- description: [CS] Aria is a girl from geometry dash lmao.
-- pausable: true

if not _G.charSelectExists then
    djui_popup_create("\\#ffffdc\\\n"..TEXT_MOD_NAME.."\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!", 6)
    return 0
end


local E_MODEL_GD = smlua_model_util_get_id("aria_geo")
local E_MODEL_MISTCUSTOM = smlua_model_util_get_id("mist_geo")
local E_MODEL_GD2 = smlua_model_util_get_id("ariacat_geo")
local TEX_CUSTOM_STAR_ICON = get_texture_info("pane-icon")
local TEX_CUSTOM_LIFE_ICON = get_texture_info("icon-aria") 
local E_MODEL_CUSTOM_STAR = smlua_model_util_get_id("panino_geo") 



local CAPTABLE_GD = {
    normal = smlua_model_util_get_id("a_acc_geo"),
    wing = smlua_model_util_get_id("a_acc_wing_geo"),
    metal = smlua_model_util_get_id("a_acc_metal_geo"),
    metalWing = smlua_model_util_get_id("a_acc_metal_geo"),
}



-- All Located in "textures"
--[[local healthMeter = {
    label = {
        left = get_texture_info("L_Count_Wood1"),
        right = get_texture_info("L_Count_Wood2"),
    },
    pie = {
        [1] = get_texture_info("Faces1"),
        [2] = get_texture_info("Faces2"),
        [3] = get_texture_info("Faces3"),
        [4] = get_texture_info("Faces4"),
        [5] = get_texture_info("Faces5"),
        [6] = get_texture_info("Faces6"),
        [7] = get_texture_info("Faces7"),
        [8] = get_texture_info("Faces8"),
	
    }
}
]]

local PALETTE_GD = {
    [PANTS]  = { r = 0, g = 100, b = 150 },
    [SHIRT]  = { r = 255, g = 185, b = 0 },
    [GLOVES] = { r = 0, g = 255, b = 125 },
    [SHOES]  = { r = 102, g = 49, b = 30 },
    [HAIR]   = { r = 0, g = 255, b = 125 },
    [SKIN]   = { r = 192, g = 139, b = 86 },
    [CAP]    = { r = 8, g = 195, b = 97 },
    [EMBLEM] = { r = 130, g = 130, b = 130 }
}
--extra palettes
local PALETTE_GD_BW = {
    [PANTS]  = { r = 129, g = 129, b = 129 },
    [SHIRT]  = { r = 140, g = 140, b = 140 },
    [GLOVES] = { r = 175, g = 175, b = 175 },
    [SHOES]  = { r = 82, g = 82, b = 82 },
    [HAIR]   = { r = 175, g = 175, b = 175 },
    [SKIN]   = { r = 255, g = 255, b = 255 },
    [CAP]    = { r = 128, g = 128, b = 128 },
    [EMBLEM] = { r = 130, g = 130, b = 130 }
}
local PALETTE_GD_MIRROR = {
    [PANTS]  = { r = 130, g = 130, b = 130  },
    [SHIRT]  = { r = 0, g = 255, b = 125 },
    [GLOVES] = { r = 255, g = 185, b = 0 },
    [SHOES]  = { r = 0, g = 100, b = 150  },
    [HAIR]   = { r = 255, g = 185, b = 0 },
    [SKIN]   = { r = 192, g = 139, b = 86 },
    [CAP]    = { r = 187, g = 136, b = 0 },
    [EMBLEM] = { r = 102, g = 49, b = 30 }
}

--soon...

local VOICETABLE_GD = {
--[[	[CHAR_SOUND_YAH_WAH_HOO] = 'yah.ogg', 'wah.ogg', 'hoo.ogg',
	[CHAR_SOUND_HOOHOO] = 'hoo.ogg',
	[CHAR_SOUND_YAHOO] = 'yahoo.ogg',
	[CHAR_SOUND_UH] = 'uh.ogg',
	[CHAR_SOUND_HRMM] = 'mmrn.ogg',
	[CHAR_SOUND_WAH2] = 'wah2.ogg',
	[CHAR_SOUND_WHOA] = 'woah.ogg',
	[CHAR_SOUND_EEUH] = 'eeuh.ogg',
	[CHAR_SOUND_ATTACKED] = 'hurt.ogg',
	[CHAR_SOUND_OOOF] = 'ah...ogg',
	[CHAR_SOUND_OOOF2] = 'Ah.ogg',
	[CHAR_SOUND_HERE_WE_GO] = 'Ben Fatto!.ogg',
	[CHAR_SOUND_YAWNING] = 'yawn.ogg',
	[CHAR_SOUND_SNORING1] = 'uh.ogg',
	[CHAR_SOUND_SNORING2] = 'uh.ogg',
	[CHAR_SOUND_WAAAOOOW] = 'woah.ogg',
	[CHAR_SOUND_HAHA] = 'haha.ogg',
	[CHAR_SOUND_HAHA_2] = 'haha.ogg',
	[CHAR_SOUND_UH2] = 'uh.ogg',
	[CHAR_SOUND_UH2_2] = 'uh.ogg',
	[CHAR_SOUND_ON_FIRE] = 'hurt.ogg',
	[CHAR_SOUND_DYING] = 'doh.ogg',
	[CHAR_SOUND_PANTING_COLD] = 'doh.ogg',
	[CHAR_SOUND_PANTING] = 'doh.ogg',
	[CHAR_SOUND_COUGHING1] = 'doh.ogg',
	[CHAR_SOUND_COUGHING2] = 'doh.ogg',
	[CHAR_SOUND_COUGHING3] = 'doh.ogg',
	[CHAR_SOUND_PUNCH_YAH] = 'yah.ogg',
	[CHAR_SOUND_PUNCH_HOO] = 'hoo.ogg',
	[CHAR_SOUND_MAMA_MIA] = 'aww....ogg',
	[CHAR_SOUND_GROUND_POUND_WAH] = 'wah.ogg',
	[CHAR_SOUND_DROWNING] = 'uh.ogg',
	[CHAR_SOUND_PUNCH_WAH] = 'wah.ogg',
	[CHAR_SOUND_YAHOO_WAHA_YIPPEE] = 'yahoo.ogg', 'waha.ogg', 'yippie.ogg',
	[CHAR_SOUND_DOH] = 'doh.ogg',
	[CHAR_SOUND_GAME_OVER] = 'gameover.ogg',
	[CHAR_SOUND_HELLO] = 'Ciao ragazzi.ogg',
	[CHAR_SOUND_PRESS_START_TO_PLAY] = 'press_start.ogg',
	[CHAR_SOUND_TWIRL_BOUNCE] = 'boing.ogg',
	[CHAR_SOUND_SNORING3] = 'uh.ogg',
	[CHAR_SOUND_SO_LONGA_BOWSER] = 'so_long.ogg',
	[CHAR_SOUND_IMA_TIRED] = 'imma_tired.ogg',
	[CHAR_SOUND_LETS_A_GO] = 'ok.ogg',
	[CHAR_SOUND_OKEY_DOKEY] = 'ok.ogg',
	--]]
}
local CSloaded = false
local function on_character_select_load()
    CT_GD = _G.charSelect.character_add("Aria", {"what is she doing here?? lmao", "A girl from Geometry Dash"}, "Wall_E20", {r = 3, g = 252, b = 57}, E_MODEL_GD, CT_LUIGI, TEX_CUSTOM_LIFE_ICON)
    _G.charSelect.character_add_caps(E_MODEL_GD, CAPTABLE_GD)
    _G.charSelect.character_add_voice(E_MODEL_GD, VOICETABLE_GD)
    _G.charSelect.character_add_celebration_star(E_MODEL_GD, E_MODEL_CUSTOM_STAR, TEX_CUSTOM_STAR_ICON)
    _G.charSelect.character_add_palette_preset(E_MODEL_GD, PALETTE_GD)
	_G.charSelect.character_add_palette_preset(E_MODEL_GD, PALETTE_GD_MIRROR)
	_G.charSelect.character_add_palette_preset(E_MODEL_GD, PALETTE_GD_BW)
    _G.charSelect.character_add_health_meter(CT_GD, healthMeter)
	
	_G.charSelect.character_add_caps(E_MODEL_GD2, CAPTABLE_GD)
    _G.charSelect.character_add_voice(E_MODEL_GD2, VOICETABLE_GD)
    _G.charSelect.character_add_celebration_star(E_MODEL_GD2, E_MODEL_CUSTOM_STAR, TEX_CUSTOM_STAR_ICON)
    _G.charSelect.character_add_palette_preset(E_MODEL_GD2, PALETTE_GD)
	_G.charSelect.character_add_palette_preset(E_MODEL_GD2, PALETTE_GD_MIRROR)
	_G.charSelect.character_add_palette_preset(E_MODEL_GD2, PALETTE_GD_BW)
    CSloaded = true

--cat mouth :3
local SKIN_CATARIA = {
        { model = E_MODEL_GD2,  name = "Aria :3", desc = { "mewo" , ":3" }, color = {r = 3, g = 252, b = 57} }
    }

    for index, alt in ipairs(SKIN_CATARIA) do
        _G.charSelect.character_add_costume(CT_GD, alt.name, alt.desc, nil, alt.color, alt.model, nil, nil, nil, nil)
    end
    --_G.charSelect.character_add_health_meter(CT_CHAR, healthMeter)
    CSloaded = true

end


local function on_character_sound(m, sound)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_GD then return _G.charSelect.voice.sound(m, sound) end
end

local function on_character_snore(m)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_GD then return _G.charSelect.voice.snore(m) end
end


hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)
hook_event(HOOK_CHARACTER_SOUND, on_character_sound)
hook_event(HOOK_MARIO_UPDATE, on_character_snore)



--single jump / no long jump
local function replace_jump(m, inc)
if _G.charSelect.character_get_voice(m) == VOICETABLE_GD then
	if inc == ACT_JUMP or inc == ACT_TRIPLE_JUMP or inc == ACT_LONG_JUMP then
	
        return ACT_DOUBLE_JUMP
	end
end
end

hook_event(HOOK_BEFORE_SET_MARIO_ACTION, replace_jump)


--land (gotta fix this)
local function jump2(m)
if _G.charSelect.character_get_voice(m) == VOICETABLE_GD then
	if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_GENERAL_LAND or 
	m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_LAND_FROM_SINGLE_JUMP or 
	m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_LAND_FROM_DOUBLE_JUMP or 
	m.marioObj.header.gfx.animInfo.animID == ACT_FREEFALL_LAND then
        smlua_anim_util_set_animation(m.marioObj, "gd_stopreal")
		
    end
	
end
end

hook_event(HOOK_MARIO_UPDATE, jump2) 



--standard anims
local function anims(m)
    if _G.charSelect.character_get_voice(m) == VOICETABLE_GD then
        if m.marioObj.header.gfx.animInfo.animID ==  MARIO_ANIM_IDLE_HEAD_LEFT then
            m.marioBodyState.eyeState = MARIO_EYES_LOOK_LEFT
            smlua_anim_util_set_animation(m.marioObj, "idle1")
        end
        if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_IDLE_HEAD_RIGHT then
            smlua_anim_util_set_animation(m.marioObj, "idle2")
			m.marioBodyState.eyeState = MARIO_EYES_LOOK_RIGHT
        end
        if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_IDLE_HEAD_CENTER then
            smlua_anim_util_set_animation(m.marioObj, "idle3")
        end
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_FIRST_PERSON then
            smlua_anim_util_set_animation(m.marioObj, "idle")
        end
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_A_POSE then
            smlua_anim_util_set_animation(m.marioObj, "T-Pose")
        end
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_DOUBLE_JUMP_RISE then
			m.marioBodyState.eyeState = 11
            smlua_anim_util_set_animation(m.marioObj, "gd_jstart")
        end
		if m.marioBodyState.handState == MARIO_HAND_OPEN and m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_DOUBLE_JUMP_RISE then
			 m.marioBodyState.handState = MARIO_HAND_FISTS
		end	
		if m.marioBodyState.handState == MARIO_HAND_OPEN and m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_DOUBLE_JUMP_FALL then
			 m.marioBodyState.handState = MARIO_HAND_FISTS
		end			
		
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_DOUBLE_JUMP_FALL then
            smlua_anim_util_set_animation(m.marioObj, "gd_jfall")
        end
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_GENERAL_FALL then
            smlua_anim_util_set_animation(m.marioObj, "gd_ffree")
			m.marioBodyState.eyeState = 11
        end
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_START_CROUCHING then
           smlua_anim_util_set_animation(m.marioObj, "Crouch_start")
        end
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_CROUCHING then
           smlua_anim_util_set_animation(m.marioObj, "Crouch")
        end
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_STOP_CROUCHING then
           smlua_anim_util_set_animation(m.marioObj, "Crouch_end")
        end
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_BREAKDANCE then
           smlua_anim_util_set_animation(m.marioObj, "Crouch_attack")
        end
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_CRAWLING then
           smlua_anim_util_set_animation(m.marioObj, "Crawl")
		   m.forwardVel = math.max(m.forwardVel,10)
        end
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_START_CRAWLING then
           smlua_anim_util_set_animation(m.marioObj, "crawl_frame")
        end
		if m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_STOP_CRAWLING then
           smlua_anim_util_set_animation(m.marioObj, "crawl_frame")
        end
		if 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_CROUCH_FROM_SLOW_LONGJUMP or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_CROUCH_FROM_FAST_LONGJUMP or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_SLOW_LONGJUMP or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_FAST_LONGJUMP or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_BACKFLIP or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_SINGLE_JUMP or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_HANDSTAND_JUMP or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_WALK_WITH_LIGHT_OBJ or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_SINGLE_JUMP or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_RUN_WITH_LIGHT_OBJ or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_CREDITS_LOOK_UP or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_FINAL_BOWSER_RAISE_HAND_SPIN or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_WING_CAP_FLY or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_CREDITS_PEACE_SIGN or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_HANG_ON_OWL or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_THROW_CATCH_KEY or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_AIR_KICK or  
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_GROUND_POUND_LANDING or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_IDLE_WITH_LIGHT_OBJ or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_JUMP_WITH_LIGHT_OBJ or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_FALL_WITH_LIGHT_OBJ or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_RIDING_SHELL or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_BEND_KNESS_RIDING_SHELL or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_START_RIDING_SHELL or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_JUMP_RIDING_SHELL or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_DOUBLE_JUMP_FALL or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_DOUBLE_JUMP_RISE or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_THROW_LIGHT_OBJECT or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_UNLOCK_DOOR or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_GROUND_KICK or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_FIRST_PUNCH or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_BREAKDANCE or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_DIVE or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_SLIDE_DIVE or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_SLIDE_KICK or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_SLIDE or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_START_GROUND_POUND or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_GROUND_POUND or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_GROUND_POUND_LANDING or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_TWIRL or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_START_TWIRL or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_SUMMON_STAR or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_HOLDING_BOWSER or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_RELEASE_BOWSER or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_SLIDEFLIP or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_TRIPLE_JUMP or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_THROW_LIGHT_OBJECT or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_HANG_ON_CEILING or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_START_WALLKICK or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_TAKE_CAP_OFF_THEN_ON or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_PUT_CAP_ON or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_TRIPLE_JUMP_FLY then
            m.marioBodyState.eyeState = 11
        end
		if
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_CREDITS_WAVING or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_CREDITS_PEACE_SIGN or	
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_RETURN_FROM_WATER_STAR_DANCE then			
            m.marioBodyState.eyeState = 9
        end
		if 	m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_COUGHING or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_DYING_FALL_OVER or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_LEGS_STUCK_IN_GROUND or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_BEING_GRABBED or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_SOFT_FRONT_KB or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_COUGHING or 
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_DYING_IN_QUICKSAND or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_GROUND_BONK or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_BOTTOM_STUCK_IN_GROUND or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_LEGS_STUCK_IN_GROUND or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_FALL_OVER_BACKWARDS or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_ELECTROCUTION or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_BACKWARDS_WATER_KB or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_DROWNING_PART1 or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_DROWNING_PART2 or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_BACKWARD_AIR_KB or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_AIR_FORWARD_KB or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_BACKWARD_KB or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_FORWARD_KB or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_LAND_ON_STOMACH or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_AIRBORNE_ON_STOMACH or
			m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_SOFT_BACK_KB then			
            m.marioBodyState.eyeState = MARIO_EYES_DEAD
        end
    end
end

local function star(m)
if CT_GD == _G.charSelect.character_get_current_number() and m.playerIndex == 0 and
	m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_STAR_DANCE or m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_WATER_STAR_DANCE and
	m.marioObj.header.gfx.animInfo.animFrame > 40 then
			m.marioBodyState.eyeState = 10
		end


if CT_GD == _G.charSelect.character_get_current_number() and m.playerIndex == 0 and
	m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_STAR_DANCE or m.marioObj.header.gfx.animInfo.animID == MARIO_ANIM_WATER_STAR_DANCE and
	m.marioObj.header.gfx.animInfo.animFrame < 40 then
			m.marioBodyState.eyeState = 9
		end
	end

hook_event(HOOK_MARIO_UPDATE, anims)
hook_event(HOOK_MARIO_UPDATE, star)



local character_edit = _G.charSelect.character_edit
local character_get_current_number = _G.charSelect.character_get_current_number
local character_get_current_table = _G.charSelect.character_get_current_table
local get_options_status = _G.charSelect.get_options_status
local get_menu_color = _G.charSelect.get_menu_color
local hook_render_in_menu = _G.charSelect.hook_render_in_menu

local function menupose(m)
if _G.charSelect.is_menu_open() and
 CT_GD == _G.charSelect.character_get_current_number() and m.playerIndex == 0  then
	smlua_anim_util_set_animation(m.marioObj, "gd_MenuPose")
	m.marioBodyState.eyeState = 9
	m.marioBodyState.handState = MARIO_HAND_PEACE_SIGN
	end
end



hook_event(HOOK_MARIO_UPDATE, menupose)
