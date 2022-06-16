#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 577
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 192
#define ALIAS_COUNT 0
#define TOKEN_COUNT 114
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 16

enum {
  sym__user_defined_word = 1,
  sym_implementor_name = 2,
  sym_alphabet_name = 3,
  sym_integer = 4,
  sym_character_string = 5,
  sym_comment_entry = 6,
  anon_sym_IDENTIFICATIONDIVISION_DOT = 7,
  anon_sym_AUTHOR_DOT = 8,
  anon_sym_INSTALLATION_DOT = 9,
  anon_sym_DATE_DASHWRITTEN_DOT = 10,
  anon_sym_DATE_DASHCOMPILED_DOT = 11,
  anon_sym_SECURITY_DOT = 12,
  anon_sym_PROGRAM_DASHID_DOT = 13,
  anon_sym_COMMON = 14,
  anon_sym_INITIAL = 15,
  anon_sym_PROGRAM = 16,
  anon_sym_ENVIRONMENTDIVISION_DOT = 17,
  sym_source_computer_entry = 18,
  sym_object_computer_entry = 19,
  sym_special_names_entry = 20,
  anon_sym_CONFIGURATIONSECTION_DOT = 21,
  anon_sym_SOURCE_DASHCOMPUTER_DOT = 22,
  anon_sym_OBJECT_DASHCOMPUTER_DOT = 23,
  anon_sym_SPECIAL_DASHNAMES_DOT = 24,
  sym__external_file_reference = 25,
  anon_sym_EXTERNAL = 26,
  anon_sym_DYNAMIC = 27,
  anon_sym_DISC = 28,
  anon_sym_FROM = 29,
  anon_sym_KEYBOARD = 30,
  anon_sym_DISPLAY = 31,
  anon_sym_PRINTER = 32,
  anon_sym_PRINTER_DASH1 = 33,
  anon_sym_LINEADVANCING = 34,
  anon_sym_MULTIPLE = 35,
  anon_sym_REEL = 36,
  anon_sym_UNIT = 37,
  anon_sym_FILE = 38,
  anon_sym_PADDING = 39,
  anon_sym_CHARACTER = 40,
  anon_sym_STATUS = 41,
  anon_sym_SEQUENTIAL = 42,
  anon_sym_RECORDDELIMITER = 43,
  anon_sym_STANDARD_DASH1 = 44,
  anon_sym_character_DASHstring = 45,
  anon_sym_ORGANIZATION = 46,
  anon_sym_ACCESS = 47,
  anon_sym_MODE = 48,
  anon_sym_RELATIVE = 49,
  anon_sym_KEY = 50,
  anon_sym_RANDOM = 51,
  anon_sym_DISK = 52,
  anon_sym_DISKFROM = 53,
  anon_sym_RESERVE = 54,
  anon_sym_SELECT = 55,
  anon_sym_OPTIONAL = 56,
  anon_sym_AREA = 57,
  anon_sym_AREAS = 58,
  anon_sym_FILESTATUSIS = 59,
  anon_sym_INDEXED = 60,
  anon_sym_RECORD = 61,
  anon_sym_WITH = 62,
  anon_sym_DUPLICATES = 63,
  anon_sym_ALTERNATE = 64,
  anon_sym_RERUN = 65,
  anon_sym_ON = 66,
  anon_sym_SAME = 67,
  anon_sym_SORT = 68,
  anon_sym_SORT_DASHMERGE = 69,
  anon_sym_FOR = 70,
  anon_sym_TAPE = 71,
  anon_sym_CONTAINS = 72,
  anon_sym_POSITION = 73,
  anon_sym_REAL = 74,
  anon_sym_END = 75,
  anon_sym_OF = 76,
  anon_sym_EVERY = 77,
  anon_sym_RECORDS = 78,
  anon_sym_CLOCK_DASHUNITS = 79,
  anon_sym_condition_DASHname = 80,
  anon_sym_INPUT_DASHOUTPUTSECTION_DOT = 81,
  anon_sym_FILE_DASHCONTROL_DOT = 82,
  anon_sym_I_DASHO_DASHCONTROL_DOT = 83,
  anon_sym_DATADIVISION_DOT = 84,
  anon_sym_FILESECTION_DOT = 85,
  anon_sym_ARE = 86,
  sym__IS = 87,
  anon_sym_ASSIGN = 88,
  anon_sym_TO = 89,
  anon_sym_GLOBAL = 90,
  anon_sym_LINES = 91,
  anon_sym_AT = 92,
  anon_sym_TOP = 93,
  anon_sym_BOTTOM = 94,
  anon_sym_CODE_DASHSET = 95,
  anon_sym_FD = 96,
  anon_sym_BLOCK = 97,
  anon_sym_CHARACTERS = 98,
  anon_sym_VARYING = 99,
  anon_sym_IN = 100,
  anon_sym_SIZE = 101,
  anon_sym_DEPENDING = 102,
  anon_sym_LABEL = 103,
  anon_sym_STANDARD = 104,
  anon_sym_OMITTED = 105,
  anon_sym_VALUE = 106,
  anon_sym_DATA = 107,
  anon_sym_LINAGE = 108,
  anon_sym_FOOTING = 109,
  sym_working_storage_section = 110,
  sym_linkage_section = 111,
  sym_communication_section = 112,
  sym_report_section = 113,
  sym_source_file = 114,
  sym_program_name = 115,
  sym_data_name = 116,
  sym_file_name = 117,
  sym_literal = 118,
  sym_identification_division = 119,
  sym__identification_division_author = 120,
  sym__identification_division_installation = 121,
  sym__identification_division_date_written = 122,
  sym__identification_division_date_compiled = 123,
  sym__identification_division_security = 124,
  sym__identification_division_program_id = 125,
  sym_environment_division = 126,
  sym_configuration_section = 127,
  sym__file_reference = 128,
  sym__external_or_dynamic = 129,
  sym_file_control_entry = 130,
  sym__record_sequential_file_assign = 131,
  sym__record_sequential_file_assign_destination = 132,
  sym__record_sequential_file_type = 133,
  sym__line_advancing = 134,
  sym__record_sequential_file_padding = 135,
  sym__file_status = 136,
  sym__record_sequential_file = 137,
  sym__record_sequential_file_record_access_mode = 138,
  sym__record_sequential_file_record_delimiter = 139,
  sym__record_sequential_file_organization = 140,
  sym__ACCESS_MODE_IS = 141,
  sym__RELATIVE_KEY_IS = 142,
  sym__relative_file_access_mode = 143,
  sym__relative_file_assign = 144,
  sym__relative_file_reserve = 145,
  sym__select = 146,
  sym__AREA = 147,
  sym__relative_file = 148,
  sym__indexed_file_assign = 149,
  sym__indexed_file_reserve = 150,
  sym__indexed_file_organization = 151,
  sym__indexed_file_access_mode = 152,
  sym__RECORD_KEY_IS = 153,
  sym__WITH_DUPLICATES = 154,
  sym__record_key = 155,
  sym__alternate_record_key = 156,
  sym__indexed_file = 157,
  sym__sort_merge_file = 158,
  sym_input_output_control_entry = 159,
  sym__input_output_control_rerun_entry = 160,
  sym__input_output_control_same_entry = 161,
  sym__input_output_control_multiple_file_entry = 162,
  sym__REAL_OR_UNIT = 163,
  sym__END_OF = 164,
  sym__every = 165,
  sym_input_output_section = 166,
  sym_data_division = 167,
  sym_file_section = 168,
  sym__file_description_entry = 169,
  sym__RECORDS = 170,
  sym__ASSIGN_TO = 171,
  sym__IS_EXTERNAL = 172,
  sym__IS_GLOBAL = 173,
  sym__LINES_AT_TOP = 174,
  sym__LINES_AT_BOTTOM = 175,
  sym__CODE_SET_IS = 176,
  sym__record_sequential_file_description = 177,
  sym__record_sequential_file_block_description = 178,
  sym__record_sequential_file_record_description = 179,
  sym__ansi85_contains = 180,
  sym__std_contains = 181,
  sym__record_sequential_file_label_description = 182,
  sym__record_sequential_file_value_description = 183,
  sym__record_sequential_file_data_description = 184,
  sym__record_sequential_file_linage_description = 185,
  aux_sym__input_output_control_same_entry_repeat1 = 186,
  aux_sym__input_output_control_multiple_file_entry_repeat1 = 187,
  aux_sym_input_output_section_repeat1 = 188,
  aux_sym_input_output_section_repeat2 = 189,
  aux_sym_file_section_repeat1 = 190,
  aux_sym__record_sequential_file_value_description_repeat1 = 191,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__user_defined_word] = "_user_defined_word",
  [sym_implementor_name] = "implementor_name",
  [sym_alphabet_name] = "alphabet_name",
  [sym_integer] = "integer",
  [sym_character_string] = "character_string",
  [sym_comment_entry] = "comment_entry",
  [anon_sym_IDENTIFICATIONDIVISION_DOT] = "IDENTIFICATION DIVISION.",
  [anon_sym_AUTHOR_DOT] = "AUTHOR.",
  [anon_sym_INSTALLATION_DOT] = "INSTALLATION.",
  [anon_sym_DATE_DASHWRITTEN_DOT] = "DATE-WRITTEN.",
  [anon_sym_DATE_DASHCOMPILED_DOT] = "DATE-COMPILED.",
  [anon_sym_SECURITY_DOT] = "SECURITY.",
  [anon_sym_PROGRAM_DASHID_DOT] = "PROGRAM-ID.",
  [anon_sym_COMMON] = "COMMON",
  [anon_sym_INITIAL] = "INITIAL",
  [anon_sym_PROGRAM] = "PROGRAM",
  [anon_sym_ENVIRONMENTDIVISION_DOT] = "ENVIRONMENT DIVISION.",
  [sym_source_computer_entry] = "source_computer_entry",
  [sym_object_computer_entry] = "object_computer_entry",
  [sym_special_names_entry] = "special_names_entry",
  [anon_sym_CONFIGURATIONSECTION_DOT] = "CONFIGURATION SECTION.",
  [anon_sym_SOURCE_DASHCOMPUTER_DOT] = "SOURCE-COMPUTER.",
  [anon_sym_OBJECT_DASHCOMPUTER_DOT] = "OBJECT-COMPUTER.",
  [anon_sym_SPECIAL_DASHNAMES_DOT] = "SPECIAL-NAMES.",
  [sym__external_file_reference] = "_external_file_reference",
  [anon_sym_EXTERNAL] = "EXTERNAL",
  [anon_sym_DYNAMIC] = "DYNAMIC",
  [anon_sym_DISC] = "DISC",
  [anon_sym_FROM] = "FROM",
  [anon_sym_KEYBOARD] = "KEYBOARD",
  [anon_sym_DISPLAY] = "DISPLAY",
  [anon_sym_PRINTER] = "PRINTER",
  [anon_sym_PRINTER_DASH1] = "PRINTER-1",
  [anon_sym_LINEADVANCING] = "LINE ADVANCING",
  [anon_sym_MULTIPLE] = "MULTIPLE",
  [anon_sym_REEL] = "REEL",
  [anon_sym_UNIT] = "UNIT",
  [anon_sym_FILE] = "FILE",
  [anon_sym_PADDING] = "PADDING",
  [anon_sym_CHARACTER] = "CHARACTER",
  [anon_sym_STATUS] = "STATUS",
  [anon_sym_SEQUENTIAL] = "SEQUENTIAL",
  [anon_sym_RECORDDELIMITER] = "RECORD DELIMITER",
  [anon_sym_STANDARD_DASH1] = "STANDARD-1",
  [anon_sym_character_DASHstring] = "character-string",
  [anon_sym_ORGANIZATION] = "ORGANIZATION",
  [anon_sym_ACCESS] = "ACCESS",
  [anon_sym_MODE] = "MODE",
  [anon_sym_RELATIVE] = "RELATIVE",
  [anon_sym_KEY] = "KEY",
  [anon_sym_RANDOM] = "RANDOM",
  [anon_sym_DISK] = "DISK",
  [anon_sym_DISKFROM] = "DISK FROM",
  [anon_sym_RESERVE] = "RESERVE",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_OPTIONAL] = "OPTIONAL",
  [anon_sym_AREA] = "AREA",
  [anon_sym_AREAS] = "AREAS",
  [anon_sym_FILESTATUSIS] = "FILE STATUS IS",
  [anon_sym_INDEXED] = "INDEXED",
  [anon_sym_RECORD] = "RECORD",
  [anon_sym_WITH] = "WITH",
  [anon_sym_DUPLICATES] = "DUPLICATES",
  [anon_sym_ALTERNATE] = "ALTERNATE",
  [anon_sym_RERUN] = "RERUN",
  [anon_sym_ON] = "ON",
  [anon_sym_SAME] = "SAME",
  [anon_sym_SORT] = "SORT",
  [anon_sym_SORT_DASHMERGE] = "SORT-MERGE",
  [anon_sym_FOR] = "FOR",
  [anon_sym_TAPE] = "TAPE",
  [anon_sym_CONTAINS] = "CONTAINS",
  [anon_sym_POSITION] = "POSITION",
  [anon_sym_REAL] = "REAL",
  [anon_sym_END] = "END",
  [anon_sym_OF] = "OF",
  [anon_sym_EVERY] = "EVERY",
  [anon_sym_RECORDS] = "RECORDS",
  [anon_sym_CLOCK_DASHUNITS] = "CLOCK-UNITS",
  [anon_sym_condition_DASHname] = "condition-name",
  [anon_sym_INPUT_DASHOUTPUTSECTION_DOT] = "INPUT-OUTPUT SECTION.",
  [anon_sym_FILE_DASHCONTROL_DOT] = "FILE-CONTROL.",
  [anon_sym_I_DASHO_DASHCONTROL_DOT] = "I-O-CONTROL.",
  [anon_sym_DATADIVISION_DOT] = "DATA DIVISION.",
  [anon_sym_FILESECTION_DOT] = "FILE SECTION.",
  [anon_sym_ARE] = "ARE",
  [sym__IS] = "_IS",
  [anon_sym_ASSIGN] = "ASSIGN",
  [anon_sym_TO] = "TO",
  [anon_sym_GLOBAL] = "GLOBAL",
  [anon_sym_LINES] = "LINES",
  [anon_sym_AT] = "AT",
  [anon_sym_TOP] = "TOP",
  [anon_sym_BOTTOM] = "BOTTOM",
  [anon_sym_CODE_DASHSET] = "CODE-SET",
  [anon_sym_FD] = "FD",
  [anon_sym_BLOCK] = "BLOCK",
  [anon_sym_CHARACTERS] = "CHARACTERS",
  [anon_sym_VARYING] = "VARYING",
  [anon_sym_IN] = "IN",
  [anon_sym_SIZE] = "SIZE",
  [anon_sym_DEPENDING] = "DEPENDING",
  [anon_sym_LABEL] = "LABEL",
  [anon_sym_STANDARD] = "STANDARD",
  [anon_sym_OMITTED] = "OMITTED",
  [anon_sym_VALUE] = "VALUE",
  [anon_sym_DATA] = "DATA",
  [anon_sym_LINAGE] = "LINAGE",
  [anon_sym_FOOTING] = "FOOTING",
  [sym_working_storage_section] = "working_storage_section",
  [sym_linkage_section] = "linkage_section",
  [sym_communication_section] = "communication_section",
  [sym_report_section] = "report_section",
  [sym_source_file] = "source_file",
  [sym_program_name] = "program_name",
  [sym_data_name] = "data_name",
  [sym_file_name] = "file_name",
  [sym_literal] = "literal",
  [sym_identification_division] = "identification_division",
  [sym__identification_division_author] = "_identification_division_author",
  [sym__identification_division_installation] = "_identification_division_installation",
  [sym__identification_division_date_written] = "_identification_division_date_written",
  [sym__identification_division_date_compiled] = "_identification_division_date_compiled",
  [sym__identification_division_security] = "_identification_division_security",
  [sym__identification_division_program_id] = "_identification_division_program_id",
  [sym_environment_division] = "environment_division",
  [sym_configuration_section] = "configuration_section",
  [sym__file_reference] = "_file_reference",
  [sym__external_or_dynamic] = "_external_or_dynamic",
  [sym_file_control_entry] = "file_control_entry",
  [sym__record_sequential_file_assign] = "_record_sequential_file_assign",
  [sym__record_sequential_file_assign_destination] = "_record_sequential_file_assign_destination",
  [sym__record_sequential_file_type] = "_record_sequential_file_type",
  [sym__line_advancing] = "_line_advancing",
  [sym__record_sequential_file_padding] = "_record_sequential_file_padding",
  [sym__file_status] = "_file_status",
  [sym__record_sequential_file] = "_record_sequential_file",
  [sym__record_sequential_file_record_access_mode] = "_record_sequential_file_record_access_mode",
  [sym__record_sequential_file_record_delimiter] = "_record_sequential_file_record_delimiter",
  [sym__record_sequential_file_organization] = "_record_sequential_file_organization",
  [sym__ACCESS_MODE_IS] = "_ACCESS_MODE_IS",
  [sym__RELATIVE_KEY_IS] = "_RELATIVE_KEY_IS",
  [sym__relative_file_access_mode] = "_relative_file_access_mode",
  [sym__relative_file_assign] = "_relative_file_assign",
  [sym__relative_file_reserve] = "_relative_file_reserve",
  [sym__select] = "_select",
  [sym__AREA] = "_AREA",
  [sym__relative_file] = "_relative_file",
  [sym__indexed_file_assign] = "_indexed_file_assign",
  [sym__indexed_file_reserve] = "_indexed_file_reserve",
  [sym__indexed_file_organization] = "_indexed_file_organization",
  [sym__indexed_file_access_mode] = "_indexed_file_access_mode",
  [sym__RECORD_KEY_IS] = "_RECORD_KEY_IS",
  [sym__WITH_DUPLICATES] = "_WITH_DUPLICATES",
  [sym__record_key] = "_record_key",
  [sym__alternate_record_key] = "_alternate_record_key",
  [sym__indexed_file] = "_indexed_file",
  [sym__sort_merge_file] = "_sort_merge_file",
  [sym_input_output_control_entry] = "input_output_control_entry",
  [sym__input_output_control_rerun_entry] = "_input_output_control_rerun_entry",
  [sym__input_output_control_same_entry] = "_input_output_control_same_entry",
  [sym__input_output_control_multiple_file_entry] = "_input_output_control_multiple_file_entry",
  [sym__REAL_OR_UNIT] = "_REAL_OR_UNIT",
  [sym__END_OF] = "_END_OF",
  [sym__every] = "_every",
  [sym_input_output_section] = "input_output_section",
  [sym_data_division] = "data_division",
  [sym_file_section] = "file_section",
  [sym__file_description_entry] = "_file_description_entry",
  [sym__RECORDS] = "_RECORDS",
  [sym__ASSIGN_TO] = "_ASSIGN_TO",
  [sym__IS_EXTERNAL] = "_IS_EXTERNAL",
  [sym__IS_GLOBAL] = "_IS_GLOBAL",
  [sym__LINES_AT_TOP] = "_LINES_AT_TOP",
  [sym__LINES_AT_BOTTOM] = "_LINES_AT_BOTTOM",
  [sym__CODE_SET_IS] = "_CODE_SET_IS",
  [sym__record_sequential_file_description] = "_record_sequential_file_description",
  [sym__record_sequential_file_block_description] = "_record_sequential_file_block_description",
  [sym__record_sequential_file_record_description] = "_record_sequential_file_record_description",
  [sym__ansi85_contains] = "_ansi85_contains",
  [sym__std_contains] = "_std_contains",
  [sym__record_sequential_file_label_description] = "_record_sequential_file_label_description",
  [sym__record_sequential_file_value_description] = "_record_sequential_file_value_description",
  [sym__record_sequential_file_data_description] = "_record_sequential_file_data_description",
  [sym__record_sequential_file_linage_description] = "_record_sequential_file_linage_description",
  [aux_sym__input_output_control_same_entry_repeat1] = "_input_output_control_same_entry_repeat1",
  [aux_sym__input_output_control_multiple_file_entry_repeat1] = "_input_output_control_multiple_file_entry_repeat1",
  [aux_sym_input_output_section_repeat1] = "input_output_section_repeat1",
  [aux_sym_input_output_section_repeat2] = "input_output_section_repeat2",
  [aux_sym_file_section_repeat1] = "file_section_repeat1",
  [aux_sym__record_sequential_file_value_description_repeat1] = "_record_sequential_file_value_description_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__user_defined_word] = sym__user_defined_word,
  [sym_implementor_name] = sym_implementor_name,
  [sym_alphabet_name] = sym_alphabet_name,
  [sym_integer] = sym_integer,
  [sym_character_string] = sym_character_string,
  [sym_comment_entry] = sym_comment_entry,
  [anon_sym_IDENTIFICATIONDIVISION_DOT] = anon_sym_IDENTIFICATIONDIVISION_DOT,
  [anon_sym_AUTHOR_DOT] = anon_sym_AUTHOR_DOT,
  [anon_sym_INSTALLATION_DOT] = anon_sym_INSTALLATION_DOT,
  [anon_sym_DATE_DASHWRITTEN_DOT] = anon_sym_DATE_DASHWRITTEN_DOT,
  [anon_sym_DATE_DASHCOMPILED_DOT] = anon_sym_DATE_DASHCOMPILED_DOT,
  [anon_sym_SECURITY_DOT] = anon_sym_SECURITY_DOT,
  [anon_sym_PROGRAM_DASHID_DOT] = anon_sym_PROGRAM_DASHID_DOT,
  [anon_sym_COMMON] = anon_sym_COMMON,
  [anon_sym_INITIAL] = anon_sym_INITIAL,
  [anon_sym_PROGRAM] = anon_sym_PROGRAM,
  [anon_sym_ENVIRONMENTDIVISION_DOT] = anon_sym_ENVIRONMENTDIVISION_DOT,
  [sym_source_computer_entry] = sym_source_computer_entry,
  [sym_object_computer_entry] = sym_object_computer_entry,
  [sym_special_names_entry] = sym_special_names_entry,
  [anon_sym_CONFIGURATIONSECTION_DOT] = anon_sym_CONFIGURATIONSECTION_DOT,
  [anon_sym_SOURCE_DASHCOMPUTER_DOT] = anon_sym_SOURCE_DASHCOMPUTER_DOT,
  [anon_sym_OBJECT_DASHCOMPUTER_DOT] = anon_sym_OBJECT_DASHCOMPUTER_DOT,
  [anon_sym_SPECIAL_DASHNAMES_DOT] = anon_sym_SPECIAL_DASHNAMES_DOT,
  [sym__external_file_reference] = sym__external_file_reference,
  [anon_sym_EXTERNAL] = anon_sym_EXTERNAL,
  [anon_sym_DYNAMIC] = anon_sym_DYNAMIC,
  [anon_sym_DISC] = anon_sym_DISC,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_KEYBOARD] = anon_sym_KEYBOARD,
  [anon_sym_DISPLAY] = anon_sym_DISPLAY,
  [anon_sym_PRINTER] = anon_sym_PRINTER,
  [anon_sym_PRINTER_DASH1] = anon_sym_PRINTER_DASH1,
  [anon_sym_LINEADVANCING] = anon_sym_LINEADVANCING,
  [anon_sym_MULTIPLE] = anon_sym_MULTIPLE,
  [anon_sym_REEL] = anon_sym_REEL,
  [anon_sym_UNIT] = anon_sym_UNIT,
  [anon_sym_FILE] = anon_sym_FILE,
  [anon_sym_PADDING] = anon_sym_PADDING,
  [anon_sym_CHARACTER] = anon_sym_CHARACTER,
  [anon_sym_STATUS] = anon_sym_STATUS,
  [anon_sym_SEQUENTIAL] = anon_sym_SEQUENTIAL,
  [anon_sym_RECORDDELIMITER] = anon_sym_RECORDDELIMITER,
  [anon_sym_STANDARD_DASH1] = anon_sym_STANDARD_DASH1,
  [anon_sym_character_DASHstring] = anon_sym_character_DASHstring,
  [anon_sym_ORGANIZATION] = anon_sym_ORGANIZATION,
  [anon_sym_ACCESS] = anon_sym_ACCESS,
  [anon_sym_MODE] = anon_sym_MODE,
  [anon_sym_RELATIVE] = anon_sym_RELATIVE,
  [anon_sym_KEY] = anon_sym_KEY,
  [anon_sym_RANDOM] = anon_sym_RANDOM,
  [anon_sym_DISK] = anon_sym_DISK,
  [anon_sym_DISKFROM] = anon_sym_DISKFROM,
  [anon_sym_RESERVE] = anon_sym_RESERVE,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_OPTIONAL] = anon_sym_OPTIONAL,
  [anon_sym_AREA] = anon_sym_AREA,
  [anon_sym_AREAS] = anon_sym_AREAS,
  [anon_sym_FILESTATUSIS] = anon_sym_FILESTATUSIS,
  [anon_sym_INDEXED] = anon_sym_INDEXED,
  [anon_sym_RECORD] = anon_sym_RECORD,
  [anon_sym_WITH] = anon_sym_WITH,
  [anon_sym_DUPLICATES] = anon_sym_DUPLICATES,
  [anon_sym_ALTERNATE] = anon_sym_ALTERNATE,
  [anon_sym_RERUN] = anon_sym_RERUN,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_SAME] = anon_sym_SAME,
  [anon_sym_SORT] = anon_sym_SORT,
  [anon_sym_SORT_DASHMERGE] = anon_sym_SORT_DASHMERGE,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_TAPE] = anon_sym_TAPE,
  [anon_sym_CONTAINS] = anon_sym_CONTAINS,
  [anon_sym_POSITION] = anon_sym_POSITION,
  [anon_sym_REAL] = anon_sym_REAL,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_OF] = anon_sym_OF,
  [anon_sym_EVERY] = anon_sym_EVERY,
  [anon_sym_RECORDS] = anon_sym_RECORDS,
  [anon_sym_CLOCK_DASHUNITS] = anon_sym_CLOCK_DASHUNITS,
  [anon_sym_condition_DASHname] = anon_sym_condition_DASHname,
  [anon_sym_INPUT_DASHOUTPUTSECTION_DOT] = anon_sym_INPUT_DASHOUTPUTSECTION_DOT,
  [anon_sym_FILE_DASHCONTROL_DOT] = anon_sym_FILE_DASHCONTROL_DOT,
  [anon_sym_I_DASHO_DASHCONTROL_DOT] = anon_sym_I_DASHO_DASHCONTROL_DOT,
  [anon_sym_DATADIVISION_DOT] = anon_sym_DATADIVISION_DOT,
  [anon_sym_FILESECTION_DOT] = anon_sym_FILESECTION_DOT,
  [anon_sym_ARE] = anon_sym_ARE,
  [sym__IS] = sym__IS,
  [anon_sym_ASSIGN] = anon_sym_ASSIGN,
  [anon_sym_TO] = anon_sym_TO,
  [anon_sym_GLOBAL] = anon_sym_GLOBAL,
  [anon_sym_LINES] = anon_sym_LINES,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_TOP] = anon_sym_TOP,
  [anon_sym_BOTTOM] = anon_sym_BOTTOM,
  [anon_sym_CODE_DASHSET] = anon_sym_CODE_DASHSET,
  [anon_sym_FD] = anon_sym_FD,
  [anon_sym_BLOCK] = anon_sym_BLOCK,
  [anon_sym_CHARACTERS] = anon_sym_CHARACTERS,
  [anon_sym_VARYING] = anon_sym_VARYING,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_SIZE] = anon_sym_SIZE,
  [anon_sym_DEPENDING] = anon_sym_DEPENDING,
  [anon_sym_LABEL] = anon_sym_LABEL,
  [anon_sym_STANDARD] = anon_sym_STANDARD,
  [anon_sym_OMITTED] = anon_sym_OMITTED,
  [anon_sym_VALUE] = anon_sym_VALUE,
  [anon_sym_DATA] = anon_sym_DATA,
  [anon_sym_LINAGE] = anon_sym_LINAGE,
  [anon_sym_FOOTING] = anon_sym_FOOTING,
  [sym_working_storage_section] = sym_working_storage_section,
  [sym_linkage_section] = sym_linkage_section,
  [sym_communication_section] = sym_communication_section,
  [sym_report_section] = sym_report_section,
  [sym_source_file] = sym_source_file,
  [sym_program_name] = sym_program_name,
  [sym_data_name] = sym_data_name,
  [sym_file_name] = sym_file_name,
  [sym_literal] = sym_literal,
  [sym_identification_division] = sym_identification_division,
  [sym__identification_division_author] = sym__identification_division_author,
  [sym__identification_division_installation] = sym__identification_division_installation,
  [sym__identification_division_date_written] = sym__identification_division_date_written,
  [sym__identification_division_date_compiled] = sym__identification_division_date_compiled,
  [sym__identification_division_security] = sym__identification_division_security,
  [sym__identification_division_program_id] = sym__identification_division_program_id,
  [sym_environment_division] = sym_environment_division,
  [sym_configuration_section] = sym_configuration_section,
  [sym__file_reference] = sym__file_reference,
  [sym__external_or_dynamic] = sym__external_or_dynamic,
  [sym_file_control_entry] = sym_file_control_entry,
  [sym__record_sequential_file_assign] = sym__record_sequential_file_assign,
  [sym__record_sequential_file_assign_destination] = sym__record_sequential_file_assign_destination,
  [sym__record_sequential_file_type] = sym__record_sequential_file_type,
  [sym__line_advancing] = sym__line_advancing,
  [sym__record_sequential_file_padding] = sym__record_sequential_file_padding,
  [sym__file_status] = sym__file_status,
  [sym__record_sequential_file] = sym__record_sequential_file,
  [sym__record_sequential_file_record_access_mode] = sym__record_sequential_file_record_access_mode,
  [sym__record_sequential_file_record_delimiter] = sym__record_sequential_file_record_delimiter,
  [sym__record_sequential_file_organization] = sym__record_sequential_file_organization,
  [sym__ACCESS_MODE_IS] = sym__ACCESS_MODE_IS,
  [sym__RELATIVE_KEY_IS] = sym__RELATIVE_KEY_IS,
  [sym__relative_file_access_mode] = sym__relative_file_access_mode,
  [sym__relative_file_assign] = sym__relative_file_assign,
  [sym__relative_file_reserve] = sym__relative_file_reserve,
  [sym__select] = sym__select,
  [sym__AREA] = sym__AREA,
  [sym__relative_file] = sym__relative_file,
  [sym__indexed_file_assign] = sym__indexed_file_assign,
  [sym__indexed_file_reserve] = sym__indexed_file_reserve,
  [sym__indexed_file_organization] = sym__indexed_file_organization,
  [sym__indexed_file_access_mode] = sym__indexed_file_access_mode,
  [sym__RECORD_KEY_IS] = sym__RECORD_KEY_IS,
  [sym__WITH_DUPLICATES] = sym__WITH_DUPLICATES,
  [sym__record_key] = sym__record_key,
  [sym__alternate_record_key] = sym__alternate_record_key,
  [sym__indexed_file] = sym__indexed_file,
  [sym__sort_merge_file] = sym__sort_merge_file,
  [sym_input_output_control_entry] = sym_input_output_control_entry,
  [sym__input_output_control_rerun_entry] = sym__input_output_control_rerun_entry,
  [sym__input_output_control_same_entry] = sym__input_output_control_same_entry,
  [sym__input_output_control_multiple_file_entry] = sym__input_output_control_multiple_file_entry,
  [sym__REAL_OR_UNIT] = sym__REAL_OR_UNIT,
  [sym__END_OF] = sym__END_OF,
  [sym__every] = sym__every,
  [sym_input_output_section] = sym_input_output_section,
  [sym_data_division] = sym_data_division,
  [sym_file_section] = sym_file_section,
  [sym__file_description_entry] = sym__file_description_entry,
  [sym__RECORDS] = sym__RECORDS,
  [sym__ASSIGN_TO] = sym__ASSIGN_TO,
  [sym__IS_EXTERNAL] = sym__IS_EXTERNAL,
  [sym__IS_GLOBAL] = sym__IS_GLOBAL,
  [sym__LINES_AT_TOP] = sym__LINES_AT_TOP,
  [sym__LINES_AT_BOTTOM] = sym__LINES_AT_BOTTOM,
  [sym__CODE_SET_IS] = sym__CODE_SET_IS,
  [sym__record_sequential_file_description] = sym__record_sequential_file_description,
  [sym__record_sequential_file_block_description] = sym__record_sequential_file_block_description,
  [sym__record_sequential_file_record_description] = sym__record_sequential_file_record_description,
  [sym__ansi85_contains] = sym__ansi85_contains,
  [sym__std_contains] = sym__std_contains,
  [sym__record_sequential_file_label_description] = sym__record_sequential_file_label_description,
  [sym__record_sequential_file_value_description] = sym__record_sequential_file_value_description,
  [sym__record_sequential_file_data_description] = sym__record_sequential_file_data_description,
  [sym__record_sequential_file_linage_description] = sym__record_sequential_file_linage_description,
  [aux_sym__input_output_control_same_entry_repeat1] = aux_sym__input_output_control_same_entry_repeat1,
  [aux_sym__input_output_control_multiple_file_entry_repeat1] = aux_sym__input_output_control_multiple_file_entry_repeat1,
  [aux_sym_input_output_section_repeat1] = aux_sym_input_output_section_repeat1,
  [aux_sym_input_output_section_repeat2] = aux_sym_input_output_section_repeat2,
  [aux_sym_file_section_repeat1] = aux_sym_file_section_repeat1,
  [aux_sym__record_sequential_file_value_description_repeat1] = aux_sym__record_sequential_file_value_description_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__user_defined_word] = {
    .visible = false,
    .named = true,
  },
  [sym_implementor_name] = {
    .visible = true,
    .named = true,
  },
  [sym_alphabet_name] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_character_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_entry] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IDENTIFICATIONDIVISION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AUTHOR_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSTALLATION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATE_DASHWRITTEN_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATE_DASHCOMPILED_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SECURITY_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROGRAM_DASHID_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INITIAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENVIRONMENTDIVISION_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_computer_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_object_computer_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_special_names_entry] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CONFIGURATIONSECTION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOURCE_DASHCOMPUTER_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OBJECT_DASHCOMPUTER_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPECIAL_DASHNAMES_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__external_file_reference] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EXTERNAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DYNAMIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KEYBOARD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISPLAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRINTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRINTER_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINEADVANCING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MULTIPLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PADDING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHARACTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STATUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEQUENTIAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RECORDDELIMITER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STANDARD_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_character_DASHstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORGANIZATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACCESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MODE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RELATIVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KEY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RANDOM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISKFROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RESERVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AREA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AREAS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILESTATUSIS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INDEXED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RECORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WITH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DUPLICATES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALTERNATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RERUN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SORT_DASHMERGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POSITION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EVERY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RECORDS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLOCK_DASHUNITS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition_DASHname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INPUT_DASHOUTPUTSECTION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILE_DASHCONTROL_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I_DASHO_DASHCONTROL_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATADIVISION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILESECTION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARE] = {
    .visible = true,
    .named = false,
  },
  [sym__IS] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ASSIGN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GLOBAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOTTOM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CODE_DASHSET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHARACTERS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARYING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIZE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEPENDING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LABEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STANDARD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OMITTED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VALUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINAGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOOTING] = {
    .visible = true,
    .named = false,
  },
  [sym_working_storage_section] = {
    .visible = true,
    .named = true,
  },
  [sym_linkage_section] = {
    .visible = true,
    .named = true,
  },
  [sym_communication_section] = {
    .visible = true,
    .named = true,
  },
  [sym_report_section] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_program_name] = {
    .visible = true,
    .named = true,
  },
  [sym_data_name] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identification_division] = {
    .visible = true,
    .named = true,
  },
  [sym__identification_division_author] = {
    .visible = false,
    .named = true,
  },
  [sym__identification_division_installation] = {
    .visible = false,
    .named = true,
  },
  [sym__identification_division_date_written] = {
    .visible = false,
    .named = true,
  },
  [sym__identification_division_date_compiled] = {
    .visible = false,
    .named = true,
  },
  [sym__identification_division_security] = {
    .visible = false,
    .named = true,
  },
  [sym__identification_division_program_id] = {
    .visible = false,
    .named = true,
  },
  [sym_environment_division] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration_section] = {
    .visible = true,
    .named = true,
  },
  [sym__file_reference] = {
    .visible = false,
    .named = true,
  },
  [sym__external_or_dynamic] = {
    .visible = false,
    .named = true,
  },
  [sym_file_control_entry] = {
    .visible = true,
    .named = true,
  },
  [sym__record_sequential_file_assign] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_assign_destination] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_type] = {
    .visible = false,
    .named = true,
  },
  [sym__line_advancing] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_padding] = {
    .visible = false,
    .named = true,
  },
  [sym__file_status] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_record_access_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_record_delimiter] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_organization] = {
    .visible = false,
    .named = true,
  },
  [sym__ACCESS_MODE_IS] = {
    .visible = false,
    .named = true,
  },
  [sym__RELATIVE_KEY_IS] = {
    .visible = false,
    .named = true,
  },
  [sym__relative_file_access_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__relative_file_assign] = {
    .visible = false,
    .named = true,
  },
  [sym__relative_file_reserve] = {
    .visible = false,
    .named = true,
  },
  [sym__select] = {
    .visible = false,
    .named = true,
  },
  [sym__AREA] = {
    .visible = false,
    .named = true,
  },
  [sym__relative_file] = {
    .visible = false,
    .named = true,
  },
  [sym__indexed_file_assign] = {
    .visible = false,
    .named = true,
  },
  [sym__indexed_file_reserve] = {
    .visible = false,
    .named = true,
  },
  [sym__indexed_file_organization] = {
    .visible = false,
    .named = true,
  },
  [sym__indexed_file_access_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__RECORD_KEY_IS] = {
    .visible = false,
    .named = true,
  },
  [sym__WITH_DUPLICATES] = {
    .visible = false,
    .named = true,
  },
  [sym__record_key] = {
    .visible = false,
    .named = true,
  },
  [sym__alternate_record_key] = {
    .visible = false,
    .named = true,
  },
  [sym__indexed_file] = {
    .visible = false,
    .named = true,
  },
  [sym__sort_merge_file] = {
    .visible = false,
    .named = true,
  },
  [sym_input_output_control_entry] = {
    .visible = true,
    .named = true,
  },
  [sym__input_output_control_rerun_entry] = {
    .visible = false,
    .named = true,
  },
  [sym__input_output_control_same_entry] = {
    .visible = false,
    .named = true,
  },
  [sym__input_output_control_multiple_file_entry] = {
    .visible = false,
    .named = true,
  },
  [sym__REAL_OR_UNIT] = {
    .visible = false,
    .named = true,
  },
  [sym__END_OF] = {
    .visible = false,
    .named = true,
  },
  [sym__every] = {
    .visible = false,
    .named = true,
  },
  [sym_input_output_section] = {
    .visible = true,
    .named = true,
  },
  [sym_data_division] = {
    .visible = true,
    .named = true,
  },
  [sym_file_section] = {
    .visible = true,
    .named = true,
  },
  [sym__file_description_entry] = {
    .visible = false,
    .named = true,
  },
  [sym__RECORDS] = {
    .visible = false,
    .named = true,
  },
  [sym__ASSIGN_TO] = {
    .visible = false,
    .named = true,
  },
  [sym__IS_EXTERNAL] = {
    .visible = false,
    .named = true,
  },
  [sym__IS_GLOBAL] = {
    .visible = false,
    .named = true,
  },
  [sym__LINES_AT_TOP] = {
    .visible = false,
    .named = true,
  },
  [sym__LINES_AT_BOTTOM] = {
    .visible = false,
    .named = true,
  },
  [sym__CODE_SET_IS] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_description] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_block_description] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_record_description] = {
    .visible = false,
    .named = true,
  },
  [sym__ansi85_contains] = {
    .visible = false,
    .named = true,
  },
  [sym__std_contains] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_label_description] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_value_description] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_data_description] = {
    .visible = false,
    .named = true,
  },
  [sym__record_sequential_file_linage_description] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__input_output_control_same_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__input_output_control_multiple_file_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_input_output_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_input_output_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__record_sequential_file_value_description_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_author = 1,
  field_date_compiled = 2,
  field_date_written = 3,
  field_installation = 4,
  field_object_computer = 5,
  field_program_name = 6,
  field_security = 7,
  field_source_computer = 8,
  field_special_names = 9,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_author] = "author",
  [field_date_compiled] = "date_compiled",
  [field_date_written] = "date_written",
  [field_installation] = "installation",
  [field_object_computer] = "object_computer",
  [field_program_name] = "program_name",
  [field_security] = "security",
  [field_source_computer] = "source_computer",
  [field_special_names] = "special_names",
};

