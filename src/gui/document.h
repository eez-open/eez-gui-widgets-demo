#pragma once

#define EEZ_GUI_DOCUMENT_API_VERSION 1

#include <eez/gui/data.h>
#include <eez/gui/widget.h>

namespace eez {
namespace gui {

enum DataEnum {
    DATA_ID_NONE = 0,
    DATA_ID_ALERT_MESSAGE = 1,
    DATA_ID_KEYPAD_TEXT = 2,
    DATA_ID_KEYPAD_EDIT_UNIT = 3,
    DATA_ID_KEYPAD_SIGN_ENABLED = 4,
    DATA_ID_KEYPAD_UNIT_ENABLED = 5,
    DATA_ID_KEYPAD_DOT_ENABLED = 6,
    DATA_ID_KEYPAD_OPTION1_ENABLED = 7,
    DATA_ID_KEYPAD_OPTION1_TEXT = 8,
    DATA_ID_KEYPAD_OPTION2_ENABLED = 9,
    DATA_ID_KEYPAD_OPTION2_TEXT = 10,
    DATA_ID_KEYPAD_OPTION3_ENABLED = 11,
    DATA_ID_KEYPAD_OPTION3_TEXT = 12,
    DATA_ID_KEYPAD_MODE = 13,
    DATA_ID_KEYPAD_OK_ENABLED = 14,
    DATA_ID_KEYPAD_LABEL = 15
};

void data_none(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_alert_message(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_text(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_edit_unit(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_sign_enabled(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_unit_enabled(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_dot_enabled(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_option1_enabled(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_option1_text(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_option2_enabled(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_option2_text(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_option3_enabled(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_option3_text(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_mode(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_ok_enabled(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);
void data_keypad_label(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);

typedef void (*DataOperationsFunction)(DataOperationEnum operation, const WidgetCursor &widgetCursor, Value &value);

extern DataOperationsFunction g_dataOperationsFunctions[];

enum ActionsEnum {
    ACTION_ID_NONE = 0,
    ACTION_ID_YES = 1,
    ACTION_ID_NO = 2,
    ACTION_ID_CANCEL = 3,
    ACTION_ID_EDIT = 4,
    ACTION_ID_DRAG_OVERLAY = 5,
    ACTION_ID_SCROLL = 6,
    ACTION_ID_KEYPAD_KEY = 7,
    ACTION_ID_KEYPAD_BACK = 8,
    ACTION_ID_KEYPAD_UNIT = 9,
    ACTION_ID_KEYPAD_OPTION1 = 10,
    ACTION_ID_KEYPAD_OPTION2 = 11,
    ACTION_ID_KEYPAD_OPTION3 = 12,
    ACTION_ID_KEYPAD_SIGN = 13,
    ACTION_ID_KEYPAD_OK = 14,
    ACTION_ID_KEYPAD_CANCEL = 15,
    ACTION_ID_TOGGLE_KEYPAD_MODE = 16,
    ACTION_ID_KEYPAD_SPACE = 17
};

void action_yes();
void action_no();
void action_cancel();
void action_edit();
void action_drag_overlay();
void action_scroll();
void action_keypad_key();
void action_keypad_back();
void action_keypad_unit();
void action_keypad_option1();
void action_keypad_option2();
void action_keypad_option3();
void action_keypad_sign();
void action_keypad_ok();
void action_keypad_cancel();
void action_toggle_keypad_mode();
void action_keypad_space();

extern ActionExecFunc g_actionExecFunctions[];

enum FontsEnum {
    FONT_ID_NONE = 0,
    FONT_ID_MEDIUM = 1,
    FONT_ID_SHADOW = 2,
    FONT_ID_TEXT_M = 3,
    FONT_ID_ICONS = 4,
    FONT_ID_TEXT_XXL = 5,
    FONT_ID_TEXT_XL = 6,
    FONT_ID_TEXT_L = 7,
    FONT_ID_TEXT_XS = 8
};

enum BitmapsEnum {
    BITMAP_ID_NONE = 0,
    BITMAP_ID_FLAG_BV = 1,
    BITMAP_ID_FLAG_BW = 2,
    BITMAP_ID_FLAG_BY = 3,
    BITMAP_ID_FLAG_BZ = 4,
    BITMAP_ID_FLAG_CA = 5,
    BITMAP_ID_FLAG_CC = 6,
    BITMAP_ID_FLAG_CD = 7,
    BITMAP_ID_FLAG_CF = 8,
    BITMAP_ID_FLAG_CG = 9,
    BITMAP_ID_FLAG_CH = 10,
    BITMAP_ID_FLAG_CI = 11,
    BITMAP_ID_FLAG_CK = 12,
    BITMAP_ID_FLAG_CL = 13,
    BITMAP_ID_FLAG_CM = 14,
    BITMAP_ID_FLAG_CN = 15,
    BITMAP_ID_FLAG_CO = 16,
    BITMAP_ID_FLAG_CR = 17,
    BITMAP_ID_FLAG_CU = 18,
    BITMAP_ID_FLAG_CV = 19,
    BITMAP_ID_FLAG_CW = 20,
    BITMAP_ID_FLAG_CX = 21,
    BITMAP_ID_FLAG_CY = 22,
    BITMAP_ID_FLAG_CZ = 23,
    BITMAP_ID_FLAG_DE = 24,
    BITMAP_ID_FLAG_DJ = 25,
    BITMAP_ID_FLAG_DK = 26,
    BITMAP_ID_FLAG_DM = 27,
    BITMAP_ID_FLAG_DO = 28,
    BITMAP_ID_FLAG_DZ = 29,
    BITMAP_ID_FLAG_EC = 30,
    BITMAP_ID_FLAG_EE = 31,
    BITMAP_ID_FLAG_EG = 32,
    BITMAP_ID_FLAG_EH = 33,
    BITMAP_ID_FLAG_ER = 34,
    BITMAP_ID_FLAG_ES = 35,
    BITMAP_ID_FLAG_ET = 36,
    BITMAP_ID_FLAG_EU = 37,
    BITMAP_ID_FLAG_FI = 38,
    BITMAP_ID_FLAG_FJ = 39,
    BITMAP_ID_FLAG_FK = 40,
    BITMAP_ID_FLAG_FM = 41,
    BITMAP_ID_FLAG_FO = 42,
    BITMAP_ID_FLAG_FR = 43,
    BITMAP_ID_FLAG_GA = 44,
    BITMAP_ID_FLAG_GB = 45,
    BITMAP_ID_FLAG_GB_ENG = 46,
    BITMAP_ID_FLAG_GB_NIR = 47,
    BITMAP_ID_FLAG_GB_SCT = 48,
    BITMAP_ID_FLAG_GB_WLS = 49,
    BITMAP_ID_FLAG_GD = 50,
    BITMAP_ID_FLAG_GE = 51,
    BITMAP_ID_FLAG_GF = 52,
    BITMAP_ID_FLAG_GG = 53,
    BITMAP_ID_FLAG_GH = 54,
    BITMAP_ID_FLAG_GI = 55,
    BITMAP_ID_FLAG_GL = 56,
    BITMAP_ID_FLAG_GM = 57,
    BITMAP_ID_FLAG_GN = 58,
    BITMAP_ID_FLAG_GP = 59,
    BITMAP_ID_FLAG_GQ = 60,
    BITMAP_ID_FLAG_GR = 61,
    BITMAP_ID_FLAG_GS = 62,
    BITMAP_ID_FLAG_GT = 63,
    BITMAP_ID_FLAG_GU = 64,
    BITMAP_ID_FLAG_GW = 65,
    BITMAP_ID_FLAG_GY = 66,
    BITMAP_ID_FLAG_HK = 67,
    BITMAP_ID_FLAG_HM = 68,
    BITMAP_ID_FLAG_HN = 69,
    BITMAP_ID_FLAG_HR = 70,
    BITMAP_ID_FLAG_HT = 71,
    BITMAP_ID_FLAG_HU = 72,
    BITMAP_ID_FLAG_ID = 73,
    BITMAP_ID_FLAG_IE = 74,
    BITMAP_ID_FLAG_IL = 75,
    BITMAP_ID_FLAG_IM = 76,
    BITMAP_ID_FLAG_IN = 77,
    BITMAP_ID_FLAG_IO = 78,
    BITMAP_ID_FLAG_IQ = 79,
    BITMAP_ID_FLAG_IR = 80,
    BITMAP_ID_FLAG_IS = 81,
    BITMAP_ID_FLAG_IT = 82,
    BITMAP_ID_FLAG_JE = 83,
    BITMAP_ID_FLAG_JM = 84,
    BITMAP_ID_FLAG_JO = 85,
    BITMAP_ID_FLAG_JP = 86,
    BITMAP_ID_FLAG_KE = 87,
    BITMAP_ID_FLAG_KG = 88,
    BITMAP_ID_FLAG_KH = 89,
    BITMAP_ID_FLAG_KI = 90,
    BITMAP_ID_FLAG_KM = 91,
    BITMAP_ID_FLAG_KN = 92,
    BITMAP_ID_FLAG_KP = 93,
    BITMAP_ID_FLAG_KR = 94,
    BITMAP_ID_FLAG_KW = 95,
    BITMAP_ID_FLAG_KY = 96,
    BITMAP_ID_FLAG_KZ = 97,
    BITMAP_ID_FLAG_LA = 98,
    BITMAP_ID_FLAG_LB = 99,
    BITMAP_ID_FLAG_LC = 100,
    BITMAP_ID_FLAG_LI = 101,
    BITMAP_ID_FLAG_LK = 102,
    BITMAP_ID_FLAG_LR = 103,
    BITMAP_ID_FLAG_LS = 104,
    BITMAP_ID_FLAG_LT = 105,
    BITMAP_ID_FLAG_LU = 106,
    BITMAP_ID_FLAG_LV = 107,
    BITMAP_ID_FLAG_LY = 108,
    BITMAP_ID_FLAG_MA = 109,
    BITMAP_ID_FLAG_MC = 110,
    BITMAP_ID_FLAG_MD = 111,
    BITMAP_ID_FLAG_ME = 112,
    BITMAP_ID_FLAG_MF = 113,
    BITMAP_ID_FLAG_MG = 114,
    BITMAP_ID_FLAG_MH = 115,
    BITMAP_ID_FLAG_MK = 116,
    BITMAP_ID_FLAG_ML = 117,
    BITMAP_ID_FLAG_MM = 118,
    BITMAP_ID_FLAG_MN = 119,
    BITMAP_ID_FLAG_MO = 120,
    BITMAP_ID_FLAG_MP = 121,
    BITMAP_ID_FLAG_MQ = 122,
    BITMAP_ID_FLAG_MR = 123,
    BITMAP_ID_FLAG_MS = 124,
    BITMAP_ID_FLAG_MT = 125,
    BITMAP_ID_FLAG_MU = 126,
    BITMAP_ID_FLAG_MV = 127,
    BITMAP_ID_FLAG_MW = 128,
    BITMAP_ID_FLAG_MX = 129,
    BITMAP_ID_FLAG_MY = 130,
    BITMAP_ID_FLAG_MZ = 131,
    BITMAP_ID_FLAG_NA = 132,
    BITMAP_ID_FLAG_NC = 133,
    BITMAP_ID_FLAG_NE = 134,
    BITMAP_ID_FLAG_NF = 135,
    BITMAP_ID_FLAG_NG = 136,
    BITMAP_ID_FLAG_NI = 137,
    BITMAP_ID_FLAG_NL = 138,
    BITMAP_ID_FLAG_NO = 139,
    BITMAP_ID_FLAG_NP = 140,
    BITMAP_ID_FLAG_NR = 141,
    BITMAP_ID_FLAG_NU = 142,
    BITMAP_ID_FLAG_NZ = 143,
    BITMAP_ID_FLAG_OM = 144,
    BITMAP_ID_FLAG_PA = 145,
    BITMAP_ID_FLAG_PE = 146,
    BITMAP_ID_FLAG_PF = 147,
    BITMAP_ID_FLAG_PG = 148,
    BITMAP_ID_FLAG_PH = 149,
    BITMAP_ID_FLAG_PK = 150,
    BITMAP_ID_FLAG_PL = 151,
    BITMAP_ID_FLAG_PM = 152,
    BITMAP_ID_FLAG_PN = 153,
    BITMAP_ID_FLAG_PR = 154,
    BITMAP_ID_FLAG_PS = 155,
    BITMAP_ID_FLAG_PT = 156,
    BITMAP_ID_FLAG_PW = 157,
    BITMAP_ID_FLAG_PY = 158,
    BITMAP_ID_FLAG_QA = 159,
    BITMAP_ID_FLAG_RE = 160,
    BITMAP_ID_FLAG_RO = 161,
    BITMAP_ID_FLAG_RS = 162,
    BITMAP_ID_FLAG_RU = 163,
    BITMAP_ID_FLAG_RW = 164,
    BITMAP_ID_FLAG_SA = 165,
    BITMAP_ID_FLAG_SB = 166,
    BITMAP_ID_FLAG_SC = 167,
    BITMAP_ID_FLAG_SD = 168,
    BITMAP_ID_FLAG_SE = 169,
    BITMAP_ID_FLAG_SG = 170,
    BITMAP_ID_FLAG_SH = 171,
    BITMAP_ID_FLAG_SI = 172,
    BITMAP_ID_FLAG_SJ = 173,
    BITMAP_ID_FLAG_SK = 174,
    BITMAP_ID_FLAG_SL = 175,
    BITMAP_ID_FLAG_SM = 176,
    BITMAP_ID_FLAG_SN = 177,
    BITMAP_ID_FLAG_SO = 178,
    BITMAP_ID_FLAG_SR = 179,
    BITMAP_ID_FLAG_SS = 180,
    BITMAP_ID_FLAG_ST = 181,
    BITMAP_ID_FLAG_SV = 182,
    BITMAP_ID_FLAG_SX = 183,
    BITMAP_ID_FLAG_SY = 184,
    BITMAP_ID_FLAG_SZ = 185,
    BITMAP_ID_FLAG_TC = 186,
    BITMAP_ID_FLAG_TD = 187,
    BITMAP_ID_FLAG_TF = 188,
    BITMAP_ID_FLAG_TG = 189,
    BITMAP_ID_FLAG_TH = 190,
    BITMAP_ID_FLAG_TJ = 191,
    BITMAP_ID_FLAG_TK = 192,
    BITMAP_ID_FLAG_TL = 193,
    BITMAP_ID_FLAG_TM = 194,
    BITMAP_ID_FLAG_TN = 195,
    BITMAP_ID_FLAG_TO = 196,
    BITMAP_ID_FLAG_TR = 197,
    BITMAP_ID_FLAG_TT = 198,
    BITMAP_ID_FLAG_TV = 199,
    BITMAP_ID_FLAG_TW = 200,
    BITMAP_ID_FLAG_TZ = 201,
    BITMAP_ID_FLAG_UA = 202,
    BITMAP_ID_FLAG_UG = 203,
    BITMAP_ID_FLAG_UM = 204,
    BITMAP_ID_FLAG_US = 205,
    BITMAP_ID_FLAG_UY = 206,
    BITMAP_ID_FLAG_UZ = 207,
    BITMAP_ID_FLAG_VA = 208,
    BITMAP_ID_FLAG_VC = 209,
    BITMAP_ID_FLAG_VE = 210,
    BITMAP_ID_FLAG_VG = 211,
    BITMAP_ID_FLAG_VI = 212,
    BITMAP_ID_FLAG_VN = 213,
    BITMAP_ID_FLAG_VU = 214,
    BITMAP_ID_FLAG_WF = 215,
    BITMAP_ID_FLAG_WS = 216,
    BITMAP_ID_FLAG_XK = 217,
    BITMAP_ID_FLAG_YE = 218,
    BITMAP_ID_FLAG_YT = 219,
    BITMAP_ID_FLAG_ZA = 220,
    BITMAP_ID_FLAG_ZM = 221,
    BITMAP_ID_FLAG_ZW = 222,
    BITMAP_ID_FLAG_AD = 223,
    BITMAP_ID_FLAG_AE = 224,
    BITMAP_ID_FLAG_AF = 225,
    BITMAP_ID_FLAG_AG = 226,
    BITMAP_ID_FLAG_AI = 227,
    BITMAP_ID_FLAG_AL = 228,
    BITMAP_ID_FLAG_AM = 229,
    BITMAP_ID_FLAG_AO = 230,
    BITMAP_ID_FLAG_AQ = 231,
    BITMAP_ID_FLAG_AR = 232,
    BITMAP_ID_FLAG_AS = 233,
    BITMAP_ID_FLAG_AT = 234,
    BITMAP_ID_FLAG_AU = 235,
    BITMAP_ID_FLAG_AW = 236,
    BITMAP_ID_FLAG_AX = 237,
    BITMAP_ID_FLAG_AZ = 238,
    BITMAP_ID_FLAG_BA = 239,
    BITMAP_ID_FLAG_BB = 240,
    BITMAP_ID_FLAG_BD = 241,
    BITMAP_ID_FLAG_BE = 242,
    BITMAP_ID_FLAG_BF = 243,
    BITMAP_ID_FLAG_BG = 244,
    BITMAP_ID_FLAG_BH = 245,
    BITMAP_ID_FLAG_BI = 246,
    BITMAP_ID_FLAG_BJ = 247,
    BITMAP_ID_FLAG_BL = 248,
    BITMAP_ID_FLAG_BM = 249,
    BITMAP_ID_FLAG_BN = 250,
    BITMAP_ID_FLAG_BO = 251,
    BITMAP_ID_FLAG_BQ = 252,
    BITMAP_ID_FLAG_BR = 253,
    BITMAP_ID_FLAG_BS = 254,
    BITMAP_ID_FLAG_BT = 255,
    BITMAP_ID_UNCHECKED = 256,
    BITMAP_ID_CHECKED = 257
};

enum StylesEnum {
    STYLE_ID_NONE = 0,
    STYLE_ID_DEFAULT = 1,
    STYLE_ID_MESSAGE_BOX_INFO = 2,
    STYLE_ID_MESSAGE_BOX_ERROR = 3,
    STYLE_ID_MESSAGE_BOX_ERROR_BUTTON = 4,
    STYLE_ID_DROP_DOWN_LIST_POPUP_CONTAINER = 5,
    STYLE_ID_DROP_DOWN_LIST_POPUP_ITEM = 7,
    STYLE_ID_DROP_DOWN_LIST_DISABLED_POPUP_ITEM = 9,
    STYLE_ID_MESSAGE_BOX_QUESTION_MESSAGE = 11,
    STYLE_ID_MESSAGE_BOX_QUESTION_CONTAINER = 12,
    STYLE_ID_MESSAGE_BOX_QUESTION_BUTTON = 13,
    STYLE_ID_SLIDER = 15,
    STYLE_ID_SWITCH = 16,
    STYLE_ID_DROP_DOWN_LIST = 17,
    STYLE_ID_ROLLER = 18,
    STYLE_ID_ROLLER_WIDGET_SELECTED_VALUE = 19,
    STYLE_ID_ROLLER_WIDGET_UNSELECTED_VALUE = 20,
    STYLE_ID_BACKGROUND = 21,
    STYLE_ID_BUTTON = 22,
    STYLE_ID_BUTTON_DISABLED = 23,
    STYLE_ID_MESSAGE_BOX_INFO_BUTTON = 25,
    STYLE_ID_ROLLER_SELECTED_VALUE = 26,
    STYLE_ID_ROLLER_UNSELECTED_VALUE = 27
};

enum ThemesEnum {
    THEME_ID_DEFAULT = 0
};

enum ColorsEnum {
    COLOR_ID_TRANSPARENT = 65535,
    COLOR_ID_BACKGROUND = 0,
    COLOR_ID_BACKDROP = 1,
    COLOR_ID_TEXT = 2,
    COLOR_ID_TEXT_INACTIVE = 3,
    COLOR_ID_DARK_TEXT = 4,
    COLOR_ID_BORDER = 5,
    COLOR_ID_ACTIVE_BACKGROUND = 6,
    COLOR_ID_BUTTON_TEXT = 7,
    COLOR_ID_BUTTON_BACKGROUND = 8,
    COLOR_ID_BUTTON_ACTIVE_BACKGROUND = 9,
    COLOR_ID_BUTTON_BORDER = 10,
    COLOR_ID_BUTTON_DISABLED_TEXT = 11,
    COLOR_ID_BUTTON_DISABLED_BACKGROUND = 12,
    COLOR_ID_BUTTON_DISABLED_BORDER = 13,
    COLOR_ID_ERROR = 14,
    COLOR_ID_SWITCH_WIDGET_COLOR = 15,
    COLOR_ID_SWITCH_WIDGET_BACKGROUND_ON = 16,
    COLOR_ID_SWITCH_WIDGET_BACKGROUND_OFF = 17,
    COLOR_ID_SWITCH_WIDGET_BORDER = 18,
    COLOR_ID_SLIDER_WIDGET_COLOR = 19,
    COLOR_ID_SLIDER_WIDGET_BACKGROUND = 20,
    COLOR_ID_DROP_DOWN_LIST_COLOR = 21,
    COLOR_ID_DROP_DOWN_LIST_COLOR_DISABLED = 22,
    COLOR_ID_DROP_DOWN_LIST_BACKGROUND = 23,
    COLOR_ID_DROP_DOWN_LIST_BORDER = 24,
    COLOR_ID_DROP_DOWN_LIST_ACTIVE_BACKGROUND = 25,
    COLOR_ID_TEXT_INPUT_COLOR = 26,
    COLOR_ID_TEXT_INPUT_COLOR_DISABLED = 27,
    COLOR_ID_TEXT_INPUT_BACKGROUND = 28,
    COLOR_ID_TEXT_INPUT_ACTIVE_BACKGROUND = 29,
    COLOR_ID_TEXT_INPUT_BORDER = 30,
	COLOR_ID_CUSTOM_000000 = 31,
	COLOR_ID_CUSTOM_FFFFFF = 32,
	COLOR_ID_CUSTOM_C0C0C0 = 33,
	COLOR_ID_CUSTOM_808080 = 34,
	COLOR_ID_CUSTOM_D5D5D5 = 35,
	COLOR_ID_CUSTOM_FFEEC7 = 36,
	COLOR_ID_CUSTOM_999 = 37,
	COLOR_ID_CUSTOM_333 = 38,
	COLOR_ID_CUSTOM_ED = 39,
	COLOR_ID_CUSTOM_HITE = 40,
	COLOR_ID_CUSTOM_FFB900 = 41,
	COLOR_ID_CUSTOM_000FFF = 42,
	COLOR_ID_CUSTOM_FF0000 = 43
};

enum PagesEnum {
    PAGE_ID_NONE = 0,
    PAGE_ID_MAIN = 1,
    PAGE_ID_KEYBOARD = 2,
    PAGE_ID_NUMERIC_KEYPAD = 3,
    PAGE_ID_BASIC_DEMO = 4,
    PAGE_ID_INPUT_DEMO = 5,
    PAGE_ID_LIST_DEMO = 6,
    PAGE_ID_GRID1_DEMO = 7,
    PAGE_ID_GRID2_DEMO = 8,
    PAGE_ID_VISUALISER_DEMO = 9
};

extern const uint8_t assets[345805];

} // namespace gui
} // namespace eez
