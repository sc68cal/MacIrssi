NSString *textEncodings[] = {
	@"Unicode (UTF16)",
	@"Unicode (UTF8)",
	@"Western (Mac OS Roman)",
	@"Japanese (Mac OS)",
	@"Tradidional Chinese (Mac OS)",
	@"Korean (Mac OS)",
	@"Arabic (Mac OS)",
	@"Hebrew (Mac OS)",
	@"Greek (Mac OS)",
	@"Cyrillic (Mac OS)",
	@"Simplified Chinese (Mac OS)",
	@"Central European (Mac OS)",
	@"Turkish (Mac OS)",
	@"Icelandic (Mac OS)",
	@"Western (ISO Latin 1) [default]",
	@"Central European (ISO Latin 2)",
	@"Western (ISO Latin 3)",
	@"Central European (ISO Latin 4)",
	@"Cyrillic (ISO 8859-5)",
	@"Greek (ISO 8859-7)",
	@"Turkish (ISO Latin 5)",
	@"Latin-US (DOS)",
	@"Western (Windows Latin 1)",
	@"Central European (Windows Latin 2)",
	@"Japanese (EUC)",
	@"Japanese (ISO 2022-JP)",
	@"Japanese (Shift JIS)",
	@"Western (NextStep)",
	@"Non-lossy ASCII"
};

int textEncodingTable[] = {
	kCFStringEncodingUnicode,
	kCFStringEncodingUTF8,
	kCFStringEncodingMacRoman,
	kCFStringEncodingMacJapanese,
	kCFStringEncodingMacChineseTrad,
	kCFStringEncodingMacKorean,
	kCFStringEncodingMacArabic,
    kCFStringEncodingMacHebrew,
    kCFStringEncodingMacGreek,
    kCFStringEncodingMacCyrillic,
	kCFStringEncodingMacChineseSimp,
	kCFStringEncodingMacCentralEurRoman,
	kCFStringEncodingMacTurkish,
	kCFStringEncodingMacIcelandic,
	kCFStringEncodingISOLatin1,
	kCFStringEncodingISOLatin2,
	kCFStringEncodingISOLatin3,
	kCFStringEncodingISOLatin4,
	kCFStringEncodingISOLatinCyrillic,
	kCFStringEncodingISOLatinGreek,
	kCFStringEncodingISOLatin5,
	kCFStringEncodingDOSLatinUS,
	kCFStringEncodingWindowsLatin1,
	kCFStringEncodingWindowsLatin2,
	kCFStringEncodingEUC_JP,
	kCFStringEncodingISO_2022_JP,
	kCFStringEncodingShiftJIS,
	kCFStringEncodingNextStepLatin,
	kCFStringEncodingNonLossyASCII
};