static const TSFieldMapSlice ts_field_map_slices[24] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 3},
  [16] = {.index = 26, .length = 3},
  [17] = {.index = 29, .length = 4},
  [18] = {.index = 33, .length = 4},
  [19] = {.index = 37, .length = 4},
  [20] = {.index = 41, .length = 5},
  [21] = {.index = 46, .length = 5},
  [22] = {.index = 51, .length = 6},
  [23] = {.index = 57, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_program_name, 1, .inherited = true},
  [1] =
    {field_program_name, 1},
  [2] =
    {field_author, 2, .inherited = true},
    {field_program_name, 1, .inherited = true},
  [4] =
    {field_installation, 2, .inherited = true},
    {field_program_name, 1, .inherited = true},
  [6] =
    {field_date_written, 2, .inherited = true},
    {field_program_name, 1, .inherited = true},
  [8] =
    {field_date_compiled, 2, .inherited = true},
    {field_program_name, 1, .inherited = true},
  [10] =
    {field_program_name, 1, .inherited = true},
    {field_security, 2, .inherited = true},
  [12] =
    {field_author, 1},
  [13] =
    {field_installation, 1},
  [14] =
    {field_date_written, 1},
  [15] =
    {field_date_compiled, 1},
  [16] =
    {field_security, 1},
  [17] =
    {field_author, 2, .inherited = true},
    {field_installation, 3, .inherited = true},
    {field_program_name, 1, .inherited = true},
  [20] =
    {field_author, 2, .inherited = true},
    {field_date_written, 3, .inherited = true},
    {field_program_name, 1, .inherited = true},
  [23] =
    {field_author, 2, .inherited = true},
    {field_date_compiled, 3, .inherited = true},
    {field_program_name, 1, .inherited = true},
  [26] =
    {field_author, 2, .inherited = true},
    {field_program_name, 1, .inherited = true},
    {field_security, 3, .inherited = true},
  [29] =
    {field_author, 2, .inherited = true},
    {field_date_written, 4, .inherited = true},
    {field_installation, 3, .inherited = true},
    {field_program_name, 1, .inherited = true},
  [33] =
    {field_author, 2, .inherited = true},
    {field_date_compiled, 4, .inherited = true},
    {field_installation, 3, .inherited = true},
    {field_program_name, 1, .inherited = true},
  [37] =
    {field_author, 2, .inherited = true},
    {field_installation, 3, .inherited = true},
    {field_program_name, 1, .inherited = true},
    {field_security, 4, .inherited = true},
  [41] =
    {field_author, 2, .inherited = true},
    {field_date_compiled, 5, .inherited = true},
    {field_date_written, 4, .inherited = true},
    {field_installation, 3, .inherited = true},
    {field_program_name, 1, .inherited = true},
  [46] =
    {field_author, 2, .inherited = true},
    {field_date_written, 4, .inherited = true},
    {field_installation, 3, .inherited = true},
    {field_program_name, 1, .inherited = true},
    {field_security, 5, .inherited = true},
  [51] =
    {field_author, 2, .inherited = true},
    {field_date_compiled, 5, .inherited = true},
    {field_date_written, 4, .inherited = true},
    {field_installation, 3, .inherited = true},
    {field_program_name, 1, .inherited = true},
    {field_security, 6, .inherited = true},
  [57] =
    {field_object_computer, 4},
    {field_source_computer, 2},
    {field_special_names, 6},
};

