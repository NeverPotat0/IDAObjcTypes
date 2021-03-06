#import "../Types.h"
#import "Types.h"

int32_t u_getIntPropertyValue(UChar32 c, UProperty which);
int32_t u_getIntPropertyMinValue(UProperty which);
int32_t u_getIntPropertyMaxValue(UProperty which);

void uset_applyIntPropertyValue(USet *set, UProperty prop, int32_t value, UErrorCode *ec);

double u_getNumericValue(UChar32 c);

#define U_NO_NUMERIC_VALUE ((double)-123456789.)

UBool u_hasBinaryProperty(UChar32 c, UProperty which);
UBool u_isUAlphabetic(UChar32 c);
UBool u_isULowercase(UChar32 c);
UBool u_isUUppercase(UChar32 c);
UBool u_isUWhiteSpace(UChar32 c);
UBool u_islower(UChar32 c);
UBool u_isupper(UChar32 c);
UBool u_istitle(UChar32 c);
UBool u_isdigit(UChar32 c);
UBool u_isalpha(UChar32 c);
UBool u_isalnum(UChar32 c);
UBool u_isxdigit(UChar32 c);
UBool u_ispunct(UChar32 c);
UBool u_isgraph(UChar32 c);
UBool u_isblank(UChar32 c);
UBool u_isdefined(UChar32 c);
UBool u_isspace(UChar32 c);
UBool u_isJavaSpaceChar(UChar32 c);
UBool u_isWhitespace(UChar32 c);
UBool u_iscntrl(UChar32 c);
UBool u_isISOControl(UChar32 c);
UBool u_isprint(UChar32 c);
UBool u_isbase(UChar32 c);
UBool u_isMirrored(UChar32 c);

UCharDirection u_charDirection(UChar32 c);

UChar32 u_charMirror(UChar32 c);
UChar32 u_getBidiPairedBracket(UChar32 c);
int8_t u_charType(UChar32 c);

#define U_GET_GC_MASK(c) U_MASK(u_charType(c))
typedef UBool UCharEnumTypeRange(const void *context, UChar32 start, UChar32 limit, UCharCategory type);
void u_enumCharTypes(UCharEnumTypeRange *enumRange, const void *context);
#if !UCONFIG_NO_NORMALIZATION
uint8_t u_getCombiningClass(UChar32 c);
#endif
int32_t u_charDigitValue(UChar32 c);
UBlockCode ublock_getCode(UChar32 c);
int32_t u_charName(UChar32 code, UCharNameChoice nameChoice, char *buffer, int32_t bufferLength, UErrorCode *pErrorCode);
#ifndef U_HIDE_DEPRECATED_API
int32_t u_getISOComment(UChar32 c, char *dest, int32_t destCapacity, UErrorCode *pErrorCode);
#endif
UChar32 u_charFromName(UCharNameChoice nameChoice, const char *name, UErrorCode *pErrorCode);
typedef UBool UEnumCharNamesFn(void *context, UChar32 code, UCharNameChoice nameChoice, const char *name, int32_t length);
void u_enumCharNames(UChar32 start, UChar32 limit, UEnumCharNamesFn *fn, void *context, UCharNameChoice nameChoice, UErrorCode *pErrorCode);
const char* u_getPropertyName(UProperty property, UPropertyNameChoice nameChoice);
UProperty u_getPropertyEnum(const char* alias);
const char* u_getPropertyValueName(UProperty property, int32_t value, UPropertyNameChoice nameChoice);
int32_t u_getPropertyValueEnum(UProperty property, const char* alias);
UBool u_isIDStart(UChar32 c);
UBool u_isIDPart(UChar32 c);
UBool u_isIDIgnorable(UChar32 c);
UBool u_isJavaIDStart(UChar32 c);
UBool u_isJavaIDPart(UChar32 c);
UChar32 u_tolower(UChar32 c);
UChar32 u_toupper(UChar32 c);
UChar32 u_totitle(UChar32 c);
UChar32 u_foldCase(UChar32 c, uint32_t options);
int32_t u_digit(UChar32 ch, int8_t radix);
UChar32 u_forDigit(int32_t digit, int8_t radix);
void u_charAge(UChar32 c, UVersionInfo versionArray);
void u_getUnicodeVersion(UVersionInfo versionArray);
#if !UCONFIG_NO_NORMALIZATION
int32_t u_getFC_NFKC_Closure(UChar32 c, UChar *dest, int32_t destCapacity, UErrorCode *pErrorCode);
#endif