static TSSymbol ts_alias_sequences[24][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(819);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'B') ADVANCE(359);
      if (lookahead == 'C') ADVANCE(288);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'E') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(166);
      if (lookahead == 'G') ADVANCE(368);
      if (lookahead == 'I') ADVANCE(23);
      if (lookahead == 'K') ADVANCE(202);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == 'M') ADVANCE(460);
      if (lookahead == 'O') ADVANCE(127);
      if (lookahead == 'P') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead == 'U') ADVANCE(446);
      if (lookahead == 'V') ADVANCE(70);
      if (lookahead == 'W') ADVANCE(303);
      if (lookahead == 'a') ADVANCE(736);
      if (lookahead == 'c') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(801);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead == 's') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1051);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(1176);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(1158);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(580);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(578);
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(584);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(585);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(586);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(587);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(588);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(589);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(201);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(1052);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(724);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(784);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(463);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(463);
      if (lookahead == 'D') ADVANCE(226);
      if (lookahead == 'N') ADVANCE(1192);
      if (lookahead == 'S') ADVANCE(1168);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(463);
      if (lookahead == 'N') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(1168);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(576);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(694);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(778);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(661);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(505);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(308);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(752);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(716);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(442);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(758);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(720);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(759);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(721);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(760);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(699);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(1056);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(1060);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(1061);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(1163);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(1058);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(1162);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(1059);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(1073);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(1208);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(1206);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(1072);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(1071);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(1066);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(1161);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(1207);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(1070);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(1055);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(1205);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(1165);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(1057);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(1164);
      END_STATE();
    case 64:
      if (lookahead == '1') ADVANCE(1089);
      END_STATE();
    case 65:
      if (lookahead == '1') ADVANCE(1107);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'I') ADVANCE(406);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'I') ADVANCE(414);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'I') ADVANCE(680);
      if (lookahead == 'O') ADVANCE(538);
      if (lookahead == 'P') ADVANCE(223);
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(371);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(418);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(1200);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(1200);
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(1127);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(180);
      if (lookahead == 'O') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(302);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(180);
      if (lookahead == 'R') ADVANCE(512);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(532);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(416);
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(596);
      if (lookahead == 'E') ADVANCE(521);
      if (lookahead == 'I') ADVANCE(562);
      if (lookahead == 'U') ADVANCE(516);
      if (lookahead == 'Y') ADVANCE(415);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(677);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(1);
      if (lookahead == 'K') ADVANCE(111);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(563);
      if (lookahead == 'K') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(400);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(1000);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(474);
      if (lookahead == 'E') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'P') ADVANCE(478);
      if (lookahead == 'R') ADVANCE(653);
      if (lookahead == 'S') ADVANCE(233);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(153);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(993);
      if (lookahead == 'D') ADVANCE(907);
      if (lookahead == 'E') ADVANCE(1023);
      if (lookahead == 'O') ADVANCE(971);
      if (lookahead == 'R') ADVANCE(880);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(179);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(390);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(363);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(364);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(373);
      END_STATE();
    case 93:
      if (lookahead == 'A') ADVANCE(365);
      END_STATE();
    case 94:
      if (lookahead == 'A') ADVANCE(397);
      END_STATE();
    case 95:
      if (lookahead == 'A') ADVANCE(366);
      END_STATE();
    case 96:
      if (lookahead == 'A') ADVANCE(392);
      END_STATE();
    case 97:
      if (lookahead == 'A') ADVANCE(367);
      END_STATE();
    case 98:
      if (lookahead == 'A') ADVANCE(534);
      END_STATE();
    case 99:
      if (lookahead == 'A') ADVANCE(612);
      END_STATE();
    case 100:
      if (lookahead == 'A') ADVANCE(382);
      END_STATE();
    case 101:
      if (lookahead == 'A') ADVANCE(447);
      END_STATE();
    case 102:
      if (lookahead == 'A') ADVANCE(542);
      END_STATE();
    case 103:
      if (lookahead == 'A') ADVANCE(545);
      END_STATE();
    case 104:
      if (lookahead == 'A') ADVANCE(616);
      if (lookahead == 'E') ADVANCE(521);
      END_STATE();
    case 105:
      if (lookahead == 'A') ADVANCE(600);
      if (lookahead == 'U') ADVANCE(516);
      END_STATE();
    case 106:
      if (lookahead == 'A') ADVANCE(619);
      END_STATE();
    case 107:
      if (lookahead == 'A') ADVANCE(613);
      END_STATE();
    case 108:
      if (lookahead == 'A') ADVANCE(426);
      END_STATE();
    case 109:
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'O') ADVANCE(1173);
      END_STATE();
    case 110:
      if (lookahead == 'A') ADVANCE(453);
      END_STATE();
    case 111:
      if (lookahead == 'A') ADVANCE(280);
      END_STATE();
    case 112:
      if (lookahead == 'A') ADVANCE(615);
      END_STATE();
    case 113:
      if (lookahead == 'A') ADVANCE(617);
      END_STATE();
    case 114:
      if (lookahead == 'A') ADVANCE(399);
      END_STATE();
    case 115:
      if (lookahead == 'A') ADVANCE(317);
      END_STATE();
    case 116:
      if (lookahead == 'A') ADVANCE(638);
      END_STATE();
    case 117:
      if (lookahead == 'A') ADVANCE(639);
      END_STATE();
    case 118:
      if (lookahead == 'A') ADVANCE(640);
      END_STATE();
    case 119:
      if (lookahead == 'A') ADVANCE(456);
      END_STATE();
    case 120:
      if (lookahead == 'A') ADVANCE(155);
      END_STATE();
    case 121:
      if (lookahead == 'A') ADVANCE(648);
      END_STATE();
    case 122:
      if (lookahead == 'A') ADVANCE(559);
      END_STATE();
    case 123:
      if (lookahead == 'A') ADVANCE(286);
      END_STATE();
    case 124:
      if (lookahead == 'A') ADVANCE(650);
      END_STATE();
    case 125:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 126:
      if (lookahead == 'A') ADVANCE(14);
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 127:
      if (lookahead == 'B') ADVANCE(355);
      if (lookahead == 'F') ADVANCE(1155);
      if (lookahead == 'M') ADVANCE(310);
      if (lookahead == 'N') ADVANCE(1139);
      if (lookahead == 'P') ADVANCE(601);
      if (lookahead == 'R') ADVANCE(276);
      END_STATE();
    case 128:
      if (lookahead == 'B') ADVANCE(230);
      END_STATE();
    case 129:
      if (lookahead == 'B') ADVANCE(90);
      END_STATE();
    case 130:
      if (lookahead == 'C') ADVANCE(140);
      END_STATE();
    case 131:
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'L') ADVANCE(623);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead == 'S') ADVANCE(572);
      if (lookahead == 'T') ADVANCE(1178);
      if (lookahead == 'U') ADVANCE(590);
      END_STATE();
    case 132:
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'L') ADVANCE(623);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead == 'T') ADVANCE(1178);
      if (lookahead == 'U') ADVANCE(590);
      END_STATE();
    case 133:
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'R') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(1178);
      END_STATE();
    case 134:
      if (lookahead == 'C') ADVANCE(1080);
      if (lookahead == 'K') ADVANCE(1118);
      if (lookahead == 'P') ADVANCE(376);
      END_STATE();
    case 135:
      if (lookahead == 'C') ADVANCE(1078);
      END_STATE();
    case 136:
      if (lookahead == 'C') ADVANCE(894);
      if (lookahead == 'I') ADVANCE(988);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 137:
      if (lookahead == 'C') ADVANCE(356);
      END_STATE();
    case 138:
      if (lookahead == 'C') ADVANCE(654);
      if (lookahead == 'L') ADVANCE(250);
      if (lookahead == 'Q') ADVANCE(662);
      END_STATE();
    case 139:
      if (lookahead == 'C') ADVANCE(357);
      END_STATE();
    case 140:
      if (lookahead == 'C') ADVANCE(224);
      END_STATE();
    case 141:
      if (lookahead == 'C') ADVANCE(507);
      END_STATE();
    case 142:
      if (lookahead == 'C') ADVANCE(621);
      END_STATE();
    case 143:
      if (lookahead == 'C') ADVANCE(262);
      END_STATE();
    case 144:
      if (lookahead == 'C') ADVANCE(594);
      END_STATE();
    case 145:
      if (lookahead == 'C') ADVANCE(316);
      END_STATE();
    case 146:
      if (lookahead == 'C') ADVANCE(477);
      if (lookahead == 'W') ADVANCE(558);
      END_STATE();
    case 147:
      if (lookahead == 'C') ADVANCE(488);
      if (lookahead == 'P') ADVANCE(478);
      END_STATE();
    case 148:
      if (lookahead == 'C') ADVANCE(491);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'P') ADVANCE(478);
      if (lookahead == 'R') ADVANCE(653);
      if (lookahead == 'S') ADVANCE(233);
      END_STATE();
    case 149:
      if (lookahead == 'C') ADVANCE(481);
      END_STATE();
    case 150:
      if (lookahead == 'C') ADVANCE(494);
      if (lookahead == 'L') ADVANCE(99);
      END_STATE();
    case 151:
      if (lookahead == 'C') ADVANCE(322);
      END_STATE();
    case 152:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 153:
      if (lookahead == 'C') ADVANCE(632);
      END_STATE();
    case 154:
      if (lookahead == 'C') ADVANCE(641);
      END_STATE();
    case 155:
      if (lookahead == 'C') ADVANCE(635);
      END_STATE();
    case 156:
      if (lookahead == 'C') ADVANCE(642);
      END_STATE();
    case 157:
      if (lookahead == 'C') ADVANCE(643);
      END_STATE();
    case 158:
      if (lookahead == 'C') ADVANCE(510);
      END_STATE();
    case 159:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 160:
      if (lookahead == 'C') ADVANCE(644);
      END_STATE();
    case 161:
      if (lookahead == 'C') ADVANCE(118);
      END_STATE();
    case 162:
      if (lookahead == 'C') ADVANCE(645);
      END_STATE();
    case 163:
      if (lookahead == 'C') ADVANCE(646);
      END_STATE();
    case 164:
      if (lookahead == 'C') ADVANCE(647);
      END_STATE();
    case 165:
      if (lookahead == 'C') ADVANCE(513);
      END_STATE();
    case 166:
      if (lookahead == 'D') ADVANCE(1186);
      if (lookahead == 'I') ADVANCE(374);
      if (lookahead == 'O') ADVANCE(476);
      if (lookahead == 'R') ADVANCE(469);
      END_STATE();
    case 167:
      if (lookahead == 'D') ADVANCE(1186);
      if (lookahead == 'I') ADVANCE(385);
      if (lookahead == 'R') ADVANCE(469);
      END_STATE();
    case 168:
      if (lookahead == 'D') ADVANCE(1186);
      if (lookahead == 'I') ADVANCE(380);
      if (lookahead == 'O') ADVANCE(475);
      END_STATE();
    case 169:
      if (lookahead == 'D') ADVANCE(1154);
      if (lookahead == 'V') ADVANCE(305);
      END_STATE();
    case 170:
      if (lookahead == 'D') ADVANCE(1133);
      END_STATE();
    case 171:
      if (lookahead == 'D') ADVANCE(1198);
      END_STATE();
    case 172:
      if (lookahead == 'D') ADVANCE(1197);
      END_STATE();
    case 173:
      if (lookahead == 'D') ADVANCE(1132);
      END_STATE();
    case 174:
      if (lookahead == 'D') ADVANCE(1131);
      END_STATE();
    case 175:
      if (lookahead == 'D') ADVANCE(1196);
      END_STATE();
    case 176:
      if (lookahead == 'D') ADVANCE(895);
      if (lookahead == 'E') ADVANCE(1023);
      if (lookahead == 'K') ADVANCE(862);
      if (lookahead == 'L') ADVANCE(901);
      if (lookahead == 'M') ADVANCE(1018);
      if (lookahead == 'O') ADVANCE(971);
      if (lookahead == 'P') ADVANCE(985);
      if (lookahead == 'R') ADVANCE(863);
      if (lookahead == 'T') ADVANCE(949);
      if (lookahead == 'U') ADVANCE(938);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 177:
      if (lookahead == 'D') ADVANCE(895);
      if (lookahead == 'E') ADVANCE(1023);
      if (lookahead == 'K') ADVANCE(862);
      if (lookahead == 'L') ADVANCE(901);
      if (lookahead == 'M') ADVANCE(1018);
      if (lookahead == 'O') ADVANCE(971);
      if (lookahead == 'P') ADVANCE(985);
      if (lookahead == 'R') ADVANCE(863);
      if (lookahead == 'U') ADVANCE(938);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 178:
      if (lookahead == 'D') ADVANCE(3);
      END_STATE();
    case 179:
      if (lookahead == 'D') ADVANCE(668);
      END_STATE();
    case 180:
      if (lookahead == 'D') ADVANCE(195);
      END_STATE();
    case 181:
      if (lookahead == 'D') ADVANCE(45);
      END_STATE();
    case 182:
      if (lookahead == 'D') ADVANCE(221);
      if (lookahead == 'M') ADVANCE(393);
      if (lookahead == 'N') ADVANCE(269);
      END_STATE();
    case 183:
      if (lookahead == 'D') ADVANCE(221);
      if (lookahead == 'M') ADVANCE(393);
      if (lookahead == 'N') ADVANCE(268);
      END_STATE();
    case 184:
      if (lookahead == 'D') ADVANCE(221);
      if (lookahead == 'M') ADVANCE(401);
      END_STATE();
    case 185:
      if (lookahead == 'D') ADVANCE(49);
      END_STATE();
    case 186:
      if (lookahead == 'D') ADVANCE(910);
      if (lookahead == 'K') ADVANCE(862);
      if (lookahead == 'L') ADVANCE(901);
      if (lookahead == 'M') ADVANCE(1018);
      if (lookahead == 'O') ADVANCE(971);
      if (lookahead == 'P') ADVANCE(985);
      if (lookahead == 'R') ADVANCE(863);
      if (lookahead == 'U') ADVANCE(938);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(186)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 187:
      if (lookahead == 'D') ADVANCE(205);
      END_STATE();
    case 188:
      if (lookahead == 'D') ADVANCE(908);
      if (lookahead == 'O') ADVANCE(971);
      if (lookahead == 'R') ADVANCE(880);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 189:
      if (lookahead == 'D') ADVANCE(566);
      END_STATE();
    case 190:
      if (lookahead == 'D') ADVANCE(300);
      END_STATE();
    case 191:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 192:
      if (lookahead == 'D') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(607);
      if (lookahead == 'P') ADVANCE(656);
      if (lookahead == 'S') ADVANCE(618);
      END_STATE();
    case 193:
      if (lookahead == 'D') ADVANCE(248);
      END_STATE();
    case 194:
      if (lookahead == 'D') ADVANCE(98);
      END_STATE();
    case 195:
      if (lookahead == 'D') ADVANCE(311);
      END_STATE();
    case 196:
      if (lookahead == 'D') ADVANCE(102);
      END_STATE();
    case 197:
      if (lookahead == 'D') ADVANCE(472);
      END_STATE();
    case 198:
      if (lookahead == 'D') ADVANCE(103);
      END_STATE();
    case 199:
      if (lookahead == 'D') ADVANCE(319);
      END_STATE();
    case 200:
      if (lookahead == 'D') ADVANCE(352);
      END_STATE();
    case 201:
      if (lookahead == 'D') ADVANCE(353);
      END_STATE();
    case 202:
      if (lookahead == 'E') ADVANCE(675);
      END_STATE();
    case 203:
      if (lookahead == 'E') ADVANCE(1166);
      END_STATE();
    case 204:
      if (lookahead == 'E') ADVANCE(1099);
      END_STATE();
    case 205:
      if (lookahead == 'E') ADVANCE(1112);
      END_STATE();
    case 206:
      if (lookahead == 'E') ADVANCE(1141);
      END_STATE();
    case 207:
      if (lookahead == 'E') ADVANCE(1193);
      END_STATE();
    case 208:
      if (lookahead == 'E') ADVANCE(1147);
      END_STATE();
    case 209:
      if (lookahead == 'E') ADVANCE(1199);
      END_STATE();
    case 210:
      if (lookahead == 'E') ADVANCE(1202);
      END_STATE();
    case 211:
      if (lookahead == 'E') ADVANCE(1122);
      END_STATE();
    case 212:
      if (lookahead == 'E') ADVANCE(1092);
      END_STATE();
    case 213:
      if (lookahead == 'E') ADVANCE(1113);
      END_STATE();
    case 214:
      if (lookahead == 'E') ADVANCE(1136);
      END_STATE();
    case 215:
      if (lookahead == 'E') ADVANCE(1144);
      END_STATE();
    case 216:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 217:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 218:
      if (lookahead == 'E') ADVANCE(1098);
      END_STATE();
    case 219:
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 220:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 221:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 222:
      if (lookahead == 'E') ADVANCE(673);
      END_STATE();
    case 223:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 224:
      if (lookahead == 'E') ADVANCE(574);
      END_STATE();
    case 225:
      if (lookahead == 'E') ADVANCE(530);
      END_STATE();
    case 226:
      if (lookahead == 'E') ADVANCE(431);
      END_STATE();
    case 227:
      if (lookahead == 'E') ADVANCE(142);
      END_STATE();
    case 228:
      if (lookahead == 'E') ADVANCE(549);
      END_STATE();
    case 229:
      if (lookahead == 'E') ADVANCE(452);
      END_STATE();
    case 230:
      if (lookahead == 'E') ADVANCE(362);
      END_STATE();
    case 231:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 232:
      if (lookahead == 'E') ADVANCE(568);
      END_STATE();
    case 233:
      if (lookahead == 'E') ADVANCE(525);
      END_STATE();
    case 234:
      if (lookahead == 'E') ADVANCE(575);
      END_STATE();
    case 235:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 236:
      if (lookahead == 'E') ADVANCE(563);
      if (lookahead == 'K') ADVANCE(111);
      END_STATE();
    case 237:
      if (lookahead == 'E') ADVANCE(527);
      END_STATE();
    case 238:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 239:
      if (lookahead == 'E') ADVANCE(554);
      END_STATE();
    case 240:
      if (lookahead == 'E') ADVANCE(528);
      END_STATE();
    case 241:
      if (lookahead == 'E') ADVANCE(536);
      END_STATE();
    case 242:
      if (lookahead == 'E') ADVANCE(540);
      END_STATE();
    case 243:
      if (lookahead == 'E') ADVANCE(419);
      END_STATE();
    case 244:
      if (lookahead == 'E') ADVANCE(595);
      END_STATE();
    case 245:
      if (lookahead == 'E') ADVANCE(541);
      END_STATE();
    case 246:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 247:
      if (lookahead == 'E') ADVANCE(529);
      END_STATE();
    case 248:
      if (lookahead == 'E') ADVANCE(377);
      END_STATE();
    case 249:
      if (lookahead == 'E') ADVANCE(448);
      END_STATE();
    case 250:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 251:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 252:
      if (lookahead == 'E') ADVANCE(445);
      END_STATE();
    case 253:
      if (lookahead == 'E') ADVANCE(383);
      END_STATE();
    case 254:
      if (lookahead == 'E') ADVANCE(552);
      END_STATE();
    case 255:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 256:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 257:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 258:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 259:
      if (lookahead == 'E') ADVANCE(163);
      END_STATE();
    case 260:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 261:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 262:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 263:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 264:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 265:
      if (lookahead == 'F') ADVANCE(557);
      END_STATE();
    case 266:
      if (lookahead == 'F') ADVANCE(913);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 267:
      if (lookahead == 'F') ADVANCE(981);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 268:
      if (lookahead == 'F') ADVANCE(301);
      END_STATE();
    case 269:
      if (lookahead == 'F') ADVANCE(301);
      if (lookahead == 'T') ADVANCE(115);
      END_STATE();
    case 270:
      if (lookahead == 'F') ADVANCE(351);
      END_STATE();
    case 271:
      if (lookahead == 'G') ADVANCE(1204);
      END_STATE();
    case 272:
      if (lookahead == 'G') ADVANCE(1101);
      END_STATE();
    case 273:
      if (lookahead == 'G') ADVANCE(1190);
      END_STATE();
    case 274:
      if (lookahead == 'G') ADVANCE(1194);
      END_STATE();
    case 275:
      if (lookahead == 'G') ADVANCE(1091);
      END_STATE();
    case 276:
      if (lookahead == 'G') ADVANCE(108);
      END_STATE();
    case 277:
      if (lookahead == 'G') ADVANCE(660);
      END_STATE();
    case 278:
      if (lookahead == 'G') ADVANCE(408);
      END_STATE();
    case 279:
      if (lookahead == 'G') ADVANCE(210);
      END_STATE();
    case 280:
      if (lookahead == 'G') ADVANCE(261);
      END_STATE();
    case 281:
      if (lookahead == 'G') ADVANCE(215);
      END_STATE();
    case 282:
      if (lookahead == 'G') ADVANCE(550);
      END_STATE();
    case 283:
      if (lookahead == 'G') ADVANCE(29);
      END_STATE();
    case 284:
      if (lookahead == 'G') ADVANCE(553);
      END_STATE();
    case 285:
      if (lookahead == 'G') ADVANCE(556);
      END_STATE();
    case 286:
      if (lookahead == 'G') ADVANCE(263);
      END_STATE();
    case 287:
      if (lookahead == 'H') ADVANCE(1134);
      END_STATE();
    case 288:
      if (lookahead == 'H') ADVANCE(77);
      if (lookahead == 'L') ADVANCE(506);
      if (lookahead == 'O') ADVANCE(182);
      END_STATE();
    case 289:
      if (lookahead == 'H') ADVANCE(482);
      END_STATE();
    case 290:
      if (lookahead == 'H') ADVANCE(122);
      END_STATE();
    case 291:
      if (lookahead == 'H') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(184);
      END_STATE();
    case 292:
      if (lookahead == 'H') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(183);
      END_STATE();
    case 293:
      if (lookahead == 'I') ADVANCE(680);
      if (lookahead == 'O') ADVANCE(537);
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 294:
      if (lookahead == 'I') ADVANCE(681);
      END_STATE();
    case 295:
      if (lookahead == 'I') ADVANCE(270);
      END_STATE();
    case 296:
      if (lookahead == 'I') ADVANCE(988);
      if (lookahead == 'K') ADVANCE(876);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 297:
      if (lookahead == 'I') ADVANCE(988);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(297)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 298:
      if (lookahead == 'I') ADVANCE(520);
      END_STATE();
    case 299:
      if (lookahead == 'I') ADVANCE(278);
      END_STATE();
    case 300:
      if (lookahead == 'I') ADVANCE(667);
      END_STATE();
    case 301:
      if (lookahead == 'I') ADVANCE(277);
      END_STATE();
    case 302:
      if (lookahead == 'I') ADVANCE(451);
      if (lookahead == 'O') ADVANCE(282);
      END_STATE();
    case 303:
      if (lookahead == 'I') ADVANCE(597);
      if (lookahead == 'O') ADVANCE(524);
      END_STATE();
    case 304:
      if (lookahead == 'I') ADVANCE(508);
      END_STATE();
    case 305:
      if (lookahead == 'I') ADVANCE(533);
      END_STATE();
    case 306:
      if (lookahead == 'I') ADVANCE(152);
      END_STATE();
    case 307:
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 308:
      if (lookahead == 'I') ADVANCE(181);
      END_STATE();
    case 309:
      if (lookahead == 'I') ADVANCE(420);
      END_STATE();
    case 310:
      if (lookahead == 'I') ADVANCE(620);
      END_STATE();
    case 311:
      if (lookahead == 'I') ADVANCE(422);
      END_STATE();
    case 312:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 313:
      if (lookahead == 'I') ADVANCE(423);
      END_STATE();
    case 314:
      if (lookahead == 'I') ADVANCE(592);
      END_STATE();
    case 315:
      if (lookahead == 'I') ADVANCE(424);
      END_STATE();
    case 316:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 317:
      if (lookahead == 'I') ADVANCE(421);
      END_STATE();
    case 318:
      if (lookahead == 'I') ADVANCE(571);
      END_STATE();
    case 319:
      if (lookahead == 'I') ADVANCE(427);
      END_STATE();
    case 320:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 321:
      if (lookahead == 'I') ADVANCE(603);
      END_STATE();
    case 322:
      if (lookahead == 'I') ADVANCE(429);
      END_STATE();
    case 323:
      if (lookahead == 'I') ADVANCE(610);
      END_STATE();
    case 324:
      if (lookahead == 'I') ADVANCE(413);
      END_STATE();
    case 325:
      if (lookahead == 'I') ADVANCE(670);
      END_STATE();
    case 326:
      if (lookahead == 'I') ADVANCE(398);
      END_STATE();
    case 327:
      if (lookahead == 'I') ADVANCE(624);
      END_STATE();
    case 328:
      if (lookahead == 'I') ADVANCE(159);
      END_STATE();
    case 329:
      if (lookahead == 'I') ADVANCE(487);
      END_STATE();
    case 330:
      if (lookahead == 'I') ADVANCE(581);
      END_STATE();
    case 331:
      if (lookahead == 'I') ADVANCE(379);
      END_STATE();
    case 332:
      if (lookahead == 'I') ADVANCE(489);
      END_STATE();
    case 333:
      if (lookahead == 'I') ADVANCE(490);
      END_STATE();
    case 334:
      if (lookahead == 'I') ADVANCE(492);
      END_STATE();
    case 335:
      if (lookahead == 'I') ADVANCE(381);
      END_STATE();
    case 336:
      if (lookahead == 'I') ADVANCE(493);
      END_STATE();
    case 337:
      if (lookahead == 'I') ADVANCE(495);
      END_STATE();
    case 338:
      if (lookahead == 'I') ADVANCE(496);
      END_STATE();
    case 339:
      if (lookahead == 'I') ADVANCE(497);
      END_STATE();
    case 340:
      if (lookahead == 'I') ADVANCE(498);
      END_STATE();
    case 341:
      if (lookahead == 'I') ADVANCE(499);
      END_STATE();
    case 342:
      if (lookahead == 'I') ADVANCE(500);
      END_STATE();
    case 343:
      if (lookahead == 'I') ADVANCE(501);
      END_STATE();
    case 344:
      if (lookahead == 'I') ADVANCE(502);
      END_STATE();
    case 345:
      if (lookahead == 'I') ADVANCE(503);
      END_STATE();
    case 346:
      if (lookahead == 'I') ADVANCE(504);
      END_STATE();
    case 347:
      if (lookahead == 'I') ADVANCE(631);
      END_STATE();
    case 348:
      if (lookahead == 'I') ADVANCE(636);
      END_STATE();
    case 349:
      if (lookahead == 'I') ADVANCE(582);
      END_STATE();
    case 350:
      if (lookahead == 'I') ADVANCE(583);
      END_STATE();
    case 351:
      if (lookahead == 'I') ADVANCE(161);
      END_STATE();
    case 352:
      if (lookahead == 'I') ADVANCE(671);
      END_STATE();
    case 353:
      if (lookahead == 'I') ADVANCE(672);
      END_STATE();
    case 354:
      if (lookahead == 'I') ADVANCE(514);
      END_STATE();
    case 355:
      if (lookahead == 'J') ADVANCE(227);
      END_STATE();
    case 356:
      if (lookahead == 'K') ADVANCE(1188);
      END_STATE();
    case 357:
      if (lookahead == 'K') ADVANCE(28);
      END_STATE();
    case 358:
      if (lookahead == 'K') ADVANCE(315);
      END_STATE();
    case 359:
      if (lookahead == 'L') ADVANCE(466);
      if (lookahead == 'O') ADVANCE(606);
      END_STATE();
    case 360:
      if (lookahead == 'L') ADVANCE(1153);
      END_STATE();
    case 361:
      if (lookahead == 'L') ADVANCE(1094);
      END_STATE();
    case 362:
      if (lookahead == 'L') ADVANCE(1195);
      END_STATE();
    case 363:
      if (lookahead == 'L') ADVANCE(1175);
      END_STATE();
    case 364:
      if (lookahead == 'L') ADVANCE(1063);
      END_STATE();
    case 365:
      if (lookahead == 'L') ADVANCE(1076);
      END_STATE();
    case 366:
      if (lookahead == 'L') ADVANCE(1125);
      END_STATE();
    case 367:
      if (lookahead == 'L') ADVANCE(1105);
      END_STATE();
    case 368:
      if (lookahead == 'L') ADVANCE(467);
      END_STATE();
    case 369:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 370:
      if (lookahead == 'L') ADVANCE(306);
      END_STATE();
    case 371:
      if (lookahead == 'L') ADVANCE(655);
      if (lookahead == 'R') ADVANCE(679);
      END_STATE();
    case 372:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 373:
      if (lookahead == 'L') ADVANCE(35);
      END_STATE();
    case 374:
      if (lookahead == 'L') ADVANCE(204);
      END_STATE();
    case 375:
      if (lookahead == 'L') ADVANCE(608);
      END_STATE();
    case 376:
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 377:
      if (lookahead == 'L') ADVANCE(326);
      END_STATE();
    case 378:
      if (lookahead == 'L') ADVANCE(212);
      END_STATE();
    case 379:
      if (lookahead == 'L') ADVANCE(235);
      END_STATE();
    case 380:
      if (lookahead == 'L') ADVANCE(218);
      END_STATE();
    case 381:
      if (lookahead == 'L') ADVANCE(220);
      END_STATE();
    case 382:
      if (lookahead == 'L') ADVANCE(384);
      END_STATE();
    case 383:
      if (lookahead == 'L') ADVANCE(250);
      END_STATE();
    case 384:
      if (lookahead == 'L') ADVANCE(121);
      END_STATE();
    case 385:
      if (lookahead == 'L') ADVANCE(264);
      END_STATE();
    case 386:
      if (lookahead == 'M') ADVANCE(310);
      if (lookahead == 'R') ADVANCE(276);
      END_STATE();
    case 387:
      if (lookahead == 'M') ADVANCE(1082);
      END_STATE();
    case 388:
      if (lookahead == 'M') ADVANCE(1182);
      END_STATE();
    case 389:
      if (lookahead == 'M') ADVANCE(1117);
      END_STATE();
    case 390:
      if (lookahead == 'M') ADVANCE(1065);
      END_STATE();
    case 391:
      if (lookahead == 'M') ADVANCE(1121);
      END_STATE();
    case 392:
      if (lookahead == 'M') ADVANCE(1064);
      END_STATE();
    case 393:
      if (lookahead == 'M') ADVANCE(480);
      END_STATE();
    case 394:
      if (lookahead == 'M') ADVANCE(518);
      END_STATE();
    case 395:
      if (lookahead == 'M') ADVANCE(517);
      END_STATE();
    case 396:
      if (lookahead == 'M') ADVANCE(206);
      END_STATE();
    case 397:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 398:
      if (lookahead == 'M') ADVANCE(348);
      END_STATE();
    case 399:
      if (lookahead == 'M') ADVANCE(234);
      END_STATE();
    case 400:
      if (lookahead == 'M') ADVANCE(307);
      END_STATE();
    case 401:
      if (lookahead == 'M') ADVANCE(659);
      END_STATE();
    case 402:
      if (lookahead == 'M') ADVANCE(239);
      END_STATE();
    case 403:
      if (lookahead == 'M') ADVANCE(252);
      END_STATE();
    case 404:
      if (lookahead == 'M') ADVANCE(523);
      END_STATE();
    case 405:
      if (lookahead == 'N') ADVANCE(169);
      if (lookahead == 'V') ADVANCE(225);
      if (lookahead == 'X') ADVANCE(637);
      END_STATE();
    case 406:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 407:
      if (lookahead == 'N') ADVANCE(1137);
      END_STATE();
    case 408:
      if (lookahead == 'N') ADVANCE(1170);
      END_STATE();
    case 409:
      if (lookahead == 'N') ADVANCE(1062);
      END_STATE();
    case 410:
      if (lookahead == 'N') ADVANCE(1151);
      END_STATE();
    case 411:
      if (lookahead == 'N') ADVANCE(1109);
      END_STATE();
    case 412:
      if (lookahead == 'N') ADVANCE(1191);
      if (lookahead == 'S') ADVANCE(1168);
      END_STATE();
    case 413:
      if (lookahead == 'N') ADVANCE(236);
      END_STATE();
    case 414:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 415:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 416:
      if (lookahead == 'N') ADVANCE(197);
      END_STATE();
    case 417:
      if (lookahead == 'N') ADVANCE(666);
      END_STATE();
    case 418:
      if (lookahead == 'N') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(652);
      END_STATE();
    case 419:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 420:
      if (lookahead == 'N') ADVANCE(271);
      END_STATE();
    case 421:
      if (lookahead == 'N') ADVANCE(567);
      END_STATE();
    case 422:
      if (lookahead == 'N') ADVANCE(272);
      END_STATE();
    case 423:
      if (lookahead == 'N') ADVANCE(273);
      END_STATE();
    case 424:
      if (lookahead == 'N') ADVANCE(283);
      END_STATE();
    case 425:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 426:
      if (lookahead == 'N') ADVANCE(294);
      END_STATE();
    case 427:
      if (lookahead == 'N') ADVANCE(274);
      END_STATE();
    case 428:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 429:
      if (lookahead == 'N') ADVANCE(275);
      END_STATE();
    case 430:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 431:
      if (lookahead == 'N') ADVANCE(609);
      END_STATE();
    case 432:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 433:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 434:
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 435:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 436:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 437:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 438:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 439:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 440:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 441:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 442:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 443:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 444:
      if (lookahead == 'N') ADVANCE(625);
      END_STATE();
    case 445:
      if (lookahead == 'N') ADVANCE(598);
      END_STATE();
    case 446:
      if (lookahead == 'N') ADVANCE(314);
      END_STATE();
    case 447:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 448:
      if (lookahead == 'N') ADVANCE(629);
      END_STATE();
    case 449:
      if (lookahead == 'N') ADVANCE(403);
      END_STATE();
    case 450:
      if (lookahead == 'N') ADVANCE(323);
      END_STATE();
    case 451:
      if (lookahead == 'N') ADVANCE(630);
      END_STATE();
    case 452:
      if (lookahead == 'N') ADVANCE(199);
      END_STATE();
    case 453:
      if (lookahead == 'N') ADVANCE(196);
      END_STATE();
    case 454:
      if (lookahead == 'N') ADVANCE(328);
      END_STATE();
    case 455:
      if (lookahead == 'N') ADVANCE(628);
      END_STATE();
    case 456:
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == 'T') ADVANCE(652);
      END_STATE();
    case 457:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 458:
      if (lookahead == 'N') ADVANCE(10);
      END_STATE();
    case 459:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 460:
      if (lookahead == 'O') ADVANCE(187);
      if (lookahead == 'U') ADVANCE(375);
      END_STATE();
    case 461:
      if (lookahead == 'O') ADVANCE(1173);
      END_STATE();
    case 462:
      if (lookahead == 'O') ADVANCE(524);
      END_STATE();
    case 463:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 464:
      if (lookahead == 'O') ADVANCE(1172);
      END_STATE();
    case 465:
      if (lookahead == 'O') ADVANCE(887);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(465)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 466:
      if (lookahead == 'O') ADVANCE(137);
      END_STATE();
    case 467:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 468:
      if (lookahead == 'O') ADVANCE(606);
      END_STATE();
    case 469:
      if (lookahead == 'O') ADVANCE(387);
      END_STATE();
    case 470:
      if (lookahead == 'O') ADVANCE(388);
      END_STATE();
    case 471:
      if (lookahead == 'O') ADVANCE(970);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(471)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 472:
      if (lookahead == 'O') ADVANCE(389);
      END_STATE();
    case 473:
      if (lookahead == 'O') ADVANCE(515);
      END_STATE();
    case 474:
      if (lookahead == 'O') ADVANCE(531);
      END_STATE();
    case 475:
      if (lookahead == 'O') ADVANCE(605);
      END_STATE();
    case 476:
      if (lookahead == 'O') ADVANCE(605);
      if (lookahead == 'R') ADVANCE(1145);
      END_STATE();
    case 477:
      if (lookahead == 'O') ADVANCE(394);
      END_STATE();
    case 478:
      if (lookahead == 'O') ADVANCE(547);
      END_STATE();
    case 479:
      if (lookahead == 'O') ADVANCE(391);
      END_STATE();
    case 480:
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead == 'U') ADVANCE(454);
      END_STATE();
    case 481:
      if (lookahead == 'O') ADVANCE(395);
      END_STATE();
    case 482:
      if (lookahead == 'O') ADVANCE(526);
      END_STATE();
    case 483:
      if (lookahead == 'O') ADVANCE(369);
      END_STATE();
    case 484:
      if (lookahead == 'O') ADVANCE(937);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(484)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 485:
      if (lookahead == 'O') ADVANCE(372);
      END_STATE();
    case 486:
      if (lookahead == 'O') ADVANCE(449);
      END_STATE();
    case 487:
      if (lookahead == 'O') ADVANCE(410);
      END_STATE();
    case 488:
      if (lookahead == 'O') ADVANCE(539);
      END_STATE();
    case 489:
      if (lookahead == 'O') ADVANCE(411);
      END_STATE();
    case 490:
      if (lookahead == 'O') ADVANCE(457);
      END_STATE();
    case 491:
      if (lookahead == 'O') ADVANCE(544);
      END_STATE();
    case 492:
      if (lookahead == 'O') ADVANCE(459);
      END_STATE();
    case 493:
      if (lookahead == 'O') ADVANCE(425);
      END_STATE();
    case 494:
      if (lookahead == 'O') ADVANCE(546);
      END_STATE();
    case 495:
      if (lookahead == 'O') ADVANCE(428);
      END_STATE();
    case 496:
      if (lookahead == 'O') ADVANCE(430);
      END_STATE();
    case 497:
      if (lookahead == 'O') ADVANCE(432);
      END_STATE();
    case 498:
      if (lookahead == 'O') ADVANCE(434);
      END_STATE();
    case 499:
      if (lookahead == 'O') ADVANCE(436);
      END_STATE();
    case 500:
      if (lookahead == 'O') ADVANCE(438);
      END_STATE();
    case 501:
      if (lookahead == 'O') ADVANCE(439);
      END_STATE();
    case 502:
      if (lookahead == 'O') ADVANCE(440);
      END_STATE();
    case 503:
      if (lookahead == 'O') ADVANCE(441);
      END_STATE();
    case 504:
      if (lookahead == 'O') ADVANCE(443);
      END_STATE();
    case 505:
      if (lookahead == 'O') ADVANCE(658);
      END_STATE();
    case 506:
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 507:
      if (lookahead == 'O') ADVANCE(444);
      END_STATE();
    case 508:
      if (lookahead == 'O') ADVANCE(437);
      END_STATE();
    case 509:
      if (lookahead == 'O') ADVANCE(561);
      END_STATE();
    case 510:
      if (lookahead == 'O') ADVANCE(455);
      END_STATE();
    case 511:
      if (lookahead == 'O') ADVANCE(284);
      END_STATE();
    case 512:
      if (lookahead == 'O') ADVANCE(285);
      END_STATE();
    case 513:
      if (lookahead == 'O') ADVANCE(404);
      END_STATE();
    case 514:
      if (lookahead == 'O') ADVANCE(458);
      END_STATE();
    case 515:
      if (lookahead == 'P') ADVANCE(1180);
      END_STATE();
    case 516:
      if (lookahead == 'P') ADVANCE(370);
      END_STATE();
    case 517:
      if (lookahead == 'P') ADVANCE(663);
      END_STATE();
    case 518:
      if (lookahead == 'P') ADVANCE(331);
      END_STATE();
    case 519:
      if (lookahead == 'P') ADVANCE(208);
      END_STATE();
    case 520:
      if (lookahead == 'P') ADVANCE(378);
      END_STATE();
    case 521:
      if (lookahead == 'P') ADVANCE(229);
      END_STATE();
    case 522:
      if (lookahead == 'P') ADVANCE(665);
      END_STATE();
    case 523:
      if (lookahead == 'P') ADVANCE(664);
      END_STATE();
    case 524:
      if (lookahead == 'R') ADVANCE(358);
      END_STATE();
    case 525:
      if (lookahead == 'R') ADVANCE(669);
      END_STATE();
    case 526:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 527:
      if (lookahead == 'R') ADVANCE(1087);
      END_STATE();
    case 528:
      if (lookahead == 'R') ADVANCE(1102);
      END_STATE();
    case 529:
      if (lookahead == 'R') ADVANCE(1106);
      END_STATE();
    case 530:
      if (lookahead == 'R') ADVANCE(676);
      END_STATE();
    case 531:
      if (lookahead == 'R') ADVANCE(170);
      END_STATE();
    case 532:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 533:
      if (lookahead == 'R') ADVANCE(486);
      END_STATE();
    case 534:
      if (lookahead == 'R') ADVANCE(172);
      END_STATE();
    case 535:
      if (lookahead == 'R') ADVANCE(483);
      END_STATE();
    case 536:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 537:
      if (lookahead == 'R') ADVANCE(591);
      END_STATE();
    case 538:
      if (lookahead == 'R') ADVANCE(591);
      if (lookahead == 'U') ADVANCE(548);
      END_STATE();
    case 539:
      if (lookahead == 'R') ADVANCE(173);
      END_STATE();
    case 540:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 541:
      if (lookahead == 'R') ADVANCE(570);
      END_STATE();
    case 542:
      if (lookahead == 'R') ADVANCE(191);
      END_STATE();
    case 543:
      if (lookahead == 'R') ADVANCE(511);
      END_STATE();
    case 544:
      if (lookahead == 'R') ADVANCE(178);
      END_STATE();
    case 545:
      if (lookahead == 'R') ADVANCE(175);
      END_STATE();
    case 546:
      if (lookahead == 'R') ADVANCE(189);
      END_STATE();
    case 547:
      if (lookahead == 'R') ADVANCE(593);
      END_STATE();
    case 548:
      if (lookahead == 'R') ADVANCE(143);
      END_STATE();
    case 549:
      if (lookahead == 'R') ADVANCE(433);
      END_STATE();
    case 550:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 551:
      if (lookahead == 'R') ADVANCE(485);
      END_STATE();
    case 552:
      if (lookahead == 'R') ADVANCE(435);
      END_STATE();
    case 553:
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 554:
      if (lookahead == 'R') ADVANCE(281);
      END_STATE();
    case 555:
      if (lookahead == 'R') ADVANCE(321);
      END_STATE();
    case 556:
      if (lookahead == 'R') ADVANCE(96);
      END_STATE();
    case 557:
      if (lookahead == 'R') ADVANCE(479);
      END_STATE();
    case 558:
      if (lookahead == 'R') ADVANCE(347);
      END_STATE();
    case 559:
      if (lookahead == 'R') ADVANCE(120);
      END_STATE();
    case 560:
      if (lookahead == 'R') ADVANCE(124);
      END_STATE();
    case 561:
      if (lookahead == 'R') ADVANCE(123);
      END_STATE();
    case 562:
      if (lookahead == 'S') ADVANCE(134);
      END_STATE();
    case 563:
      if (lookahead == 'S') ADVANCE(1176);
      END_STATE();
    case 564:
      if (lookahead == 'S') ADVANCE(1111);
      END_STATE();
    case 565:
      if (lookahead == 'S') ADVANCE(1104);
      END_STATE();
    case 566:
      if (lookahead == 'S') ADVANCE(1158);
      END_STATE();
    case 567:
      if (lookahead == 'S') ADVANCE(1149);
      END_STATE();
    case 568:
      if (lookahead == 'S') ADVANCE(1135);
      END_STATE();
    case 569:
      if (lookahead == 'S') ADVANCE(1159);
      END_STATE();
    case 570:
      if (lookahead == 'S') ADVANCE(1189);
      END_STATE();
    case 571:
      if (lookahead == 'S') ADVANCE(1130);
      END_STATE();
    case 572:
      if (lookahead == 'S') ADVANCE(299);
      END_STATE();
    case 573:
      if (lookahead == 'S') ADVANCE(2);
      END_STATE();
    case 574:
      if (lookahead == 'S') ADVANCE(564);
      END_STATE();
    case 575:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 576:
      if (lookahead == 'S') ADVANCE(244);
      END_STATE();
    case 577:
      if (lookahead == 'S') ADVANCE(611);
      END_STATE();
    case 578:
      if (lookahead == 'S') ADVANCE(627);
      END_STATE();
    case 579:
      if (lookahead == 'S') ADVANCE(327);
      END_STATE();
    case 580:
      if (lookahead == 'S') ADVANCE(251);
      END_STATE();
    case 581:
      if (lookahead == 'S') ADVANCE(338);
      END_STATE();
    case 582:
      if (lookahead == 'S') ADVANCE(342);
      END_STATE();
    case 583:
      if (lookahead == 'S') ADVANCE(346);
      END_STATE();
    case 584:
      if (lookahead == 'S') ADVANCE(255);
      END_STATE();
    case 585:
      if (lookahead == 'S') ADVANCE(256);
      END_STATE();
    case 586:
      if (lookahead == 'S') ADVANCE(257);
      END_STATE();
    case 587:
      if (lookahead == 'S') ADVANCE(258);
      END_STATE();
    case 588:
      if (lookahead == 'S') ADVANCE(259);
      END_STATE();
    case 589:
      if (lookahead == 'S') ADVANCE(260);
      END_STATE();
    case 590:
      if (lookahead == 'T') ADVANCE(289);
      END_STATE();
    case 591:
      if (lookahead == 'T') ADVANCE(1143);
      END_STATE();
    case 592:
      if (lookahead == 'T') ADVANCE(1096);
      END_STATE();
    case 593:
      if (lookahead == 'T') ADVANCE(5);
      END_STATE();
    case 594:
      if (lookahead == 'T') ADVANCE(1124);
      END_STATE();
    case 595:
      if (lookahead == 'T') ADVANCE(1184);
      END_STATE();
    case 596:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 597:
      if (lookahead == 'T') ADVANCE(287);
      END_STATE();
    case 598:
      if (lookahead == 'T') ADVANCE(4);
      END_STATE();
    case 599:
      if (lookahead == 'T') ADVANCE(949);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(599)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 600:
      if (lookahead == 'T') ADVANCE(126);
      END_STATE();
    case 601:
      if (lookahead == 'T') ADVANCE(304);
      END_STATE();
    case 602:
      if (lookahead == 'T') ADVANCE(522);
      END_STATE();
    case 603:
      if (lookahead == 'T') ADVANCE(678);
      END_STATE();
    case 604:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 605:
      if (lookahead == 'T') ADVANCE(309);
      END_STATE();
    case 606:
      if (lookahead == 'T') ADVANCE(622);
      END_STATE();
    case 607:
      if (lookahead == 'T') ADVANCE(312);
      END_STATE();
    case 608:
      if (lookahead == 'T') ADVANCE(298);
      END_STATE();
    case 609:
      if (lookahead == 'T') ADVANCE(295);
      END_STATE();
    case 610:
      if (lookahead == 'T') ADVANCE(569);
      END_STATE();
    case 611:
      if (lookahead == 'T') ADVANCE(509);
      END_STATE();
    case 612:
      if (lookahead == 'T') ADVANCE(325);
      END_STATE();
    case 613:
      if (lookahead == 'T') ADVANCE(657);
      END_STATE();
    case 614:
      if (lookahead == 'T') ADVANCE(231);
      END_STATE();
    case 615:
      if (lookahead == 'T') ADVANCE(214);
      END_STATE();
    case 616:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 617:
      if (lookahead == 'T') ADVANCE(232);
      END_STATE();
    case 618:
      if (lookahead == 'T') ADVANCE(100);
      END_STATE();
    case 619:
      if (lookahead == 'T') ADVANCE(125);
      END_STATE();
    case 620:
      if (lookahead == 'T') ADVANCE(614);
      END_STATE();
    case 621:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 622:
      if (lookahead == 'T') ADVANCE(470);
      END_STATE();
    case 623:
      if (lookahead == 'T') ADVANCE(228);
      END_STATE();
    case 624:
      if (lookahead == 'T') ADVANCE(329);
      END_STATE();
    case 625:
      if (lookahead == 'T') ADVANCE(535);
      END_STATE();
    case 626:
      if (lookahead == 'T') ADVANCE(243);
      END_STATE();
    case 627:
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 628:
      if (lookahead == 'T') ADVANCE(551);
      END_STATE();
    case 629:
      if (lookahead == 'T') ADVANCE(320);
      END_STATE();
    case 630:
      if (lookahead == 'T') ADVANCE(237);
      END_STATE();
    case 631:
      if (lookahead == 'T') ADVANCE(626);
      END_STATE();
    case 632:
      if (lookahead == 'T') ADVANCE(240);
      END_STATE();
    case 633:
      if (lookahead == 'T') ADVANCE(241);
      END_STATE();
    case 634:
      if (lookahead == 'T') ADVANCE(242);
      END_STATE();
    case 635:
      if (lookahead == 'T') ADVANCE(245);
      END_STATE();
    case 636:
      if (lookahead == 'T') ADVANCE(247);
      END_STATE();
    case 637:
      if (lookahead == 'T') ADVANCE(254);
      END_STATE();
    case 638:
      if (lookahead == 'T') ADVANCE(332);
      END_STATE();
    case 639:
      if (lookahead == 'T') ADVANCE(333);
      END_STATE();
    case 640:
      if (lookahead == 'T') ADVANCE(334);
      END_STATE();
    case 641:
      if (lookahead == 'T') ADVANCE(336);
      END_STATE();
    case 642:
      if (lookahead == 'T') ADVANCE(337);
      END_STATE();
    case 643:
      if (lookahead == 'T') ADVANCE(339);
      END_STATE();
    case 644:
      if (lookahead == 'T') ADVANCE(340);
      END_STATE();
    case 645:
      if (lookahead == 'T') ADVANCE(341);
      END_STATE();
    case 646:
      if (lookahead == 'T') ADVANCE(343);
      END_STATE();
    case 647:
      if (lookahead == 'T') ADVANCE(344);
      END_STATE();
    case 648:
      if (lookahead == 'T') ADVANCE(345);
      END_STATE();
    case 649:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 650:
      if (lookahead == 'T') ADVANCE(354);
      END_STATE();
    case 651:
      if (lookahead == 'U') ADVANCE(375);
      END_STATE();
    case 652:
      if (lookahead == 'U') ADVANCE(565);
      END_STATE();
    case 653:
      if (lookahead == 'U') ADVANCE(407);
      END_STATE();
    case 654:
      if (lookahead == 'U') ADVANCE(555);
      END_STATE();
    case 655:
      if (lookahead == 'U') ADVANCE(209);
      END_STATE();
    case 656:
      if (lookahead == 'U') ADVANCE(604);
      END_STATE();
    case 657:
      if (lookahead == 'U') ADVANCE(573);
      END_STATE();
    case 658:
      if (lookahead == 'U') ADVANCE(602);
      END_STATE();
    case 659:
      if (lookahead == 'U') ADVANCE(454);
      END_STATE();
    case 660:
      if (lookahead == 'U') ADVANCE(560);
      END_STATE();
    case 661:
      if (lookahead == 'U') ADVANCE(450);
      END_STATE();
    case 662:
      if (lookahead == 'U') ADVANCE(249);
      END_STATE();
    case 663:
      if (lookahead == 'U') ADVANCE(633);
      END_STATE();
    case 664:
      if (lookahead == 'U') ADVANCE(634);
      END_STATE();
    case 665:
      if (lookahead == 'U') ADVANCE(649);
      END_STATE();
    case 666:
      if (lookahead == 'V') ADVANCE(305);
      END_STATE();
    case 667:
      if (lookahead == 'V') ADVANCE(330);
      END_STATE();
    case 668:
      if (lookahead == 'V') ADVANCE(101);
      END_STATE();
    case 669:
      if (lookahead == 'V') ADVANCE(211);
      END_STATE();
    case 670:
      if (lookahead == 'V') ADVANCE(213);
      END_STATE();
    case 671:
      if (lookahead == 'V') ADVANCE(349);
      END_STATE();
    case 672:
      if (lookahead == 'V') ADVANCE(350);
      END_STATE();
    case 673:
      if (lookahead == 'X') ADVANCE(238);
      END_STATE();
    case 674:
      if (lookahead == 'X') ADVANCE(637);
      END_STATE();
    case 675:
      if (lookahead == 'Y') ADVANCE(1115);
      END_STATE();
    case 676:
      if (lookahead == 'Y') ADVANCE(1157);
      END_STATE();
    case 677:
      if (lookahead == 'Y') ADVANCE(1085);
      END_STATE();
    case 678:
      if (lookahead == 'Y') ADVANCE(44);
      END_STATE();
    case 679:
      if (lookahead == 'Y') ADVANCE(313);
      END_STATE();
    case 680:
      if (lookahead == 'Z') ADVANCE(207);
      END_STATE();
    case 681:
      if (lookahead == 'Z') ADVANCE(116);
      END_STATE();
    case 682:
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 683:
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 684:
      if (lookahead == 'a') ADVANCE(738);
      END_STATE();
    case 685:
      if (lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 686:
      if (lookahead == 'a') ADVANCE(744);
      END_STATE();
    case 687:
      if (lookahead == 'a') ADVANCE(739);
      END_STATE();
    case 688:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 689:
      if (lookahead == 'a') ADVANCE(746);
      END_STATE();
    case 690:
      if (lookahead == 'a') ADVANCE(747);
      END_STATE();
    case 691:
      if (lookahead == 'b') ADVANCE(735);
      END_STATE();
    case 692:
      if (lookahead == 'b') ADVANCE(717);
      END_STATE();
    case 693:
      if (lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 694:
      if (lookahead == 'c') ADVANCE(764);
      END_STATE();
    case 695:
      if (lookahead == 'c') ADVANCE(790);
      END_STATE();
    case 696:
      if (lookahead == 'c') ADVANCE(723);
      END_STATE();
    case 697:
      if (lookahead == 'c') ADVANCE(705);
      END_STATE();
    case 698:
      if (lookahead == 'c') ADVANCE(794);
      END_STATE();
    case 699:
      if (lookahead == 'c') ADVANCE(766);
      END_STATE();
    case 700:
      if (lookahead == 'd') ADVANCE(731);
      END_STATE();
    case 701:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 702:
      if (lookahead == 'e') ADVANCE(1050);
      END_STATE();
    case 703:
      if (lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 704:
      if (lookahead == 'e') ADVANCE(1049);
      END_STATE();
    case 705:
      if (lookahead == 'e') ADVANCE(1074);
      END_STATE();
    case 706:
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(706)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 707:
      if (lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 708:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 709:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 710:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 711:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 712:
      if (lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 713:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 714:
      if (lookahead == 'e') ADVANCE(753);
      END_STATE();
    case 715:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 716:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 717:
      if (lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 718:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 719:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 720:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 721:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 722:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 723:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 724:
      if (lookahead == 'f') ADVANCE(734);
      END_STATE();
    case 725:
      if (lookahead == 'f') ADVANCE(718);
      END_STATE();
    case 726:
      if (lookahead == 'g') ADVANCE(1108);
      END_STATE();
    case 727:
      if (lookahead == 'h') ADVANCE(682);
      END_STATE();
    case 728:
      if (lookahead == 'h') ADVANCE(682);
      if (lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 729:
      if (lookahead == 'h') ADVANCE(683);
      END_STATE();
    case 730:
      if (lookahead == 'i') ADVANCE(763);
      END_STATE();
    case 731:
      if (lookahead == 'i') ADVANCE(787);
      END_STATE();
    case 732:
      if (lookahead == 'i') ADVANCE(684);
      END_STATE();
    case 733:
      if (lookahead == 'i') ADVANCE(750);
      END_STATE();
    case 734:
      if (lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 735:
      if (lookahead == 'j') ADVANCE(708);
      END_STATE();
    case 736:
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 737:
      if (lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 738:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 739:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 740:
      if (lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 741:
      if (lookahead == 'm') ADVANCE(768);
      END_STATE();
    case 742:
      if (lookahead == 'm') ADVANCE(769);
      END_STATE();
    case 743:
      if (lookahead == 'm') ADVANCE(711);
      END_STATE();
    case 744:
      if (lookahead == 'm') ADVANCE(710);
      END_STATE();
    case 745:
      if (lookahead == 'm') ADVANCE(702);
      END_STATE();
    case 746:
      if (lookahead == 'm') ADVANCE(703);
      END_STATE();
    case 747:
      if (lookahead == 'm') ADVANCE(704);
      END_STATE();
    case 748:
      if (lookahead == 'm') ADVANCE(770);
      END_STATE();
    case 749:
      if (lookahead == 'n') ADVANCE(700);
      END_STATE();
    case 750:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 751:
      if (lookahead == 'n') ADVANCE(788);
      END_STATE();
    case 752:
      if (lookahead == 'n') ADVANCE(686);
      END_STATE();
    case 753:
      if (lookahead == 'n') ADVANCE(697);
      END_STATE();
    case 754:
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 755:
      if (lookahead == 'n') ADVANCE(791);
      END_STATE();
    case 756:
      if (lookahead == 'n') ADVANCE(792);
      END_STATE();
    case 757:
      if (lookahead == 'n') ADVANCE(793);
      END_STATE();
    case 758:
      if (lookahead == 'n') ADVANCE(688);
      END_STATE();
    case 759:
      if (lookahead == 'n') ADVANCE(689);
      END_STATE();
    case 760:
      if (lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 761:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 762:
      if (lookahead == 'o') ADVANCE(798);
      if (lookahead == 'p') ADVANCE(701);
      END_STATE();
    case 763:
      if (lookahead == 'o') ADVANCE(761);
      END_STATE();
    case 764:
      if (lookahead == 'o') ADVANCE(742);
      END_STATE();
    case 765:
      if (lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 766:
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 767:
      if (lookahead == 'p') ADVANCE(729);
      END_STATE();
    case 768:
      if (lookahead == 'p') ADVANCE(737);
      END_STATE();
    case 769:
      if (lookahead == 'p') ADVANCE(799);
      END_STATE();
    case 770:
      if (lookahead == 'p') ADVANCE(800);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 772:
      if (lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 773:
      if (lookahead == 'r') ADVANCE(803);
      END_STATE();
    case 774:
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 775:
      if (lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 776:
      if (lookahead == 'r') ADVANCE(804);
      END_STATE();
    case 777:
      if (lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 778:
      if (lookahead == 'r') ADVANCE(709);
      END_STATE();
    case 779:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 780:
      if (lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 781:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 782:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 783:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 784:
      if (lookahead == 's') ADVANCE(789);
      END_STATE();
    case 785:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(712);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(730);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(765);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(777);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(773);
      END_STATE();
    case 793:
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(713);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(722);
      END_STATE();
    case 798:
      if (lookahead == 'u') ADVANCE(775);
      END_STATE();
    case 799:
      if (lookahead == 'u') ADVANCE(795);
      END_STATE();
    case 800:
      if (lookahead == 'u') ADVANCE(797);
      END_STATE();
    case 801:
      if (lookahead == 'x') ADVANCE(786);
      END_STATE();
    case 802:
      if (lookahead == 'y') ADVANCE(1069);
      END_STATE();
    case 803:
      if (lookahead == 'y') ADVANCE(1068);
      END_STATE();
    case 804:
      if (lookahead == 'y') ADVANCE(1067);
      END_STATE();
    case 805:
      if (eof) ADVANCE(819);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'B') ADVANCE(359);
      if (lookahead == 'C') ADVANCE(291);
      if (lookahead == 'D') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(674);
      if (lookahead == 'F') ADVANCE(167);
      if (lookahead == 'G') ADVANCE(368);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'P') ADVANCE(543);
      if (lookahead == 'R') ADVANCE(216);
      if (lookahead == 'S') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(461);
      if (lookahead == 'V') ADVANCE(70);
      if (lookahead == 'W') ADVANCE(462);
      if (lookahead == 'c') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(805)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1051);
      END_STATE();
    case 806:
      if (eof) ADVANCE(819);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'B') ADVANCE(468);
      if (lookahead == 'C') ADVANCE(292);
      if (lookahead == 'D') ADVANCE(105);
      if (lookahead == 'E') ADVANCE(417);
      if (lookahead == 'F') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(24);
      if (lookahead == 'L') ADVANCE(324);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'O') ADVANCE(386);
      if (lookahead == 'P') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(217);
      if (lookahead == 'S') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(473);
      if (lookahead == 'W') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(806)
      END_STATE();
    case 807:
      if (eof) ADVANCE(819);
      if (lookahead == 'A') ADVANCE(982);
      if (lookahead == 'B') ADVANCE(953);
      if (lookahead == 'C') ADVANCE(950);
      if (lookahead == 'F') ADVANCE(860);
      if (lookahead == 'L') ADVANCE(905);
      if (lookahead == 'R') ADVANCE(874);
      if (lookahead == 'T') ADVANCE(952);
      if (lookahead == 'W') ADVANCE(957);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(807)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 808:
      if (eof) ADVANCE(819);
      if (lookahead == 'A') ADVANCE(1000);
      if (lookahead == 'B') ADVANCE(953);
      if (lookahead == 'C') ADVANCE(950);
      if (lookahead == 'D') ADVANCE(842);
      if (lookahead == 'F') ADVANCE(860);
      if (lookahead == 'I') ADVANCE(988);
      if (lookahead == 'L') ADVANCE(905);
      if (lookahead == 'R') ADVANCE(874);
      if (lookahead == 'T') ADVANCE(952);
      if (lookahead == 'W') ADVANCE(957);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(808)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 809:
      if (eof) ADVANCE(819);
      if (lookahead == 'A') ADVANCE(1000);
      if (lookahead == 'B') ADVANCE(953);
      if (lookahead == 'C') ADVANCE(950);
      if (lookahead == 'D') ADVANCE(842);
      if (lookahead == 'F') ADVANCE(860);
      if (lookahead == 'L') ADVANCE(905);
      if (lookahead == 'R') ADVANCE(874);
      if (lookahead == 'T') ADVANCE(952);
      if (lookahead == 'W') ADVANCE(957);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(809)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 810:
      if (eof) ADVANCE(819);
      if (lookahead == 'A') ADVANCE(1000);
      if (lookahead == 'B') ADVANCE(953);
      if (lookahead == 'C') ADVANCE(950);
      if (lookahead == 'F') ADVANCE(860);
      if (lookahead == 'I') ADVANCE(988);
      if (lookahead == 'L') ADVANCE(905);
      if (lookahead == 'R') ADVANCE(874);
      if (lookahead == 'T') ADVANCE(952);
      if (lookahead == 'W') ADVANCE(957);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(810)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 811:
      if (eof) ADVANCE(819);
      if (lookahead == 'A') ADVANCE(1000);
      if (lookahead == 'B') ADVANCE(953);
      if (lookahead == 'C') ADVANCE(950);
      if (lookahead == 'F') ADVANCE(860);
      if (lookahead == 'L') ADVANCE(905);
      if (lookahead == 'R') ADVANCE(874);
      if (lookahead == 'T') ADVANCE(952);
      if (lookahead == 'W') ADVANCE(957);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(811)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 812:
      if (eof) ADVANCE(819);
      if (lookahead == 'A') ADVANCE(130);
      if (lookahead == 'C') ADVANCE(290);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'I') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(219);
      if (lookahead == 'S') ADVANCE(253);
      if (lookahead == 'T') ADVANCE(464);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(812)
      END_STATE();
    case 813:
      if (eof) ADVANCE(819);
      if (lookahead == 'A') ADVANCE(983);
      if (lookahead == 'D') ADVANCE(847);
      if (lookahead == 'F') ADVANCE(961);
      if (lookahead == 'M') ADVANCE(1018);
      if (lookahead == 'R') ADVANCE(883);
      if (lookahead == 'S') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(813)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 814:
      if (eof) ADVANCE(819);
      if (lookahead == 'C') ADVANCE(963);
      if (lookahead == 'D') ADVANCE(847);
      if (lookahead == 'M') ADVANCE(1018);
      if (lookahead == 'R') ADVANCE(883);
      if (lookahead == 'S') ADVANCE(838);
      if (lookahead == 'T') ADVANCE(839);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(814)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 815:
      if (eof) ADVANCE(819);
      if (lookahead == 'C') ADVANCE(963);
      if (lookahead == 'D') ADVANCE(847);
      if (lookahead == 'M') ADVANCE(1018);
      if (lookahead == 'R') ADVANCE(883);
      if (lookahead == 'S') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(815)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 816:
      if (eof) ADVANCE(819);
      if (lookahead == 'D') ADVANCE(847);
      if (lookahead == 'F') ADVANCE(961);
      if (lookahead == 'M') ADVANCE(1018);
      if (lookahead == 'R') ADVANCE(883);
      if (lookahead == 'S') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(816)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 817:
      if (eof) ADVANCE(819);
      if (lookahead == 'D') ADVANCE(847);
      if (lookahead == 'M') ADVANCE(1018);
      if (lookahead == 'P') ADVANCE(962);
      if (lookahead == 'R') ADVANCE(883);
      if (lookahead == 'S') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(817)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 818:
      if (eof) ADVANCE(819);
      if (lookahead == 'D') ADVANCE(847);
      if (lookahead == 'M') ADVANCE(1018);
      if (lookahead == 'R') ADVANCE(883);
      if (lookahead == 'S') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(818)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == ' ') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == ' ') ADVANCE(588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == '-') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == '-') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == '-') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == '-') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == '1') ADVANCE(1090);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(929);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(1201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(1128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(1025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(889);
      if (lookahead == 'E') ADVANCE(989);
      if (lookahead == 'K') ADVANCE(846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(941);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(1011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(1006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(1013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'A') ADVANCE(893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'B') ADVANCE(954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'C') ADVANCE(1081);
      if (lookahead == 'K') ADVANCE(1119);
      if (lookahead == 'P') ADVANCE(923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'C') ADVANCE(1081);
      if (lookahead == 'K') ADVANCE(1120);
      if (lookahead == 'P') ADVANCE(923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'C') ADVANCE(1079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'C') ADVANCE(1016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'C') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'D') ADVANCE(1084);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'D') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'D') ADVANCE(877);
      if (lookahead == 'M') ADVANCE(928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(1024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(1123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(1093);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(1114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(1203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(1167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(1142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(1148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(1100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(919);
      if (lookahead == 'L') ADVANCE(845);
      if (lookahead == 'S') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(1026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(1001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'E') ADVANCE(824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'F') ADVANCE(1156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'G') ADVANCE(844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'G') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'G') ADVANCE(934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'G') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'G') ADVANCE(829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'G') ADVANCE(886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'H') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(987);
      if (lookahead == 'Y') ADVANCE(931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(1027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(999);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(890);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(939);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(992);
      if (lookahead == 'Y') ADVANCE(931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(944);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(1022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(1015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'I') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'K') ADVANCE(1120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'K') ADVANCE(906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'L') ADVANCE(1095);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'L') ADVANCE(1077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'L') ADVANCE(1126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'L') ADVANCE(1004);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'L') ADVANCE(834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'L') ADVANCE(866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'L') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'M') ADVANCE(1183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'M') ADVANCE(1083);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'M') ADVANCE(1020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'M') ADVANCE(897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'M') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(1110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(1171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(1138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(1152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(1140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(900);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(1012);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(1014);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'N') ADVANCE(823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(1174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(1007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(932);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(946);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'O') ADVANCE(945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'P') ADVANCE(1181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'P') ADVANCE(924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'P') ADVANCE(958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'P') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'P') ADVANCE(1017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(1021);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(1088);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(1146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(1103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(1019);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(1002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(869);
      if (lookahead == 'T') ADVANCE(1179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'R') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(1169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(1177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(1150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(917);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(994);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'S') ADVANCE(1010);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(1097);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(1179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(1185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(896);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(899);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(1009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(914);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'T') ADVANCE(916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'U') ADVANCE(922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'U') ADVANCE(935);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'U') ADVANCE(943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'V') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'V') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'X') ADVANCE(1003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'Y') ADVANCE(853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'Y') ADVANCE(1086);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'Y') ADVANCE(1116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'Z') ADVANCE(849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'a') ADVANCE(1039);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'c') ADVANCE(1031);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'e') ADVANCE(1043);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'e') ADVANCE(1075);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'e') ADVANCE(1042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'e') ADVANCE(827);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'e') ADVANCE(1037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'e') ADVANCE(1045);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'f') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'f') ADVANCE(1035);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'i') ADVANCE(1040);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'l') ADVANCE(826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'l') ADVANCE(1033);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'n') ADVANCE(1028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'n') ADVANCE(1029);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'r') ADVANCE(1041);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'r') ADVANCE(1034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'r') ADVANCE(1032);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 't') ADVANCE(1030);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == 'x') ADVANCE(1046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__user_defined_word);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_implementor_name);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_alphabet_name);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1051);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_character_string);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_comment_entry);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1054);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_comment_entry);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1054);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_IDENTIFICATIONDIVISION_DOT);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_AUTHOR_DOT);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_INSTALLATION_DOT);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_DATE_DASHWRITTEN_DOT);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_DATE_DASHCOMPILED_DOT);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_SECURITY_DOT);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_PROGRAM_DASHID_DOT);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_COMMON);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_INITIAL);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      if (lookahead == '-') ADVANCE(308);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_ENVIRONMENTDIVISION_DOT);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_source_computer_entry);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_object_computer_entry);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_special_names_entry);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_CONFIGURATIONSECTION_DOT);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_SOURCE_DASHCOMPUTER_DOT);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_OBJECT_DASHCOMPUTER_DOT);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_SPECIAL_DASHNAMES_DOT);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__external_file_reference);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__external_file_reference);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_EXTERNAL);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_EXTERNAL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_DYNAMIC);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_DYNAMIC);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_DISC);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_DISC);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_KEYBOARD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_DISPLAY);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_DISPLAY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_PRINTER);
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_PRINTER);
      if (lookahead == '-') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_PRINTER_DASH1);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_PRINTER_DASH1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_LINEADVANCING);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_MULTIPLE);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_MULTIPLE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_REEL);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_REEL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_UNIT);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_UNIT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_FILE);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_FILE);
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_FILE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_PADDING);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_CHARACTER);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_CHARACTER);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_STATUS);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_SEQUENTIAL);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_RECORDDELIMITER);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_STANDARD_DASH1);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_character_DASHstring);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_ORGANIZATION);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_ORGANIZATION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_ACCESS);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_MODE);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_RELATIVE);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_RELATIVE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_KEY);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_KEY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_RANDOM);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_DISK);
      if (lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_DISK);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_DISK);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_DISKFROM);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_RESERVE);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_RESERVE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_OPTIONAL);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_OPTIONAL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_AREA);
      if (lookahead == 'S') ADVANCE(1129);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_AREA);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_AREAS);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_FILESTATUSIS);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_INDEXED);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_RECORD);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_RECORD);
      if (lookahead == 'S') ADVANCE(1158);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_WITH);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_DUPLICATES);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_ALTERNATE);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_RERUN);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_RERUN);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_ON);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_SAME);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_SAME);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == '-') ADVANCE(402);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_SORT_DASHMERGE);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_TAPE);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_TAPE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_POSITION);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_POSITION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_REAL);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_OF);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_OF);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_EVERY);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_RECORDS);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_CLOCK_DASHUNITS);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_condition_DASHname);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_INPUT_DASHOUTPUTSECTION_DOT);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_FILE_DASHCONTROL_DOT);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_I_DASHO_DASHCONTROL_DOT);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_DATADIVISION_DOT);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_FILESECTION_DOT);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_ARE);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_ARE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__IS);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__IS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_ASSIGN);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_ASSIGN);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_TO);
      if (lookahead == 'P') ADVANCE(1180);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_TO);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_GLOBAL);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_LINES);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_LINES);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_TOP);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_TOP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_BOTTOM);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_BOTTOM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_CODE_DASHSET);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_CODE_DASHSET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_FD);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_FD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_BLOCK);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_CHARACTERS);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_VARYING);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == 'I') ADVANCE(607);
      if (lookahead == 'P') ADVANCE(656);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_SIZE);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_DEPENDING);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_LABEL);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_STANDARD);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_STANDARD);
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_OMITTED);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_VALUE);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_DATA);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_DATA);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_LINAGE);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_LINAGE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1048);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_FOOTING);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_working_storage_section);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_linkage_section);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_communication_section);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_report_section);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 805},
  [3] = {.lex_state = 805},
  [4] = {.lex_state = 805},
  [5] = {.lex_state = 805},
  [6] = {.lex_state = 806},
  [7] = {.lex_state = 177},
  [8] = {.lex_state = 805},
  [9] = {.lex_state = 805},
  [10] = {.lex_state = 805},
  [11] = {.lex_state = 805},
  [12] = {.lex_state = 805},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 805},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 805},
  [19] = {.lex_state = 805},
  [20] = {.lex_state = 805},
  [21] = {.lex_state = 805},
  [22] = {.lex_state = 805},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 805},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 805},
  [27] = {.lex_state = 805},
  [28] = {.lex_state = 805},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 805},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 805},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 805},
  [35] = {.lex_state = 805},
  [36] = {.lex_state = 805},
  [37] = {.lex_state = 806},
  [38] = {.lex_state = 186},
  [39] = {.lex_state = 176},
  [40] = {.lex_state = 805},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 805},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 177},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 805},
  [47] = {.lex_state = 805},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 805},
  [51] = {.lex_state = 805},
  [52] = {.lex_state = 805},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 805},
  [55] = {.lex_state = 806},
  [56] = {.lex_state = 805},
  [57] = {.lex_state = 805},
  [58] = {.lex_state = 805},
  [59] = {.lex_state = 805},
  [60] = {.lex_state = 805},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 808},
  [63] = {.lex_state = 805},
  [64] = {.lex_state = 805},
  [65] = {.lex_state = 87},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 805},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 805},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 809},
  [76] = {.lex_state = 805},
  [77] = {.lex_state = 805},
  [78] = {.lex_state = 805},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 809},
  [84] = {.lex_state = 805},
  [85] = {.lex_state = 809},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 809},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 805},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 811},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 811},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 811},
  [114] = {.lex_state = 806},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 809},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 810},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 806},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 807},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 806},
  [131] = {.lex_state = 806},
  [132] = {.lex_state = 811},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 811},
  [135] = {.lex_state = 806},
  [136] = {.lex_state = 806},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 806},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 806},
  [143] = {.lex_state = 806},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 806},
  [146] = {.lex_state = 806},
  [147] = {.lex_state = 806},
  [148] = {.lex_state = 806},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 806},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 806},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 806},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 806},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 806},
  [163] = {.lex_state = 806},
  [164] = {.lex_state = 806},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 806},
  [167] = {.lex_state = 806},
  [168] = {.lex_state = 806},
  [169] = {.lex_state = 806},
  [170] = {.lex_state = 806},
  [171] = {.lex_state = 806},
  [172] = {.lex_state = 813},
  [173] = {.lex_state = 806},
  [174] = {.lex_state = 814},
  [175] = {.lex_state = 806},
  [176] = {.lex_state = 806},
  [177] = {.lex_state = 806},
  [178] = {.lex_state = 806},
  [179] = {.lex_state = 816},
  [180] = {.lex_state = 806},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 806},
  [183] = {.lex_state = 815},
  [184] = {.lex_state = 806},
  [185] = {.lex_state = 806},
  [186] = {.lex_state = 806},
  [187] = {.lex_state = 806},
  [188] = {.lex_state = 806},
  [189] = {.lex_state = 87},
  [190] = {.lex_state = 806},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 806},
  [193] = {.lex_state = 806},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 806},
  [196] = {.lex_state = 818},
  [197] = {.lex_state = 818},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 818},
  [202] = {.lex_state = 812},
  [203] = {.lex_state = 87},
  [204] = {.lex_state = 812},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 806},
  [207] = {.lex_state = 812},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 806},
  [211] = {.lex_state = 818},
  [212] = {.lex_state = 806},
  [213] = {.lex_state = 818},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 818},
  [217] = {.lex_state = 806},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 818},
  [220] = {.lex_state = 87},
  [221] = {.lex_state = 818},
  [222] = {.lex_state = 806},
  [223] = {.lex_state = 818},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 806},
  [226] = {.lex_state = 818},
  [227] = {.lex_state = 818},
  [228] = {.lex_state = 818},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 812},
  [231] = {.lex_state = 806},
  [232] = {.lex_state = 806},
  [233] = {.lex_state = 817},
  [234] = {.lex_state = 805},
  [235] = {.lex_state = 806},
  [236] = {.lex_state = 806},
  [237] = {.lex_state = 806},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 806},
  [240] = {.lex_state = 188},
  [241] = {.lex_state = 806},
  [242] = {.lex_state = 806},
  [243] = {.lex_state = 806},
  [244] = {.lex_state = 806},
  [245] = {.lex_state = 806},
  [246] = {.lex_state = 806},
  [247] = {.lex_state = 817},
  [248] = {.lex_state = 806},
  [249] = {.lex_state = 806},
  [250] = {.lex_state = 806},
  [251] = {.lex_state = 806},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 818},
  [255] = {.lex_state = 805},
  [256] = {.lex_state = 805},
  [257] = {.lex_state = 805},
  [258] = {.lex_state = 806},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 806},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 806},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 806},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 806},
  [272] = {.lex_state = 818},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 806},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 806},
  [278] = {.lex_state = 267},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 806},
  [281] = {.lex_state = 806},
  [282] = {.lex_state = 806},
  [283] = {.lex_state = 806},
  [284] = {.lex_state = 806},
  [285] = {.lex_state = 812},
  [286] = {.lex_state = 806},
  [287] = {.lex_state = 806},
  [288] = {.lex_state = 806},
  [289] = {.lex_state = 806},
  [290] = {.lex_state = 812},
  [291] = {.lex_state = 812},
  [292] = {.lex_state = 812},
  [293] = {.lex_state = 806},
  [294] = {.lex_state = 806},
  [295] = {.lex_state = 812},
  [296] = {.lex_state = 806},
  [297] = {.lex_state = 806},
  [298] = {.lex_state = 136},
  [299] = {.lex_state = 706},
  [300] = {.lex_state = 706},
  [301] = {.lex_state = 806},
  [302] = {.lex_state = 806},
  [303] = {.lex_state = 806},
  [304] = {.lex_state = 812},
  [305] = {.lex_state = 806},
  [306] = {.lex_state = 806},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 806},
  [309] = {.lex_state = 806},
  [310] = {.lex_state = 806},
  [311] = {.lex_state = 806},
  [312] = {.lex_state = 806},
  [313] = {.lex_state = 706},
  [314] = {.lex_state = 706},
  [315] = {.lex_state = 806},
  [316] = {.lex_state = 806},
  [317] = {.lex_state = 806},
  [318] = {.lex_state = 806},
  [319] = {.lex_state = 806},
  [320] = {.lex_state = 806},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 806},
  [323] = {.lex_state = 806},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 706},
  [327] = {.lex_state = 806},
  [328] = {.lex_state = 706},
  [329] = {.lex_state = 806},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 806},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 805},
  [334] = {.lex_state = 484},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 806},
  [337] = {.lex_state = 471},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 805},
  [341] = {.lex_state = 484},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 806},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 484},
  [346] = {.lex_state = 15},
  [347] = {.lex_state = 84},
  [348] = {.lex_state = 806},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 484},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 484},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 484},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 805},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 465},
  [359] = {.lex_state = 297},
  [360] = {.lex_state = 806},
  [361] = {.lex_state = 84},
  [362] = {.lex_state = 484},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 266},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 805},
  [367] = {.lex_state = 806},
  [368] = {.lex_state = 805},
  [369] = {.lex_state = 806},
  [370] = {.lex_state = 297},
  [371] = {.lex_state = 297},
  [372] = {.lex_state = 84},
  [373] = {.lex_state = 297},
  [374] = {.lex_state = 806},
  [375] = {.lex_state = 805},
  [376] = {.lex_state = 484},
  [377] = {.lex_state = 296},
  [378] = {.lex_state = 484},
  [379] = {.lex_state = 484},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 805},
  [383] = {.lex_state = 296},
  [384] = {.lex_state = 84},
  [385] = {.lex_state = 267},
  [386] = {.lex_state = 812},
  [387] = {.lex_state = 599},
  [388] = {.lex_state = 806},
  [389] = {.lex_state = 465},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 266},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 805},
  [394] = {.lex_state = 806},
  [395] = {.lex_state = 806},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 484},
  [398] = {.lex_state = 812},
  [399] = {.lex_state = 15},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 15},
  [402] = {.lex_state = 15},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 806},
  [405] = {.lex_state = 706},
  [406] = {.lex_state = 806},
  [407] = {.lex_state = 806},
  [408] = {.lex_state = 15},
  [409] = {.lex_state = 15},
  [410] = {.lex_state = 15},
  [411] = {.lex_state = 15},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 15},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 806},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 15},
  [418] = {.lex_state = 15},
  [419] = {.lex_state = 15},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 15},
  [423] = {.lex_state = 15},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 297},
  [426] = {.lex_state = 15},
  [427] = {.lex_state = 15},
  [428] = {.lex_state = 15},
  [429] = {.lex_state = 15},
  [430] = {.lex_state = 15},
  [431] = {.lex_state = 806},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 15},
  [434] = {.lex_state = 15},
  [435] = {.lex_state = 15},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 15},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 15},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 15},
  [446] = {.lex_state = 15},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 15},
  [450] = {.lex_state = 15},
  [451] = {.lex_state = 15},
  [452] = {.lex_state = 706},
  [453] = {.lex_state = 706},
  [454] = {.lex_state = 15},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 15},
  [457] = {.lex_state = 805},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 15},
  [460] = {.lex_state = 15},
  [461] = {.lex_state = 15},
  [462] = {.lex_state = 805},
  [463] = {.lex_state = 15},
  [464] = {.lex_state = 805},
  [465] = {.lex_state = 15},
  [466] = {.lex_state = 15},
  [467] = {.lex_state = 805},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 15},
  [471] = {.lex_state = 15},
  [472] = {.lex_state = 15},
  [473] = {.lex_state = 15},
  [474] = {.lex_state = 15},
  [475] = {.lex_state = 15},
  [476] = {.lex_state = 15},
  [477] = {.lex_state = 15},
  [478] = {.lex_state = 15},
  [479] = {.lex_state = 297},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 15},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 806},
  [485] = {.lex_state = 15},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 806},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 15},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 805},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 806},
  [521] = {.lex_state = 15},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 15},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 15},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 15},
  [555] = {.lex_state = 15},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 15},
  [563] = {.lex_state = 15},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 1053},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 1053},
  [568] = {.lex_state = 1053},
  [569] = {.lex_state = 1053},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 1053},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_implementor_name] = ACTIONS(1),
    [sym_alphabet_name] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_character_string] = ACTIONS(1),
    [anon_sym_IDENTIFICATIONDIVISION_DOT] = ACTIONS(1),
    [anon_sym_AUTHOR_DOT] = ACTIONS(1),
    [anon_sym_DATE_DASHWRITTEN_DOT] = ACTIONS(1),
    [anon_sym_DATE_DASHCOMPILED_DOT] = ACTIONS(1),
    [anon_sym_SECURITY_DOT] = ACTIONS(1),
    [anon_sym_PROGRAM_DASHID_DOT] = ACTIONS(1),
    [anon_sym_COMMON] = ACTIONS(1),
    [anon_sym_INITIAL] = ACTIONS(1),
    [anon_sym_PROGRAM] = ACTIONS(1),
    [anon_sym_ENVIRONMENTDIVISION_DOT] = ACTIONS(1),
    [sym_source_computer_entry] = ACTIONS(1),
    [sym_object_computer_entry] = ACTIONS(1),
    [sym_special_names_entry] = ACTIONS(1),
    [anon_sym_CONFIGURATIONSECTION_DOT] = ACTIONS(1),
    [anon_sym_SOURCE_DASHCOMPUTER_DOT] = ACTIONS(1),
    [anon_sym_OBJECT_DASHCOMPUTER_DOT] = ACTIONS(1),
    [anon_sym_SPECIAL_DASHNAMES_DOT] = ACTIONS(1),
    [sym__external_file_reference] = ACTIONS(1),
    [anon_sym_EXTERNAL] = ACTIONS(1),
    [anon_sym_DYNAMIC] = ACTIONS(1),
    [anon_sym_DISC] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_DISPLAY] = ACTIONS(1),
    [anon_sym_PRINTER] = ACTIONS(1),
    [anon_sym_PRINTER_DASH1] = ACTIONS(1),
    [anon_sym_LINEADVANCING] = ACTIONS(1),
    [anon_sym_MULTIPLE] = ACTIONS(1),
    [anon_sym_REEL] = ACTIONS(1),
    [anon_sym_UNIT] = ACTIONS(1),
    [anon_sym_FILE] = ACTIONS(1),
    [anon_sym_PADDING] = ACTIONS(1),
    [anon_sym_CHARACTER] = ACTIONS(1),
    [anon_sym_STATUS] = ACTIONS(1),
    [anon_sym_SEQUENTIAL] = ACTIONS(1),
    [anon_sym_STANDARD_DASH1] = ACTIONS(1),
    [anon_sym_character_DASHstring] = ACTIONS(1),
    [anon_sym_ORGANIZATION] = ACTIONS(1),
    [anon_sym_ACCESS] = ACTIONS(1),
    [anon_sym_MODE] = ACTIONS(1),
    [anon_sym_RELATIVE] = ACTIONS(1),
    [anon_sym_KEY] = ACTIONS(1),
    [anon_sym_RANDOM] = ACTIONS(1),
    [anon_sym_DISK] = ACTIONS(1),
    [anon_sym_DISKFROM] = ACTIONS(1),
    [anon_sym_RESERVE] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_OPTIONAL] = ACTIONS(1),
    [anon_sym_RECORD] = ACTIONS(1),
    [anon_sym_WITH] = ACTIONS(1),
    [anon_sym_DUPLICATES] = ACTIONS(1),
    [anon_sym_ALTERNATE] = ACTIONS(1),
    [anon_sym_RERUN] = ACTIONS(1),
    [anon_sym_ON] = ACTIONS(1),
    [anon_sym_SAME] = ACTIONS(1),
    [anon_sym_SORT] = ACTIONS(1),
    [anon_sym_SORT_DASHMERGE] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_TAPE] = ACTIONS(1),
    [anon_sym_CONTAINS] = ACTIONS(1),
    [anon_sym_POSITION] = ACTIONS(1),
    [anon_sym_REAL] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_OF] = ACTIONS(1),
    [anon_sym_EVERY] = ACTIONS(1),
    [anon_sym_RECORDS] = ACTIONS(1),
    [anon_sym_CLOCK_DASHUNITS] = ACTIONS(1),
    [anon_sym_condition_DASHname] = ACTIONS(1),
    [anon_sym_INPUT_DASHOUTPUTSECTION_DOT] = ACTIONS(1),
    [anon_sym_FILE_DASHCONTROL_DOT] = ACTIONS(1),
    [anon_sym_I_DASHO_DASHCONTROL_DOT] = ACTIONS(1),
    [anon_sym_ARE] = ACTIONS(1),
    [sym__IS] = ACTIONS(1),
    [anon_sym_ASSIGN] = ACTIONS(1),
    [anon_sym_TO] = ACTIONS(1),
    [anon_sym_GLOBAL] = ACTIONS(1),
    [anon_sym_LINES] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TOP] = ACTIONS(1),
    [anon_sym_BOTTOM] = ACTIONS(1),
    [anon_sym_CODE_DASHSET] = ACTIONS(1),
    [anon_sym_FD] = ACTIONS(1),
    [anon_sym_BLOCK] = ACTIONS(1),
    [anon_sym_VARYING] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_SIZE] = ACTIONS(1),
    [anon_sym_DEPENDING] = ACTIONS(1),
    [anon_sym_LABEL] = ACTIONS(1),
    [anon_sym_STANDARD] = ACTIONS(1),
    [anon_sym_OMITTED] = ACTIONS(1),
    [anon_sym_VALUE] = ACTIONS(1),
    [anon_sym_DATA] = ACTIONS(1),
    [anon_sym_LINAGE] = ACTIONS(1),
    [anon_sym_FOOTING] = ACTIONS(1),
    [sym_working_storage_section] = ACTIONS(1),
    [sym_linkage_section] = ACTIONS(1),
    [sym_communication_section] = ACTIONS(1),
    [sym_report_section] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(575),
    [sym_identification_division] = STATE(288),
    [anon_sym_IDENTIFICATIONDIVISION_DOT] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(7), 1,
      anon_sym_EXTERNAL,
    ACTIONS(9), 1,
      anon_sym_RECORD,
    ACTIONS(11), 1,
      sym__IS,
    ACTIONS(13), 1,
      anon_sym_GLOBAL,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_TOP,
    ACTIONS(21), 1,
      anon_sym_BOTTOM,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(25), 1,
      anon_sym_BLOCK,
    ACTIONS(27), 1,
      anon_sym_LABEL,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    STATE(3), 1,
      sym__IS_EXTERNAL,
    STATE(4), 1,
      sym__IS_GLOBAL,
    STATE(9), 1,
      sym__record_sequential_file_block_description,
    STATE(13), 1,
      sym__record_sequential_file_record_description,
    STATE(31), 1,
      sym__record_sequential_file_label_description,
    STATE(48), 1,
      sym__record_sequential_file_value_description,
    STATE(79), 1,
      sym__record_sequential_file_data_description,
    STATE(126), 1,
      sym__record_sequential_file_linage_description,
    STATE(472), 1,
      sym__LINES_AT_BOTTOM,
    STATE(473), 1,
      sym__LINES_AT_TOP,
    STATE(514), 1,
      sym__CODE_SET_IS,
    ACTIONS(5), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [84] = 24,
    ACTIONS(9), 1,
      anon_sym_RECORD,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(25), 1,
      anon_sym_BLOCK,
    ACTIONS(27), 1,
      anon_sym_LABEL,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(37), 1,
      sym__IS,
    ACTIONS(39), 1,
      anon_sym_GLOBAL,
    ACTIONS(41), 1,
      anon_sym_TOP,
    ACTIONS(43), 1,
      anon_sym_BOTTOM,
    STATE(5), 1,
      sym__IS_GLOBAL,
    STATE(10), 1,
      sym__record_sequential_file_block_description,
    STATE(16), 1,
      sym__record_sequential_file_record_description,
    STATE(33), 1,
      sym__record_sequential_file_label_description,
    STATE(45), 1,
      sym__record_sequential_file_value_description,
    STATE(93), 1,
      sym__record_sequential_file_data_description,
    STATE(117), 1,
      sym__record_sequential_file_linage_description,
    STATE(429), 1,
      sym__LINES_AT_BOTTOM,
    STATE(443), 1,
      sym__LINES_AT_TOP,
    STATE(538), 1,
      sym__CODE_SET_IS,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [162] = 21,
    ACTIONS(9), 1,
      anon_sym_RECORD,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(25), 1,
      anon_sym_BLOCK,
    ACTIONS(27), 1,
      anon_sym_LABEL,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(41), 1,
      anon_sym_TOP,
    ACTIONS(43), 1,
      anon_sym_BOTTOM,
    STATE(10), 1,
      sym__record_sequential_file_block_description,
    STATE(16), 1,
      sym__record_sequential_file_record_description,
    STATE(33), 1,
      sym__record_sequential_file_label_description,
    STATE(45), 1,
      sym__record_sequential_file_value_description,
    STATE(93), 1,
      sym__record_sequential_file_data_description,
    STATE(117), 1,
      sym__record_sequential_file_linage_description,
    STATE(429), 1,
      sym__LINES_AT_BOTTOM,
    STATE(443), 1,
      sym__LINES_AT_TOP,
    STATE(538), 1,
      sym__CODE_SET_IS,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [231] = 21,
    ACTIONS(9), 1,
      anon_sym_RECORD,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(25), 1,
      anon_sym_BLOCK,
    ACTIONS(27), 1,
      anon_sym_LABEL,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(47), 1,
      anon_sym_TOP,
    ACTIONS(49), 1,
      anon_sym_BOTTOM,
    STATE(8), 1,
      sym__record_sequential_file_block_description,
    STATE(14), 1,
      sym__record_sequential_file_record_description,
    STATE(29), 1,
      sym__record_sequential_file_label_description,
    STATE(49), 1,
      sym__record_sequential_file_value_description,
    STATE(92), 1,
      sym__record_sequential_file_data_description,
    STATE(116), 1,
      sym__record_sequential_file_linage_description,
    STATE(409), 1,
      sym__LINES_AT_TOP,
    STATE(411), 1,
      sym__LINES_AT_BOTTOM,
    STATE(552), 1,
      sym__CODE_SET_IS,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [300] = 1,
    ACTIONS(51), 26,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_PADDING,
      anon_sym_STATUS,
      anon_sym_SEQUENTIAL,
      anon_sym_RECORDDELIMITER,
      anon_sym_ORGANIZATION,
      anon_sym_ACCESS,
      anon_sym_RESERVE,
      anon_sym_SELECT,
      anon_sym_WITH,
      anon_sym_DUPLICATES,
      anon_sym_ALTERNATE,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_FOOTING,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [329] = 15,
    ACTIONS(53), 1,
      sym__user_defined_word,
    ACTIONS(55), 1,
      sym__external_file_reference,
    ACTIONS(59), 1,
      anon_sym_DISC,
    ACTIONS(63), 1,
      anon_sym_LINEADVANCING,
    ACTIONS(65), 1,
      anon_sym_MULTIPLE,
    ACTIONS(71), 1,
      anon_sym_DISK,
    ACTIONS(73), 1,
      anon_sym_DISKFROM,
    STATE(38), 1,
      sym__external_or_dynamic,
    STATE(142), 1,
      sym__record_sequential_file_assign_destination,
    ACTIONS(57), 2,
      anon_sym_EXTERNAL,
      anon_sym_DYNAMIC,
    ACTIONS(67), 2,
      anon_sym_REEL,
      anon_sym_UNIT,
    STATE(130), 2,
      sym_literal,
      sym__file_reference,
    STATE(300), 2,
      sym__record_sequential_file_type,
      sym__line_advancing,
    ACTIONS(69), 3,
      anon_sym_ORGANIZATION,
      anon_sym_RELATIVE,
      anon_sym_RESERVE,
    ACTIONS(61), 4,
      anon_sym_KEYBOARD,
      anon_sym_DISPLAY,
      anon_sym_PRINTER,
      anon_sym_PRINTER_DASH1,
  [384] = 19,
    ACTIONS(9), 1,
      anon_sym_RECORD,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(27), 1,
      anon_sym_LABEL,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(77), 1,
      anon_sym_TOP,
    ACTIONS(79), 1,
      anon_sym_BOTTOM,
    STATE(17), 1,
      sym__record_sequential_file_record_description,
    STATE(23), 1,
      sym__record_sequential_file_label_description,
    STATE(41), 1,
      sym__record_sequential_file_value_description,
    STATE(89), 1,
      sym__record_sequential_file_data_description,
    STATE(118), 1,
      sym__record_sequential_file_linage_description,
    STATE(399), 1,
      sym__LINES_AT_TOP,
    STATE(456), 1,
      sym__LINES_AT_BOTTOM,
    STATE(523), 1,
      sym__CODE_SET_IS,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [447] = 19,
    ACTIONS(9), 1,
      anon_sym_RECORD,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(27), 1,
      anon_sym_LABEL,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(41), 1,
      anon_sym_TOP,
    ACTIONS(43), 1,
      anon_sym_BOTTOM,
    STATE(16), 1,
      sym__record_sequential_file_record_description,
    STATE(33), 1,
      sym__record_sequential_file_label_description,
    STATE(45), 1,
      sym__record_sequential_file_value_description,
    STATE(93), 1,
      sym__record_sequential_file_data_description,
    STATE(117), 1,
      sym__record_sequential_file_linage_description,
    STATE(429), 1,
      sym__LINES_AT_BOTTOM,
    STATE(443), 1,
      sym__LINES_AT_TOP,
    STATE(538), 1,
      sym__CODE_SET_IS,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [510] = 19,
    ACTIONS(9), 1,
      anon_sym_RECORD,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(27), 1,
      anon_sym_LABEL,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(47), 1,
      anon_sym_TOP,
    ACTIONS(49), 1,
      anon_sym_BOTTOM,
    STATE(14), 1,
      sym__record_sequential_file_record_description,
    STATE(29), 1,
      sym__record_sequential_file_label_description,
    STATE(49), 1,
      sym__record_sequential_file_value_description,
    STATE(92), 1,
      sym__record_sequential_file_data_description,
    STATE(116), 1,
      sym__record_sequential_file_linage_description,
    STATE(409), 1,
      sym__LINES_AT_TOP,
    STATE(411), 1,
      sym__LINES_AT_BOTTOM,
    STATE(552), 1,
      sym__CODE_SET_IS,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [573] = 8,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(85), 1,
      anon_sym_FROM,
    ACTIONS(87), 1,
      anon_sym_TO,
    ACTIONS(89), 1,
      anon_sym_CHARACTERS,
    ACTIONS(91), 1,
      anon_sym_IN,
    ACTIONS(93), 1,
      anon_sym_SIZE,
    ACTIONS(95), 1,
      anon_sym_DEPENDING,
    ACTIONS(81), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [612] = 8,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      anon_sym_FROM,
    ACTIONS(103), 1,
      anon_sym_TO,
    ACTIONS(105), 1,
      anon_sym_CHARACTERS,
    ACTIONS(107), 1,
      anon_sym_IN,
    ACTIONS(109), 1,
      anon_sym_SIZE,
    ACTIONS(111), 1,
      anon_sym_DEPENDING,
    ACTIONS(97), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [651] = 17,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(27), 1,
      anon_sym_LABEL,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(41), 1,
      anon_sym_TOP,
    ACTIONS(43), 1,
      anon_sym_BOTTOM,
    STATE(33), 1,
      sym__record_sequential_file_label_description,
    STATE(45), 1,
      sym__record_sequential_file_value_description,
    STATE(93), 1,
      sym__record_sequential_file_data_description,
    STATE(117), 1,
      sym__record_sequential_file_linage_description,
    STATE(429), 1,
      sym__LINES_AT_BOTTOM,
    STATE(443), 1,
      sym__LINES_AT_TOP,
    STATE(538), 1,
      sym__CODE_SET_IS,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [708] = 17,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(27), 1,
      anon_sym_LABEL,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(77), 1,
      anon_sym_TOP,
    ACTIONS(79), 1,
      anon_sym_BOTTOM,
    STATE(23), 1,
      sym__record_sequential_file_label_description,
    STATE(41), 1,
      sym__record_sequential_file_value_description,
    STATE(89), 1,
      sym__record_sequential_file_data_description,
    STATE(118), 1,
      sym__record_sequential_file_linage_description,
    STATE(399), 1,
      sym__LINES_AT_TOP,
    STATE(456), 1,
      sym__LINES_AT_BOTTOM,
    STATE(523), 1,
      sym__CODE_SET_IS,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [765] = 8,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      anon_sym_FROM,
    ACTIONS(119), 1,
      anon_sym_TO,
    ACTIONS(121), 1,
      anon_sym_CHARACTERS,
    ACTIONS(123), 1,
      anon_sym_IN,
    ACTIONS(125), 1,
      anon_sym_SIZE,
    ACTIONS(127), 1,
      anon_sym_DEPENDING,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [804] = 17,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(27), 1,
      anon_sym_LABEL,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(47), 1,
      anon_sym_TOP,
    ACTIONS(49), 1,
      anon_sym_BOTTOM,
    STATE(29), 1,
      sym__record_sequential_file_label_description,
    STATE(49), 1,
      sym__record_sequential_file_value_description,
    STATE(92), 1,
      sym__record_sequential_file_data_description,
    STATE(116), 1,
      sym__record_sequential_file_linage_description,
    STATE(409), 1,
      sym__LINES_AT_TOP,
    STATE(411), 1,
      sym__LINES_AT_BOTTOM,
    STATE(552), 1,
      sym__CODE_SET_IS,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [861] = 17,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(27), 1,
      anon_sym_LABEL,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(131), 1,
      anon_sym_TOP,
    ACTIONS(133), 1,
      anon_sym_BOTTOM,
    STATE(25), 1,
      sym__record_sequential_file_label_description,
    STATE(53), 1,
      sym__record_sequential_file_value_description,
    STATE(71), 1,
      sym__record_sequential_file_data_description,
    STATE(124), 1,
      sym__record_sequential_file_linage_description,
    STATE(418), 1,
      sym__LINES_AT_BOTTOM,
    STATE(422), 1,
      sym__LINES_AT_TOP,
    STATE(546), 1,
      sym__CODE_SET_IS,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [918] = 8,
    ACTIONS(137), 1,
      sym_integer,
    ACTIONS(139), 1,
      anon_sym_FROM,
    ACTIONS(141), 1,
      anon_sym_TO,
    ACTIONS(143), 1,
      anon_sym_CHARACTERS,
    ACTIONS(145), 1,
      anon_sym_IN,
    ACTIONS(147), 1,
      anon_sym_SIZE,
    ACTIONS(149), 1,
      anon_sym_DEPENDING,
    ACTIONS(135), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [957] = 7,
    ACTIONS(153), 1,
      sym_integer,
    ACTIONS(155), 1,
      anon_sym_FROM,
    ACTIONS(157), 1,
      anon_sym_TO,
    ACTIONS(159), 1,
      anon_sym_CHARACTERS,
    ACTIONS(161), 1,
      anon_sym_SIZE,
    ACTIONS(163), 1,
      anon_sym_DEPENDING,
    ACTIONS(151), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [993] = 7,
    ACTIONS(137), 1,
      sym_integer,
    ACTIONS(139), 1,
      anon_sym_FROM,
    ACTIONS(141), 1,
      anon_sym_TO,
    ACTIONS(143), 1,
      anon_sym_CHARACTERS,
    ACTIONS(147), 1,
      anon_sym_SIZE,
    ACTIONS(149), 1,
      anon_sym_DEPENDING,
    ACTIONS(135), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1029] = 7,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      anon_sym_FROM,
    ACTIONS(103), 1,
      anon_sym_TO,
    ACTIONS(105), 1,
      anon_sym_CHARACTERS,
    ACTIONS(109), 1,
      anon_sym_SIZE,
    ACTIONS(111), 1,
      anon_sym_DEPENDING,
    ACTIONS(97), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1065] = 7,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      anon_sym_FROM,
    ACTIONS(119), 1,
      anon_sym_TO,
    ACTIONS(121), 1,
      anon_sym_CHARACTERS,
    ACTIONS(125), 1,
      anon_sym_SIZE,
    ACTIONS(127), 1,
      anon_sym_DEPENDING,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1101] = 15,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(131), 1,
      anon_sym_TOP,
    ACTIONS(133), 1,
      anon_sym_BOTTOM,
    STATE(53), 1,
      sym__record_sequential_file_value_description,
    STATE(71), 1,
      sym__record_sequential_file_data_description,
    STATE(124), 1,
      sym__record_sequential_file_linage_description,
    STATE(418), 1,
      sym__LINES_AT_BOTTOM,
    STATE(422), 1,
      sym__LINES_AT_TOP,
    STATE(546), 1,
      sym__CODE_SET_IS,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1152] = 6,
    ACTIONS(167), 1,
      sym_integer,
    ACTIONS(169), 1,
      anon_sym_FROM,
    ACTIONS(171), 1,
      anon_sym_TO,
    ACTIONS(173), 1,
      anon_sym_CHARACTERS,
    ACTIONS(175), 1,
      anon_sym_DEPENDING,
    ACTIONS(165), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1185] = 15,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(179), 1,
      anon_sym_TOP,
    ACTIONS(181), 1,
      anon_sym_BOTTOM,
    STATE(43), 1,
      sym__record_sequential_file_value_description,
    STATE(94), 1,
      sym__record_sequential_file_data_description,
    STATE(120), 1,
      sym__record_sequential_file_linage_description,
    STATE(451), 1,
      sym__LINES_AT_BOTTOM,
    STATE(454), 1,
      sym__LINES_AT_TOP,
    STATE(524), 1,
      sym__CODE_SET_IS,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1236] = 6,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      anon_sym_FROM,
    ACTIONS(119), 1,
      anon_sym_TO,
    ACTIONS(121), 1,
      anon_sym_CHARACTERS,
    ACTIONS(127), 1,
      anon_sym_DEPENDING,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1269] = 1,
    ACTIONS(183), 20,
      ts_builtin_sym_end,
      anon_sym_EXTERNAL,
      anon_sym_RECORD,
      sym__IS,
      anon_sym_GLOBAL,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_BLOCK,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1292] = 6,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      anon_sym_FROM,
    ACTIONS(103), 1,
      anon_sym_TO,
    ACTIONS(105), 1,
      anon_sym_CHARACTERS,
    ACTIONS(111), 1,
      anon_sym_DEPENDING,
    ACTIONS(97), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1325] = 15,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(77), 1,
      anon_sym_TOP,
    ACTIONS(79), 1,
      anon_sym_BOTTOM,
    STATE(41), 1,
      sym__record_sequential_file_value_description,
    STATE(89), 1,
      sym__record_sequential_file_data_description,
    STATE(118), 1,
      sym__record_sequential_file_linage_description,
    STATE(399), 1,
      sym__LINES_AT_TOP,
    STATE(456), 1,
      sym__LINES_AT_BOTTOM,
    STATE(523), 1,
      sym__CODE_SET_IS,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1376] = 6,
    ACTIONS(137), 1,
      sym_integer,
    ACTIONS(139), 1,
      anon_sym_FROM,
    ACTIONS(141), 1,
      anon_sym_TO,
    ACTIONS(143), 1,
      anon_sym_CHARACTERS,
    ACTIONS(149), 1,
      anon_sym_DEPENDING,
    ACTIONS(135), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1409] = 15,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(41), 1,
      anon_sym_TOP,
    ACTIONS(43), 1,
      anon_sym_BOTTOM,
    STATE(45), 1,
      sym__record_sequential_file_value_description,
    STATE(93), 1,
      sym__record_sequential_file_data_description,
    STATE(117), 1,
      sym__record_sequential_file_linage_description,
    STATE(429), 1,
      sym__LINES_AT_BOTTOM,
    STATE(443), 1,
      sym__LINES_AT_TOP,
    STATE(538), 1,
      sym__CODE_SET_IS,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1460] = 6,
    ACTIONS(153), 1,
      sym_integer,
    ACTIONS(155), 1,
      anon_sym_FROM,
    ACTIONS(157), 1,
      anon_sym_TO,
    ACTIONS(159), 1,
      anon_sym_CHARACTERS,
    ACTIONS(163), 1,
      anon_sym_DEPENDING,
    ACTIONS(151), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1493] = 15,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(29), 1,
      anon_sym_VALUE,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(47), 1,
      anon_sym_TOP,
    ACTIONS(49), 1,
      anon_sym_BOTTOM,
    STATE(49), 1,
      sym__record_sequential_file_value_description,
    STATE(92), 1,
      sym__record_sequential_file_data_description,
    STATE(116), 1,
      sym__record_sequential_file_linage_description,
    STATE(409), 1,
      sym__LINES_AT_TOP,
    STATE(411), 1,
      sym__LINES_AT_BOTTOM,
    STATE(552), 1,
      sym__CODE_SET_IS,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1544] = 1,
    ACTIONS(185), 19,
      ts_builtin_sym_end,
      anon_sym_RECORD,
      sym__IS,
      anon_sym_GLOBAL,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_BLOCK,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1566] = 5,
    ACTIONS(189), 1,
      sym__IS,
    ACTIONS(191), 1,
      anon_sym_TO,
    ACTIONS(193), 1,
      anon_sym_CHARACTERS,
    ACTIONS(195), 1,
      anon_sym_VARYING,
    ACTIONS(187), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1596] = 5,
    ACTIONS(199), 1,
      sym__IS,
    ACTIONS(201), 1,
      anon_sym_TO,
    ACTIONS(203), 1,
      anon_sym_CHARACTERS,
    ACTIONS(205), 1,
      anon_sym_VARYING,
    ACTIONS(197), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1626] = 16,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(211), 1,
      anon_sym_PADDING,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(215), 1,
      anon_sym_SEQUENTIAL,
    ACTIONS(217), 1,
      anon_sym_RECORDDELIMITER,
    ACTIONS(219), 1,
      anon_sym_ORGANIZATION,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    ACTIONS(223), 1,
      anon_sym_RESERVE,
    STATE(55), 1,
      sym__relative_file_reserve,
    STATE(114), 1,
      sym__record_sequential_file_organization,
    STATE(146), 1,
      sym__record_sequential_file_padding,
    STATE(175), 1,
      sym__record_sequential_file_record_delimiter,
    STATE(232), 1,
      sym__record_sequential_file_record_access_mode,
    STATE(297), 1,
      sym__file_status,
    STATE(534), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [1678] = 10,
    ACTIONS(53), 1,
      sym__user_defined_word,
    ACTIONS(63), 1,
      anon_sym_LINEADVANCING,
    ACTIONS(65), 1,
      anon_sym_MULTIPLE,
    ACTIONS(225), 1,
      sym__external_file_reference,
    ACTIONS(231), 1,
      anon_sym_DISK,
    ACTIONS(67), 2,
      anon_sym_REEL,
      anon_sym_UNIT,
    STATE(136), 2,
      sym_literal,
      sym__file_reference,
    STATE(326), 2,
      sym__record_sequential_file_type,
      sym__line_advancing,
    ACTIONS(229), 3,
      anon_sym_ORGANIZATION,
      anon_sym_RELATIVE,
      anon_sym_RESERVE,
    ACTIONS(227), 5,
      anon_sym_DISC,
      anon_sym_KEYBOARD,
      anon_sym_DISPLAY,
      anon_sym_PRINTER,
      anon_sym_PRINTER_DASH1,
  [1718] = 3,
    ACTIONS(237), 1,
      anon_sym_TO,
    ACTIONS(235), 2,
      anon_sym_LINEADVANCING,
      anon_sym_DISKFROM,
    ACTIONS(233), 16,
      sym__user_defined_word,
      sym__external_file_reference,
      anon_sym_EXTERNAL,
      anon_sym_DYNAMIC,
      anon_sym_DISC,
      anon_sym_KEYBOARD,
      anon_sym_DISPLAY,
      anon_sym_PRINTER,
      anon_sym_PRINTER_DASH1,
      anon_sym_MULTIPLE,
      anon_sym_REEL,
      anon_sym_UNIT,
      anon_sym_ORGANIZATION,
      anon_sym_RELATIVE,
      anon_sym_DISK,
      anon_sym_RESERVE,
  [1744] = 4,
    ACTIONS(157), 1,
      anon_sym_TO,
    ACTIONS(159), 1,
      anon_sym_CHARACTERS,
    ACTIONS(163), 1,
      anon_sym_DEPENDING,
    ACTIONS(151), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1771] = 13,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(131), 1,
      anon_sym_TOP,
    ACTIONS(133), 1,
      anon_sym_BOTTOM,
    STATE(71), 1,
      sym__record_sequential_file_data_description,
    STATE(124), 1,
      sym__record_sequential_file_linage_description,
    STATE(418), 1,
      sym__LINES_AT_BOTTOM,
    STATE(422), 1,
      sym__LINES_AT_TOP,
    STATE(546), 1,
      sym__CODE_SET_IS,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1816] = 4,
    ACTIONS(241), 1,
      anon_sym_TO,
    ACTIONS(243), 1,
      anon_sym_CHARACTERS,
    ACTIONS(245), 1,
      anon_sym_DEPENDING,
    ACTIONS(239), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1843] = 13,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(249), 1,
      anon_sym_TOP,
    ACTIONS(251), 1,
      anon_sym_BOTTOM,
    STATE(80), 1,
      sym__record_sequential_file_data_description,
    STATE(123), 1,
      sym__record_sequential_file_linage_description,
    STATE(478), 1,
      sym__LINES_AT_BOTTOM,
    STATE(480), 1,
      sym__LINES_AT_TOP,
    STATE(513), 1,
      sym__CODE_SET_IS,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1888] = 2,
    ACTIONS(255), 2,
      anon_sym_LINEADVANCING,
      anon_sym_DISKFROM,
    ACTIONS(253), 16,
      sym__user_defined_word,
      sym__external_file_reference,
      anon_sym_EXTERNAL,
      anon_sym_DYNAMIC,
      anon_sym_DISC,
      anon_sym_KEYBOARD,
      anon_sym_DISPLAY,
      anon_sym_PRINTER,
      anon_sym_PRINTER_DASH1,
      anon_sym_MULTIPLE,
      anon_sym_REEL,
      anon_sym_UNIT,
      anon_sym_ORGANIZATION,
      anon_sym_RELATIVE,
      anon_sym_DISK,
      anon_sym_RESERVE,
  [1911] = 13,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(47), 1,
      anon_sym_TOP,
    ACTIONS(49), 1,
      anon_sym_BOTTOM,
    STATE(92), 1,
      sym__record_sequential_file_data_description,
    STATE(116), 1,
      sym__record_sequential_file_linage_description,
    STATE(409), 1,
      sym__LINES_AT_TOP,
    STATE(411), 1,
      sym__LINES_AT_BOTTOM,
    STATE(552), 1,
      sym__CODE_SET_IS,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1956] = 4,
    ACTIONS(141), 1,
      anon_sym_TO,
    ACTIONS(143), 1,
      anon_sym_CHARACTERS,
    ACTIONS(149), 1,
      anon_sym_DEPENDING,
    ACTIONS(135), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [1983] = 4,
    ACTIONS(119), 1,
      anon_sym_TO,
    ACTIONS(121), 1,
      anon_sym_CHARACTERS,
    ACTIONS(127), 1,
      anon_sym_DEPENDING,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2010] = 13,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(41), 1,
      anon_sym_TOP,
    ACTIONS(43), 1,
      anon_sym_BOTTOM,
    STATE(93), 1,
      sym__record_sequential_file_data_description,
    STATE(117), 1,
      sym__record_sequential_file_linage_description,
    STATE(429), 1,
      sym__LINES_AT_BOTTOM,
    STATE(443), 1,
      sym__LINES_AT_TOP,
    STATE(538), 1,
      sym__CODE_SET_IS,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2055] = 13,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(77), 1,
      anon_sym_TOP,
    ACTIONS(79), 1,
      anon_sym_BOTTOM,
    STATE(89), 1,
      sym__record_sequential_file_data_description,
    STATE(118), 1,
      sym__record_sequential_file_linage_description,
    STATE(399), 1,
      sym__LINES_AT_TOP,
    STATE(456), 1,
      sym__LINES_AT_BOTTOM,
    STATE(523), 1,
      sym__CODE_SET_IS,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2100] = 4,
    ACTIONS(171), 1,
      anon_sym_TO,
    ACTIONS(173), 1,
      anon_sym_CHARACTERS,
    ACTIONS(175), 1,
      anon_sym_DEPENDING,
    ACTIONS(165), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2127] = 4,
    ACTIONS(103), 1,
      anon_sym_TO,
    ACTIONS(105), 1,
      anon_sym_CHARACTERS,
    ACTIONS(111), 1,
      anon_sym_DEPENDING,
    ACTIONS(97), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2154] = 4,
    ACTIONS(259), 1,
      anon_sym_TO,
    ACTIONS(261), 1,
      anon_sym_CHARACTERS,
    ACTIONS(263), 1,
      anon_sym_DEPENDING,
    ACTIONS(257), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2181] = 13,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(31), 1,
      anon_sym_DATA,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(179), 1,
      anon_sym_TOP,
    ACTIONS(181), 1,
      anon_sym_BOTTOM,
    STATE(94), 1,
      sym__record_sequential_file_data_description,
    STATE(120), 1,
      sym__record_sequential_file_linage_description,
    STATE(451), 1,
      sym__LINES_AT_BOTTOM,
    STATE(454), 1,
      sym__LINES_AT_TOP,
    STATE(524), 1,
      sym__CODE_SET_IS,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2226] = 3,
    ACTIONS(143), 1,
      anon_sym_CHARACTERS,
    ACTIONS(149), 1,
      anon_sym_DEPENDING,
    ACTIONS(135), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2250] = 14,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(211), 1,
      anon_sym_PADDING,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(217), 1,
      anon_sym_RECORDDELIMITER,
    ACTIONS(219), 1,
      anon_sym_ORGANIZATION,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    ACTIONS(267), 1,
      anon_sym_SEQUENTIAL,
    STATE(125), 1,
      sym__record_sequential_file_organization,
    STATE(148), 1,
      sym__record_sequential_file_padding,
    STATE(168), 1,
      sym__record_sequential_file_record_delimiter,
    STATE(236), 1,
      sym__record_sequential_file_record_access_mode,
    STATE(322), 1,
      sym__file_status,
    STATE(534), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [2296] = 1,
    ACTIONS(269), 17,
      ts_builtin_sym_end,
      anon_sym_RECORD,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_BLOCK,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2316] = 3,
    ACTIONS(273), 1,
      anon_sym_CHARACTERS,
    ACTIONS(275), 1,
      anon_sym_DEPENDING,
    ACTIONS(271), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2340] = 3,
    ACTIONS(173), 1,
      anon_sym_CHARACTERS,
    ACTIONS(175), 1,
      anon_sym_DEPENDING,
    ACTIONS(165), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2364] = 3,
    ACTIONS(105), 1,
      anon_sym_CHARACTERS,
    ACTIONS(111), 1,
      anon_sym_DEPENDING,
    ACTIONS(97), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2388] = 3,
    ACTIONS(261), 1,
      anon_sym_CHARACTERS,
    ACTIONS(263), 1,
      anon_sym_DEPENDING,
    ACTIONS(257), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2412] = 3,
    ACTIONS(199), 1,
      sym__IS,
    ACTIONS(205), 1,
      anon_sym_VARYING,
    ACTIONS(197), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2436] = 5,
    ACTIONS(279), 1,
      sym__user_defined_word,
    ACTIONS(281), 1,
      sym__IS,
    STATE(87), 2,
      sym_data_name,
      aux_sym__record_sequential_file_value_description_repeat1,
    ACTIONS(277), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(283), 8,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_DATA,
      anon_sym_LINAGE,
  [2464] = 3,
    ACTIONS(159), 1,
      anon_sym_CHARACTERS,
    ACTIONS(163), 1,
      anon_sym_DEPENDING,
    ACTIONS(151), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2488] = 3,
    ACTIONS(287), 1,
      anon_sym_CHARACTERS,
    ACTIONS(289), 1,
      anon_sym_DEPENDING,
    ACTIONS(285), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2512] = 14,
    ACTIONS(291), 1,
      sym__user_defined_word,
    ACTIONS(293), 1,
      sym__external_file_reference,
    ACTIONS(297), 1,
      anon_sym_ORGANIZATION,
    ACTIONS(299), 1,
      anon_sym_DISK,
    ACTIONS(301), 1,
      anon_sym_RESERVE,
    ACTIONS(303), 1,
      anon_sym_ASSIGN,
    STATE(7), 1,
      sym__ASSIGN_TO,
    STATE(37), 1,
      sym__record_sequential_file_assign,
    STATE(240), 1,
      sym__external_or_dynamic,
    STATE(257), 1,
      sym__indexed_file_organization,
    STATE(332), 1,
      sym__relative_file_assign,
    STATE(489), 1,
      sym__indexed_file_reserve,
    ACTIONS(295), 2,
      anon_sym_EXTERNAL,
      anon_sym_DYNAMIC,
    STATE(330), 3,
      sym_literal,
      sym__file_reference,
      sym__indexed_file_assign,
  [2558] = 3,
    ACTIONS(307), 1,
      sym__IS,
    ACTIONS(309), 1,
      anon_sym_VARYING,
    ACTIONS(305), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2582] = 3,
    ACTIONS(243), 1,
      anon_sym_CHARACTERS,
    ACTIONS(245), 1,
      anon_sym_DEPENDING,
    ACTIONS(239), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2606] = 2,
    ACTIONS(149), 1,
      anon_sym_DEPENDING,
    ACTIONS(135), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2627] = 1,
    ACTIONS(311), 16,
      ts_builtin_sym_end,
      anon_sym_RECORD,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2646] = 2,
    ACTIONS(127), 1,
      anon_sym_DEPENDING,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2667] = 11,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(179), 1,
      anon_sym_TOP,
    ACTIONS(181), 1,
      anon_sym_BOTTOM,
    STATE(120), 1,
      sym__record_sequential_file_linage_description,
    STATE(451), 1,
      sym__LINES_AT_BOTTOM,
    STATE(454), 1,
      sym__LINES_AT_TOP,
    STATE(524), 1,
      sym__CODE_SET_IS,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2706] = 2,
    ACTIONS(245), 1,
      anon_sym_DEPENDING,
    ACTIONS(239), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2727] = 2,
    ACTIONS(163), 1,
      anon_sym_DEPENDING,
    ACTIONS(151), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2748] = 2,
    ACTIONS(111), 1,
      anon_sym_DEPENDING,
    ACTIONS(97), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2769] = 4,
    ACTIONS(279), 1,
      sym__user_defined_word,
    STATE(83), 2,
      sym_data_name,
      aux_sym__record_sequential_file_value_description_repeat1,
    ACTIONS(313), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(315), 8,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_DATA,
      anon_sym_LINAGE,
  [2794] = 1,
    ACTIONS(317), 16,
      ts_builtin_sym_end,
      anon_sym_RECORD,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2813] = 2,
    ACTIONS(321), 1,
      anon_sym_CHARACTERS,
    ACTIONS(319), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2834] = 1,
    ACTIONS(323), 16,
      ts_builtin_sym_end,
      anon_sym_RECORD,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2853] = 11,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(41), 1,
      anon_sym_TOP,
    ACTIONS(43), 1,
      anon_sym_BOTTOM,
    STATE(117), 1,
      sym__record_sequential_file_linage_description,
    STATE(429), 1,
      sym__LINES_AT_BOTTOM,
    STATE(443), 1,
      sym__LINES_AT_TOP,
    STATE(538), 1,
      sym__CODE_SET_IS,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2892] = 11,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(327), 1,
      anon_sym_TOP,
    ACTIONS(329), 1,
      anon_sym_BOTTOM,
    STATE(122), 1,
      sym__record_sequential_file_linage_description,
    STATE(444), 1,
      sym__LINES_AT_BOTTOM,
    STATE(481), 1,
      sym__LINES_AT_TOP,
    STATE(494), 1,
      sym__CODE_SET_IS,
    ACTIONS(325), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2931] = 2,
    ACTIONS(275), 1,
      anon_sym_DEPENDING,
    ACTIONS(271), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2952] = 2,
    ACTIONS(263), 1,
      anon_sym_DEPENDING,
    ACTIONS(257), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [2973] = 4,
    ACTIONS(333), 1,
      sym__user_defined_word,
    STATE(83), 2,
      sym_data_name,
      aux_sym__record_sequential_file_value_description_repeat1,
    ACTIONS(331), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(336), 8,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_DATA,
      anon_sym_LINAGE,
  [2998] = 2,
    ACTIONS(338), 1,
      anon_sym_CHARACTERS,
    ACTIONS(305), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3019] = 4,
    ACTIONS(279), 1,
      sym__user_defined_word,
    STATE(75), 2,
      sym_data_name,
      aux_sym__record_sequential_file_value_description_repeat1,
    ACTIONS(340), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(342), 8,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_DATA,
      anon_sym_LINAGE,
  [3044] = 2,
    ACTIONS(175), 1,
      anon_sym_DEPENDING,
    ACTIONS(165), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3065] = 4,
    ACTIONS(279), 1,
      sym__user_defined_word,
    STATE(83), 2,
      sym_data_name,
      aux_sym__record_sequential_file_value_description_repeat1,
    ACTIONS(340), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(342), 8,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_DATA,
      anon_sym_LINAGE,
  [3090] = 2,
    ACTIONS(346), 1,
      anon_sym_DEPENDING,
    ACTIONS(344), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3111] = 11,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(131), 1,
      anon_sym_TOP,
    ACTIONS(133), 1,
      anon_sym_BOTTOM,
    STATE(124), 1,
      sym__record_sequential_file_linage_description,
    STATE(418), 1,
      sym__LINES_AT_BOTTOM,
    STATE(422), 1,
      sym__LINES_AT_TOP,
    STATE(546), 1,
      sym__CODE_SET_IS,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3150] = 1,
    ACTIONS(348), 16,
      ts_builtin_sym_end,
      anon_sym_RECORD,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3169] = 2,
    ACTIONS(289), 1,
      anon_sym_DEPENDING,
    ACTIONS(285), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3190] = 11,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(77), 1,
      anon_sym_TOP,
    ACTIONS(79), 1,
      anon_sym_BOTTOM,
    STATE(118), 1,
      sym__record_sequential_file_linage_description,
    STATE(399), 1,
      sym__LINES_AT_TOP,
    STATE(456), 1,
      sym__LINES_AT_BOTTOM,
    STATE(523), 1,
      sym__CODE_SET_IS,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3229] = 11,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(47), 1,
      anon_sym_TOP,
    ACTIONS(49), 1,
      anon_sym_BOTTOM,
    STATE(116), 1,
      sym__record_sequential_file_linage_description,
    STATE(409), 1,
      sym__LINES_AT_TOP,
    STATE(411), 1,
      sym__LINES_AT_BOTTOM,
    STATE(552), 1,
      sym__CODE_SET_IS,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3268] = 11,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(33), 1,
      anon_sym_LINAGE,
    ACTIONS(249), 1,
      anon_sym_TOP,
    ACTIONS(251), 1,
      anon_sym_BOTTOM,
    STATE(123), 1,
      sym__record_sequential_file_linage_description,
    STATE(478), 1,
      sym__LINES_AT_BOTTOM,
    STATE(480), 1,
      sym__LINES_AT_TOP,
    STATE(513), 1,
      sym__CODE_SET_IS,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3307] = 4,
    ACTIONS(352), 1,
      sym__user_defined_word,
    STATE(113), 2,
      sym_data_name,
      aux_sym__record_sequential_file_value_description_repeat1,
    ACTIONS(350), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(354), 7,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LINAGE,
  [3331] = 1,
    ACTIONS(344), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3349] = 1,
    ACTIONS(319), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3367] = 1,
    ACTIONS(51), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3385] = 1,
    ACTIONS(285), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3403] = 1,
    ACTIONS(356), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3421] = 1,
    ACTIONS(151), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3439] = 1,
    ACTIONS(239), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3457] = 1,
    ACTIONS(358), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3475] = 1,
    ACTIONS(360), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3493] = 4,
    ACTIONS(362), 1,
      sym__user_defined_word,
    STATE(105), 2,
      sym_data_name,
      aux_sym__record_sequential_file_value_description_repeat1,
    ACTIONS(331), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(336), 7,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LINAGE,
  [3517] = 1,
    ACTIONS(365), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3535] = 1,
    ACTIONS(165), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3553] = 1,
    ACTIONS(135), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3571] = 1,
    ACTIONS(257), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3589] = 1,
    ACTIONS(271), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3607] = 1,
    ACTIONS(97), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3625] = 1,
    ACTIONS(367), 15,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LABEL,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3643] = 4,
    ACTIONS(352), 1,
      sym__user_defined_word,
    STATE(105), 2,
      sym_data_name,
      aux_sym__record_sequential_file_value_description_repeat1,
    ACTIONS(369), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(371), 7,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LINAGE,
  [3667] = 11,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(211), 1,
      anon_sym_PADDING,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(217), 1,
      anon_sym_RECORDDELIMITER,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    STATE(148), 1,
      sym__record_sequential_file_padding,
    STATE(168), 1,
      sym__record_sequential_file_record_delimiter,
    STATE(236), 1,
      sym__record_sequential_file_record_access_mode,
    STATE(322), 1,
      sym__file_status,
    STATE(534), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [3704] = 1,
    ACTIONS(373), 14,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_VALUE,
      anon_sym_DATA,
      anon_sym_LINAGE,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3721] = 9,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(77), 1,
      anon_sym_TOP,
    ACTIONS(79), 1,
      anon_sym_BOTTOM,
    STATE(399), 1,
      sym__LINES_AT_TOP,
    STATE(456), 1,
      sym__LINES_AT_BOTTOM,
    STATE(523), 1,
      sym__CODE_SET_IS,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3754] = 9,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(47), 1,
      anon_sym_TOP,
    ACTIONS(49), 1,
      anon_sym_BOTTOM,
    STATE(409), 1,
      sym__LINES_AT_TOP,
    STATE(411), 1,
      sym__LINES_AT_BOTTOM,
    STATE(552), 1,
      sym__CODE_SET_IS,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3787] = 9,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(131), 1,
      anon_sym_TOP,
    ACTIONS(133), 1,
      anon_sym_BOTTOM,
    STATE(418), 1,
      sym__LINES_AT_BOTTOM,
    STATE(422), 1,
      sym__LINES_AT_TOP,
    STATE(546), 1,
      sym__CODE_SET_IS,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3820] = 2,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(375), 9,
      sym__user_defined_word,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_DATA,
      anon_sym_LINAGE,
  [3839] = 9,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(249), 1,
      anon_sym_TOP,
    ACTIONS(251), 1,
      anon_sym_BOTTOM,
    STATE(478), 1,
      sym__LINES_AT_BOTTOM,
    STATE(480), 1,
      sym__LINES_AT_TOP,
    STATE(513), 1,
      sym__CODE_SET_IS,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3872] = 3,
    ACTIONS(381), 1,
      sym__IS,
    ACTIONS(377), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(379), 8,
      sym__user_defined_word,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LINAGE,
  [3893] = 9,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(385), 1,
      anon_sym_TOP,
    ACTIONS(387), 1,
      anon_sym_BOTTOM,
    STATE(471), 1,
      sym__LINES_AT_TOP,
    STATE(475), 1,
      sym__LINES_AT_BOTTOM,
    STATE(509), 1,
      sym__CODE_SET_IS,
    ACTIONS(383), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3926] = 9,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(327), 1,
      anon_sym_TOP,
    ACTIONS(329), 1,
      anon_sym_BOTTOM,
    STATE(444), 1,
      sym__LINES_AT_BOTTOM,
    STATE(481), 1,
      sym__LINES_AT_TOP,
    STATE(494), 1,
      sym__CODE_SET_IS,
    ACTIONS(325), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3959] = 9,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(179), 1,
      anon_sym_TOP,
    ACTIONS(181), 1,
      anon_sym_BOTTOM,
    STATE(451), 1,
      sym__LINES_AT_BOTTOM,
    STATE(454), 1,
      sym__LINES_AT_TOP,
    STATE(524), 1,
      sym__CODE_SET_IS,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [3992] = 11,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(211), 1,
      anon_sym_PADDING,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(217), 1,
      anon_sym_RECORDDELIMITER,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    STATE(147), 1,
      sym__record_sequential_file_padding,
    STATE(177), 1,
      sym__record_sequential_file_record_delimiter,
    STATE(251), 1,
      sym__record_sequential_file_record_access_mode,
    STATE(319), 1,
      sym__file_status,
    STATE(534), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4029] = 9,
    ACTIONS(15), 1,
      anon_sym_LINES,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(41), 1,
      anon_sym_TOP,
    ACTIONS(43), 1,
      anon_sym_BOTTOM,
    STATE(429), 1,
      sym__LINES_AT_BOTTOM,
    STATE(443), 1,
      sym__LINES_AT_TOP,
    STATE(538), 1,
      sym__CODE_SET_IS,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4062] = 3,
    ACTIONS(381), 1,
      anon_sym_ARE,
    ACTIONS(377), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(379), 8,
      sym__user_defined_word,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LINAGE,
  [4083] = 3,
    ACTIONS(393), 1,
      anon_sym_WITH,
    ACTIONS(395), 1,
      anon_sym_FOOTING,
    ACTIONS(391), 11,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4103] = 4,
    ACTIONS(393), 1,
      anon_sym_WITH,
    ACTIONS(395), 1,
      anon_sym_FOOTING,
    ACTIONS(397), 1,
      anon_sym_LINES,
    ACTIONS(391), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4125] = 3,
    ACTIONS(405), 1,
      anon_sym_RELATIVE,
    ACTIONS(402), 2,
      anon_sym_ORGANIZATION,
      anon_sym_RESERVE,
    ACTIONS(400), 10,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_PADDING,
      anon_sym_STATUS,
      anon_sym_SEQUENTIAL,
      anon_sym_RECORDDELIMITER,
      anon_sym_ACCESS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4145] = 1,
    ACTIONS(407), 13,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_PADDING,
      anon_sym_STATUS,
      anon_sym_SEQUENTIAL,
      anon_sym_RECORDDELIMITER,
      anon_sym_ORGANIZATION,
      anon_sym_ACCESS,
      anon_sym_RELATIVE,
      anon_sym_RESERVE,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4161] = 2,
    ACTIONS(409), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(411), 8,
      sym__user_defined_word,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LINAGE,
  [4179] = 3,
    ACTIONS(415), 1,
      anon_sym_WITH,
    ACTIONS(417), 1,
      anon_sym_FOOTING,
    ACTIONS(413), 11,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4199] = 2,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
    ACTIONS(375), 8,
      sym__user_defined_word,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      anon_sym_LINAGE,
  [4217] = 11,
    ACTIONS(421), 1,
      anon_sym_AUTHOR_DOT,
    ACTIONS(423), 1,
      anon_sym_INSTALLATION_DOT,
    ACTIONS(425), 1,
      anon_sym_DATE_DASHWRITTEN_DOT,
    ACTIONS(427), 1,
      anon_sym_DATE_DASHCOMPILED_DOT,
    ACTIONS(429), 1,
      anon_sym_SECURITY_DOT,
    STATE(158), 1,
      sym__identification_division_author,
    STATE(180), 1,
      sym__identification_division_installation,
    STATE(250), 1,
      sym__identification_division_date_written,
    STATE(280), 1,
      sym__identification_division_date_compiled,
    STATE(388), 1,
      sym__identification_division_security,
    ACTIONS(419), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [4253] = 3,
    ACTIONS(436), 1,
      anon_sym_RELATIVE,
    ACTIONS(433), 2,
      anon_sym_ORGANIZATION,
      anon_sym_RESERVE,
    ACTIONS(431), 10,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_PADDING,
      anon_sym_STATUS,
      anon_sym_SEQUENTIAL,
      anon_sym_RECORDDELIMITER,
      anon_sym_ACCESS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4273] = 4,
    ACTIONS(440), 1,
      anon_sym_WITH,
    ACTIONS(442), 1,
      anon_sym_LINES,
    ACTIONS(445), 1,
      anon_sym_FOOTING,
    ACTIONS(438), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4295] = 7,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(449), 1,
      anon_sym_LINES,
    ACTIONS(451), 1,
      anon_sym_AT,
    ACTIONS(453), 1,
      anon_sym_BOTTOM,
    STATE(450), 1,
      sym__LINES_AT_BOTTOM,
    STATE(522), 1,
      sym__CODE_SET_IS,
    ACTIONS(447), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4322] = 1,
    ACTIONS(431), 12,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_PADDING,
      anon_sym_STATUS,
      anon_sym_SEQUENTIAL,
      anon_sym_RECORDDELIMITER,
      anon_sym_ORGANIZATION,
      anon_sym_ACCESS,
      anon_sym_RESERVE,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4337] = 7,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(251), 1,
      anon_sym_BOTTOM,
    ACTIONS(449), 1,
      anon_sym_LINES,
    ACTIONS(451), 1,
      anon_sym_AT,
    STATE(478), 1,
      sym__LINES_AT_BOTTOM,
    STATE(513), 1,
      sym__CODE_SET_IS,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4364] = 7,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(79), 1,
      anon_sym_BOTTOM,
    ACTIONS(449), 1,
      anon_sym_LINES,
    ACTIONS(451), 1,
      anon_sym_AT,
    STATE(456), 1,
      sym__LINES_AT_BOTTOM,
    STATE(523), 1,
      sym__CODE_SET_IS,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4391] = 1,
    ACTIONS(455), 12,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_PADDING,
      anon_sym_STATUS,
      anon_sym_SEQUENTIAL,
      anon_sym_RECORDDELIMITER,
      anon_sym_ORGANIZATION,
      anon_sym_ACCESS,
      anon_sym_RESERVE,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4406] = 1,
    ACTIONS(457), 12,
      ts_builtin_sym_end,
      anon_sym_AUTHOR_DOT,
      anon_sym_INSTALLATION_DOT,
      anon_sym_DATE_DASHWRITTEN_DOT,
      anon_sym_DATE_DASHCOMPILED_DOT,
      anon_sym_SECURITY_DOT,
      anon_sym_COMMON,
      anon_sym_INITIAL,
      anon_sym_PROGRAM,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      sym__IS,
  [4421] = 7,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(387), 1,
      anon_sym_BOTTOM,
    ACTIONS(449), 1,
      anon_sym_LINES,
    ACTIONS(451), 1,
      anon_sym_AT,
    STATE(475), 1,
      sym__LINES_AT_BOTTOM,
    STATE(509), 1,
      sym__CODE_SET_IS,
    ACTIONS(383), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4448] = 4,
    ACTIONS(463), 1,
      anon_sym_PROGRAM,
    ACTIONS(465), 1,
      sym__IS,
    ACTIONS(461), 2,
      anon_sym_COMMON,
      anon_sym_INITIAL,
    ACTIONS(459), 8,
      ts_builtin_sym_end,
      anon_sym_AUTHOR_DOT,
      anon_sym_INSTALLATION_DOT,
      anon_sym_DATE_DASHWRITTEN_DOT,
      anon_sym_DATE_DASHCOMPILED_DOT,
      anon_sym_SECURITY_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [4469] = 9,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(217), 1,
      anon_sym_RECORDDELIMITER,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    STATE(168), 1,
      sym__record_sequential_file_record_delimiter,
    STATE(236), 1,
      sym__record_sequential_file_record_access_mode,
    STATE(322), 1,
      sym__file_status,
    STATE(534), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4500] = 9,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(217), 1,
      anon_sym_RECORDDELIMITER,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    STATE(176), 1,
      sym__record_sequential_file_record_delimiter,
    STATE(235), 1,
      sym__record_sequential_file_record_access_mode,
    STATE(309), 1,
      sym__file_status,
    STATE(534), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(467), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4531] = 9,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(217), 1,
      anon_sym_RECORDDELIMITER,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    STATE(177), 1,
      sym__record_sequential_file_record_delimiter,
    STATE(251), 1,
      sym__record_sequential_file_record_access_mode,
    STATE(319), 1,
      sym__file_status,
    STATE(534), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4562] = 7,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(181), 1,
      anon_sym_BOTTOM,
    ACTIONS(449), 1,
      anon_sym_LINES,
    ACTIONS(451), 1,
      anon_sym_AT,
    STATE(451), 1,
      sym__LINES_AT_BOTTOM,
    STATE(524), 1,
      sym__CODE_SET_IS,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4589] = 7,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(133), 1,
      anon_sym_BOTTOM,
    ACTIONS(449), 1,
      anon_sym_LINES,
    ACTIONS(451), 1,
      anon_sym_AT,
    STATE(418), 1,
      sym__LINES_AT_BOTTOM,
    STATE(546), 1,
      sym__CODE_SET_IS,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4616] = 7,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(329), 1,
      anon_sym_BOTTOM,
    ACTIONS(449), 1,
      anon_sym_LINES,
    ACTIONS(451), 1,
      anon_sym_AT,
    STATE(444), 1,
      sym__LINES_AT_BOTTOM,
    STATE(494), 1,
      sym__CODE_SET_IS,
    ACTIONS(325), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4643] = 7,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(449), 1,
      anon_sym_LINES,
    ACTIONS(451), 1,
      anon_sym_AT,
    ACTIONS(471), 1,
      anon_sym_BOTTOM,
    STATE(438), 1,
      sym__LINES_AT_BOTTOM,
    STATE(533), 1,
      sym__CODE_SET_IS,
    ACTIONS(469), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4670] = 1,
    ACTIONS(473), 12,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_PADDING,
      anon_sym_STATUS,
      anon_sym_SEQUENTIAL,
      anon_sym_RECORDDELIMITER,
      anon_sym_ORGANIZATION,
      anon_sym_ACCESS,
      anon_sym_RESERVE,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4685] = 7,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    ACTIONS(49), 1,
      anon_sym_BOTTOM,
    ACTIONS(449), 1,
      anon_sym_LINES,
    ACTIONS(451), 1,
      anon_sym_AT,
    STATE(411), 1,
      sym__LINES_AT_BOTTOM,
    STATE(552), 1,
      sym__CODE_SET_IS,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4712] = 1,
    ACTIONS(475), 11,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4726] = 3,
    ACTIONS(481), 1,
      anon_sym_PROGRAM,
    ACTIONS(479), 2,
      anon_sym_COMMON,
      anon_sym_INITIAL,
    ACTIONS(477), 8,
      ts_builtin_sym_end,
      anon_sym_AUTHOR_DOT,
      anon_sym_INSTALLATION_DOT,
      anon_sym_DATE_DASHWRITTEN_DOT,
      anon_sym_DATE_DASHCOMPILED_DOT,
      anon_sym_SECURITY_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [4744] = 1,
    ACTIONS(413), 11,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4758] = 9,
    ACTIONS(423), 1,
      anon_sym_INSTALLATION_DOT,
    ACTIONS(425), 1,
      anon_sym_DATE_DASHWRITTEN_DOT,
    ACTIONS(427), 1,
      anon_sym_DATE_DASHCOMPILED_DOT,
    ACTIONS(429), 1,
      anon_sym_SECURITY_DOT,
    STATE(192), 1,
      sym__identification_division_installation,
    STATE(242), 1,
      sym__identification_division_date_written,
    STATE(294), 1,
      sym__identification_division_date_compiled,
    STATE(367), 1,
      sym__identification_division_security,
    ACTIONS(483), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [4788] = 1,
    ACTIONS(485), 11,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4802] = 5,
    ACTIONS(489), 1,
      anon_sym_SELECT,
    STATE(65), 1,
      sym__select,
    STATE(160), 2,
      sym_file_control_entry,
      aux_sym_input_output_section_repeat1,
    ACTIONS(487), 3,
      ts_builtin_sym_end,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
    STATE(327), 4,
      sym__record_sequential_file,
      sym__relative_file,
      sym__indexed_file,
      sym__sort_merge_file,
  [4824] = 1,
    ACTIONS(492), 11,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4838] = 1,
    ACTIONS(494), 11,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_PADDING,
      anon_sym_STATUS,
      anon_sym_SEQUENTIAL,
      anon_sym_RECORDDELIMITER,
      anon_sym_ORGANIZATION,
      anon_sym_ACCESS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4852] = 6,
    ACTIONS(498), 1,
      anon_sym_SELECT,
    ACTIONS(500), 1,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
    STATE(65), 1,
      sym__select,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(164), 2,
      sym_file_control_entry,
      aux_sym_input_output_section_repeat1,
    STATE(327), 4,
      sym__record_sequential_file,
      sym__relative_file,
      sym__indexed_file,
      sym__sort_merge_file,
  [4876] = 6,
    ACTIONS(498), 1,
      anon_sym_SELECT,
    ACTIONS(504), 1,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
    STATE(65), 1,
      sym__select,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(160), 2,
      sym_file_control_entry,
      aux_sym_input_output_section_repeat1,
    STATE(327), 4,
      sym__record_sequential_file,
      sym__relative_file,
      sym__indexed_file,
      sym__sort_merge_file,
  [4900] = 1,
    ACTIONS(506), 11,
      ts_builtin_sym_end,
      anon_sym_LINES,
      anon_sym_AT,
      anon_sym_TOP,
      anon_sym_BOTTOM,
      anon_sym_CODE_DASHSET,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [4914] = 6,
    ACTIONS(510), 1,
      anon_sym_MULTIPLE,
    ACTIONS(512), 1,
      anon_sym_RERUN,
    ACTIONS(514), 1,
      anon_sym_SAME,
    ACTIONS(508), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(170), 2,
      sym_input_output_control_entry,
      aux_sym_input_output_section_repeat2,
    STATE(287), 3,
      sym__input_output_control_rerun_entry,
      sym__input_output_control_same_entry,
      sym__input_output_control_multiple_file_entry,
  [4937] = 6,
    ACTIONS(510), 1,
      anon_sym_MULTIPLE,
    ACTIONS(512), 1,
      anon_sym_RERUN,
    ACTIONS(514), 1,
      anon_sym_SAME,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(171), 2,
      sym_input_output_control_entry,
      aux_sym_input_output_section_repeat2,
    STATE(287), 3,
      sym__input_output_control_rerun_entry,
      sym__input_output_control_same_entry,
      sym__input_output_control_multiple_file_entry,
  [4960] = 7,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    STATE(251), 1,
      sym__record_sequential_file_record_access_mode,
    STATE(319), 1,
      sym__file_status,
    STATE(534), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [4985] = 6,
    ACTIONS(518), 1,
      anon_sym_MULTIPLE,
    ACTIONS(521), 1,
      anon_sym_RERUN,
    ACTIONS(524), 1,
      anon_sym_SAME,
    ACTIONS(516), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(169), 2,
      sym_input_output_control_entry,
      aux_sym_input_output_section_repeat2,
    STATE(287), 3,
      sym__input_output_control_rerun_entry,
      sym__input_output_control_same_entry,
      sym__input_output_control_multiple_file_entry,
  [5008] = 6,
    ACTIONS(510), 1,
      anon_sym_MULTIPLE,
    ACTIONS(512), 1,
      anon_sym_RERUN,
    ACTIONS(514), 1,
      anon_sym_SAME,
    ACTIONS(527), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(169), 2,
      sym_input_output_control_entry,
      aux_sym_input_output_section_repeat2,
    STATE(287), 3,
      sym__input_output_control_rerun_entry,
      sym__input_output_control_same_entry,
      sym__input_output_control_multiple_file_entry,
  [5031] = 6,
    ACTIONS(510), 1,
      anon_sym_MULTIPLE,
    ACTIONS(512), 1,
      anon_sym_RERUN,
    ACTIONS(514), 1,
      anon_sym_SAME,
    ACTIONS(508), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(169), 2,
      sym_input_output_control_entry,
      aux_sym_input_output_section_repeat2,
    STATE(287), 3,
      sym__input_output_control_rerun_entry,
      sym__input_output_control_same_entry,
      sym__input_output_control_multiple_file_entry,
  [5054] = 6,
    ACTIONS(531), 1,
      sym__user_defined_word,
    ACTIONS(535), 1,
      anon_sym_AREA,
    ACTIONS(537), 1,
      anon_sym_FOR,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(219), 2,
      sym_file_name,
      aux_sym__input_output_control_same_entry_repeat1,
    ACTIONS(533), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5077] = 6,
    ACTIONS(510), 1,
      anon_sym_MULTIPLE,
    ACTIONS(512), 1,
      anon_sym_RERUN,
    ACTIONS(514), 1,
      anon_sym_SAME,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(178), 2,
      sym_input_output_control_entry,
      aux_sym_input_output_section_repeat2,
    STATE(287), 3,
      sym__input_output_control_rerun_entry,
      sym__input_output_control_same_entry,
      sym__input_output_control_multiple_file_entry,
  [5100] = 7,
    ACTIONS(541), 1,
      sym__user_defined_word,
    ACTIONS(545), 1,
      anon_sym_TAPE,
    ACTIONS(547), 1,
      anon_sym_CONTAINS,
    STATE(228), 1,
      aux_sym__input_output_control_multiple_file_entry_repeat1,
    STATE(233), 1,
      sym_file_name,
    ACTIONS(539), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(543), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5125] = 7,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    STATE(236), 1,
      sym__record_sequential_file_record_access_mode,
    STATE(322), 1,
      sym__file_status,
    STATE(534), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5150] = 7,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    STATE(243), 1,
      sym__record_sequential_file_record_access_mode,
    STATE(301), 1,
      sym__file_status,
    STATE(534), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(549), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5175] = 7,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    STATE(235), 1,
      sym__record_sequential_file_record_access_mode,
    STATE(309), 1,
      sym__file_status,
    STATE(534), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(467), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5200] = 6,
    ACTIONS(510), 1,
      anon_sym_MULTIPLE,
    ACTIONS(512), 1,
      anon_sym_RERUN,
    ACTIONS(514), 1,
      anon_sym_SAME,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(169), 2,
      sym_input_output_control_entry,
      aux_sym_input_output_section_repeat2,
    STATE(287), 3,
      sym__input_output_control_rerun_entry,
      sym__input_output_control_same_entry,
      sym__input_output_control_multiple_file_entry,
  [5223] = 5,
    ACTIONS(531), 1,
      sym__user_defined_word,
    ACTIONS(555), 1,
      anon_sym_FOR,
    ACTIONS(551), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(223), 2,
      sym_file_name,
      aux_sym__input_output_control_same_entry_repeat1,
    ACTIONS(553), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5243] = 7,
    ACTIONS(425), 1,
      anon_sym_DATE_DASHWRITTEN_DOT,
    ACTIONS(427), 1,
      anon_sym_DATE_DASHCOMPILED_DOT,
    ACTIONS(429), 1,
      anon_sym_SECURITY_DOT,
    STATE(242), 1,
      sym__identification_division_date_written,
    STATE(294), 1,
      sym__identification_division_date_compiled,
    STATE(367), 1,
      sym__identification_division_security,
    ACTIONS(557), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [5267] = 3,
    ACTIONS(561), 1,
      anon_sym_FD,
    STATE(181), 3,
      sym__file_description_entry,
      sym__record_sequential_file_description,
      aux_sym_file_section_repeat1,
    ACTIONS(559), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5283] = 2,
    ACTIONS(481), 1,
      anon_sym_PROGRAM,
    ACTIONS(477), 8,
      ts_builtin_sym_end,
      anon_sym_AUTHOR_DOT,
      anon_sym_INSTALLATION_DOT,
      anon_sym_DATE_DASHWRITTEN_DOT,
      anon_sym_DATE_DASHCOMPILED_DOT,
      anon_sym_SECURITY_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [5297] = 6,
    ACTIONS(541), 1,
      sym__user_defined_word,
    ACTIONS(568), 1,
      anon_sym_CONTAINS,
    STATE(197), 1,
      aux_sym__input_output_control_multiple_file_entry_repeat1,
    STATE(233), 1,
      sym_file_name,
    ACTIONS(564), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(566), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5319] = 6,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(572), 1,
      anon_sym_ALTERNATE,
    STATE(249), 1,
      sym__alternate_record_key,
    STATE(331), 1,
      sym__file_status,
    ACTIONS(570), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5341] = 6,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(572), 1,
      anon_sym_ALTERNATE,
    STATE(237), 1,
      sym__alternate_record_key,
    STATE(329), 1,
      sym__file_status,
    ACTIONS(574), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5363] = 1,
    ACTIONS(576), 9,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_PADDING,
      anon_sym_STATUS,
      anon_sym_RECORDDELIMITER,
      anon_sym_ACCESS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5375] = 6,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(572), 1,
      anon_sym_ALTERNATE,
    STATE(244), 1,
      sym__alternate_record_key,
    STATE(302), 1,
      sym__file_status,
    ACTIONS(578), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5397] = 2,
    ACTIONS(582), 1,
      anon_sym_PROGRAM,
    ACTIONS(580), 8,
      ts_builtin_sym_end,
      anon_sym_AUTHOR_DOT,
      anon_sym_INSTALLATION_DOT,
      anon_sym_DATE_DASHWRITTEN_DOT,
      anon_sym_DATE_DASHCOMPILED_DOT,
      anon_sym_SECURITY_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [5411] = 3,
    ACTIONS(586), 1,
      anon_sym_ASSIGN,
    STATE(313), 1,
      sym__ASSIGN_TO,
    ACTIONS(584), 7,
      sym__user_defined_word,
      sym__external_file_reference,
      anon_sym_EXTERNAL,
      anon_sym_DYNAMIC,
      anon_sym_ORGANIZATION,
      anon_sym_DISK,
      anon_sym_RESERVE,
  [5427] = 4,
    ACTIONS(591), 1,
      anon_sym_WITH,
    ACTIONS(593), 1,
      anon_sym_DUPLICATES,
    STATE(258), 1,
      sym__WITH_DUPLICATES,
    ACTIONS(589), 6,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_STATUS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5445] = 3,
    ACTIONS(597), 1,
      anon_sym_FD,
    STATE(181), 3,
      sym__file_description_entry,
      sym__record_sequential_file_description,
      aux_sym_file_section_repeat1,
    ACTIONS(595), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5461] = 7,
    ACTIONS(425), 1,
      anon_sym_DATE_DASHWRITTEN_DOT,
    ACTIONS(427), 1,
      anon_sym_DATE_DASHCOMPILED_DOT,
    ACTIONS(429), 1,
      anon_sym_SECURITY_DOT,
    STATE(231), 1,
      sym__identification_division_date_written,
    STATE(282), 1,
      sym__identification_division_date_compiled,
    STATE(336), 1,
      sym__identification_division_security,
    ACTIONS(599), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [5485] = 1,
    ACTIONS(601), 9,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_PADDING,
      anon_sym_STATUS,
      anon_sym_RECORDDELIMITER,
      anon_sym_ACCESS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5497] = 3,
    ACTIONS(597), 1,
      anon_sym_FD,
    STATE(191), 3,
      sym__file_description_entry,
      sym__record_sequential_file_description,
      aux_sym_file_section_repeat1,
    ACTIONS(603), 5,
      ts_builtin_sym_end,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5513] = 6,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    ACTIONS(572), 1,
      anon_sym_ALTERNATE,
    STATE(246), 1,
      sym__alternate_record_key,
    STATE(305), 1,
      sym__file_status,
    ACTIONS(605), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5535] = 4,
    ACTIONS(531), 1,
      sym__user_defined_word,
    ACTIONS(607), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(221), 2,
      sym_file_name,
      aux_sym__input_output_control_same_entry_repeat1,
    ACTIONS(609), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5552] = 5,
    ACTIONS(541), 1,
      sym__user_defined_word,
    STATE(213), 1,
      aux_sym__input_output_control_multiple_file_entry_repeat1,
    STATE(233), 1,
      sym_file_name,
    ACTIONS(611), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(613), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5571] = 3,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    STATE(522), 1,
      sym__CODE_SET_IS,
    ACTIONS(447), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5586] = 3,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    STATE(542), 1,
      sym__CODE_SET_IS,
    ACTIONS(615), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5601] = 3,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    STATE(494), 1,
      sym__CODE_SET_IS,
    ACTIONS(325), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5616] = 5,
    ACTIONS(541), 1,
      sym__user_defined_word,
    STATE(213), 1,
      aux_sym__input_output_control_multiple_file_entry_repeat1,
    STATE(233), 1,
      sym_file_name,
    ACTIONS(617), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(619), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5635] = 5,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    ACTIONS(623), 1,
      anon_sym_FILESTATUSIS,
    STATE(290), 1,
      sym__relative_file_access_mode,
    STATE(349), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(621), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5654] = 1,
    ACTIONS(625), 8,
      sym__user_defined_word,
      sym__external_file_reference,
      anon_sym_EXTERNAL,
      anon_sym_DYNAMIC,
      anon_sym_ORGANIZATION,
      anon_sym_DISK,
      anon_sym_RESERVE,
      anon_sym_ASSIGN,
  [5665] = 5,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    ACTIONS(629), 1,
      anon_sym_FILESTATUSIS,
    STATE(292), 1,
      sym__relative_file_access_mode,
    STATE(349), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(627), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5684] = 3,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    STATE(549), 1,
      sym__CODE_SET_IS,
    ACTIONS(631), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5699] = 1,
    ACTIONS(633), 8,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_STATUS,
      anon_sym_RECORDDELIMITER,
      anon_sym_ACCESS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5710] = 5,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    ACTIONS(637), 1,
      anon_sym_FILESTATUSIS,
    STATE(285), 1,
      sym__relative_file_access_mode,
    STATE(349), 1,
      sym__ACCESS_MODE_IS,
    ACTIONS(635), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5729] = 3,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    STATE(523), 1,
      sym__CODE_SET_IS,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5744] = 3,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    STATE(513), 1,
      sym__CODE_SET_IS,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5759] = 1,
    ACTIONS(639), 8,
      ts_builtin_sym_end,
      anon_sym_AUTHOR_DOT,
      anon_sym_INSTALLATION_DOT,
      anon_sym_DATE_DASHWRITTEN_DOT,
      anon_sym_DATE_DASHCOMPILED_DOT,
      anon_sym_SECURITY_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [5770] = 5,
    ACTIONS(541), 1,
      sym__user_defined_word,
    STATE(201), 1,
      aux_sym__input_output_control_multiple_file_entry_repeat1,
    STATE(233), 1,
      sym_file_name,
    ACTIONS(611), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(613), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5789] = 1,
    ACTIONS(477), 8,
      ts_builtin_sym_end,
      anon_sym_AUTHOR_DOT,
      anon_sym_INSTALLATION_DOT,
      anon_sym_DATE_DASHWRITTEN_DOT,
      anon_sym_DATE_DASHCOMPILED_DOT,
      anon_sym_SECURITY_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [5800] = 5,
    ACTIONS(643), 1,
      sym__user_defined_word,
    STATE(213), 1,
      aux_sym__input_output_control_multiple_file_entry_repeat1,
    STATE(233), 1,
      sym_file_name,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(646), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5819] = 3,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    STATE(509), 1,
      sym__CODE_SET_IS,
    ACTIONS(383), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5834] = 3,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    STATE(552), 1,
      sym__CODE_SET_IS,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5849] = 5,
    ACTIONS(541), 1,
      sym__user_defined_word,
    STATE(197), 1,
      aux_sym__input_output_control_multiple_file_entry_repeat1,
    STATE(233), 1,
      sym_file_name,
    ACTIONS(564), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(566), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5868] = 1,
    ACTIONS(648), 8,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_STATUS,
      anon_sym_RECORDDELIMITER,
      anon_sym_ACCESS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5879] = 3,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    STATE(533), 1,
      sym__CODE_SET_IS,
    ACTIONS(469), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5894] = 4,
    ACTIONS(531), 1,
      sym__user_defined_word,
    ACTIONS(551), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(221), 2,
      sym_file_name,
      aux_sym__input_output_control_same_entry_repeat1,
    ACTIONS(553), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5911] = 1,
    ACTIONS(650), 8,
      sym__user_defined_word,
      sym__external_file_reference,
      anon_sym_EXTERNAL,
      anon_sym_DYNAMIC,
      anon_sym_ORGANIZATION,
      anon_sym_DISK,
      anon_sym_RESERVE,
      anon_sym_ASSIGN,
  [5922] = 4,
    ACTIONS(654), 1,
      sym__user_defined_word,
    ACTIONS(652), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(221), 2,
      sym_file_name,
      aux_sym__input_output_control_same_entry_repeat1,
    ACTIONS(657), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5939] = 1,
    ACTIONS(580), 8,
      ts_builtin_sym_end,
      anon_sym_AUTHOR_DOT,
      anon_sym_INSTALLATION_DOT,
      anon_sym_DATE_DASHWRITTEN_DOT,
      anon_sym_DATE_DASHCOMPILED_DOT,
      anon_sym_SECURITY_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [5950] = 4,
    ACTIONS(531), 1,
      sym__user_defined_word,
    ACTIONS(659), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(221), 2,
      sym_file_name,
      aux_sym__input_output_control_same_entry_repeat1,
    ACTIONS(661), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [5967] = 3,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    STATE(546), 1,
      sym__CODE_SET_IS,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [5982] = 1,
    ACTIONS(663), 8,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_STATUS,
      anon_sym_RECORDDELIMITER,
      anon_sym_ACCESS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [5993] = 4,
    ACTIONS(531), 1,
      sym__user_defined_word,
    ACTIONS(551), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(223), 2,
      sym_file_name,
      aux_sym__input_output_control_same_entry_repeat1,
    ACTIONS(553), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [6010] = 4,
    ACTIONS(531), 1,
      sym__user_defined_word,
    ACTIONS(659), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    STATE(196), 2,
      sym_file_name,
      aux_sym__input_output_control_same_entry_repeat1,
    ACTIONS(661), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [6027] = 5,
    ACTIONS(541), 1,
      sym__user_defined_word,
    STATE(213), 1,
      aux_sym__input_output_control_multiple_file_entry_repeat1,
    STATE(233), 1,
      sym_file_name,
    ACTIONS(564), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(566), 3,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [6046] = 3,
    ACTIONS(23), 1,
      anon_sym_CODE_DASHSET,
    STATE(524), 1,
      sym__CODE_SET_IS,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6061] = 3,
    ACTIONS(667), 1,
      anon_sym_RELATIVE,
    STATE(432), 1,
      sym__RELATIVE_KEY_IS,
    ACTIONS(665), 5,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_FILESTATUSIS,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6075] = 5,
    ACTIONS(427), 1,
      anon_sym_DATE_DASHCOMPILED_DOT,
    ACTIONS(429), 1,
      anon_sym_SECURITY_DOT,
    STATE(283), 1,
      sym__identification_division_date_compiled,
    STATE(343), 1,
      sym__identification_division_security,
    ACTIONS(669), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [6093] = 4,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    STATE(322), 1,
      sym__file_status,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6109] = 3,
    ACTIONS(675), 1,
      anon_sym_POSITION,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(673), 4,
      sym__user_defined_word,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [6123] = 7,
    ACTIONS(677), 1,
      ts_builtin_sym_end,
    ACTIONS(679), 1,
      anon_sym_FILESECTION_DOT,
    ACTIONS(681), 1,
      sym_working_storage_section,
    ACTIONS(683), 1,
      sym_linkage_section,
    ACTIONS(685), 1,
      sym_communication_section,
    ACTIONS(687), 1,
      sym_report_section,
    STATE(279), 1,
      sym_file_section,
  [6145] = 4,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    STATE(301), 1,
      sym__file_status,
    ACTIONS(549), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6161] = 4,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    STATE(319), 1,
      sym__file_status,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6177] = 4,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    STATE(302), 1,
      sym__file_status,
    ACTIONS(578), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6193] = 6,
    ACTIONS(689), 1,
      sym_integer,
    ACTIONS(693), 1,
      anon_sym_END,
    ACTIONS(695), 1,
      anon_sym_condition_DASHname,
    STATE(389), 1,
      sym__REAL_OR_UNIT,
    STATE(396), 1,
      sym__END_OF,
    ACTIONS(691), 2,
      anon_sym_UNIT,
      anon_sym_REAL,
  [6213] = 1,
    ACTIONS(697), 7,
      ts_builtin_sym_end,
      anon_sym_INSTALLATION_DOT,
      anon_sym_DATE_DASHWRITTEN_DOT,
      anon_sym_DATE_DASHCOMPILED_DOT,
      anon_sym_SECURITY_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [6223] = 5,
    ACTIONS(291), 1,
      sym__user_defined_word,
    ACTIONS(699), 1,
      sym__external_file_reference,
    ACTIONS(703), 1,
      anon_sym_DISK,
    ACTIONS(701), 2,
      anon_sym_ORGANIZATION,
      anon_sym_RESERVE,
    STATE(455), 2,
      sym_literal,
      sym__file_reference,
  [6241] = 1,
    ACTIONS(705), 7,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_STATUS,
      anon_sym_ACCESS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6251] = 5,
    ACTIONS(427), 1,
      anon_sym_DATE_DASHCOMPILED_DOT,
    ACTIONS(429), 1,
      anon_sym_SECURITY_DOT,
    STATE(282), 1,
      sym__identification_division_date_compiled,
    STATE(336), 1,
      sym__identification_division_security,
    ACTIONS(707), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [6269] = 4,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    STATE(315), 1,
      sym__file_status,
    ACTIONS(709), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6285] = 4,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    STATE(305), 1,
      sym__file_status,
    ACTIONS(605), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6301] = 1,
    ACTIONS(711), 7,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_STATUS,
      anon_sym_ACCESS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6311] = 4,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    STATE(320), 1,
      sym__file_status,
    ACTIONS(713), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6327] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(650), 5,
      sym__user_defined_word,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
      anon_sym_POSITION,
  [6339] = 1,
    ACTIONS(715), 7,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_STATUS,
      anon_sym_SELECT,
      anon_sym_ALTERNATE,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6349] = 4,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    STATE(329), 1,
      sym__file_status,
    ACTIONS(574), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6365] = 5,
    ACTIONS(427), 1,
      anon_sym_DATE_DASHCOMPILED_DOT,
    ACTIONS(429), 1,
      anon_sym_SECURITY_DOT,
    STATE(294), 1,
      sym__identification_division_date_compiled,
    STATE(367), 1,
      sym__identification_division_security,
    ACTIONS(717), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [6383] = 4,
    ACTIONS(209), 1,
      anon_sym_FILE,
    ACTIONS(213), 1,
      anon_sym_STATUS,
    STATE(309), 1,
      sym__file_status,
    ACTIONS(467), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6399] = 1,
    ACTIONS(719), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6408] = 1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6417] = 2,
    ACTIONS(721), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(723), 4,
      sym__user_defined_word,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [6428] = 6,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    ACTIONS(725), 1,
      anon_sym_RECORD,
    STATE(185), 1,
      sym__record_key,
    STATE(333), 1,
      sym__indexed_file_access_mode,
    STATE(380), 1,
      sym__ACCESS_MODE_IS,
    STATE(430), 1,
      sym__RECORD_KEY_IS,
  [6447] = 6,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    ACTIONS(725), 1,
      anon_sym_RECORD,
    STATE(187), 1,
      sym__record_key,
    STATE(366), 1,
      sym__indexed_file_access_mode,
    STATE(380), 1,
      sym__ACCESS_MODE_IS,
    STATE(430), 1,
      sym__RECORD_KEY_IS,
  [6466] = 6,
    ACTIONS(221), 1,
      anon_sym_ACCESS,
    ACTIONS(725), 1,
      anon_sym_RECORD,
    STATE(184), 1,
      sym__record_key,
    STATE(380), 1,
      sym__ACCESS_MODE_IS,
    STATE(382), 1,
      sym__indexed_file_access_mode,
    STATE(430), 1,
      sym__RECORD_KEY_IS,
  [6485] = 1,
    ACTIONS(727), 6,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_STATUS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6494] = 1,
    ACTIONS(447), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6503] = 1,
    ACTIONS(615), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6512] = 1,
    ACTIONS(325), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6521] = 1,
    ACTIONS(729), 6,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_STATUS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6530] = 1,
    ACTIONS(631), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6539] = 1,
    ACTIONS(731), 6,
      ts_builtin_sym_end,
      anon_sym_FILE,
      anon_sym_STATUS,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6548] = 1,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6557] = 1,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6566] = 1,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6575] = 1,
    ACTIONS(733), 6,
      ts_builtin_sym_end,
      anon_sym_DATE_DASHWRITTEN_DOT,
      anon_sym_DATE_DASHCOMPILED_DOT,
      anon_sym_SECURITY_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [6584] = 1,
    ACTIONS(383), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6593] = 1,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6602] = 5,
    ACTIONS(737), 1,
      anon_sym_CONFIGURATIONSECTION_DOT,
    ACTIONS(739), 1,
      anon_sym_INPUT_DASHOUTPUTSECTION_DOT,
    STATE(306), 1,
      sym_configuration_section,
    STATE(407), 1,
      sym_input_output_section,
    ACTIONS(735), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
  [6619] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(650), 4,
      sym__user_defined_word,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
  [6630] = 1,
    ACTIONS(741), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6639] = 1,
    ACTIONS(469), 6,
      ts_builtin_sym_end,
      anon_sym_FD,
      sym_working_storage_section,
      sym_linkage_section,
      sym_communication_section,
      sym_report_section,
  [6648] = 1,
    ACTIONS(743), 5,
      ts_builtin_sym_end,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
      anon_sym_DATADIVISION_DOT,
  [6656] = 3,
    ACTIONS(747), 1,
      anon_sym_MODE,
    ACTIONS(749), 1,
      sym__IS,
    ACTIONS(745), 3,
      anon_sym_DYNAMIC,
      anon_sym_SEQUENTIAL,
      anon_sym_RANDOM,
  [6668] = 1,
    ACTIONS(751), 5,
      ts_builtin_sym_end,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
      anon_sym_DATADIVISION_DOT,
  [6676] = 4,
    ACTIONS(291), 1,
      sym__user_defined_word,
    ACTIONS(699), 1,
      sym__external_file_reference,
    ACTIONS(703), 1,
      anon_sym_FROM,
    STATE(455), 2,
      sym_literal,
      sym__file_reference,
  [6690] = 5,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
    ACTIONS(755), 1,
      sym_working_storage_section,
    ACTIONS(757), 1,
      sym_linkage_section,
    ACTIONS(759), 1,
      sym_communication_section,
    ACTIONS(761), 1,
      sym_report_section,
  [6706] = 3,
    ACTIONS(429), 1,
      anon_sym_SECURITY_DOT,
    STATE(367), 1,
      sym__identification_division_security,
    ACTIONS(763), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [6718] = 1,
    ACTIONS(765), 5,
      ts_builtin_sym_end,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
      anon_sym_DATADIVISION_DOT,
  [6726] = 3,
    ACTIONS(429), 1,
      anon_sym_SECURITY_DOT,
    STATE(343), 1,
      sym__identification_division_security,
    ACTIONS(767), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [6738] = 3,
    ACTIONS(429), 1,
      anon_sym_SECURITY_DOT,
    STATE(360), 1,
      sym__identification_division_security,
    ACTIONS(769), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [6750] = 1,
    ACTIONS(771), 5,
      ts_builtin_sym_end,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
      anon_sym_DATADIVISION_DOT,
  [6758] = 2,
    ACTIONS(623), 1,
      anon_sym_FILESTATUSIS,
    ACTIONS(621), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6768] = 1,
    ACTIONS(773), 5,
      ts_builtin_sym_end,
      anon_sym_DATE_DASHCOMPILED_DOT,
      anon_sym_SECURITY_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [6776] = 1,
    ACTIONS(775), 5,
      ts_builtin_sym_end,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
      anon_sym_DATADIVISION_DOT,
  [6784] = 5,
    ACTIONS(777), 1,
      ts_builtin_sym_end,
    ACTIONS(779), 1,
      anon_sym_ENVIRONMENTDIVISION_DOT,
    ACTIONS(781), 1,
      anon_sym_DATADIVISION_DOT,
    STATE(348), 1,
      sym_environment_division,
    STATE(572), 1,
      sym_data_division,
  [6800] = 1,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
      anon_sym_DATADIVISION_DOT,
  [6808] = 2,
    ACTIONS(785), 1,
      anon_sym_FILESTATUSIS,
    ACTIONS(783), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6818] = 1,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_FILESTATUSIS,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6826] = 2,
    ACTIONS(637), 1,
      anon_sym_FILESTATUSIS,
    ACTIONS(635), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6836] = 1,
    ACTIONS(787), 5,
      ts_builtin_sym_end,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
      anon_sym_DATADIVISION_DOT,
  [6844] = 3,
    ACTIONS(429), 1,
      anon_sym_SECURITY_DOT,
    STATE(336), 1,
      sym__identification_division_security,
    ACTIONS(789), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [6856] = 1,
    ACTIONS(791), 5,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_FILESTATUSIS,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6864] = 1,
    ACTIONS(793), 5,
      ts_builtin_sym_end,
      anon_sym_MULTIPLE,
      anon_sym_RERUN,
      anon_sym_SAME,
      anon_sym_DATADIVISION_DOT,
  [6872] = 1,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6879] = 4,
    ACTIONS(53), 1,
      sym__user_defined_word,
    ACTIONS(795), 1,
      anon_sym_CHARACTER,
    ACTIONS(797), 1,
      sym__IS,
    STATE(225), 1,
      sym_literal,
  [6892] = 3,
    ACTIONS(291), 1,
      sym__user_defined_word,
    ACTIONS(799), 1,
      sym__external_file_reference,
    STATE(335), 2,
      sym_literal,
      sym__file_reference,
  [6903] = 3,
    ACTIONS(53), 1,
      sym__user_defined_word,
    ACTIONS(801), 1,
      sym__external_file_reference,
    STATE(139), 2,
      sym_literal,
      sym__file_reference,
  [6914] = 1,
    ACTIONS(709), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6921] = 1,
    ACTIONS(605), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6928] = 1,
    ACTIONS(803), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6935] = 3,
    ACTIONS(807), 1,
      anon_sym_FILE_DASHCONTROL_DOT,
    ACTIONS(809), 1,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
    ACTIONS(805), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
  [6946] = 1,
    ACTIONS(713), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6953] = 3,
    ACTIONS(739), 1,
      anon_sym_INPUT_DASHOUTPUTSECTION_DOT,
    STATE(431), 1,
      sym_input_output_section,
    ACTIONS(811), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
  [6964] = 4,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
    ACTIONS(757), 1,
      sym_linkage_section,
    ACTIONS(759), 1,
      sym_communication_section,
    ACTIONS(761), 1,
      sym_report_section,
  [6977] = 1,
    ACTIONS(783), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6984] = 1,
    ACTIONS(549), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6991] = 1,
    ACTIONS(813), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [6998] = 1,
    ACTIONS(815), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7005] = 1,
    ACTIONS(817), 4,
      ts_builtin_sym_end,
      anon_sym_SECURITY_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [7012] = 3,
    ACTIONS(53), 1,
      sym__user_defined_word,
    ACTIONS(819), 1,
      sym__external_file_reference,
    STATE(311), 2,
      sym_literal,
      sym__file_reference,
  [7023] = 3,
    ACTIONS(291), 1,
      sym__user_defined_word,
    ACTIONS(821), 1,
      sym__external_file_reference,
    STATE(448), 2,
      sym_literal,
      sym__file_reference,
  [7034] = 1,
    ACTIONS(823), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7041] = 1,
    ACTIONS(825), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7048] = 1,
    ACTIONS(827), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7055] = 1,
    ACTIONS(829), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7062] = 1,
    ACTIONS(467), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7069] = 1,
    ACTIONS(831), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7076] = 2,
    ACTIONS(835), 1,
      sym__IS,
    ACTIONS(833), 3,
      anon_sym_DYNAMIC,
      anon_sym_SEQUENTIAL,
      anon_sym_RANDOM,
  [7085] = 1,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7092] = 1,
    ACTIONS(621), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7099] = 4,
    ACTIONS(837), 1,
      ts_builtin_sym_end,
    ACTIONS(839), 1,
      sym_linkage_section,
    ACTIONS(841), 1,
      sym_communication_section,
    ACTIONS(843), 1,
      sym_report_section,
  [7112] = 3,
    ACTIONS(845), 1,
      sym_integer,
    ACTIONS(847), 1,
      anon_sym_CONTAINS,
    STATE(112), 2,
      sym__ansi85_contains,
      sym__std_contains,
  [7123] = 3,
    ACTIONS(53), 1,
      sym__user_defined_word,
    ACTIONS(849), 1,
      sym__external_file_reference,
    STATE(153), 2,
      sym_literal,
      sym__file_reference,
  [7134] = 1,
    ACTIONS(851), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7141] = 3,
    ACTIONS(291), 1,
      sym__user_defined_word,
    ACTIONS(853), 1,
      sym__external_file_reference,
    STATE(338), 2,
      sym_literal,
      sym__file_reference,
  [7152] = 1,
    ACTIONS(578), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7159] = 4,
    ACTIONS(855), 1,
      anon_sym_ORGANIZATION,
    ACTIONS(857), 1,
      anon_sym_RESERVE,
    STATE(255), 1,
      sym__indexed_file_organization,
    STATE(437), 1,
      sym__indexed_file_reserve,
  [7172] = 1,
    ACTIONS(574), 4,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_I_DASHO_DASHCONTROL_DOT,
      anon_sym_DATADIVISION_DOT,
  [7179] = 4,
    ACTIONS(859), 1,
      anon_sym_ORGANIZATION,
    ACTIONS(861), 1,
      anon_sym_RELATIVE,
    ACTIONS(863), 1,
      anon_sym_RESERVE,
    STATE(439), 1,
      sym__relative_file_reserve,
  [7192] = 3,
    ACTIONS(725), 1,
      anon_sym_RECORD,
    STATE(187), 1,
      sym__record_key,
    STATE(430), 1,
      sym__RECORD_KEY_IS,
  [7202] = 3,
    ACTIONS(865), 1,
      sym__user_defined_word,
    ACTIONS(867), 1,
      anon_sym_ON,
    STATE(96), 1,
      sym_data_name,
  [7212] = 1,
    ACTIONS(436), 3,
      anon_sym_ORGANIZATION,
      anon_sym_RELATIVE,
      anon_sym_RESERVE,
  [7218] = 1,
    ACTIONS(869), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [7224] = 3,
    ACTIONS(871), 1,
      sym__user_defined_word,
    ACTIONS(873), 1,
      anon_sym_OPTIONAL,
    STATE(189), 1,
      sym_file_name,
  [7234] = 1,
    ACTIONS(875), 3,
      anon_sym_ORGANIZATION,
      anon_sym_RELATIVE,
      anon_sym_RESERVE,
  [7240] = 3,
    ACTIONS(877), 1,
      anon_sym_ON,
    ACTIONS(879), 1,
      anon_sym_EVERY,
    STATE(296), 1,
      sym__every,
  [7250] = 2,
    ACTIONS(883), 1,
      anon_sym_SORT,
    ACTIONS(881), 2,
      anon_sym_RECORD,
      anon_sym_SORT_DASHMERGE,
  [7258] = 3,
    ACTIONS(865), 1,
      sym__user_defined_word,
    ACTIONS(885), 1,
      anon_sym_ON,
    STATE(110), 1,
      sym_data_name,
  [7268] = 3,
    ACTIONS(887), 1,
      ts_builtin_sym_end,
    ACTIONS(889), 1,
      sym_communication_section,
    ACTIONS(891), 1,
      sym_report_section,
  [7278] = 1,
    ACTIONS(893), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [7284] = 1,
    ACTIONS(407), 3,
      anon_sym_ORGANIZATION,
      anon_sym_RELATIVE,
      anon_sym_RESERVE,
  [7290] = 3,
    ACTIONS(865), 1,
      sym__user_defined_word,
    ACTIONS(895), 1,
      anon_sym_ON,
    STATE(102), 1,
      sym_data_name,
  [7300] = 3,
    ACTIONS(897), 1,
      sym__user_defined_word,
    ACTIONS(899), 1,
      sym_character_string,
    STATE(421), 1,
      sym_file_name,
  [7310] = 3,
    ACTIONS(901), 1,
      sym__user_defined_word,
    ACTIONS(903), 1,
      anon_sym_AT,
    STATE(165), 1,
      sym_data_name,
  [7320] = 3,
    ACTIONS(781), 1,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(905), 1,
      ts_builtin_sym_end,
    STATE(547), 1,
      sym_data_division,
  [7330] = 2,
    ACTIONS(909), 1,
      anon_sym_SEQUENTIAL,
    ACTIONS(907), 2,
      anon_sym_DYNAMIC,
      anon_sym_RANDOM,
  [7338] = 3,
    ACTIONS(865), 1,
      sym__user_defined_word,
    ACTIONS(911), 1,
      anon_sym_ON,
    STATE(108), 1,
      sym_data_name,
  [7348] = 3,
    ACTIONS(913), 1,
      anon_sym_AT,
    ACTIONS(915), 1,
      anon_sym_TOP,
    ACTIONS(917), 1,
      anon_sym_BOTTOM,
  [7358] = 3,
    ACTIONS(865), 1,
      sym__user_defined_word,
    ACTIONS(919), 1,
      anon_sym_ON,
    STATE(109), 1,
      sym_data_name,
  [7368] = 3,
    ACTIONS(921), 1,
      anon_sym_RECORD,
    ACTIONS(923), 1,
      anon_sym_RECORDS,
    STATE(404), 1,
      sym__RECORDS,
  [7378] = 3,
    ACTIONS(865), 1,
      sym__user_defined_word,
    ACTIONS(925), 1,
      anon_sym_ON,
    STATE(99), 1,
      sym_data_name,
  [7388] = 3,
    ACTIONS(927), 1,
      anon_sym_RECORD,
    ACTIONS(929), 1,
      anon_sym_RECORDS,
    STATE(95), 1,
      sym__RECORDS,
  [7398] = 3,
    ACTIONS(931), 1,
      anon_sym_AREA,
    ACTIONS(933), 1,
      anon_sym_AREAS,
    STATE(162), 1,
      sym__AREA,
  [7408] = 1,
    ACTIONS(833), 3,
      anon_sym_DYNAMIC,
      anon_sym_SEQUENTIAL,
      anon_sym_RANDOM,
  [7414] = 3,
    ACTIONS(935), 1,
      sym__user_defined_word,
    ACTIONS(937), 1,
      anon_sym_OF,
    STATE(275), 1,
      sym_file_name,
  [7424] = 3,
    ACTIONS(901), 1,
      sym__user_defined_word,
    ACTIONS(939), 1,
      sym__IS,
    STATE(137), 1,
      sym_data_name,
  [7434] = 1,
    ACTIONS(941), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [7440] = 3,
    ACTIONS(901), 1,
      sym__user_defined_word,
    ACTIONS(943), 1,
      anon_sym_AT,
    STATE(159), 1,
      sym_data_name,
  [7450] = 3,
    ACTIONS(865), 1,
      sym__user_defined_word,
    ACTIONS(945), 1,
      anon_sym_ON,
    STATE(107), 1,
      sym_data_name,
  [7460] = 3,
    ACTIONS(837), 1,
      ts_builtin_sym_end,
    ACTIONS(841), 1,
      sym_communication_section,
    ACTIONS(843), 1,
      sym_report_section,
  [7470] = 2,
    ACTIONS(949), 1,
      anon_sym_FILE,
    ACTIONS(947), 2,
      sym__user_defined_word,
      sym__external_file_reference,
  [7478] = 1,
    ACTIONS(951), 3,
      anon_sym_DYNAMIC,
      anon_sym_SEQUENTIAL,
      anon_sym_RANDOM,
  [7484] = 3,
    ACTIONS(725), 1,
      anon_sym_RECORD,
    STATE(195), 1,
      sym__record_key,
    STATE(430), 1,
      sym__RECORD_KEY_IS,
  [7494] = 1,
    ACTIONS(953), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [7500] = 3,
    ACTIONS(955), 1,
      anon_sym_AREA,
    ACTIONS(957), 1,
      anon_sym_AREAS,
    STATE(527), 1,
      sym__AREA,
  [7510] = 1,
    ACTIONS(959), 3,
      ts_builtin_sym_end,
      anon_sym_INPUT_DASHOUTPUTSECTION_DOT,
      anon_sym_DATADIVISION_DOT,
  [7516] = 3,
    ACTIONS(53), 1,
      sym__user_defined_word,
    ACTIONS(961), 1,
      sym__IS,
    STATE(206), 1,
      sym_literal,
  [7526] = 3,
    ACTIONS(901), 1,
      sym__user_defined_word,
    ACTIONS(963), 1,
      sym__IS,
    STATE(316), 1,
      sym_data_name,
  [7536] = 3,
    ACTIONS(901), 1,
      sym__user_defined_word,
    ACTIONS(965), 1,
      anon_sym_AT,
    STATE(161), 1,
      sym_data_name,
  [7546] = 3,
    ACTIONS(901), 1,
      sym__user_defined_word,
    ACTIONS(967), 1,
      sym__IS,
    STATE(318), 1,
      sym_data_name,
  [7556] = 1,
    ACTIONS(969), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [7562] = 2,
    ACTIONS(973), 1,
      sym__IS,
    ACTIONS(971), 2,
      anon_sym_STANDARD_DASH1,
      anon_sym_character_DASHstring,
  [7570] = 3,
    ACTIONS(865), 1,
      sym__user_defined_word,
    ACTIONS(975), 1,
      anon_sym_ON,
    STATE(100), 1,
      sym_data_name,
  [7580] = 3,
    ACTIONS(977), 1,
      sym__user_defined_word,
    ACTIONS(979), 1,
      anon_sym_KEY,
    ACTIONS(981), 1,
      sym__IS,
  [7590] = 3,
    ACTIONS(865), 1,
      sym__user_defined_word,
    ACTIONS(983), 1,
      anon_sym_ON,
    STATE(103), 1,
      sym_data_name,
  [7600] = 3,
    ACTIONS(865), 1,
      sym__user_defined_word,
    ACTIONS(985), 1,
      anon_sym_ON,
    STATE(101), 1,
      sym_data_name,
  [7610] = 1,
    ACTIONS(987), 3,
      anon_sym_DYNAMIC,
      anon_sym_SEQUENTIAL,
      anon_sym_RANDOM,
  [7616] = 3,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
    ACTIONS(759), 1,
      sym_communication_section,
    ACTIONS(761), 1,
      sym_report_section,
  [7626] = 3,
    ACTIONS(725), 1,
      anon_sym_RECORD,
    STATE(185), 1,
      sym__record_key,
    STATE(430), 1,
      sym__RECORD_KEY_IS,
  [7636] = 3,
    ACTIONS(989), 1,
      sym__user_defined_word,
    ACTIONS(991), 1,
      anon_sym_KEY,
    ACTIONS(993), 1,
      sym__IS,
  [7646] = 3,
    ACTIONS(901), 1,
      sym__user_defined_word,
    ACTIONS(995), 1,
      anon_sym_AT,
    STATE(157), 1,
      sym_data_name,
  [7656] = 2,
    ACTIONS(999), 1,
      anon_sym_FROM,
    ACTIONS(997), 2,
      sym__user_defined_word,
      sym__external_file_reference,
  [7664] = 2,
    ACTIONS(1003), 1,
      anon_sym_TO,
    ACTIONS(1001), 2,
      anon_sym_RECORDS,
      anon_sym_CHARACTERS,
  [7672] = 2,
    ACTIONS(1005), 1,
      anon_sym_TO,
    ACTIONS(233), 2,
      sym__user_defined_word,
      sym__external_file_reference,
  [7680] = 1,
    ACTIONS(1007), 3,
      ts_builtin_sym_end,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
  [7686] = 3,
    ACTIONS(935), 1,
      sym__user_defined_word,
    ACTIONS(1009), 1,
      anon_sym_OF,
    STATE(281), 1,
      sym_file_name,
  [7696] = 1,
    ACTIONS(51), 3,
      anon_sym_ORGANIZATION,
      anon_sym_RELATIVE,
      anon_sym_RESERVE,
  [7702] = 2,
    ACTIONS(1013), 1,
      anon_sym_FILE,
    ACTIONS(1011), 2,
      sym__user_defined_word,
      sym__external_file_reference,
  [7710] = 2,
    ACTIONS(1017), 1,
      anon_sym_OF,
    ACTIONS(1015), 2,
      anon_sym_UNIT,
      anon_sym_REAL,
  [7718] = 3,
    ACTIONS(1019), 1,
      anon_sym_AREA,
    ACTIONS(1021), 1,
      anon_sym_AREAS,
    STATE(403), 1,
      sym__AREA,
  [7728] = 2,
    ACTIONS(1023), 1,
      anon_sym_ARE,
    ACTIONS(377), 2,
      anon_sym_STANDARD,
      anon_sym_OMITTED,
  [7736] = 2,
    ACTIONS(1023), 1,
      sym__IS,
    ACTIONS(377), 2,
      anon_sym_STANDARD,
      anon_sym_OMITTED,
  [7744] = 2,
    STATE(358), 1,
      sym__REAL_OR_UNIT,
    ACTIONS(1025), 2,
      anon_sym_UNIT,
      anon_sym_REAL,
  [7752] = 3,
    ACTIONS(865), 1,
      sym__user_defined_word,
    ACTIONS(1027), 1,
      anon_sym_ON,
    STATE(111), 1,
      sym_data_name,
  [7762] = 2,
    ACTIONS(1031), 1,
      anon_sym_TO,
    ACTIONS(1029), 2,
      anon_sym_RECORDS,
      anon_sym_CHARACTERS,
  [7770] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(149), 1,
      sym_data_name,
  [7777] = 2,
    ACTIONS(1035), 1,
      anon_sym_SEQUENTIAL,
    ACTIONS(1037), 1,
      sym__IS,
  [7784] = 2,
    ACTIONS(1039), 1,
      sym__user_defined_word,
    STATE(145), 1,
      sym_program_name,
  [7791] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(129), 1,
      sym_data_name,
  [7798] = 1,
    ACTIONS(494), 2,
      anon_sym_ORGANIZATION,
      anon_sym_RELATIVE,
  [7803] = 1,
    ACTIONS(1041), 2,
      anon_sym_STANDARD,
      anon_sym_OMITTED,
  [7808] = 1,
    ACTIONS(253), 2,
      sym__user_defined_word,
      sym__external_file_reference,
  [7813] = 1,
    ACTIONS(409), 2,
      anon_sym_STANDARD,
      anon_sym_OMITTED,
  [7818] = 1,
    ACTIONS(811), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
  [7823] = 2,
    ACTIONS(1043), 1,
      sym__user_defined_word,
    STATE(104), 1,
      sym_data_name,
  [7830] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(150), 1,
      sym_data_name,
  [7837] = 2,
    ACTIONS(1043), 1,
      sym__user_defined_word,
    STATE(111), 1,
      sym_data_name,
  [7844] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(224), 1,
      sym_data_name,
  [7851] = 2,
    ACTIONS(1045), 1,
      anon_sym_TOP,
    ACTIONS(1047), 1,
      anon_sym_BOTTOM,
  [7858] = 2,
    ACTIONS(1043), 1,
      sym__user_defined_word,
    STATE(103), 1,
      sym_data_name,
  [7865] = 2,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
    ACTIONS(761), 1,
      sym_report_section,
  [7872] = 1,
    ACTIONS(1049), 2,
      anon_sym_RECORDS,
      anon_sym_CHARACTERS,
  [7877] = 2,
    ACTIONS(917), 1,
      anon_sym_BOTTOM,
    ACTIONS(1051), 1,
      anon_sym_AT,
  [7884] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(165), 1,
      sym_data_name,
  [7891] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(209), 1,
      sym_data_name,
  [7898] = 2,
    ACTIONS(1043), 1,
      sym__user_defined_word,
    STATE(100), 1,
      sym_data_name,
  [7905] = 2,
    ACTIONS(1025), 1,
      anon_sym_RECORDS,
    ACTIONS(1053), 1,
      anon_sym_CLOCK_DASHUNITS,
  [7912] = 2,
    ACTIONS(879), 1,
      anon_sym_EVERY,
    STATE(284), 1,
      sym__every,
  [7919] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(140), 1,
      sym_data_name,
  [7926] = 2,
    ACTIONS(1055), 1,
      sym__user_defined_word,
    STATE(335), 1,
      sym_data_name,
  [7933] = 1,
    ACTIONS(1057), 2,
      anon_sym_REEL,
      anon_sym_UNIT,
  [7938] = 2,
    ACTIONS(1059), 1,
      sym__user_defined_word,
    ACTIONS(1061), 1,
      sym__IS,
  [7945] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(310), 1,
      sym_data_name,
  [7952] = 2,
    ACTIONS(1063), 1,
      sym__user_defined_word,
    STATE(217), 1,
      sym_literal,
  [7959] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(317), 1,
      sym_data_name,
  [7966] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(208), 1,
      sym_data_name,
  [7973] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(248), 1,
      sym_data_name,
  [7980] = 1,
    ACTIONS(1065), 2,
      ts_builtin_sym_end,
      anon_sym_DATADIVISION_DOT,
  [7985] = 2,
    ACTIONS(1067), 1,
      sym__user_defined_word,
    STATE(295), 1,
      sym_data_name,
  [7992] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(308), 1,
      sym_data_name,
  [7999] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(303), 1,
      sym_data_name,
  [8006] = 2,
    ACTIONS(1043), 1,
      sym__user_defined_word,
    STATE(96), 1,
      sym_data_name,
  [8013] = 2,
    ACTIONS(1069), 1,
      sym__user_defined_word,
    STATE(2), 1,
      sym_file_name,
  [8020] = 2,
    ACTIONS(855), 1,
      anon_sym_ORGANIZATION,
    STATE(256), 1,
      sym__indexed_file_organization,
  [8027] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(205), 1,
      sym_data_name,
  [8034] = 2,
    ACTIONS(1071), 1,
      anon_sym_ORGANIZATION,
    ACTIONS(1073), 1,
      anon_sym_RELATIVE,
  [8041] = 2,
    ACTIONS(1043), 1,
      sym__user_defined_word,
    STATE(101), 1,
      sym_data_name,
  [8048] = 2,
    ACTIONS(667), 1,
      anon_sym_RELATIVE,
    STATE(432), 1,
      sym__RELATIVE_KEY_IS,
  [8055] = 2,
    ACTIONS(837), 1,
      ts_builtin_sym_end,
    ACTIONS(843), 1,
      sym_report_section,
  [8062] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(141), 1,
      sym_data_name,
  [8069] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(198), 1,
      sym_data_name,
  [8076] = 2,
    ACTIONS(1043), 1,
      sym__user_defined_word,
    STATE(99), 1,
      sym_data_name,
  [8083] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(161), 1,
      sym_data_name,
  [8090] = 2,
    ACTIONS(1075), 1,
      sym__user_defined_word,
    STATE(275), 1,
      sym_file_name,
  [8097] = 1,
    ACTIONS(1077), 2,
      anon_sym_ORGANIZATION,
      anon_sym_RESERVE,
  [8102] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(190), 1,
      sym_data_name,
  [8109] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(199), 1,
      sym_data_name,
  [8116] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(200), 1,
      sym_data_name,
  [8123] = 1,
    ACTIONS(1079), 2,
      sym__user_defined_word,
      sym__external_file_reference,
  [8128] = 1,
    ACTIONS(947), 2,
      sym__user_defined_word,
      sym__external_file_reference,
  [8133] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(151), 1,
      sym_data_name,
  [8140] = 1,
    ACTIONS(1081), 2,
      anon_sym_ORGANIZATION,
      anon_sym_RESERVE,
  [8145] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(229), 1,
      sym_data_name,
  [8152] = 1,
    ACTIONS(1083), 2,
      anon_sym_ACCESS,
      anon_sym_RECORD,
  [8157] = 1,
    ACTIONS(1085), 2,
      anon_sym_UNIT,
      anon_sym_REAL,
  [8162] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(153), 1,
      sym_data_name,
  [8169] = 2,
    ACTIONS(1063), 1,
      sym__user_defined_word,
    STATE(206), 1,
      sym_literal,
  [8176] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(316), 1,
      sym_data_name,
  [8183] = 2,
    ACTIONS(1087), 1,
      anon_sym_PROGRAM_DASHID_DOT,
    STATE(135), 1,
      sym__identification_division_program_id,
  [8190] = 2,
    ACTIONS(1075), 1,
      sym__user_defined_word,
    STATE(293), 1,
      sym_file_name,
  [8197] = 1,
    ACTIONS(1089), 2,
      anon_sym_STANDARD_DASH1,
      anon_sym_character_DASHstring,
  [8202] = 2,
    ACTIONS(1043), 1,
      sym__user_defined_word,
    STATE(107), 1,
      sym_data_name,
  [8209] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(159), 1,
      sym_data_name,
  [8216] = 2,
    ACTIONS(725), 1,
      anon_sym_RECORD,
    STATE(449), 1,
      sym__RECORD_KEY_IS,
  [8223] = 2,
    ACTIONS(1091), 1,
      ts_builtin_sym_end,
    ACTIONS(1093), 1,
      sym_report_section,
  [8230] = 2,
    ACTIONS(887), 1,
      ts_builtin_sym_end,
    ACTIONS(891), 1,
      sym_report_section,
  [8237] = 2,
    ACTIONS(1043), 1,
      sym__user_defined_word,
    STATE(110), 1,
      sym_data_name,
  [8244] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(152), 1,
      sym_data_name,
  [8251] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(215), 1,
      sym_data_name,
  [8258] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(154), 1,
      sym_data_name,
  [8265] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(155), 1,
      sym_data_name,
  [8272] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(218), 1,
      sym_data_name,
  [8279] = 2,
    ACTIONS(1095), 1,
      sym__user_defined_word,
    STATE(203), 1,
      sym_file_name,
  [8286] = 2,
    ACTIONS(1043), 1,
      sym__user_defined_word,
    STATE(102), 1,
      sym_data_name,
  [8293] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(214), 1,
      sym_data_name,
  [8300] = 2,
    ACTIONS(1097), 1,
      sym__user_defined_word,
    ACTIONS(1099), 1,
      sym__IS,
  [8307] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(144), 1,
      sym_data_name,
  [8314] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(138), 1,
      sym_data_name,
  [8321] = 2,
    ACTIONS(1101), 1,
      sym_integer,
    ACTIONS(1103), 1,
      anon_sym_CONTAINS,
  [8328] = 2,
    ACTIONS(1105), 1,
      sym_alphabet_name,
    ACTIONS(1107), 1,
      sym__IS,
  [8335] = 1,
    ACTIONS(1109), 2,
      anon_sym_RECORDS,
      anon_sym_CHARACTERS,
  [8340] = 2,
    ACTIONS(1043), 1,
      sym__user_defined_word,
    STATE(109), 1,
      sym_data_name,
  [8347] = 2,
    ACTIONS(915), 1,
      anon_sym_TOP,
    ACTIONS(917), 1,
      anon_sym_BOTTOM,
  [8354] = 2,
    ACTIONS(1033), 1,
      sym__user_defined_word,
    STATE(323), 1,
      sym_data_name,
  [8361] = 2,
    ACTIONS(1111), 1,
      anon_sym_EXTERNAL,
    ACTIONS(1113), 1,
      anon_sym_GLOBAL,
  [8368] = 2,
    ACTIONS(855), 1,
      anon_sym_ORGANIZATION,
    STATE(255), 1,
      sym__indexed_file_organization,
  [8375] = 1,
    ACTIONS(1115), 1,
      sym_integer,
  [8379] = 1,
    ACTIONS(1117), 1,
      sym_integer,
  [8383] = 1,
    ACTIONS(1119), 1,
      anon_sym_RELATIVE,
  [8387] = 1,
    ACTIONS(1121), 1,
      sym_integer,
  [8391] = 1,
    ACTIONS(1123), 1,
      sym_alphabet_name,
  [8395] = 1,
    ACTIONS(1125), 1,
      sym_integer,
  [8399] = 1,
    ACTIONS(167), 1,
      sym_integer,
  [8403] = 1,
    ACTIONS(115), 1,
      sym_integer,
  [8407] = 1,
    ACTIONS(1113), 1,
      anon_sym_GLOBAL,
  [8411] = 1,
    ACTIONS(1127), 1,
      sym_integer,
  [8415] = 1,
    ACTIONS(1129), 1,
      sym_integer,
  [8419] = 1,
    ACTIONS(1131), 1,
      anon_sym_OF,
  [8423] = 1,
    ACTIONS(1133), 1,
      anon_sym_INDEXED,
  [8427] = 1,
    ACTIONS(309), 1,
      anon_sym_VARYING,
  [8431] = 1,
    ACTIONS(417), 1,
      anon_sym_FOOTING,
  [8435] = 1,
    ACTIONS(1135), 1,
      sym_integer,
  [8439] = 1,
    ACTIONS(1137), 1,
      sym_object_computer_entry,
  [8443] = 1,
    ACTIONS(1139), 1,
      sym_integer,
  [8447] = 1,
    ACTIONS(1141), 1,
      sym__user_defined_word,
  [8451] = 1,
    ACTIONS(1143), 1,
      sym_alphabet_name,
  [8455] = 1,
    ACTIONS(1145), 1,
      anon_sym_RECORD,
  [8459] = 1,
    ACTIONS(1147), 1,
      anon_sym_SEQUENTIAL,
  [8463] = 1,
    ACTIONS(887), 1,
      ts_builtin_sym_end,
  [8467] = 1,
    ACTIONS(1149), 1,
      sym_alphabet_name,
  [8471] = 1,
    ACTIONS(1151), 1,
      sym_alphabet_name,
  [8475] = 1,
    ACTIONS(153), 1,
      sym_integer,
  [8479] = 1,
    ACTIONS(1091), 1,
      ts_builtin_sym_end,
  [8483] = 1,
    ACTIONS(1153), 1,
      sym_integer,
  [8487] = 1,
    ACTIONS(1155), 1,
      anon_sym_SPECIAL_DASHNAMES_DOT,
  [8491] = 1,
    ACTIONS(1157), 1,
      sym_integer,
  [8495] = 1,
    ACTIONS(1159), 1,
      anon_sym_FILE,
  [8499] = 1,
    ACTIONS(1161), 1,
      sym__user_defined_word,
  [8503] = 1,
    ACTIONS(1163), 1,
      sym_alphabet_name,
  [8507] = 1,
    ACTIONS(1165), 1,
      sym_alphabet_name,
  [8511] = 1,
    ACTIONS(1167), 1,
      sym_alphabet_name,
  [8515] = 1,
    ACTIONS(1169), 1,
      anon_sym_OBJECT_DASHCOMPUTER_DOT,
  [8519] = 1,
    ACTIONS(1171), 1,
      anon_sym_STATUS,
  [8523] = 1,
    ACTIONS(1173), 1,
      anon_sym_ORGANIZATION,
  [8527] = 1,
    ACTIONS(1175), 1,
      sym__user_defined_word,
  [8531] = 1,
    ACTIONS(1177), 1,
      sym_integer,
  [8535] = 1,
    ACTIONS(837), 1,
      ts_builtin_sym_end,
  [8539] = 1,
    ACTIONS(1179), 1,
      sym_integer,
  [8543] = 1,
    ACTIONS(1181), 1,
      sym_special_names_entry,
  [8547] = 1,
    ACTIONS(1183), 1,
      sym_alphabet_name,
  [8551] = 1,
    ACTIONS(1185), 1,
      anon_sym_SEQUENTIAL,
  [8555] = 1,
    ACTIONS(1073), 1,
      anon_sym_RELATIVE,
  [8559] = 1,
    ACTIONS(99), 1,
      sym_integer,
  [8563] = 1,
    ACTIONS(1187), 1,
      ts_builtin_sym_end,
  [8567] = 1,
    ACTIONS(1189), 1,
      sym_alphabet_name,
  [8571] = 1,
    ACTIONS(1191), 1,
      sym_integer,
  [8575] = 1,
    ACTIONS(1193), 1,
      sym_source_computer_entry,
  [8579] = 1,
    ACTIONS(1195), 1,
      anon_sym_DUPLICATES,
  [8583] = 1,
    ACTIONS(1197), 1,
      sym_alphabet_name,
  [8587] = 1,
    ACTIONS(1047), 1,
      anon_sym_BOTTOM,
  [8591] = 1,
    ACTIONS(917), 1,
      anon_sym_BOTTOM,
  [8595] = 1,
    ACTIONS(1199), 1,
      sym__user_defined_word,
  [8599] = 1,
    ACTIONS(1201), 1,
      sym_alphabet_name,
  [8603] = 1,
    ACTIONS(1203), 1,
      ts_builtin_sym_end,
  [8607] = 1,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
  [8611] = 1,
    ACTIONS(1205), 1,
      sym_alphabet_name,
  [8615] = 1,
    ACTIONS(1207), 1,
      anon_sym_FOOTING,
  [8619] = 1,
    ACTIONS(1209), 1,
      sym_integer,
  [8623] = 1,
    ACTIONS(1211), 1,
      sym_alphabet_name,
  [8627] = 1,
    ACTIONS(1213), 1,
      anon_sym_VARYING,
  [8631] = 1,
    ACTIONS(1215), 1,
      sym__user_defined_word,
  [8635] = 1,
    ACTIONS(1217), 1,
      sym__user_defined_word,
  [8639] = 1,
    ACTIONS(1219), 1,
      sym_alphabet_name,
  [8643] = 1,
    ACTIONS(395), 1,
      anon_sym_FOOTING,
  [8647] = 1,
    ACTIONS(1221), 1,
      sym_integer,
  [8651] = 1,
    ACTIONS(1223), 1,
      sym_integer,
  [8655] = 1,
    ACTIONS(1225), 1,
      sym_integer,
  [8659] = 1,
    ACTIONS(1227), 1,
      anon_sym_SOURCE_DASHCOMPUTER_DOT,
  [8663] = 1,
    ACTIONS(1229), 1,
      sym__user_defined_word,
  [8667] = 1,
    ACTIONS(1231), 1,
      sym__user_defined_word,
  [8671] = 1,
    ACTIONS(1233), 1,
      sym_integer,
  [8675] = 1,
    ACTIONS(1235), 1,
      sym_comment_entry,
  [8679] = 1,
    ACTIONS(137), 1,
      sym_integer,
  [8683] = 1,
    ACTIONS(1237), 1,
      sym_comment_entry,
  [8687] = 1,
    ACTIONS(1239), 1,
      sym_comment_entry,
  [8691] = 1,
    ACTIONS(1241), 1,
      sym_comment_entry,
  [8695] = 1,
    ACTIONS(183), 1,
      anon_sym_EVERY,
  [8699] = 1,
    ACTIONS(1243), 1,
      sym_comment_entry,
  [8703] = 1,
    ACTIONS(905), 1,
      ts_builtin_sym_end,
  [8707] = 1,
    ACTIONS(205), 1,
      anon_sym_VARYING,
  [8711] = 1,
    ACTIONS(1245), 1,
      sym_implementor_name,
  [8715] = 1,
    ACTIONS(1247), 1,
      ts_builtin_sym_end,
  [8719] = 1,
    ACTIONS(1249), 1,
      sym_integer,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 84,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 300,
  [SMALL_STATE(7)] = 329,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 447,
  [SMALL_STATE(10)] = 510,
  [SMALL_STATE(11)] = 573,
  [SMALL_STATE(12)] = 612,
  [SMALL_STATE(13)] = 651,
  [SMALL_STATE(14)] = 708,
  [SMALL_STATE(15)] = 765,
  [SMALL_STATE(16)] = 804,
  [SMALL_STATE(17)] = 861,
  [SMALL_STATE(18)] = 918,
  [SMALL_STATE(19)] = 957,
  [SMALL_STATE(20)] = 993,
  [SMALL_STATE(21)] = 1029,
  [SMALL_STATE(22)] = 1065,
  [SMALL_STATE(23)] = 1101,
  [SMALL_STATE(24)] = 1152,
  [SMALL_STATE(25)] = 1185,
  [SMALL_STATE(26)] = 1236,
  [SMALL_STATE(27)] = 1269,
  [SMALL_STATE(28)] = 1292,
  [SMALL_STATE(29)] = 1325,
  [SMALL_STATE(30)] = 1376,
  [SMALL_STATE(31)] = 1409,
  [SMALL_STATE(32)] = 1460,
  [SMALL_STATE(33)] = 1493,
  [SMALL_STATE(34)] = 1544,
  [SMALL_STATE(35)] = 1566,
  [SMALL_STATE(36)] = 1596,
  [SMALL_STATE(37)] = 1626,
  [SMALL_STATE(38)] = 1678,
  [SMALL_STATE(39)] = 1718,
  [SMALL_STATE(40)] = 1744,
  [SMALL_STATE(41)] = 1771,
  [SMALL_STATE(42)] = 1816,
  [SMALL_STATE(43)] = 1843,
  [SMALL_STATE(44)] = 1888,
  [SMALL_STATE(45)] = 1911,
  [SMALL_STATE(46)] = 1956,
  [SMALL_STATE(47)] = 1983,
  [SMALL_STATE(48)] = 2010,
  [SMALL_STATE(49)] = 2055,
  [SMALL_STATE(50)] = 2100,
  [SMALL_STATE(51)] = 2127,
  [SMALL_STATE(52)] = 2154,
  [SMALL_STATE(53)] = 2181,
  [SMALL_STATE(54)] = 2226,
  [SMALL_STATE(55)] = 2250,
  [SMALL_STATE(56)] = 2296,
  [SMALL_STATE(57)] = 2316,
  [SMALL_STATE(58)] = 2340,
  [SMALL_STATE(59)] = 2364,
  [SMALL_STATE(60)] = 2388,
  [SMALL_STATE(61)] = 2412,
  [SMALL_STATE(62)] = 2436,
  [SMALL_STATE(63)] = 2464,
  [SMALL_STATE(64)] = 2488,
  [SMALL_STATE(65)] = 2512,
  [SMALL_STATE(66)] = 2558,
  [SMALL_STATE(67)] = 2582,
  [SMALL_STATE(68)] = 2606,
  [SMALL_STATE(69)] = 2627,
  [SMALL_STATE(70)] = 2646,
  [SMALL_STATE(71)] = 2667,
  [SMALL_STATE(72)] = 2706,
  [SMALL_STATE(73)] = 2727,
  [SMALL_STATE(74)] = 2748,
  [SMALL_STATE(75)] = 2769,
  [SMALL_STATE(76)] = 2794,
  [SMALL_STATE(77)] = 2813,
  [SMALL_STATE(78)] = 2834,
  [SMALL_STATE(79)] = 2853,
  [SMALL_STATE(80)] = 2892,
  [SMALL_STATE(81)] = 2931,
  [SMALL_STATE(82)] = 2952,
  [SMALL_STATE(83)] = 2973,
  [SMALL_STATE(84)] = 2998,
  [SMALL_STATE(85)] = 3019,
  [SMALL_STATE(86)] = 3044,
  [SMALL_STATE(87)] = 3065,
  [SMALL_STATE(88)] = 3090,
  [SMALL_STATE(89)] = 3111,
  [SMALL_STATE(90)] = 3150,
  [SMALL_STATE(91)] = 3169,
  [SMALL_STATE(92)] = 3190,
  [SMALL_STATE(93)] = 3229,
  [SMALL_STATE(94)] = 3268,
  [SMALL_STATE(95)] = 3307,
  [SMALL_STATE(96)] = 3331,
  [SMALL_STATE(97)] = 3349,
  [SMALL_STATE(98)] = 3367,
  [SMALL_STATE(99)] = 3385,
  [SMALL_STATE(100)] = 3403,
  [SMALL_STATE(101)] = 3421,
  [SMALL_STATE(102)] = 3439,
  [SMALL_STATE(103)] = 3457,
  [SMALL_STATE(104)] = 3475,
  [SMALL_STATE(105)] = 3493,
  [SMALL_STATE(106)] = 3517,
  [SMALL_STATE(107)] = 3535,
  [SMALL_STATE(108)] = 3553,
  [SMALL_STATE(109)] = 3571,
  [SMALL_STATE(110)] = 3589,
  [SMALL_STATE(111)] = 3607,
  [SMALL_STATE(112)] = 3625,
  [SMALL_STATE(113)] = 3643,
  [SMALL_STATE(114)] = 3667,
  [SMALL_STATE(115)] = 3704,
  [SMALL_STATE(116)] = 3721,
  [SMALL_STATE(117)] = 3754,
  [SMALL_STATE(118)] = 3787,
  [SMALL_STATE(119)] = 3820,
  [SMALL_STATE(120)] = 3839,
  [SMALL_STATE(121)] = 3872,
  [SMALL_STATE(122)] = 3893,
  [SMALL_STATE(123)] = 3926,
  [SMALL_STATE(124)] = 3959,
  [SMALL_STATE(125)] = 3992,
  [SMALL_STATE(126)] = 4029,
  [SMALL_STATE(127)] = 4062,
  [SMALL_STATE(128)] = 4083,
  [SMALL_STATE(129)] = 4103,
  [SMALL_STATE(130)] = 4125,
  [SMALL_STATE(131)] = 4145,
  [SMALL_STATE(132)] = 4161,
  [SMALL_STATE(133)] = 4179,
  [SMALL_STATE(134)] = 4199,
  [SMALL_STATE(135)] = 4217,
  [SMALL_STATE(136)] = 4253,
  [SMALL_STATE(137)] = 4273,
  [SMALL_STATE(138)] = 4295,
  [SMALL_STATE(139)] = 4322,
  [SMALL_STATE(140)] = 4337,
  [SMALL_STATE(141)] = 4364,
  [SMALL_STATE(142)] = 4391,
  [SMALL_STATE(143)] = 4406,
  [SMALL_STATE(144)] = 4421,
  [SMALL_STATE(145)] = 4448,
  [SMALL_STATE(146)] = 4469,
  [SMALL_STATE(147)] = 4500,
  [SMALL_STATE(148)] = 4531,
  [SMALL_STATE(149)] = 4562,
  [SMALL_STATE(150)] = 4589,
  [SMALL_STATE(151)] = 4616,
  [SMALL_STATE(152)] = 4643,
  [SMALL_STATE(153)] = 4670,
  [SMALL_STATE(154)] = 4685,
  [SMALL_STATE(155)] = 4712,
  [SMALL_STATE(156)] = 4726,
  [SMALL_STATE(157)] = 4744,
  [SMALL_STATE(158)] = 4758,
  [SMALL_STATE(159)] = 4788,
  [SMALL_STATE(160)] = 4802,
  [SMALL_STATE(161)] = 4824,
  [SMALL_STATE(162)] = 4838,
  [SMALL_STATE(163)] = 4852,
  [SMALL_STATE(164)] = 4876,
  [SMALL_STATE(165)] = 4900,
  [SMALL_STATE(166)] = 4914,
  [SMALL_STATE(167)] = 4937,
  [SMALL_STATE(168)] = 4960,
  [SMALL_STATE(169)] = 4985,
  [SMALL_STATE(170)] = 5008,
  [SMALL_STATE(171)] = 5031,
  [SMALL_STATE(172)] = 5054,
  [SMALL_STATE(173)] = 5077,
  [SMALL_STATE(174)] = 5100,
  [SMALL_STATE(175)] = 5125,
  [SMALL_STATE(176)] = 5150,
  [SMALL_STATE(177)] = 5175,
  [SMALL_STATE(178)] = 5200,
  [SMALL_STATE(179)] = 5223,
  [SMALL_STATE(180)] = 5243,
  [SMALL_STATE(181)] = 5267,
  [SMALL_STATE(182)] = 5283,
  [SMALL_STATE(183)] = 5297,
  [SMALL_STATE(184)] = 5319,
  [SMALL_STATE(185)] = 5341,
  [SMALL_STATE(186)] = 5363,
  [SMALL_STATE(187)] = 5375,
  [SMALL_STATE(188)] = 5397,
  [SMALL_STATE(189)] = 5411,
  [SMALL_STATE(190)] = 5427,
  [SMALL_STATE(191)] = 5445,
  [SMALL_STATE(192)] = 5461,
  [SMALL_STATE(193)] = 5485,
  [SMALL_STATE(194)] = 5497,
  [SMALL_STATE(195)] = 5513,
  [SMALL_STATE(196)] = 5535,
  [SMALL_STATE(197)] = 5552,
  [SMALL_STATE(198)] = 5571,
  [SMALL_STATE(199)] = 5586,
  [SMALL_STATE(200)] = 5601,
  [SMALL_STATE(201)] = 5616,
  [SMALL_STATE(202)] = 5635,
  [SMALL_STATE(203)] = 5654,
  [SMALL_STATE(204)] = 5665,
  [SMALL_STATE(205)] = 5684,
  [SMALL_STATE(206)] = 5699,
  [SMALL_STATE(207)] = 5710,
  [SMALL_STATE(208)] = 5729,
  [SMALL_STATE(209)] = 5744,
  [SMALL_STATE(210)] = 5759,
  [SMALL_STATE(211)] = 5770,
  [SMALL_STATE(212)] = 5789,
  [SMALL_STATE(213)] = 5800,
  [SMALL_STATE(214)] = 5819,
  [SMALL_STATE(215)] = 5834,
  [SMALL_STATE(216)] = 5849,
  [SMALL_STATE(217)] = 5868,
  [SMALL_STATE(218)] = 5879,
  [SMALL_STATE(219)] = 5894,
  [SMALL_STATE(220)] = 5911,
  [SMALL_STATE(221)] = 5922,
  [SMALL_STATE(222)] = 5939,
  [SMALL_STATE(223)] = 5950,
  [SMALL_STATE(224)] = 5967,
  [SMALL_STATE(225)] = 5982,
  [SMALL_STATE(226)] = 5993,
  [SMALL_STATE(227)] = 6010,
  [SMALL_STATE(228)] = 6027,
  [SMALL_STATE(229)] = 6046,
  [SMALL_STATE(230)] = 6061,
  [SMALL_STATE(231)] = 6075,
  [SMALL_STATE(232)] = 6093,
  [SMALL_STATE(233)] = 6109,
  [SMALL_STATE(234)] = 6123,
  [SMALL_STATE(235)] = 6145,
  [SMALL_STATE(236)] = 6161,
  [SMALL_STATE(237)] = 6177,
  [SMALL_STATE(238)] = 6193,
  [SMALL_STATE(239)] = 6213,
  [SMALL_STATE(240)] = 6223,
  [SMALL_STATE(241)] = 6241,
  [SMALL_STATE(242)] = 6251,
  [SMALL_STATE(243)] = 6269,
  [SMALL_STATE(244)] = 6285,
  [SMALL_STATE(245)] = 6301,
  [SMALL_STATE(246)] = 6311,
  [SMALL_STATE(247)] = 6327,
  [SMALL_STATE(248)] = 6339,
  [SMALL_STATE(249)] = 6349,
  [SMALL_STATE(250)] = 6365,
  [SMALL_STATE(251)] = 6383,
  [SMALL_STATE(252)] = 6399,
  [SMALL_STATE(253)] = 6408,
  [SMALL_STATE(254)] = 6417,
  [SMALL_STATE(255)] = 6428,
  [SMALL_STATE(256)] = 6447,
  [SMALL_STATE(257)] = 6466,
  [SMALL_STATE(258)] = 6485,
  [SMALL_STATE(259)] = 6494,
  [SMALL_STATE(260)] = 6503,
  [SMALL_STATE(261)] = 6512,
  [SMALL_STATE(262)] = 6521,
  [SMALL_STATE(263)] = 6530,
  [SMALL_STATE(264)] = 6539,
  [SMALL_STATE(265)] = 6548,
  [SMALL_STATE(266)] = 6557,
  [SMALL_STATE(267)] = 6566,
  [SMALL_STATE(268)] = 6575,
  [SMALL_STATE(269)] = 6584,
  [SMALL_STATE(270)] = 6593,
  [SMALL_STATE(271)] = 6602,
  [SMALL_STATE(272)] = 6619,
  [SMALL_STATE(273)] = 6630,
  [SMALL_STATE(274)] = 6639,
  [SMALL_STATE(275)] = 6648,
  [SMALL_STATE(276)] = 6656,
  [SMALL_STATE(277)] = 6668,
  [SMALL_STATE(278)] = 6676,
  [SMALL_STATE(279)] = 6690,
  [SMALL_STATE(280)] = 6706,
  [SMALL_STATE(281)] = 6718,
  [SMALL_STATE(282)] = 6726,
  [SMALL_STATE(283)] = 6738,
  [SMALL_STATE(284)] = 6750,
  [SMALL_STATE(285)] = 6758,
  [SMALL_STATE(286)] = 6768,
  [SMALL_STATE(287)] = 6776,
  [SMALL_STATE(288)] = 6784,
  [SMALL_STATE(289)] = 6800,
  [SMALL_STATE(290)] = 6808,
  [SMALL_STATE(291)] = 6818,
  [SMALL_STATE(292)] = 6826,
  [SMALL_STATE(293)] = 6836,
  [SMALL_STATE(294)] = 6844,
  [SMALL_STATE(295)] = 6856,
  [SMALL_STATE(296)] = 6864,
  [SMALL_STATE(297)] = 6872,
  [SMALL_STATE(298)] = 6879,
  [SMALL_STATE(299)] = 6892,
  [SMALL_STATE(300)] = 6903,
  [SMALL_STATE(301)] = 6914,
  [SMALL_STATE(302)] = 6921,
  [SMALL_STATE(303)] = 6928,
  [SMALL_STATE(304)] = 6935,
  [SMALL_STATE(305)] = 6946,
  [SMALL_STATE(306)] = 6953,
  [SMALL_STATE(307)] = 6964,
  [SMALL_STATE(308)] = 6977,
  [SMALL_STATE(309)] = 6984,
  [SMALL_STATE(310)] = 6991,
  [SMALL_STATE(311)] = 6998,
  [SMALL_STATE(312)] = 7005,
  [SMALL_STATE(313)] = 7012,
  [SMALL_STATE(314)] = 7023,
  [SMALL_STATE(315)] = 7034,
  [SMALL_STATE(316)] = 7041,
  [SMALL_STATE(317)] = 7048,
  [SMALL_STATE(318)] = 7055,
  [SMALL_STATE(319)] = 7062,
  [SMALL_STATE(320)] = 7069,
  [SMALL_STATE(321)] = 7076,
  [SMALL_STATE(322)] = 7085,
  [SMALL_STATE(323)] = 7092,
  [SMALL_STATE(324)] = 7099,
  [SMALL_STATE(325)] = 7112,
  [SMALL_STATE(326)] = 7123,
  [SMALL_STATE(327)] = 7134,
  [SMALL_STATE(328)] = 7141,
  [SMALL_STATE(329)] = 7152,
  [SMALL_STATE(330)] = 7159,
  [SMALL_STATE(331)] = 7172,
  [SMALL_STATE(332)] = 7179,
  [SMALL_STATE(333)] = 7192,
  [SMALL_STATE(334)] = 7202,
  [SMALL_STATE(335)] = 7212,
  [SMALL_STATE(336)] = 7218,
  [SMALL_STATE(337)] = 7224,
  [SMALL_STATE(338)] = 7234,
  [SMALL_STATE(339)] = 7240,
  [SMALL_STATE(340)] = 7250,
  [SMALL_STATE(341)] = 7258,
  [SMALL_STATE(342)] = 7268,
  [SMALL_STATE(343)] = 7278,
  [SMALL_STATE(344)] = 7284,
  [SMALL_STATE(345)] = 7290,
  [SMALL_STATE(346)] = 7300,
  [SMALL_STATE(347)] = 7310,
  [SMALL_STATE(348)] = 7320,
  [SMALL_STATE(349)] = 7330,
  [SMALL_STATE(350)] = 7338,
  [SMALL_STATE(351)] = 7348,
  [SMALL_STATE(352)] = 7358,
  [SMALL_STATE(353)] = 7368,
  [SMALL_STATE(354)] = 7378,
  [SMALL_STATE(355)] = 7388,
  [SMALL_STATE(356)] = 7398,
  [SMALL_STATE(357)] = 7408,
  [SMALL_STATE(358)] = 7414,
  [SMALL_STATE(359)] = 7424,
  [SMALL_STATE(360)] = 7434,
  [SMALL_STATE(361)] = 7440,
  [SMALL_STATE(362)] = 7450,
  [SMALL_STATE(363)] = 7460,
  [SMALL_STATE(364)] = 7470,
  [SMALL_STATE(365)] = 7478,
  [SMALL_STATE(366)] = 7484,
  [SMALL_STATE(367)] = 7494,
  [SMALL_STATE(368)] = 7500,
  [SMALL_STATE(369)] = 7510,
  [SMALL_STATE(370)] = 7516,
  [SMALL_STATE(371)] = 7526,
  [SMALL_STATE(372)] = 7536,
  [SMALL_STATE(373)] = 7546,
  [SMALL_STATE(374)] = 7556,
  [SMALL_STATE(375)] = 7562,
  [SMALL_STATE(376)] = 7570,
  [SMALL_STATE(377)] = 7580,
  [SMALL_STATE(378)] = 7590,
  [SMALL_STATE(379)] = 7600,
  [SMALL_STATE(380)] = 7610,
  [SMALL_STATE(381)] = 7616,
  [SMALL_STATE(382)] = 7626,
  [SMALL_STATE(383)] = 7636,
  [SMALL_STATE(384)] = 7646,
  [SMALL_STATE(385)] = 7656,
  [SMALL_STATE(386)] = 7664,
  [SMALL_STATE(387)] = 7672,
  [SMALL_STATE(388)] = 7680,
  [SMALL_STATE(389)] = 7686,
  [SMALL_STATE(390)] = 7696,
  [SMALL_STATE(391)] = 7702,
  [SMALL_STATE(392)] = 7710,
  [SMALL_STATE(393)] = 7718,
  [SMALL_STATE(394)] = 7728,
  [SMALL_STATE(395)] = 7736,
  [SMALL_STATE(396)] = 7744,
  [SMALL_STATE(397)] = 7752,
  [SMALL_STATE(398)] = 7762,
  [SMALL_STATE(399)] = 7770,
  [SMALL_STATE(400)] = 7777,
  [SMALL_STATE(401)] = 7784,
  [SMALL_STATE(402)] = 7791,
  [SMALL_STATE(403)] = 7798,
  [SMALL_STATE(404)] = 7803,
  [SMALL_STATE(405)] = 7808,
  [SMALL_STATE(406)] = 7813,
  [SMALL_STATE(407)] = 7818,
  [SMALL_STATE(408)] = 7823,
  [SMALL_STATE(409)] = 7830,
  [SMALL_STATE(410)] = 7837,
  [SMALL_STATE(411)] = 7844,
  [SMALL_STATE(412)] = 7851,
  [SMALL_STATE(413)] = 7858,
  [SMALL_STATE(414)] = 7865,
  [SMALL_STATE(415)] = 7872,
  [SMALL_STATE(416)] = 7877,
  [SMALL_STATE(417)] = 7884,
  [SMALL_STATE(418)] = 7891,
  [SMALL_STATE(419)] = 7898,
  [SMALL_STATE(420)] = 7905,
  [SMALL_STATE(421)] = 7912,
  [SMALL_STATE(422)] = 7919,
  [SMALL_STATE(423)] = 7926,
  [SMALL_STATE(424)] = 7933,
  [SMALL_STATE(425)] = 7938,
  [SMALL_STATE(426)] = 7945,
  [SMALL_STATE(427)] = 7952,
  [SMALL_STATE(428)] = 7959,
  [SMALL_STATE(429)] = 7966,
  [SMALL_STATE(430)] = 7973,
  [SMALL_STATE(431)] = 7980,
  [SMALL_STATE(432)] = 7985,
  [SMALL_STATE(433)] = 7992,
  [SMALL_STATE(434)] = 7999,
  [SMALL_STATE(435)] = 8006,
  [SMALL_STATE(436)] = 8013,
  [SMALL_STATE(437)] = 8020,
  [SMALL_STATE(438)] = 8027,
  [SMALL_STATE(439)] = 8034,
  [SMALL_STATE(440)] = 8041,
  [SMALL_STATE(441)] = 8048,
  [SMALL_STATE(442)] = 8055,
  [SMALL_STATE(443)] = 8062,
  [SMALL_STATE(444)] = 8069,
  [SMALL_STATE(445)] = 8076,
  [SMALL_STATE(446)] = 8083,
  [SMALL_STATE(447)] = 8090,
  [SMALL_STATE(448)] = 8097,
  [SMALL_STATE(449)] = 8102,
  [SMALL_STATE(450)] = 8109,
  [SMALL_STATE(451)] = 8116,
  [SMALL_STATE(452)] = 8123,
  [SMALL_STATE(453)] = 8128,
  [SMALL_STATE(454)] = 8133,
  [SMALL_STATE(455)] = 8140,
  [SMALL_STATE(456)] = 8145,
  [SMALL_STATE(457)] = 8152,
  [SMALL_STATE(458)] = 8157,
  [SMALL_STATE(459)] = 8162,
  [SMALL_STATE(460)] = 8169,
  [SMALL_STATE(461)] = 8176,
  [SMALL_STATE(462)] = 8183,
  [SMALL_STATE(463)] = 8190,
  [SMALL_STATE(464)] = 8197,
  [SMALL_STATE(465)] = 8202,
  [SMALL_STATE(466)] = 8209,
  [SMALL_STATE(467)] = 8216,
  [SMALL_STATE(468)] = 8223,
  [SMALL_STATE(469)] = 8230,
  [SMALL_STATE(470)] = 8237,
  [SMALL_STATE(471)] = 8244,
  [SMALL_STATE(472)] = 8251,
  [SMALL_STATE(473)] = 8258,
  [SMALL_STATE(474)] = 8265,
  [SMALL_STATE(475)] = 8272,
  [SMALL_STATE(476)] = 8279,
  [SMALL_STATE(477)] = 8286,
  [SMALL_STATE(478)] = 8293,
  [SMALL_STATE(479)] = 8300,
  [SMALL_STATE(480)] = 8307,
  [SMALL_STATE(481)] = 8314,
  [SMALL_STATE(482)] = 8321,
  [SMALL_STATE(483)] = 8328,
  [SMALL_STATE(484)] = 8335,
  [SMALL_STATE(485)] = 8340,
  [SMALL_STATE(486)] = 8347,
  [SMALL_STATE(487)] = 8354,
  [SMALL_STATE(488)] = 8361,
  [SMALL_STATE(489)] = 8368,
  [SMALL_STATE(490)] = 8375,
  [SMALL_STATE(491)] = 8379,
  [SMALL_STATE(492)] = 8383,
  [SMALL_STATE(493)] = 8387,
  [SMALL_STATE(494)] = 8391,
  [SMALL_STATE(495)] = 8395,
  [SMALL_STATE(496)] = 8399,
  [SMALL_STATE(497)] = 8403,
  [SMALL_STATE(498)] = 8407,
  [SMALL_STATE(499)] = 8411,
  [SMALL_STATE(500)] = 8415,
  [SMALL_STATE(501)] = 8419,
  [SMALL_STATE(502)] = 8423,
  [SMALL_STATE(503)] = 8427,
  [SMALL_STATE(504)] = 8431,
  [SMALL_STATE(505)] = 8435,
  [SMALL_STATE(506)] = 8439,
  [SMALL_STATE(507)] = 8443,
  [SMALL_STATE(508)] = 8447,
  [SMALL_STATE(509)] = 8451,
  [SMALL_STATE(510)] = 8455,
  [SMALL_STATE(511)] = 8459,
  [SMALL_STATE(512)] = 8463,
  [SMALL_STATE(513)] = 8467,
  [SMALL_STATE(514)] = 8471,
  [SMALL_STATE(515)] = 8475,
  [SMALL_STATE(516)] = 8479,
  [SMALL_STATE(517)] = 8483,
  [SMALL_STATE(518)] = 8487,
  [SMALL_STATE(519)] = 8491,
  [SMALL_STATE(520)] = 8495,
  [SMALL_STATE(521)] = 8499,
  [SMALL_STATE(522)] = 8503,
  [SMALL_STATE(523)] = 8507,
  [SMALL_STATE(524)] = 8511,
  [SMALL_STATE(525)] = 8515,
  [SMALL_STATE(526)] = 8519,
  [SMALL_STATE(527)] = 8523,
  [SMALL_STATE(528)] = 8527,
  [SMALL_STATE(529)] = 8531,
  [SMALL_STATE(530)] = 8535,
  [SMALL_STATE(531)] = 8539,
  [SMALL_STATE(532)] = 8543,
  [SMALL_STATE(533)] = 8547,
  [SMALL_STATE(534)] = 8551,
  [SMALL_STATE(535)] = 8555,
  [SMALL_STATE(536)] = 8559,
  [SMALL_STATE(537)] = 8563,
  [SMALL_STATE(538)] = 8567,
  [SMALL_STATE(539)] = 8571,
  [SMALL_STATE(540)] = 8575,
  [SMALL_STATE(541)] = 8579,
  [SMALL_STATE(542)] = 8583,
  [SMALL_STATE(543)] = 8587,
  [SMALL_STATE(544)] = 8591,
  [SMALL_STATE(545)] = 8595,
  [SMALL_STATE(546)] = 8599,
  [SMALL_STATE(547)] = 8603,
  [SMALL_STATE(548)] = 8607,
  [SMALL_STATE(549)] = 8611,
  [SMALL_STATE(550)] = 8615,
  [SMALL_STATE(551)] = 8619,
  [SMALL_STATE(552)] = 8623,
  [SMALL_STATE(553)] = 8627,
  [SMALL_STATE(554)] = 8631,
  [SMALL_STATE(555)] = 8635,
  [SMALL_STATE(556)] = 8639,
  [SMALL_STATE(557)] = 8643,
  [SMALL_STATE(558)] = 8647,
  [SMALL_STATE(559)] = 8651,
  [SMALL_STATE(560)] = 8655,
  [SMALL_STATE(561)] = 8659,
  [SMALL_STATE(562)] = 8663,
  [SMALL_STATE(563)] = 8667,
  [SMALL_STATE(564)] = 8671,
  [SMALL_STATE(565)] = 8675,
  [SMALL_STATE(566)] = 8679,
  [SMALL_STATE(567)] = 8683,
  [SMALL_STATE(568)] = 8687,
  [SMALL_STATE(569)] = 8691,
  [SMALL_STATE(570)] = 8695,
  [SMALL_STATE(571)] = 8699,
  [SMALL_STATE(572)] = 8703,
  [SMALL_STATE(573)] = 8707,
  [SMALL_STATE(574)] = 8711,
  [SMALL_STATE(575)] = 8715,
  [SMALL_STATE(576)] = 8719,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_name, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative_file_assign, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 7),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__IS_EXTERNAL, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__std_contains, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__std_contains, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative_file_assign, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ASSIGN_TO, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ASSIGN_TO, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 9),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 8),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ASSIGN_TO, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ASSIGN_TO, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 8),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__IS_GLOBAL, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 10),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_value_description, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_sequential_file_value_description, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 11),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__std_contains, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_block_description, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_value_description, 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_sequential_file_value_description, 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_block_description, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__std_contains, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_block_description, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 9),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__record_sequential_file_value_description_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__record_sequential_file_value_description_repeat1, 2), SHIFT_REPEAT(119),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__record_sequential_file_value_description_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_value_description, 4),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_sequential_file_value_description, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 12),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_block_description, 6),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_data_description, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_sequential_file_data_description, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 13),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 14),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi85_contains, 15),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__record_sequential_file_value_description_repeat1, 2), SHIFT_REPEAT(134),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__std_contains, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_record_description, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_data_description, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_sequential_file_data_description, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_label_description, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_name, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__RECORDS, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__RECORDS, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 10),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_linage_description, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__record_sequential_file_linage_description, 3), SHIFT(133),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_assign_destination, 1),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__record_sequential_file_assign_destination, 1), REDUCE(sym__relative_file_assign, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file_assign, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__RECORDS, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__RECORDS, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_linage_description, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 2, .production_id = 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_assign_destination, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__record_sequential_file_assign_destination, 2), REDUCE(sym__relative_file_assign, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file_assign, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_linage_description, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__record_sequential_file_linage_description, 2), SHIFT(128),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 11),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_assign, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_name, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identification_division_program_id, 2, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file, 5),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 12),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_assign_destination, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_linage_description, 8),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identification_division_program_id, 3, .production_id = 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 3, .production_id = 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_linage_description, 5),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_output_section_repeat1, 2),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_output_section_repeat1, 2), SHIFT_REPEAT(337),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_linage_description, 7),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file_reserve, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_output_section, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_output_section, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_linage_description, 6),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_output_section, 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_output_section_repeat2, 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_output_section_repeat2, 2), SHIFT_REPEAT(520),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_output_section_repeat2, 2), SHIFT_REPEAT(339),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_output_section_repeat2, 2), SHIFT_REPEAT(340),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_output_section, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_output_control_same_entry, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_output_control_same_entry, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_output_control_multiple_file_entry, 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_output_control_multiple_file_entry, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file, 6),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_output_control_same_entry, 3),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_output_control_same_entry, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 3, .production_id = 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_section_repeat1, 2),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_section_repeat1, 2), SHIFT_REPEAT(436),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_output_control_multiple_file_entry, 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_output_control_multiple_file_entry, 3),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indexed_file, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indexed_file, 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_organization, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indexed_file, 5),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identification_division_program_id, 4, .production_id = 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__select, 2),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__select, 2), SHIFT(387),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternate_record_key, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_section, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 4, .production_id = 13),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_organization, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_section, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indexed_file, 6),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_output_control_same_entry, 5),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_output_control_same_entry, 5),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_output_control_multiple_file_entry, 4),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_output_control_multiple_file_entry, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 13),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_output_control_multiple_file_entry, 5),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_output_control_multiple_file_entry, 5),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file, 5),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__select, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 14),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_padding, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identification_division_program_id, 5, .production_id = 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_output_control_multiple_file_entry_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_output_control_multiple_file_entry_repeat1, 2), SHIFT_REPEAT(247),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_output_control_multiple_file_entry_repeat1, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_padding, 4),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_output_control_same_entry_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__input_output_control_same_entry_repeat1, 2), SHIFT_REPEAT(272),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_output_control_same_entry_repeat1, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_output_control_same_entry, 4),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_output_control_same_entry, 4),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_padding, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file_access_mode, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 5, .production_id = 17),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_output_control_multiple_file_entry_repeat1, 1),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_output_control_multiple_file_entry_repeat1, 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identification_division_author, 2, .production_id = 8),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__indexed_file_assign, 1),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_record_delimiter, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 4, .production_id = 14),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file, 7),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_record_delimiter, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indexed_file, 7),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_key, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 3, .production_id = 5),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 16),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_output_control_multiple_file_entry_repeat1, 3),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__input_output_control_multiple_file_entry_repeat1, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternate_record_key, 4),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__WITH_DUPLICATES, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_record_access_mode, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identification_division_installation, 2, .production_id = 9),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_division, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file_description, 15),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__every, 4),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ACCESS_MODE_IS, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__every, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 3, .production_id = 6),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__every, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 5, .production_id = 18),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 6, .production_id = 20),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_output_control_rerun_entry, 4),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identification_division_date_written, 2, .production_id = 10),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_output_control_entry, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file, 6),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__every, 5),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 4, .production_id = 15),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file_access_mode, 4),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_output_control_rerun_entry, 2),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file, 7),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_output_section, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_division, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_status, 4),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_merge_file, 4),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identification_division_date_compiled, 2, .production_id = 11),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_sequential_file, 8),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_status, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file, 8),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_status, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indexed_file, 8),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ACCESS_MODE_IS, 2),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 3),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_control_entry, 1),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 5, .production_id = 19),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_file_assign, 4),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 4),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 6, .production_id = 21),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 7, .production_id = 22),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_advancing, 2),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ACCESS_MODE_IS, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 4, .production_id = 16),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_section, 7, .production_id = 23),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identification_division_security, 2, .production_id = 12),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__RECORD_KEY_IS, 1),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__RELATIVE_KEY_IS, 1),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_sequential_file_type, 1),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 3, .production_id = 7),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_advancing, 1),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__END_OF, 1),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__RELATIVE_KEY_IS, 2),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_division, 3),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indexed_file_assign, 3),
  [1079] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_advancing, 3),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indexed_file_assign, 2),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indexed_file_organization, 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__END_OF, 2),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 5),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__RECORD_KEY_IS, 2),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__CODE_SET_IS, 1),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__RECORD_KEY_IS, 2),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indexed_file_access_mode, 2),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__RELATIVE_KEY_IS, 3),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indexed_file_reserve, 3),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__RECORD_KEY_IS, 3),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 6),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__RELATIVE_KEY_IS, 2),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__LINES_AT_TOP, 2),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__LINES_AT_BOTTOM, 2),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__CODE_SET_IS, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__LINES_AT_BOTTOM, 3),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__LINES_AT_TOP, 3),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1247] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_COBOL(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
