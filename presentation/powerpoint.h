/*
 * powerpoint.h
 */

#import <AppKit/AppKit.h>
#import <ScriptingBridge/ScriptingBridge.h>


@class powerpointBaseObject, powerpointBaseApplication, powerpointBaseDocument, powerpointBasicWindow, powerpointPrintSettings, powerpointCommandBarControl, powerpointCommandBarButton, powerpointCommandBarCombobox, powerpointCommandBarPopup, powerpointCommandBar, powerpointDocumentProperty, powerpointCustomDocumentProperty, powerpointWebPageFont, powerpointActionSetting, powerpointAddIn, powerpointAnimationBehavior, powerpointAnimationPoint, powerpointAnimationSettings, powerpointApplication, powerpointAutocorrectEntry, powerpointAutocorrect, powerpointBroadcast, powerpointBulletFormat, powerpointColorScheme, powerpointColorsEffect, powerpointCommandEffect, powerpointCustomLayout, powerpointDefaultWebOptions, powerpointDesign, powerpointDocumentWindow, powerpointEffectInformation, powerpointEffectParameters, powerpointEffect, powerpointFilterEffect, powerpointFirstLetterException, powerpointFont, powerpointHeaderOrFooter, powerpointHeadersAndFooters, powerpointHyperlink, powerpointMaster, powerpointMotionEffect, powerpointNamedSlideShow, powerpointPageSetup, powerpointPane, powerpointParagraphFormat, powerpointPlaySettings, powerpointPlayer, powerpointPreferences, powerpointPresentation, powerpointPresenterTool, powerpointPresenterViewWindow, powerpointPrintOptions, powerpointPrintRange, powerpointPropertyEffect, powerpointRotatingEffect, powerpointRulerLevel, powerpointRuler, powerpointSaveAsMovieSettings, powerpointScaleEffect, powerpointSectionProperties, powerpointSelection, powerpointSequence, powerpointSetEffect, powerpointSlideRange, powerpointSlideShowSettings, powerpointSlideShowTransition, powerpointSlideShowView, powerpointSlideShowWindow, powerpointSlide, powerpointSoundEffect, powerpointTabStop, powerpointTextStyleLevel, powerpointTextStyle, powerpointTimeline, powerpointTiming, powerpointTwoInitialCapsException, powerpointView, powerpointWebOptions, powerpointAdjustment, powerpointCalloutFormat, powerpointConnectorFormat, powerpointFillFormat, powerpointGlowFormat, powerpointGradientStop, powerpointLineFormat, powerpointLinkFormat, powerpointOfficeTheme, powerpointPictureFormat, powerpointPlaceholderFormat, powerpointReflectionFormat, powerpointShadowFormat, powerpointShapeRange, powerpointShape, powerpointCallout, powerpointComment, powerpointConnector, powerpointLineShape, powerpointMediaObject, powerpointMedia2Object, powerpointPicture, powerpointPlaceHolder, powerpointShapeTable, powerpointSoftEdgeFormat, powerpointTextBox, powerpointTextColumn, powerpointTextFrame, powerpointThemeColorScheme, powerpointThemeColor, powerpointThemeEffectScheme, powerpointThemeFontScheme, powerpointThemeFont, powerpointMajorThemeFont, powerpointMinorThemeFont, powerpointThreeDFormat, powerpointWordArtFormat, powerpointTextRange, powerpointCharacter, powerpointLine, powerpointParagraph, powerpointSentence, powerpointTextFlow, powerpointWord, powerpointCell, powerpointColumn, powerpointRow, powerpointTable;

enum powerpointSavo {
	powerpointSavoYes = 'yes ' /* Save objects now */,
	powerpointSavoNo = 'no  ' /* Do not save objects */,
	powerpointSavoAsk = 'ask ' /* Ask the user whether to save */
};
typedef enum powerpointSavo powerpointSavo;

enum powerpointKfrm {
	powerpointKfrmIndex = 'indx' /* keyform designating indexed access */,
	powerpointKfrmNamed = 'name' /* keyform designating named access */,
	powerpointKfrmId = 'ID  ' /* keyform designating access by unique identifier */
};
typedef enum powerpointKfrm powerpointKfrm;

enum powerpointPPfd {
	powerpointPPfdMacintoshPath = 'utxt' /* Maintosh path i.e. Foo:bar.txt */,
	powerpointPPfdPosixPath = 'file' /* Posix path i.e. file:://foo/bar.txt */
};
typedef enum powerpointPPfd powerpointPPfd;

enum powerpointPPff {
	powerpointPPffSaveAsPresentation = '\000\314\000\001',
	powerpointPPffSaveAsTemplate = '\000\314\000\005',
	powerpointPPffSaveAsRTF = '\000\314\000\006',
	powerpointPPffSaveAsShow = '\000\314\000\007',
	powerpointPPffSaveAsDefault = '\000\314\000\012',
	powerpointPPffSaveAsHTML = '\000\314\000\013',
	powerpointPPffSaveAsMovie = '\000\314\000\014',
	powerpointPPffSaveAsPackage = '\000\314\000\015',
	powerpointPPffSaveAsPDF = '\000\314\000\016',
	powerpointPPffSaveAsOpenXMLPresentation = '\000\314\000\017',
	powerpointPPffSaveAsOpenXMLPresentationMacroEnabled = '\000\314\000\020',
	powerpointPPffSaveAsOpenXMLShow = '\000\314\000\021',
	powerpointPPffSaveAsOpenXMLShowMacroEnabled = '\000\314\000\022',
	powerpointPPffSaveAsOpenXMLTemplate = '\000\314\000\023',
	powerpointPPffSaveAsOpenXMLTemplateMacroEnabled = '\000\314\000\024',
	powerpointPPffSaveAsOpenXMLTheme = '\000\314\000\025',
	powerpointPPffSaveAsGIF = '\000\314\000\026',
	powerpointPPffSaveAsJPG = '\000\314\000\027',
	powerpointPPffSaveAsPNG = '\000\314\000\030',
	powerpointPPffSaveAsBMP = '\000\314\000\031',
	powerpointPPffSaveAsTIF = '\000\314\000\032'
};
typedef enum powerpointPPff powerpointPPff;

enum powerpointMlDs {
	powerpointMlDsLineDashStyleUnset = '\000\222\377\376',
	powerpointMlDsLineDashStyleSolid = '\000\223\000\001',
	powerpointMlDsLineDashStyleSquareDot = '\000\223\000\002',
	powerpointMlDsLineDashStyleRoundDot = '\000\223\000\003',
	powerpointMlDsLineDashStyleDash = '\000\223\000\004',
	powerpointMlDsLineDashStyleDashDot = '\000\223\000\005',
	powerpointMlDsLineDashStyleDashDotDot = '\000\223\000\006',
	powerpointMlDsLineDashStyleLongDash = '\000\223\000\007',
	powerpointMlDsLineDashStyleLongDashDot = '\000\223\000\010',
	powerpointMlDsLineDashStyleLongDashDotDot = '\000\223\000\011',
	powerpointMlDsLineDashStyleSystemDash = '\000\223\000\012',
	powerpointMlDsLineDashStyleSystemDot = '\000\223\000\013',
	powerpointMlDsLineDashStyleSystemDashDot = '\000\223\000\014'
};
typedef enum powerpointMlDs powerpointMlDs;

enum powerpointMLnS {
	powerpointMLnSLineStyleUnset = '\000\224\377\376',
	powerpointMLnSSingleLine = '\000\225\000\001',
	powerpointMLnSThinThinLine = '\000\225\000\002',
	powerpointMLnSThinThickLine = '\000\225\000\003',
	powerpointMLnSThickThinLine = '\000\225\000\004',
	powerpointMLnSThickBetweenThinLine = '\000\225\000\005'
};
typedef enum powerpointMLnS powerpointMLnS;

enum powerpointMAhS {
	powerpointMAhSArrowheadStyleUnset = '\000\221\377\376',
	powerpointMAhSNoArrowhead = '\000\222\000\001',
	powerpointMAhSTriangleArrowhead = '\000\222\000\002',
	powerpointMAhSOpen_arrowhead = '\000\222\000\003',
	powerpointMAhSStealthArrowhead = '\000\222\000\004',
	powerpointMAhSDiamondArrowhead = '\000\222\000\005',
	powerpointMAhSOvalArrowhead = '\000\222\000\006'
};
typedef enum powerpointMAhS powerpointMAhS;

enum powerpointMAhW {
	powerpointMAhWArrowheadWidthUnset = '\000\220\377\376',
	powerpointMAhWNarrowWidthArrowhead = '\000\221\000\001',
	powerpointMAhWMediumWidthArrowhead = '\000\221\000\002',
	powerpointMAhWWideArrowhead = '\000\221\000\003'
};
typedef enum powerpointMAhW powerpointMAhW;

enum powerpointMAhL {
	powerpointMAhLArrowheadLengthUnset = '\000\223\377\376',
	powerpointMAhLShortArrowhead = '\000\224\000\001',
	powerpointMAhLMediumArrowhead = '\000\224\000\002',
	powerpointMAhLLongArrowhead = '\000\224\000\003'
};
typedef enum powerpointMAhL powerpointMAhL;

enum powerpointMFdT {
	powerpointMFdTFillUnset = '\000c\377\376',
	powerpointMFdTFillSolid = '\000d\000\001',
	powerpointMFdTFillPatterned = '\000d\000\002',
	powerpointMFdTFillGradient = '\000d\000\003',
	powerpointMFdTFillTextured = '\000d\000\004',
	powerpointMFdTFillBackground = '\000d\000\005',
	powerpointMFdTFillPicture = '\000d\000\006'
};
typedef enum powerpointMFdT powerpointMFdT;

enum powerpointMGdS {
	powerpointMGdSGradientUnset = '\000d\377\376',
	powerpointMGdSHorizontalGradient = '\000e\000\001',
	powerpointMGdSVerticalGradient = '\000e\000\002',
	powerpointMGdSDiagonalUpGradient = '\000e\000\003',
	powerpointMGdSDiagonalDownGradient = '\000e\000\004',
	powerpointMGdSFromCornerGradient = '\000e\000\005',
	powerpointMGdSFromTitleGradient = '\000e\000\006',
	powerpointMGdSFromCenterGradient = '\000e\000\007'
};
typedef enum powerpointMGdS powerpointMGdS;

enum powerpointMGCt {
	powerpointMGCtGradientTypeUnset = '\003\357\377\376',
	powerpointMGCtSingleShadeGradientType = '\003\360\000\001',
	powerpointMGCtTwoColorsGradientType = '\003\360\000\002',
	powerpointMGCtPresetColorsGradientType = '\003\360\000\003',
	powerpointMGCtMultiColorsGradientType = '\003\360\000\004'
};
typedef enum powerpointMGCt powerpointMGCt;

enum powerpointMxtT {
	powerpointMxtTTextureTypeTextureTypeUnset = '\003\360\377\376',
	powerpointMxtTTextureTypePresetTexture = '\003\361\000\001',
	powerpointMxtTTextureTypeUserDefinedTexture = '\003\361\000\002'
};
typedef enum powerpointMxtT powerpointMxtT;

enum powerpointMPzT {
	powerpointMPzTPresetTextureUnset = '\000e\377\376',
	powerpointMPzTTexturePapyrus = '\000f\000\001',
	powerpointMPzTTextureCanvas = '\000f\000\002',
	powerpointMPzTTextureDenim = '\000f\000\003',
	powerpointMPzTTextureWovenMat = '\000f\000\004',
	powerpointMPzTTextureWaterDroplets = '\000f\000\005',
	powerpointMPzTTexturePaperBag = '\000f\000\006',
	powerpointMPzTTextureFishFossil = '\000f\000\007',
	powerpointMPzTTextureSand = '\000f\000\010',
	powerpointMPzTTextureGreenMarble = '\000f\000\011',
	powerpointMPzTTextureWhiteMarble = '\000f\000\012',
	powerpointMPzTTextureBrownMarble = '\000f\000\013',
	powerpointMPzTTextureGranite = '\000f\000\014',
	powerpointMPzTTextureNewsprint = '\000f\000\015',
	powerpointMPzTTextureRecycledPaper = '\000f\000\016',
	powerpointMPzTTextureParchment = '\000f\000\017',
	powerpointMPzTTextureStationery = '\000f\000\020',
	powerpointMPzTTextureBlueTissuePaper = '\000f\000\021',
	powerpointMPzTTexturePinkTissuePaper = '\000f\000\022',
	powerpointMPzTTexturePurpleMesh = '\000f\000\023',
	powerpointMPzTTextureBouquet = '\000f\000\024',
	powerpointMPzTTextureCork = '\000f\000\025',
	powerpointMPzTTextureWalnut = '\000f\000\026',
	powerpointMPzTTextureOak = '\000f\000\027',
	powerpointMPzTTextureMediumWood = '\000f\000\030'
};
typedef enum powerpointMPzT powerpointMPzT;

enum powerpointPpTy {
	powerpointPpTyPatternUnset = '\000f\377\376',
	powerpointPpTyFivePercentPattern = '\000g\000\001',
	powerpointPpTyTenPercentPattern = '\000g\000\002',
	powerpointPpTyTwentyPercentPattern = '\000g\000\003',
	powerpointPpTyTwentyFivePercentPattern = '\000g\000\004',
	powerpointPpTyThirtyPercentPattern = '\000g\000\005',
	powerpointPpTyFortyPercentPattern = '\000g\000\006',
	powerpointPpTyFiftyPercentPattern = '\000g\000\007',
	powerpointPpTySixtyPercentPattern = '\000g\000\010',
	powerpointPpTySeventyPercentPattern = '\000g\000\011',
	powerpointPpTySeventyFivePercentPattern = '\000g\000\012',
	powerpointPpTyEightyPercentPattern = '\000g\000\013',
	powerpointPpTyNinetyPercentPattern = '\000g\000\014',
	powerpointPpTyDarkHorizontalPattern = '\000g\000\015',
	powerpointPpTyDarkVerticalPattern = '\000g\000\016',
	powerpointPpTyDarkDownwardDiagonalPattern = '\000g\000\017',
	powerpointPpTyDarkUpwardDiagonalPattern = '\000g\000\020',
	powerpointPpTySmallCheckerBoardPattern = '\000g\000\021',
	powerpointPpTyTrellisPattern = '\000g\000\022',
	powerpointPpTyLightHorizontalPattern = '\000g\000\023',
	powerpointPpTyLightVerticalPattern = '\000g\000\024',
	powerpointPpTyLightDownwardDiagonalPattern = '\000g\000\025',
	powerpointPpTyLightUpwardDiagonalPattern = '\000g\000\026',
	powerpointPpTySmallGridPattern = '\000g\000\027',
	powerpointPpTyDottedDiamondPattern = '\000g\000\030',
	powerpointPpTyWideDownwardDiagonal = '\000g\000\031',
	powerpointPpTyWideUpwardDiagonalPattern = '\000g\000\032',
	powerpointPpTyDashedUpwardDiagonalPattern = '\000g\000\033',
	powerpointPpTyDashedDownwardDiagonalPattern = '\000g\000\034',
	powerpointPpTyNarrowVerticalPattern = '\000g\000\035',
	powerpointPpTyNarrowHorizontalPattern = '\000g\000\036',
	powerpointPpTyDashedVerticalPattern = '\000g\000\037',
	powerpointPpTyDashedHorizontalPattern = '\000g\000 ',
	powerpointPpTyLargeConfettiPattern = '\000g\000!',
	powerpointPpTyLargeGridPattern = '\000g\000\"',
	powerpointPpTyHorizontalBrickPattern = '\000g\000#',
	powerpointPpTyLargeCheckerBoardPattern = '\000g\000$',
	powerpointPpTySmallConfettiPattern = '\000g\000%',
	powerpointPpTyZigZagPattern = '\000g\000&',
	powerpointPpTySolidDiamondPattern = '\000g\000\'',
	powerpointPpTyDiagonalBrickPattern = '\000g\000(',
	powerpointPpTyOutlinedDiamondPattern = '\000g\000)',
	powerpointPpTyPlaidPattern = '\000g\000*',
	powerpointPpTySpherePattern = '\000g\000+',
	powerpointPpTyWeavePattern = '\000g\000,',
	powerpointPpTyDottedGridPattern = '\000g\000-',
	powerpointPpTyDivotPattern = '\000g\000.',
	powerpointPpTyShinglePattern = '\000g\000/',
	powerpointPpTyWavePattern = '\000g\0000',
	powerpointPpTyHorizontalPattern = '\000g\0001',
	powerpointPpTyVerticalPattern = '\000g\0002',
	powerpointPpTyCrossPattern = '\000g\0003',
	powerpointPpTyDownwardDiagonalPattern = '\000g\0004',
	powerpointPpTyUpwardDiagonalPattern = '\000g\0005',
	powerpointPpTyDiagonalCrossPattern = '\000g\0005'
};
typedef enum powerpointPpTy powerpointPpTy;

enum powerpointMPGb {
	powerpointMPGbPresetGradientUnset = '\000g\377\376',
	powerpointMPGbGradientEarlySunset = '\000h\000\001',
	powerpointMPGbGradientLateSunset = '\000h\000\002',
	powerpointMPGbGradientNightfall = '\000h\000\003',
	powerpointMPGbGradientDaybreak = '\000h\000\004',
	powerpointMPGbGradientHorizon = '\000h\000\005',
	powerpointMPGbGradientDesert = '\000h\000\006',
	powerpointMPGbGradientOcean = '\000h\000\007',
	powerpointMPGbGradientCalmWater = '\000h\000\010',
	powerpointMPGbGradientFire = '\000h\000\011',
	powerpointMPGbGradientFog = '\000h\000\012',
	powerpointMPGbGradientMoss = '\000h\000\013',
	powerpointMPGbGradientPeacock = '\000h\000\014',
	powerpointMPGbGradientWheat = '\000h\000\015',
	powerpointMPGbGradientParchment = '\000h\000\016',
	powerpointMPGbGradientMahogany = '\000h\000\017',
	powerpointMPGbGradientRainbow = '\000h\000\020',
	powerpointMPGbGradientRainbow2 = '\000h\000\021',
	powerpointMPGbGradientGold = '\000h\000\022',
	powerpointMPGbGradientGold2 = '\000h\000\023',
	powerpointMPGbGradientBrass = '\000h\000\024',
	powerpointMPGbGradientChrome = '\000h\000\025',
	powerpointMPGbGradientChrome2 = '\000h\000\026',
	powerpointMPGbGradientSilver = '\000h\000\027',
	powerpointMPGbGradientSapphire = '\000h\000\030'
};
typedef enum powerpointMPGb powerpointMPGb;

enum powerpointMSdT {
	powerpointMSdTShadowUnset = '\003_\377\376',
	powerpointMSdTShadow1 = '\003`\000\001',
	powerpointMSdTShadow2 = '\003`\000\002',
	powerpointMSdTShadow3 = '\003`\000\003',
	powerpointMSdTShadow4 = '\003`\000\004',
	powerpointMSdTShadow5 = '\003`\000\005',
	powerpointMSdTShadow6 = '\003`\000\006',
	powerpointMSdTShadow7 = '\003`\000\007',
	powerpointMSdTShadow8 = '\003`\000\010',
	powerpointMSdTShadow9 = '\003`\000\011',
	powerpointMSdTShadow10 = '\003`\000\012',
	powerpointMSdTShadow11 = '\003`\000\013',
	powerpointMSdTShadow12 = '\003`\000\014',
	powerpointMSdTShadow13 = '\003`\000\015',
	powerpointMSdTShadow14 = '\003`\000\016',
	powerpointMSdTShadow15 = '\003`\000\017',
	powerpointMSdTShadow16 = '\003`\000\020',
	powerpointMSdTShadow17 = '\003`\000\021',
	powerpointMSdTShadow18 = '\003`\000\022',
	powerpointMSdTShadow19 = '\003`\000\023',
	powerpointMSdTShadow20 = '\003`\000\024',
	powerpointMSdTShadow21 = '\003`\000\025',
	powerpointMSdTShadow22 = '\003`\000\026',
	powerpointMSdTShadow23 = '\003`\000\027',
	powerpointMSdTShadow24 = '\003`\000\030',
	powerpointMSdTShadow25 = '\003`\000\031',
	powerpointMSdTShadow26 = '\003`\000\032',
	powerpointMSdTShadow27 = '\003`\000\033',
	powerpointMSdTShadow28 = '\003`\000\034',
	powerpointMSdTShadow29 = '\003`\000\035',
	powerpointMSdTShadow30 = '\003`\000\036',
	powerpointMSdTShadow31 = '\003`\000\037',
	powerpointMSdTShadow32 = '\003`\000 ',
	powerpointMSdTShadow33 = '\003`\000!',
	powerpointMSdTShadow34 = '\003`\000\"',
	powerpointMSdTShadow35 = '\003`\000#',
	powerpointMSdTShadow36 = '\003`\000$',
	powerpointMSdTShadow37 = '\003`\000%',
	powerpointMSdTShadow38 = '\003`\000&',
	powerpointMSdTShadow39 = '\003`\000\'',
	powerpointMSdTShadow40 = '\003`\000(',
	powerpointMSdTShadow41 = '\003`\000)',
	powerpointMSdTShadow42 = '\003`\000*',
	powerpointMSdTShadow43 = '\003`\000+'
};
typedef enum powerpointMSdT powerpointMSdT;

enum powerpointMPXF {
	powerpointMPXFWordartFormatUnset = '\003\361\377\376',
	powerpointMPXFWordartFormat1 = '\003\362\000\000',
	powerpointMPXFWordartFormat2 = '\003\362\000\001',
	powerpointMPXFWordartFormat3 = '\003\362\000\002',
	powerpointMPXFWordartFormat4 = '\003\362\000\003',
	powerpointMPXFWordartFormat5 = '\003\362\000\004',
	powerpointMPXFWordartFormat6 = '\003\362\000\005',
	powerpointMPXFWordartFormat7 = '\003\362\000\006',
	powerpointMPXFWordartFormat8 = '\003\362\000\007',
	powerpointMPXFWordartFormat9 = '\003\362\000\010',
	powerpointMPXFWordartFormat10 = '\003\362\000\011',
	powerpointMPXFWordartFormat11 = '\003\362\000\012',
	powerpointMPXFWordartFormat12 = '\003\362\000\013',
	powerpointMPXFWordartFormat13 = '\003\362\000\014',
	powerpointMPXFWordartFormat14 = '\003\362\000\015',
	powerpointMPXFWordartFormat15 = '\003\362\000\016',
	powerpointMPXFWordartFormat16 = '\003\362\000\017',
	powerpointMPXFWordartFormat17 = '\003\362\000\020',
	powerpointMPXFWordartFormat18 = '\003\362\000\021',
	powerpointMPXFWordartFormat19 = '\003\362\000\022',
	powerpointMPXFWordartFormat20 = '\003\362\000\023',
	powerpointMPXFWordartFormat21 = '\003\362\000\024',
	powerpointMPXFWordartFormat22 = '\003\362\000\025',
	powerpointMPXFWordartFormat23 = '\003\362\000\026',
	powerpointMPXFWordartFormat24 = '\003\362\000\027',
	powerpointMPXFWordartFormat25 = '\003\362\000\030',
	powerpointMPXFWordartFormat26 = '\003\362\000\031',
	powerpointMPXFWordartFormat27 = '\003\362\000\032',
	powerpointMPXFWordartFormat28 = '\003\362\000\033',
	powerpointMPXFWordartFormat29 = '\003\362\000\034',
	powerpointMPXFWordartFormat30 = '\003\362\000\035'
};
typedef enum powerpointMPXF powerpointMPXF;

enum powerpointMPTs {
	powerpointMPTsTextEffectShapeUnset = '\000\227\377\376',
	powerpointMPTsPlainText = '\000\230\000\001',
	powerpointMPTsStop = '\000\230\000\002',
	powerpointMPTsTriangleUp = '\000\230\000\003',
	powerpointMPTsTriangleDown = '\000\230\000\004',
	powerpointMPTsChevronUp = '\000\230\000\005',
	powerpointMPTsChevronDown = '\000\230\000\006',
	powerpointMPTsRingInside = '\000\230\000\007',
	powerpointMPTsRingOutside = '\000\230\000\010',
	powerpointMPTsArchUpCurve = '\000\230\000\011',
	powerpointMPTsArchDownCurve = '\000\230\000\012',
	powerpointMPTsCircleCurve = '\000\230\000\013',
	powerpointMPTsButtonCurve = '\000\230\000\014',
	powerpointMPTsArchUpPour = '\000\230\000\015',
	powerpointMPTsArchDownPour = '\000\230\000\016',
	powerpointMPTsCirclePour = '\000\230\000\017',
	powerpointMPTsButtonPour = '\000\230\000\020',
	powerpointMPTsCurveUp = '\000\230\000\021',
	powerpointMPTsCurveDown = '\000\230\000\022',
	powerpointMPTsCanUp = '\000\230\000\023',
	powerpointMPTsCanDown = '\000\230\000\024',
	powerpointMPTsWave1 = '\000\230\000\025',
	powerpointMPTsWave2 = '\000\230\000\026',
	powerpointMPTsDoubleWave1 = '\000\230\000\027',
	powerpointMPTsDoubleWave2 = '\000\230\000\030',
	powerpointMPTsInflate = '\000\230\000\031',
	powerpointMPTsDeflate = '\000\230\000\032',
	powerpointMPTsInflateBottom = '\000\230\000\033',
	powerpointMPTsDeflateBottom = '\000\230\000\034',
	powerpointMPTsInflateTop = '\000\230\000\035',
	powerpointMPTsDeflateTop = '\000\230\000\036',
	powerpointMPTsDeflateInflate = '\000\230\000\037',
	powerpointMPTsDeflateInflateDeflate = '\000\230\000 ',
	powerpointMPTsFadeRight = '\000\230\000!',
	powerpointMPTsFadeLeft = '\000\230\000\"',
	powerpointMPTsFadeUp = '\000\230\000#',
	powerpointMPTsFadeDown = '\000\230\000$',
	powerpointMPTsSlantUp = '\000\230\000%',
	powerpointMPTsSlantDown = '\000\230\000&',
	powerpointMPTsCascadeUp = '\000\230\000\'',
	powerpointMPTsCascadeDown = '\000\230\000('
};
typedef enum powerpointMPTs powerpointMPTs;

enum powerpointMTxA {
	powerpointMTxATextEffectAlignmentUnset = '\000\226\377\376',
	powerpointMTxALeftTextEffectAlignment = '\000\227\000\001',
	powerpointMTxACenteredTextEffectAlignment = '\000\227\000\002',
	powerpointMTxARightTextEffectAlignment = '\000\227\000\003',
	powerpointMTxAJustifyTextEffectAlignment = '\000\227\000\004',
	powerpointMTxAWordJustifyTextEffectAlignment = '\000\227\000\005',
	powerpointMTxAStretchJustifyTextEffectAlignment = '\000\227\000\006'
};
typedef enum powerpointMTxA powerpointMTxA;

enum powerpointMPLd {
	powerpointMPLdPresetLightingDirectionUnset = '\000\233\377\376',
	powerpointMPLdLightFromTopLeft = '\000\234\000\001',
	powerpointMPLdLightFromTop = '\000\234\000\002',
	powerpointMPLdLightFromTopRight = '\000\234\000\003',
	powerpointMPLdLightFromLeft = '\000\234\000\004',
	powerpointMPLdLightFromNone = '\000\234\000\005',
	powerpointMPLdLightFromRight = '\000\234\000\006',
	powerpointMPLdLightFromBottomLeft = '\000\234\000\007',
	powerpointMPLdLightFromBottom = '\000\234\000\010',
	powerpointMPLdLightFromBottomRight = '\000\234\000\011'
};
typedef enum powerpointMPLd powerpointMPLd;

enum powerpointMlSf {
	powerpointMlSfLightingSoftnessUnset = '\000\234\377\376',
	powerpointMlSfLightingDim = '\000\235\000\001',
	powerpointMlSfLightingNormal = '\000\235\000\002',
	powerpointMlSfLightingBright = '\000\235\000\003'
};
typedef enum powerpointMlSf powerpointMlSf;

enum powerpointMPMt {
	powerpointMPMtPresetMaterialUnset = '\000\235\377\376',
	powerpointMPMtMatte = '\000\236\000\001',
	powerpointMPMtPlastic = '\000\236\000\002',
	powerpointMPMtMetal = '\000\236\000\003',
	powerpointMPMtWireframe = '\000\236\000\004',
	powerpointMPMtMatte2 = '\000\236\000\005',
	powerpointMPMtPlastic2 = '\000\236\000\006',
	powerpointMPMtMetal2 = '\000\236\000\007',
	powerpointMPMtWarmMatte = '\000\236\000\010',
	powerpointMPMtTranslucentPowder = '\000\236\000\011',
	powerpointMPMtPowder = '\000\236\000\012',
	powerpointMPMtDarkEdge = '\000\236\000\013',
	powerpointMPMtSoftEdge = '\000\236\000\014',
	powerpointMPMtMaterialClear = '\000\236\000\015',
	powerpointMPMtFlat = '\000\236\000\016',
	powerpointMPMtSoftMetal = '\000\236\000\017'
};
typedef enum powerpointMPMt powerpointMPMt;

enum powerpointMExD {
	powerpointMExDPresetExtrusionDirectionUnset = '\000\231\377\376',
	powerpointMExDExtrudeBottomRight = '\000\232\000\001',
	powerpointMExDExtrudeBottom = '\000\232\000\002',
	powerpointMExDExtrudeBottomLeft = '\000\232\000\003',
	powerpointMExDExtrudeRight = '\000\232\000\004',
	powerpointMExDExtrudeNone = '\000\232\000\005',
	powerpointMExDExtrudeLeft = '\000\232\000\006',
	powerpointMExDExtrudeTopRight = '\000\232\000\007',
	powerpointMExDExtrudeTop = '\000\232\000\010',
	powerpointMExDExtrudeTopLeft = '\000\232\000\011'
};
typedef enum powerpointMExD powerpointMExD;

enum powerpointM3DF {
	powerpointM3DFPresetThreeDFormatUnset = '\000\230\377\376',
	powerpointM3DFFormat1 = '\000\231\000\001',
	powerpointM3DFFormat2 = '\000\231\000\002',
	powerpointM3DFFormat3 = '\000\231\000\003',
	powerpointM3DFFormat4 = '\000\231\000\004',
	powerpointM3DFFormat5 = '\000\231\000\005',
	powerpointM3DFFormat6 = '\000\231\000\006',
	powerpointM3DFFormat7 = '\000\231\000\007',
	powerpointM3DFFormat8 = '\000\231\000\010',
	powerpointM3DFFormat9 = '\000\231\000\011',
	powerpointM3DFFormat10 = '\000\231\000\012',
	powerpointM3DFFormat11 = '\000\231\000\013',
	powerpointM3DFFormat12 = '\000\231\000\014',
	powerpointM3DFFormat13 = '\000\231\000\015',
	powerpointM3DFFormat14 = '\000\231\000\016',
	powerpointM3DFFormat15 = '\000\231\000\017',
	powerpointM3DFFormat16 = '\000\231\000\020',
	powerpointM3DFFormat17 = '\000\231\000\021',
	powerpointM3DFFormat18 = '\000\231\000\022',
	powerpointM3DFFormat19 = '\000\231\000\023',
	powerpointM3DFFormat20 = '\000\231\000\024'
};
typedef enum powerpointM3DF powerpointM3DF;

enum powerpointMExC {
	powerpointMExCExtrusionColorUnset = '\000\232\377\376',
	powerpointMExCExtrusionColorAutomatic = '\000\233\000\001',
	powerpointMExCExtrusionColorCustom = '\000\233\000\002'
};
typedef enum powerpointMExC powerpointMExC;

enum powerpointMCtT {
	powerpointMCtTConnectorTypeUnset = '\000h\377\376',
	powerpointMCtTStraight = '\000i\000\001',
	powerpointMCtTElbow = '\000i\000\002',
	powerpointMCtTCurve = '\000i\000\003'
};
typedef enum powerpointMCtT powerpointMCtT;

enum powerpointMHzA {
	powerpointMHzAHorizontalAnchorUnset = '\000\236\377\376',
	powerpointMHzAHorizontalAnchorNone = '\000\237\000\001',
	powerpointMHzAHorizontalAnchorCenter = '\000\237\000\002'
};
typedef enum powerpointMHzA powerpointMHzA;

enum powerpointMVtA {
	powerpointMVtAVerticalAnchorUnset = '\000\237\377\376',
	powerpointMVtAAnchorTop = '\000\240\000\001',
	powerpointMVtAAnchorTopBaseline = '\000\240\000\002',
	powerpointMVtAAnchorMiddle = '\000\240\000\003',
	powerpointMVtAAnchorBottom = '\000\240\000\004',
	powerpointMVtAAnchorBottomBaseline = '\000\240\000\005'
};
typedef enum powerpointMVtA powerpointMVtA;

enum powerpointMAsT {
	powerpointMAsTAutoshapeShapeTypeUnset = '\000i\377\376',
	powerpointMAsTAutoshapeRectangle = '\000j\000\001',
	powerpointMAsTAutoshapeParallelogram = '\000j\000\002',
	powerpointMAsTAutoshapeTrapezoid = '\000j\000\003',
	powerpointMAsTAutoshapeDiamond = '\000j\000\004',
	powerpointMAsTAutoshapeRoundedRectangle = '\000j\000\005',
	powerpointMAsTAutoshapeOctagon = '\000j\000\006',
	powerpointMAsTAutoshapeIsoscelesTriangle = '\000j\000\007',
	powerpointMAsTAutoshapeRightTriangle = '\000j\000\010',
	powerpointMAsTAutoshapeOval = '\000j\000\011',
	powerpointMAsTAutoshapeHexagon = '\000j\000\012',
	powerpointMAsTAutoshapeCross = '\000j\000\013',
	powerpointMAsTAutoshapeRegularPentagon = '\000j\000\014',
	powerpointMAsTAutoshapeCan = '\000j\000\015',
	powerpointMAsTAutoshapeCube = '\000j\000\016',
	powerpointMAsTAutoshapeBevel = '\000j\000\017',
	powerpointMAsTAutoshapeFoldedCorner = '\000j\000\020',
	powerpointMAsTAutoshapeSmileyFace = '\000j\000\021',
	powerpointMAsTAutoshapeDonut = '\000j\000\022',
	powerpointMAsTAutoshapeNoSymbol = '\000j\000\023',
	powerpointMAsTAutoshapeBlockArc = '\000j\000\024',
	powerpointMAsTAutoshapeHeart = '\000j\000\025',
	powerpointMAsTAutoshapeLightningBolt = '\000j\000\026',
	powerpointMAsTAutoshapeSun = '\000j\000\027',
	powerpointMAsTAutoshapeMoon = '\000j\000\030',
	powerpointMAsTAutoshapeArc = '\000j\000\031',
	powerpointMAsTAutoshapeDoubleBracket = '\000j\000\032',
	powerpointMAsTAutoshapeDoubleBrace = '\000j\000\033',
	powerpointMAsTAutoshapePlaque = '\000j\000\034',
	powerpointMAsTAutoshapeLeftBracket = '\000j\000\035',
	powerpointMAsTAutoshapeRightBracket = '\000j\000\036',
	powerpointMAsTAutoshapeLeftBrace = '\000j\000\037',
	powerpointMAsTAutoshapeRightBrace = '\000j\000 ',
	powerpointMAsTAutoshapeRightArrow = '\000j\000!',
	powerpointMAsTAutoshapeLeftArrow = '\000j\000\"',
	powerpointMAsTAutoshapeUpArrow = '\000j\000#',
	powerpointMAsTAutoshapeDownArrow = '\000j\000$',
	powerpointMAsTAutoshapeLeftRightArrow = '\000j\000%',
	powerpointMAsTAutoshapeUpDownArrow = '\000j\000&',
	powerpointMAsTAutoshapeQuadArrow = '\000j\000\'',
	powerpointMAsTAutoshapeLeftRightUpArrow = '\000j\000(',
	powerpointMAsTAutoshapeBentArrow = '\000j\000)',
	powerpointMAsTAutoshapeUTurnArrow = '\000j\000*',
	powerpointMAsTAutoshapeLeftUpArrow = '\000j\000+',
	powerpointMAsTAutoshapeBentUpArrow = '\000j\000,',
	powerpointMAsTAutoshapeCurvedRightArrow = '\000j\000-',
	powerpointMAsTAutoshapeCurvedLeftArrow = '\000j\000.',
	powerpointMAsTAutoshapeCurvedUpArrow = '\000j\000/',
	powerpointMAsTAutoshapeCurvedDownArrow = '\000j\0000',
	powerpointMAsTAutoshapeStripedRightArrow = '\000j\0001',
	powerpointMAsTAutoshapeNotchedRightArrow = '\000j\0002',
	powerpointMAsTAutoshapePentagon = '\000j\0003',
	powerpointMAsTAutoshapeChevron = '\000j\0004',
	powerpointMAsTAutoshapeRightArrowCallout = '\000j\0005',
	powerpointMAsTAutoshapeLeftArrowCallout = '\000j\0006',
	powerpointMAsTAutoshapeUpArrowCallout = '\000j\0007',
	powerpointMAsTAutoshapeDownArrowCallout = '\000j\0008',
	powerpointMAsTAutoshapeLeftRightArrowCallout = '\000j\0009',
	powerpointMAsTAutoshapeUpDownArrowCallout = '\000j\000:',
	powerpointMAsTAutoshapeQuadArrowCallout = '\000j\000;',
	powerpointMAsTAutoshapeCircularArrow = '\000j\000<',
	powerpointMAsTAutoshapeFlowchartProcess = '\000j\000=',
	powerpointMAsTAutoshapeFlowchartAlternateProcess = '\000j\000>',
	powerpointMAsTAutoshapeFlowchartDecision = '\000j\000\?',
	powerpointMAsTAutoshapeFlowchartData = '\000j\000@',
	powerpointMAsTAutoshapeFlowchartPredefinedProcess = '\000j\000A',
	powerpointMAsTAutoshapeFlowchartInternalStorage = '\000j\000B',
	powerpointMAsTAutoshapeFlowchartDocument = '\000j\000C',
	powerpointMAsTAutoshapeFlowchartMultiDocument = '\000j\000D',
	powerpointMAsTAutoshapeFlowchartTerminator = '\000j\000E',
	powerpointMAsTAutoshapeFlowchartPreparation = '\000j\000F',
	powerpointMAsTAutoshapeFlowchartManualInput = '\000j\000G',
	powerpointMAsTAutoshapeFlowchartManualOperation = '\000j\000H',
	powerpointMAsTAutoshapeFlowchartConnector = '\000j\000I',
	powerpointMAsTAutoshapeFlowchartOffpageConnector = '\000j\000J',
	powerpointMAsTAutoshapeFlowchartCard = '\000j\000K',
	powerpointMAsTAutoshapeFlowchartPunchedTape = '\000j\000L',
	powerpointMAsTAutoshapeFlowchartSummingJunction = '\000j\000M',
	powerpointMAsTAutoshapeFlowchartOr = '\000j\000N',
	powerpointMAsTAutoshapeFlowchartCollate = '\000j\000O',
	powerpointMAsTAutoshapeFlowchartSort = '\000j\000P',
	powerpointMAsTAutoshapeFlowchartExtract = '\000j\000Q',
	powerpointMAsTAutoshapeFlowchartMerge = '\000j\000R',
	powerpointMAsTAutoshapeFlowchartStoredData = '\000j\000S',
	powerpointMAsTAutoshapeFlowchartDelay = '\000j\000T',
	powerpointMAsTAutoshapeFlowchartSequentialAccessStorage = '\000j\000U',
	powerpointMAsTAutoshapeFlowchartMagneticDisk = '\000j\000V',
	powerpointMAsTAutoshapeFlowchartDirectAccessStorage = '\000j\000W',
	powerpointMAsTAutoshapeFlowchartDisplay = '\000j\000X',
	powerpointMAsTAutoshapeExplosionOne = '\000j\000Y',
	powerpointMAsTAutoshapeExplosionTwo = '\000j\000Z',
	powerpointMAsTAutoshapeFourPointStar = '\000j\000[',
	powerpointMAsTAutoshapeFivePointStar = '\000j\000\\',
	powerpointMAsTAutoshapeEightPointStar = '\000j\000]',
	powerpointMAsTAutoshapeSixteenPointStar = '\000j\000^',
	powerpointMAsTAutoshapeTwentyFourPointStar = '\000j\000_',
	powerpointMAsTAutoshapeThirtyTwoPointStar = '\000j\000`',
	powerpointMAsTAutoshapeUpRibbon = '\000j\000a',
	powerpointMAsTAutoshapeDownRibbon = '\000j\000b',
	powerpointMAsTAutoshapeCurvedUpRibbon = '\000j\000c',
	powerpointMAsTAutoshapeCurvedDownRibbon = '\000j\000d',
	powerpointMAsTAutoshapeVerticalScroll = '\000j\000e',
	powerpointMAsTAutoshapeHorizontalScroll = '\000j\000f',
	powerpointMAsTAutoshapeWave = '\000j\000g',
	powerpointMAsTAutoshapeDoubleWave = '\000j\000h',
	powerpointMAsTAutoshapeRectangularCallout = '\000j\000i',
	powerpointMAsTAutoshapeRoundedRectangularCallout = '\000j\000j',
	powerpointMAsTAutoshapeOvalCallout = '\000j\000k',
	powerpointMAsTAutoshapeCloudCallout = '\000j\000l',
	powerpointMAsTAutoshapeLineCalloutOne = '\000j\000m',
	powerpointMAsTAutoshapeLineCalloutTwo = '\000j\000n',
	powerpointMAsTAutoshapeLineCalloutThree = '\000j\000o',
	powerpointMAsTAutoshapeLineCalloutFour = '\000j\000p',
	powerpointMAsTAutoshapeLineCalloutOneAccentBar = '\000j\000q',
	powerpointMAsTAutoshapeLineCalloutTwoAccentBar = '\000j\000r',
	powerpointMAsTAutoshapeLineCalloutThreeAccentBar = '\000j\000s',
	powerpointMAsTAutoshapeLineCalloutFourAccentBar = '\000j\000t',
	powerpointMAsTAutoshapeLineCalloutOneNoBorder = '\000j\000u',
	powerpointMAsTAutoshapeLineCalloutTwoNoBorder = '\000j\000v',
	powerpointMAsTAutoshapeLineCalloutThreeNoBorder = '\000j\000w',
	powerpointMAsTAutoshapeLineCalloutFourNoBorder = '\000j\000x',
	powerpointMAsTAutoshapeCalloutOneBorderAndAccentBar = '\000j\000y',
	powerpointMAsTAutoshapeCalloutTwoBorderAndAccentBar = '\000j\000z',
	powerpointMAsTAutoshapeCalloutThreeBorderAndAccentBar = '\000j\000{',
	powerpointMAsTAutoshapeCalloutFourBorderAndAccentBar = '\000j\000|',
	powerpointMAsTAutoshapeActionButtonCustom = '\000j\000}',
	powerpointMAsTAutoshapeActionButtonHome = '\000j\000~',
	powerpointMAsTAutoshapeActionButtonHelp = '\000j\000\177',
	powerpointMAsTAutoshapeActionButtonInformation = '\000j\000\200',
	powerpointMAsTAutoshapeActionButtonBackOrPrevious = '\000j\000\201',
	powerpointMAsTAutoshapeActionButtonForwardOrNext = '\000j\000\202',
	powerpointMAsTAutoshapeActionButtonBeginning = '\000j\000\203',
	powerpointMAsTAutoshapeActionButtonEnd = '\000j\000\204',
	powerpointMAsTAutoshapeActionButtonReturn = '\000j\000\205',
	powerpointMAsTAutoshapeActionButtonDocument = '\000j\000\206',
	powerpointMAsTAutoshapeActionButtonSound = '\000j\000\207',
	powerpointMAsTAutoshapeActionButtonMovie = '\000j\000\210',
	powerpointMAsTAutoshapeBalloon = '\000j\000\211',
	powerpointMAsTAutoshapeNotPrimitive = '\000j\000\212',
	powerpointMAsTAutoshapeFlowchartOfflineStorage = '\000j\000\213',
	powerpointMAsTAutoshapeLeftRightRibbon = '\000j\000\214',
	powerpointMAsTAutoshapeDiagonalStripe = '\000j\000\215',
	powerpointMAsTAutoshapePie = '\000j\000\216',
	powerpointMAsTAutoshapeNonIsoscelesTrapezoid = '\000j\000\217',
	powerpointMAsTAutoshapeDecagon = '\000j\000\220',
	powerpointMAsTAutoshapeHeptagon = '\000j\000\221',
	powerpointMAsTAutoshapeDodecagon = '\000j\000\222',
	powerpointMAsTAutoshapeSixPointsStar = '\000j\000\223',
	powerpointMAsTAutoshapeSevenPointsStar = '\000j\000\224',
	powerpointMAsTAutoshapeTenPointsStar = '\000j\000\225',
	powerpointMAsTAutoshapeTwelvePointsStar = '\000j\000\226',
	powerpointMAsTAutoshapeRoundOneRectangle = '\000j\000\227',
	powerpointMAsTAutoshapeRoundTwoSameRectangle = '\000j\000\230',
	powerpointMAsTAutoshapeRoundTwoDiagonalRectangle = '\000j\000\231',
	powerpointMAsTAutoshapeSnipRoundRectangle = '\000j\000\232',
	powerpointMAsTAutoshapeSnipOneRectangle = '\000j\000\233',
	powerpointMAsTAutoshapeSnipTwoSameRectangle = '\000j\000\234',
	powerpointMAsTAutoshapeSnipTwoDiagonalRectangle = '\000j\000\235',
	powerpointMAsTAutoshapeFrame = '\000j\000\236',
	powerpointMAsTAutoshapeHalfFrame = '\000j\000\237',
	powerpointMAsTAutoshapeTear = '\000j\000\240',
	powerpointMAsTAutoshapeChord = '\000j\000\241',
	powerpointMAsTAutoshapeCorner = '\000j\000\242',
	powerpointMAsTAutoshapeMathPlus = '\000j\000\243',
	powerpointMAsTAutoshapeMathMinus = '\000j\000\244',
	powerpointMAsTAutoshapeMathMultiply = '\000j\000\245',
	powerpointMAsTAutoshapeMathDivide = '\000j\000\246',
	powerpointMAsTAutoshapeMathEqual = '\000j\000\247',
	powerpointMAsTAutoshapeMathNotEqual = '\000j\000\250',
	powerpointMAsTAutoshapeCornerTabs = '\000j\000\251',
	powerpointMAsTAutoshapeSquareTabs = '\000j\000\252',
	powerpointMAsTAutoshapePlaqueTabs = '\000j\000\253',
	powerpointMAsTAutoshapeGearSix = '\000j\000\254',
	powerpointMAsTAutoshapeGearNine = '\000j\000\255',
	powerpointMAsTAutoshapeFunnel = '\000j\000\256',
	powerpointMAsTAutoshapePieWedge = '\000j\000\257',
	powerpointMAsTAutoshapeLeftCircularArrow = '\000j\000\260',
	powerpointMAsTAutoshapeLeftRightCircularArrow = '\000j\000\261',
	powerpointMAsTAutoshapeSwooshArrow = '\000j\000\262',
	powerpointMAsTAutoshapeCloud = '\000j\000\263',
	powerpointMAsTAutoshapeChartX = '\000j\000\264',
	powerpointMAsTAutoshapeChartStar = '\000j\000\265',
	powerpointMAsTAutoshapeChartPlus = '\000j\000\266',
	powerpointMAsTAutoshapeLineInverse = '\000j\000\267'
};
typedef enum powerpointMAsT powerpointMAsT;

enum powerpointMShp {
	powerpointMShpShapeTypeUnset = '\000\213\377\376',
	powerpointMShpShapeTypeAuto = '\000\214\000\001',
	powerpointMShpShapeTypeCallout = '\000\214\000\002',
	powerpointMShpShapeTypeChart = '\000\214\000\003',
	powerpointMShpShapeTypeComment = '\000\214\000\004',
	powerpointMShpShapeTypeFreeForm = '\000\214\000\005',
	powerpointMShpShapeTypeGroup = '\000\214\000\006',
	powerpointMShpShapeTypeEmbeddedOLEControl = '\000\214\000\007',
	powerpointMShpShapeTypeFormControl = '\000\214\000\010',
	powerpointMShpShapeTypeLine = '\000\214\000\011',
	powerpointMShpShapeTypeLinkedOLEObject = '\000\214\000\012',
	powerpointMShpShapeTypeLinkedPicture = '\000\214\000\013',
	powerpointMShpShapeTypeOLEControl = '\000\214\000\014',
	powerpointMShpShapeTypePicture = '\000\214\000\015',
	powerpointMShpShapeTypePlaceHolder = '\000\214\000\016',
	powerpointMShpShapeTypeWordArt = '\000\214\000\017',
	powerpointMShpShapeTypeMedia = '\000\214\000\020',
	powerpointMShpShapeTypeTextBox = '\000\214\000\021',
	powerpointMShpShapeTypeTable = '\000\214\000\022',
	powerpointMShpShapeTypeCanvas = '\000\214\000\023',
	powerpointMShpShapeTypeDiagram = '\000\214\000\024',
	powerpointMShpShapeTypeInk = '\000\214\000\025',
	powerpointMShpShapeTypeInkComment = '\000\214\000\026',
	powerpointMShpShapeTypeSmartartGraphic = '\000\214\000\027',
	powerpointMShpShapeTypeSlicer = '\000\214\000\030'
};
typedef enum powerpointMShp powerpointMShp;

enum powerpointMCrT {
	powerpointMCrTColorTypeUnset = '\000j\377\376',
	powerpointMCrTRGB = '\000k\000\001',
	powerpointMCrTScheme = '\000k\000\002'
};
typedef enum powerpointMCrT powerpointMCrT;

enum powerpointMPc {
	powerpointMPcPictureColorTypeUnset = '\000\265\377\376',
	powerpointMPcPictureColorAutomatic = '\000\266\000\001',
	powerpointMPcPictureColorGrayScale = '\000\266\000\002',
	powerpointMPcPictureColorBlackAndWhite = '\000\266\000\003',
	powerpointMPcPictureColorWatermark = '\000\266\000\004'
};
typedef enum powerpointMPc powerpointMPc;

enum powerpointMCAt {
	powerpointMCAtAngleUnset = '\000k\377\376',
	powerpointMCAtAngleAutomatic = '\000l\000\001',
	powerpointMCAtAngle30 = '\000l\000\002',
	powerpointMCAtAngle45 = '\000l\000\003',
	powerpointMCAtAngle60 = '\000l\000\004',
	powerpointMCAtAngle90 = '\000l\000\005'
};
typedef enum powerpointMCAt powerpointMCAt;

enum powerpointMCDt {
	powerpointMCDtDropUnset = '\000l\377\376',
	powerpointMCDtDropCustom = '\000m\000\001',
	powerpointMCDtDropTop = '\000m\000\002',
	powerpointMCDtDropCenter = '\000m\000\003',
	powerpointMCDtDropBottom = '\000m\000\004'
};
typedef enum powerpointMCDt powerpointMCDt;

enum powerpointMCot {
	powerpointMCotCalloutUnset = '\000m\377\376',
	powerpointMCotCalloutOne = '\000n\000\001',
	powerpointMCotCalloutTwo = '\000n\000\002',
	powerpointMCotCalloutThree = '\000n\000\003',
	powerpointMCotCalloutFour = '\000n\000\004'
};
typedef enum powerpointMCot powerpointMCot;

enum powerpointTxOr {
	powerpointTxOrTextOrientationUnset = '\000\215\377\376',
	powerpointTxOrHorizontal = '\000\216\000\001',
	powerpointTxOrUpward = '\000\216\000\002',
	powerpointTxOrDownward = '\000\216\000\003',
	powerpointTxOrVerticalEastAsian = '\000\216\000\004',
	powerpointTxOrVertical = '\000\216\000\005',
	powerpointTxOrHorizontalRotatedEastAsian = '\000\216\000\006'
};
typedef enum powerpointTxOr powerpointTxOr;

enum powerpointMSFr {
	powerpointMSFrScaleFromTopLeft = '\000o\000\000',
	powerpointMSFrScaleFromMiddle = '\000o\000\001',
	powerpointMSFrScaleFromBottomRight = '\000o\000\002'
};
typedef enum powerpointMSFr powerpointMSFr;

enum powerpointMPzC {
	powerpointMPzCPresetCameraUnset = '\000\256\377\376',
	powerpointMPzCCameraLegacyObliqueFromTopLeft = '\000\257\000\001',
	powerpointMPzCCameraLegacyObliqueFromTop = '\000\257\000\002',
	powerpointMPzCCameraLegacyObliqueFromTopright = '\000\257\000\003',
	powerpointMPzCCameraLegacyObliqueFromLeft = '\000\257\000\004',
	powerpointMPzCCameraLegacyObliqueFromFront = '\000\257\000\005',
	powerpointMPzCCameraLegacyObliqueFromRight = '\000\257\000\006',
	powerpointMPzCCameraLegacyObliqueFromBottomLeft = '\000\257\000\007',
	powerpointMPzCCameraLegacyObliqueFromBottom = '\000\257\000\010',
	powerpointMPzCCameraLegacyObliqueFromBottomRight = '\000\257\000\011',
	powerpointMPzCCameraLegacyPerspectiveFromTopLeft = '\000\257\000\012',
	powerpointMPzCCameraLegacyPerspectiveFromTop = '\000\257\000\013',
	powerpointMPzCCameraLegacyPerspectiveFromTopRight = '\000\257\000\014',
	powerpointMPzCCameraLegacyPerspectiveFromLeft = '\000\257\000\015',
	powerpointMPzCCameraLegacyPerspectiveFromFront = '\000\257\000\016',
	powerpointMPzCCameraLegacyPerspectiveFromRight = '\000\257\000\017',
	powerpointMPzCCameraLegacyPerspectiveFromBottomLeft = '\000\257\000\020',
	powerpointMPzCCameraLegacyPerspectiveFromBottom = '\000\257\000\021',
	powerpointMPzCCameraLegacyPerspectiveFromBottomRight = '\000\257\000\022',
	powerpointMPzCCameraOrthographic = '\000\257\000\023',
	powerpointMPzCCameraIsometricFromTopUp = '\000\257\000\024',
	powerpointMPzCCameraIsometricFromTopDown = '\000\257\000\025',
	powerpointMPzCCameraIsometricFromBottomUp = '\000\257\000\026',
	powerpointMPzCCameraIsometricFromBottomDown = '\000\257\000\027',
	powerpointMPzCCameraIsometricFromLeftUp = '\000\257\000\030',
	powerpointMPzCCameraIsometricFromLeftDown = '\000\257\000\031',
	powerpointMPzCCameraIsometricFromRightUp = '\000\257\000\032',
	powerpointMPzCCameraIsometricFromRightDown = '\000\257\000\033',
	powerpointMPzCCameraIsometricOffAxis1FromLeft = '\000\257\000\034',
	powerpointMPzCCameraIsometricOffAxis1FromRight = '\000\257\000\035',
	powerpointMPzCCameraIsometricOffAxis1FromTop = '\000\257\000\036',
	powerpointMPzCCameraIsometricOffAxis2FromLeft = '\000\257\000\037',
	powerpointMPzCCameraIsometricOffAxis2FromRight = '\000\257\000 ',
	powerpointMPzCCameraIsometricOffAxis2FromTop = '\000\257\000!',
	powerpointMPzCCameraIsometricOffAxis3FromLeft = '\000\257\000\"',
	powerpointMPzCCameraIsometricOffAxis3FromRight = '\000\257\000#',
	powerpointMPzCCameraIsometricOffAxis3FromBottom = '\000\257\000$',
	powerpointMPzCCameraIsometricOffAxis4FromLeft = '\000\257\000%',
	powerpointMPzCCameraIsometricOffAxis4FromRight = '\000\257\000&',
	powerpointMPzCCameraIsometricOffAxis4FromBottom = '\000\257\000\'',
	powerpointMPzCCameraObliqueFromTopLeft = '\000\257\000(',
	powerpointMPzCCameraObliqueFromTop = '\000\257\000)',
	powerpointMPzCCameraObliqueFromTopRight = '\000\257\000*',
	powerpointMPzCCameraObliqueFromLeft = '\000\257\000+',
	powerpointMPzCCameraObliqueFromRight = '\000\257\000,',
	powerpointMPzCCameraObliqueFromBottomLeft = '\000\257\000-',
	powerpointMPzCCameraObliqueFromBottom = '\000\257\000.',
	powerpointMPzCCameraObliqueFromBottomRight = '\000\257\000/',
	powerpointMPzCCameraPerspectiveFromFront = '\000\257\0000',
	powerpointMPzCCameraPerspectiveFromLeft = '\000\257\0001',
	powerpointMPzCCameraPerspectiveFromRight = '\000\257\0002',
	powerpointMPzCCameraPerspectiveFromAbove = '\000\257\0003',
	powerpointMPzCCameraPerspectiveFromBelow = '\000\257\0004',
	powerpointMPzCCameraPerspectiveFromAboveFacingLeft = '\000\257\0005',
	powerpointMPzCCameraPerspectiveFromAboveFacingRight = '\000\257\0006',
	powerpointMPzCCameraPerspectiveContrastingFacingLeft = '\000\257\0007',
	powerpointMPzCCameraPerspectiveContrastingFacingRight = '\000\257\0008',
	powerpointMPzCCameraPerspectiveHeroicFacingLeft = '\000\257\0009',
	powerpointMPzCCameraPerspectiveHeroicFacingRight = '\000\257\000:',
	powerpointMPzCCameraPerspectiveHeroicExtremeFacingLeft = '\000\257\000;',
	powerpointMPzCCameraPerspectiveHeroicExtremeFacingRight = '\000\257\000<',
	powerpointMPzCCameraPerspectiveRelaxed = '\000\257\000=',
	powerpointMPzCCameraPerspectiveRelaxedModerately = '\000\257\000>'
};
typedef enum powerpointMPzC powerpointMPzC;

enum powerpointMLtT {
	powerpointMLtTLightRigUnset = '\000\257\377\376',
	powerpointMLtTLightRigFlat1 = '\000\260\000\001',
	powerpointMLtTLightRigFlat2 = '\000\260\000\002',
	powerpointMLtTLightRigFlat3 = '\000\260\000\003',
	powerpointMLtTLightRigFlat4 = '\000\260\000\004',
	powerpointMLtTLightRigNormal1 = '\000\260\000\005',
	powerpointMLtTLightRigNormal2 = '\000\260\000\006',
	powerpointMLtTLightRigNormal3 = '\000\260\000\007',
	powerpointMLtTLightRigNormal4 = '\000\260\000\010',
	powerpointMLtTLightRigHarsh1 = '\000\260\000\011',
	powerpointMLtTLightRigHarsh2 = '\000\260\000\012',
	powerpointMLtTLightRigHarsh3 = '\000\260\000\013',
	powerpointMLtTLightRigHarsh4 = '\000\260\000\014',
	powerpointMLtTLightRigThreePoint = '\000\260\000\015',
	powerpointMLtTLightRigBalanced = '\000\260\000\016',
	powerpointMLtTLightRigSoft = '\000\260\000\017',
	powerpointMLtTLightRigHarsh = '\000\260\000\020',
	powerpointMLtTLightRigFlood = '\000\260\000\021',
	powerpointMLtTLightRigContrasting = '\000\260\000\022',
	powerpointMLtTLightRigMorning = '\000\260\000\023',
	powerpointMLtTLightRigSunrise = '\000\260\000\024',
	powerpointMLtTLightRigSunset = '\000\260\000\025',
	powerpointMLtTLightRigChilly = '\000\260\000\026',
	powerpointMLtTLightRigFreezing = '\000\260\000\027',
	powerpointMLtTLightRigFlat = '\000\260\000\030',
	powerpointMLtTLightRigTwoPoint = '\000\260\000\031',
	powerpointMLtTLightRigGlow = '\000\260\000\032',
	powerpointMLtTLightRigBrightRoom = '\000\260\000\033'
};
typedef enum powerpointMLtT powerpointMLtT;

enum powerpointMBlT {
	powerpointMBlTBevelTypeUnset = '\000\260\377\376',
	powerpointMBlTBevelNone = '\000\261\000\001',
	powerpointMBlTBevelRelaxedInset = '\000\261\000\002',
	powerpointMBlTBevelCircle = '\000\261\000\003',
	powerpointMBlTBevelSlope = '\000\261\000\004',
	powerpointMBlTBevelCross = '\000\261\000\005',
	powerpointMBlTBevelAngle = '\000\261\000\006',
	powerpointMBlTBevelSoftRound = '\000\261\000\007',
	powerpointMBlTBevelConvex = '\000\261\000\010',
	powerpointMBlTBevelCoolSlant = '\000\261\000\011',
	powerpointMBlTBevelDivot = '\000\261\000\012',
	powerpointMBlTBevelRiblet = '\000\261\000\013',
	powerpointMBlTBevelHardEdge = '\000\261\000\014',
	powerpointMBlTBevelArtDeco = '\000\261\000\015'
};
typedef enum powerpointMBlT powerpointMBlT;

enum powerpointMSSt {
	powerpointMSStShadowStyleUnset = '\000\261\377\376',
	powerpointMSStShadowStyleInner = '\000\262\000\001',
	powerpointMSStShadowStyleOuter = '\000\262\000\002'
};
typedef enum powerpointMSSt powerpointMSSt;

enum powerpointPpgA {
	powerpointPpgAParagraphAlignmentUnset = '\000\346\377\376',
	powerpointPpgAParagraphAlignLeft = '\000\347\000\000',
	powerpointPpgAParagraphAlignCenter = '\000\347\000\001',
	powerpointPpgAParagraphAlignRight = '\000\347\000\002',
	powerpointPpgAParagraphAlignJustify = '\000\347\000\003',
	powerpointPpgAParagraphAlignDistribute = '\000\347\000\004',
	powerpointPpgAParagraphAlignThai = '\000\347\000\005',
	powerpointPpgAParagraphAlignJustifyLow = '\000\347\000\006'
};
typedef enum powerpointPpgA powerpointPpgA;

enum powerpointMTSt {
	powerpointMTStStrikeUnset = '\000\263\377\376',
	powerpointMTStNoStrike = '\000\264\000\000',
	powerpointMTStSingleStrike = '\000\264\000\001',
	powerpointMTStDoubleStrike = '\000\264\000\002'
};
typedef enum powerpointMTSt powerpointMTSt;

enum powerpointMTCa {
	powerpointMTCaCapsUnset = '\000\264\377\376',
	powerpointMTCaNoCaps = '\000\265\000\000',
	powerpointMTCaSmallCaps = '\000\265\000\001',
	powerpointMTCaAllCaps = '\000\265\000\002'
};
typedef enum powerpointMTCa powerpointMTCa;

enum powerpointMTUl {
	powerpointMTUlUnderlineUnset = '\003\356\377\376',
	powerpointMTUlNoUnderline = '\003\357\000\000',
	powerpointMTUlUnderlineWordsOnly = '\003\357\000\001',
	powerpointMTUlUnderlineSingleLine = '\003\357\000\002',
	powerpointMTUlUnderlineDoubleLine = '\003\357\000\003',
	powerpointMTUlUnderlineHeavyLine = '\003\357\000\004',
	powerpointMTUlUnderlineDottedLine = '\003\357\000\005',
	powerpointMTUlUnderlineHeavyDottedLine = '\003\357\000\006',
	powerpointMTUlUnderlineDashLine = '\003\357\000\007',
	powerpointMTUlUnderlineHeavyDashLine = '\003\357\000\010',
	powerpointMTUlUnderlineLongDashLine = '\003\357\000\011',
	powerpointMTUlUnderlineHeavyLongDashLine = '\003\357\000\012',
	powerpointMTUlUnderlineDotDashLine = '\003\357\000\013',
	powerpointMTUlUnderlineHeavyDotDashLine = '\003\357\000\014',
	powerpointMTUlUnderlineDotDotDashLine = '\003\357\000\015',
	powerpointMTUlUnderlineHeavyDotDotDashLine = '\003\357\000\016',
	powerpointMTUlUnderlineWavyLine = '\003\357\000\017',
	powerpointMTUlUnderlineHeavyWavyLine = '\003\357\000\020',
	powerpointMTUlUnderlineWavyDoubleLine = '\003\357\000\021'
};
typedef enum powerpointMTUl powerpointMTUl;

enum powerpointMTTA {
	powerpointMTTATabUnset = '\000\266\377\376',
	powerpointMTTALeftTab = '\000\267\000\000',
	powerpointMTTACenterTab = '\000\267\000\001',
	powerpointMTTARightTab = '\000\267\000\002',
	powerpointMTTADecimalTab = '\000\267\000\003'
};
typedef enum powerpointMTTA powerpointMTTA;

enum powerpointMTCW {
	powerpointMTCWCharacterWrapUnset = '\000\267\377\376',
	powerpointMTCWNoCharacterWrap = '\000\270\000\000',
	powerpointMTCWStandardCharacterWrap = '\000\270\000\001',
	powerpointMTCWStrictCharacterWrap = '\000\270\000\002',
	powerpointMTCWCustomCharacterWrap = '\000\270\000\003'
};
typedef enum powerpointMTCW powerpointMTCW;

enum powerpointMTFA {
	powerpointMTFAFontAlignmentUnset = '\000\270\377\376',
	powerpointMTFAAutomaticAlignment = '\000\271\000\000',
	powerpointMTFATopAlignment = '\000\271\000\001',
	powerpointMTFACenterAlignment = '\000\271\000\002',
	powerpointMTFABaselineAlignment = '\000\271\000\003',
	powerpointMTFABottomAlignment = '\000\271\000\004'
};
typedef enum powerpointMTFA powerpointMTFA;

enum powerpointPAtS {
	powerpointPAtSAutoSizeUnset = '\000\344\377\376',
	powerpointPAtSAutoSizeNone = '\000\345\000\000',
	powerpointPAtSShapeToFitText = '\000\345\000\001',
	powerpointPAtSTextToFitShape = '\000\345\000\002'
};
typedef enum powerpointPAtS powerpointPAtS;

enum powerpointMPFo {
	powerpointMPFoPathTypeUnset = '\000\272\377\376',
	powerpointMPFoNoPathType = '\000\273\000\000',
	powerpointMPFoPathType1 = '\000\273\000\001',
	powerpointMPFoPathType2 = '\000\273\000\002',
	powerpointMPFoPathType3 = '\000\273\000\003',
	powerpointMPFoPathType4 = '\000\273\000\004'
};
typedef enum powerpointMPFo powerpointMPFo;

enum powerpointMWFo {
	powerpointMWFoWarpFormatUnset = '\000\273\377\376',
	powerpointMWFoWarpFormat1 = '\000\274\000\000',
	powerpointMWFoWarpFormat2 = '\000\274\000\001',
	powerpointMWFoWarpFormat3 = '\000\274\000\002',
	powerpointMWFoWarpFormat4 = '\000\274\000\003',
	powerpointMWFoWarpFormat5 = '\000\274\000\004',
	powerpointMWFoWarpFormat6 = '\000\274\000\005',
	powerpointMWFoWarpFormat7 = '\000\274\000\006',
	powerpointMWFoWarpFormat8 = '\000\274\000\007',
	powerpointMWFoWarpFormat9 = '\000\274\000\010',
	powerpointMWFoWarpFormat10 = '\000\274\000\011',
	powerpointMWFoWarpFormat11 = '\000\274\000\012',
	powerpointMWFoWarpFormat12 = '\000\274\000\013',
	powerpointMWFoWarpFormat13 = '\000\274\000\014',
	powerpointMWFoWarpFormat14 = '\000\274\000\015',
	powerpointMWFoWarpFormat15 = '\000\274\000\016',
	powerpointMWFoWarpFormat16 = '\000\274\000\017',
	powerpointMWFoWarpFormat17 = '\000\274\000\020',
	powerpointMWFoWarpFormat18 = '\000\274\000\021',
	powerpointMWFoWarpFormat19 = '\000\274\000\022',
	powerpointMWFoWarpFormat20 = '\000\274\000\023',
	powerpointMWFoWarpFormat21 = '\000\274\000\024',
	powerpointMWFoWarpFormat22 = '\000\274\000\025',
	powerpointMWFoWarpFormat23 = '\000\274\000\026',
	powerpointMWFoWarpFormat24 = '\000\274\000\027',
	powerpointMWFoWarpFormat25 = '\000\274\000\030',
	powerpointMWFoWarpFormat26 = '\000\274\000\031',
	powerpointMWFoWarpFormat27 = '\000\274\000\032',
	powerpointMWFoWarpFormat28 = '\000\274\000\033',
	powerpointMWFoWarpFormat29 = '\000\274\000\034',
	powerpointMWFoWarpFormat30 = '\000\274\000\035',
	powerpointMWFoWarpFormat31 = '\000\274\000\036',
	powerpointMWFoWarpFormat32 = '\000\274\000\037',
	powerpointMWFoWarpFormat33 = '\000\274\000 ',
	powerpointMWFoWarpFormat34 = '\000\274\000!',
	powerpointMWFoWarpFormat35 = '\000\274\000\"',
	powerpointMWFoWarpFormat36 = '\000\274\000#'
};
typedef enum powerpointMWFo powerpointMWFo;

enum powerpointPCgC {
	powerpointPCgCCaseSentence = '\000\344\000\001',
	powerpointPCgCCaseLower = '\000\344\000\002',
	powerpointPCgCCaseUpper = '\000\344\000\003',
	powerpointPCgCCaseTitle = '\000\344\000\004',
	powerpointPCgCCaseToggle = '\000\344\000\005'
};
typedef enum powerpointPCgC powerpointPCgC;

enum powerpointMDTF {
	powerpointMDTFDateTimeFormatUnset = '\000\275\377\376',
	powerpointMDTFDateTimeFormatMdyy = '\000\276\000\001',
	powerpointMDTFDateTimeFormatDdddMMMMddyyyy = '\000\276\000\002',
	powerpointMDTFDateTimeFormatDMMMMyyyy = '\000\276\000\003',
	powerpointMDTFDateTimeFormatMMMMdyyyy = '\000\276\000\004',
	powerpointMDTFDateTimeFormatDMMMyy = '\000\276\000\005',
	powerpointMDTFDateTimeFormatMMMMyy = '\000\276\000\006',
	powerpointMDTFDateTimeFormatMMyy = '\000\276\000\007',
	powerpointMDTFDateTimeFormatMMddyyHmm = '\000\276\000\010',
	powerpointMDTFDateTimeFormatMMddyyhmmAMPM = '\000\276\000\011',
	powerpointMDTFDateTimeFormatHmm = '\000\276\000\012',
	powerpointMDTFDateTimeFormatHmmss = '\000\276\000\013',
	powerpointMDTFDateTimeFormatHmmAMPM = '\000\276\000\014',
	powerpointMDTFDateTimeFormatHmmssAMPM = '\000\276\000\015',
	powerpointMDTFDateTimeFormatFigureOut = '\000\276\000\016'
};
typedef enum powerpointMDTF powerpointMDTF;

enum powerpointMSET {
	powerpointMSETSoftEdgeUnset = '\000\277\377\376',
	powerpointMSETNoSoftEdge = '\000\300\000\000',
	powerpointMSETSoftEdgeType1 = '\000\300\000\001',
	powerpointMSETSoftEdgeType2 = '\000\300\000\002',
	powerpointMSETSoftEdgeType3 = '\000\300\000\003',
	powerpointMSETSoftEdgeType4 = '\000\300\000\004',
	powerpointMSETSoftEdgeType5 = '\000\300\000\005',
	powerpointMSETSoftEdgeType6 = '\000\300\000\006'
};
typedef enum powerpointMSET powerpointMSET;

enum powerpointMCSI {
	powerpointMCSIFirstDarkSchemeColor = '\000\301\000\001',
	powerpointMCSIFirstLightSchemeColor = '\000\301\000\002',
	powerpointMCSISecondDarkSchemeColor = '\000\301\000\003',
	powerpointMCSISecondLightSchemeColor = '\000\301\000\004',
	powerpointMCSIFirstAccentSchemeColor = '\000\301\000\005',
	powerpointMCSISecondAccentSchemeColor = '\000\301\000\006',
	powerpointMCSIThirdAccentSchemeColor = '\000\301\000\007',
	powerpointMCSIFourthAccentSchemeColor = '\000\301\000\010',
	powerpointMCSIFifthAccentSchemeColor = '\000\301\000\011',
	powerpointMCSISixthAccentSchemeColor = '\000\301\000\012',
	powerpointMCSIHyperlinkSchemeColor = '\000\301\000\013',
	powerpointMCSIFollowedHyperlinkSchemeColor = '\000\301\000\014'
};
typedef enum powerpointMCSI powerpointMCSI;

enum powerpointMCoI {
	powerpointMCoIThemeColorUnset = '\000\301\377\376',
	powerpointMCoINoThemeColor = '\000\302\000\000',
	powerpointMCoIFirstDarkThemeColor = '\000\302\000\001',
	powerpointMCoIFirstLightThemeColor = '\000\302\000\002',
	powerpointMCoISecondDarkThemeColor = '\000\302\000\003',
	powerpointMCoISecondLightThemeColor = '\000\302\000\004',
	powerpointMCoIFirstAccentThemeColor = '\000\302\000\005',
	powerpointMCoISecondAccentThemeColor = '\000\302\000\006',
	powerpointMCoIThirdAccentThemeColor = '\000\302\000\007',
	powerpointMCoIFourthAccentThemeColor = '\000\302\000\010',
	powerpointMCoIFifthAccentThemeColor = '\000\302\000\011',
	powerpointMCoISixthAccentThemeColor = '\000\302\000\012',
	powerpointMCoIHyperlinkThemeColor = '\000\302\000\013',
	powerpointMCoIFollowedHyperlinkThemeColor = '\000\302\000\014',
	powerpointMCoIFirstTextThemeColor = '\000\302\000\015',
	powerpointMCoIFirstBackgroundThemeColor = '\000\302\000\016',
	powerpointMCoISecondTextThemeColor = '\000\302\000\017',
	powerpointMCoISecondBackgroundThemeColor = '\000\302\000\020'
};
typedef enum powerpointMCoI powerpointMCoI;

enum powerpointMFLI {
	powerpointMFLIThemeFontLatin = '\000\303\000\001',
	powerpointMFLIThemeFontComplexScript = '\000\303\000\002',
	powerpointMFLIThemeFontHighAnsi = '\000\303\000\003',
	powerpointMFLIThemeFontEastAsian = '\000\303\000\004'
};
typedef enum powerpointMFLI powerpointMFLI;

enum powerpointMSSI {
	powerpointMSSIShapeStyleUnset = '\000\303\377\376',
	powerpointMSSIShapeNotAPreset = '\000\304\000\000',
	powerpointMSSIShapePreset1 = '\000\304\000\001',
	powerpointMSSIShapePreset2 = '\000\304\000\002',
	powerpointMSSIShapePreset3 = '\000\304\000\003',
	powerpointMSSIShapePreset4 = '\000\304\000\004',
	powerpointMSSIShapePreset5 = '\000\304\000\005',
	powerpointMSSIShapePreset6 = '\000\304\000\006',
	powerpointMSSIShapePreset7 = '\000\304\000\007',
	powerpointMSSIShapePreset8 = '\000\304\000\010',
	powerpointMSSIShapePreset9 = '\000\304\000\011',
	powerpointMSSIShapePreset10 = '\000\304\000\012',
	powerpointMSSIShapePreset11 = '\000\304\000\013',
	powerpointMSSIShapePreset12 = '\000\304\000\014',
	powerpointMSSIShapePreset13 = '\000\304\000\015',
	powerpointMSSIShapePreset14 = '\000\304\000\016',
	powerpointMSSIShapePreset15 = '\000\304\000\017',
	powerpointMSSIShapePreset16 = '\000\304\000\020',
	powerpointMSSIShapePreset17 = '\000\304\000\021',
	powerpointMSSIShapePreset18 = '\000\304\000\022',
	powerpointMSSIShapePreset19 = '\000\304\000\023',
	powerpointMSSIShapePreset20 = '\000\304\000\024',
	powerpointMSSIShapePreset21 = '\000\304\000\025',
	powerpointMSSIShapePreset22 = '\000\304\000\026',
	powerpointMSSIShapePreset23 = '\000\304\000\027',
	powerpointMSSIShapePreset24 = '\000\304\000\030',
	powerpointMSSIShapePreset25 = '\000\304\000\031',
	powerpointMSSIShapePreset26 = '\000\304\000\032',
	powerpointMSSIShapePreset27 = '\000\304\000\033',
	powerpointMSSIShapePreset28 = '\000\304\000\034',
	powerpointMSSIShapePreset29 = '\000\304\000\035',
	powerpointMSSIShapePreset30 = '\000\304\000\036',
	powerpointMSSIShapePreset31 = '\000\304\000\037',
	powerpointMSSIShapePreset32 = '\000\304\000 ',
	powerpointMSSIShapePreset33 = '\000\304\000!',
	powerpointMSSIShapePreset34 = '\000\304\000\"',
	powerpointMSSIShapePreset35 = '\000\304\000#',
	powerpointMSSIShapePreset36 = '\000\304\000$',
	powerpointMSSIShapePreset37 = '\000\304\000%',
	powerpointMSSIShapePreset38 = '\000\304\000&',
	powerpointMSSIShapePreset39 = '\000\304\000\'',
	powerpointMSSIShapePreset40 = '\000\304\000(',
	powerpointMSSIShapePreset41 = '\000\304\000)',
	powerpointMSSIShapePreset42 = '\000\304\000*',
	powerpointMSSILinePreset1 = '\000\304\'\021',
	powerpointMSSILinePreset2 = '\000\304\'\022',
	powerpointMSSILinePreset3 = '\000\304\'\023',
	powerpointMSSILinePreset4 = '\000\304\'\024',
	powerpointMSSILinePreset5 = '\000\304\'\025',
	powerpointMSSILinePreset6 = '\000\304\'\026',
	powerpointMSSILinePreset7 = '\000\304\'\027',
	powerpointMSSILinePreset8 = '\000\304\'\030',
	powerpointMSSILinePreset9 = '\000\304\'\031',
	powerpointMSSILinePreset10 = '\000\304\'\032',
	powerpointMSSILinePreset11 = '\000\304\'\033',
	powerpointMSSILinePreset12 = '\000\304\'\034',
	powerpointMSSILinePreset13 = '\000\304\'\035',
	powerpointMSSILinePreset14 = '\000\304\'\036',
	powerpointMSSILinePreset15 = '\000\304\'\037',
	powerpointMSSILinePreset16 = '\000\304\' ',
	powerpointMSSILinePreset17 = '\000\304\'!',
	powerpointMSSILinePreset18 = '\000\304\'\"',
	powerpointMSSILinePreset19 = '\000\304\'#',
	powerpointMSSILinePreset20 = '\000\304\'$',
	powerpointMSSILinePreset21 = '\000\304\'%'
};
typedef enum powerpointMSSI powerpointMSSI;

enum powerpointMBSI {
	powerpointMBSIBackgroundUnset = '\000\304\377\376',
	powerpointMBSIBackgroundNotAPreset = '\000\305\000\000',
	powerpointMBSIBackgroundPreset1 = '\000\305\000\001',
	powerpointMBSIBackgroundPreset2 = '\000\305\000\002',
	powerpointMBSIBackgroundPreset3 = '\000\305\000\003',
	powerpointMBSIBackgroundPreset4 = '\000\305\000\004',
	powerpointMBSIBackgroundPreset5 = '\000\305\000\005',
	powerpointMBSIBackgroundPreset6 = '\000\305\000\006',
	powerpointMBSIBackgroundPreset7 = '\000\305\000\007',
	powerpointMBSIBackgroundPreset8 = '\000\305\000\010',
	powerpointMBSIBackgroundPreset9 = '\000\305\000\011',
	powerpointMBSIBackgroundPreset10 = '\000\305\000\012',
	powerpointMBSIBackgroundPreset11 = '\000\305\000\013',
	powerpointMBSIBackgroundPreset12 = '\000\305\000\014'
};
typedef enum powerpointMBSI powerpointMBSI;

enum powerpointPDrT {
	powerpointPDrTTextDirectionUnset = '\000\352\377\376',
	powerpointPDrTLeftToRight = '\000\353\000\001',
	powerpointPDrTRightToLeft = '\000\353\000\002'
};
typedef enum powerpointPDrT powerpointPDrT;

enum powerpointPBtT {
	powerpointPBtTBulletTypeUnset = '\000\347\377\376',
	powerpointPBtTBulletTypeNone = '\000\350\000\000',
	powerpointPBtTBulletTypeUnnumbered = '\000\350\000\001',
	powerpointPBtTBulletTypeNumbered = '\000\350\000\002',
	powerpointPBtTPictureBulletType = '\000\350\000\003'
};
typedef enum powerpointPBtT powerpointPBtT;

enum powerpointPBtS {
	powerpointPBtSNumberedBulletStyleUnset = '\000\350\377\376',
	powerpointPBtSNumberedBulletStyleAlphaLowercasePeriod = '\000\351\000\000',
	powerpointPBtSNumberedBulletStyleAlphaUppercasePeriod = '\000\351\000\001',
	powerpointPBtSNumberedBulletStyleArabicRightParen = '\000\351\000\002',
	powerpointPBtSNumberedBulletStyleArabicPeriod = '\000\351\000\003',
	powerpointPBtSNumberedBulletStyleRomanLowercaseParenBoth = '\000\351\000\004',
	powerpointPBtSNumberedBulletStyleRomanLowercaseParenRight = '\000\351\000\005',
	powerpointPBtSNumberedBulletStyleRomanLowercasePeriod = '\000\351\000\006',
	powerpointPBtSNumberedBulletStyleRomanUppercasePeriod = '\000\351\000\007',
	powerpointPBtSNumberedBulletStyleAlphaLowercaseParenBoth = '\000\351\000\010',
	powerpointPBtSNumberedBulletStyleAlphaLowercaseParenRight = '\000\351\000\011',
	powerpointPBtSNumberedBulletStyleAlphaUppercaseParenBoth = '\000\351\000\012',
	powerpointPBtSNumberedBulletStyleAlphaUppercaseParenRight = '\000\351\000\013',
	powerpointPBtSNumberedBulletStyleArabicParenBoth = '\000\351\000\014',
	powerpointPBtSNumberedBulletStyleArabicPlain = '\000\351\000\015',
	powerpointPBtSNumberedBulletStyleRomanUppercaseParenBoth = '\000\351\000\016',
	powerpointPBtSNumberedBulletStyleRomanUppercaseParenRight = '\000\351\000\017',
	powerpointPBtSNumberedBulletStyleSimplifiedChinesePlain = '\000\351\000\020',
	powerpointPBtSNumberedBulletStyleSimplifiedChinesePeriod = '\000\351\000\021',
	powerpointPBtSNumberedBulletStyleCircleNumberPlain = '\000\351\000\022',
	powerpointPBtSNumberedBulletStyleCircleNumberWhitePlain = '\000\351\000\023',
	powerpointPBtSNumberedBulletStyleCircleNumberBlackPlain = '\000\351\000\024',
	powerpointPBtSNumberedBulletStyleTraditionalChinesePlain = '\000\351\000\025',
	powerpointPBtSNumberedBulletStyleTraditionalChinesePeriod = '\000\351\000\026',
	powerpointPBtSNumberedBulletStyleArabicAlphaDash = '\000\351\000\027',
	powerpointPBtSNumberedBulletStyleArabicAbjadDash = '\000\351\000\030',
	powerpointPBtSNumberedBulletStyleHebrewAlphaDash = '\000\351\000\031',
	powerpointPBtSNumberedBulletStyleKanjiKoreanPlain = '\000\351\000\032',
	powerpointPBtSNumberedBulletStyleKanjiKoreanPeriod = '\000\351\000\033',
	powerpointPBtSNumberedBulletStyleArabicDBPlain = '\000\351\000\034',
	powerpointPBtSNumberedBulletStyleArabicDBPeriod = '\000\351\000\035',
	powerpointPBtSNumberedBulletStyleThaiAlphaPeriod = '\000\351\000\036',
	powerpointPBtSNumberedBulletStyleThaiAlphaParenRight = '\000\351\000\037',
	powerpointPBtSNumberedBulletStyleThaiAlphaParenBoth = '\000\351\000 ',
	powerpointPBtSNumberedBulletStyleThaiNumberPeriod = '\000\351\000!',
	powerpointPBtSNumberedBulletStyleThaiNumberParenRight = '\000\351\000\"',
	powerpointPBtSNumberedBulletStyleThaiParenBoth = '\000\351\000#',
	powerpointPBtSNumberedBulletStyleHindiAlphaPeriod = '\000\351\000$',
	powerpointPBtSNumberedBulletStyleHindiNumberPeriod = '\000\351\000%',
	powerpointPBtSNumberedBulletStyleKanjiSimpifiedChineseDBPeriod = '\000\351\000&',
	powerpointPBtSNumberedBulletStyleHindiNumberParenRight = '\000\351\000\'',
	powerpointPBtSNumberedBulletStyleHindiAlpha1Period = '\000\351\000('
};
typedef enum powerpointPBtS powerpointPBtS;

enum powerpointPTSp {
	powerpointPTSpTabstopUnset = '\000\364\377\376',
	powerpointPTSpTabstopLeft = '\000\365\000\001',
	powerpointPTSpTabstopCenter = '\000\365\000\002',
	powerpointPTSpTabstopRight = '\000\365\000\003',
	powerpointPTSpTabstopDecimal = '\000\365\000\004'
};
typedef enum powerpointPTSp powerpointPTSp;

enum powerpointMRfT {
	powerpointMRfTReflectionUnset = '\003\351\377\376',
	powerpointMRfTReflectionTypeNone = '\003\352\000\000',
	powerpointMRfTReflectionType1 = '\003\352\000\001',
	powerpointMRfTReflectionType2 = '\003\352\000\002',
	powerpointMRfTReflectionType3 = '\003\352\000\003',
	powerpointMRfTReflectionType4 = '\003\352\000\004',
	powerpointMRfTReflectionType5 = '\003\352\000\005',
	powerpointMRfTReflectionType6 = '\003\352\000\006',
	powerpointMRfTReflectionType7 = '\003\352\000\007',
	powerpointMRfTReflectionType8 = '\003\352\000\010',
	powerpointMRfTReflectionType9 = '\003\352\000\011'
};
typedef enum powerpointMRfT powerpointMRfT;

enum powerpointMTtA {
	powerpointMTtATextureUnset = '\003\352\377\376',
	powerpointMTtATextureTopLeft = '\003\353\000\000',
	powerpointMTtATextureTop = '\003\353\000\001',
	powerpointMTtATextureTopRight = '\003\353\000\002',
	powerpointMTtATextureLeft = '\003\353\000\003',
	powerpointMTtATextureCenter = '\003\353\000\004',
	powerpointMTtATextureRight = '\003\353\000\005',
	powerpointMTtATextureBottomLeft = '\003\353\000\006',
	powerpointMTtATextureBotton = '\003\353\000\007',
	powerpointMTtATextureBottomRight = '\003\353\000\010'
};
typedef enum powerpointMTtA powerpointMTtA;

enum powerpointPBlA {
	powerpointPBlATextBaselineAlignmentUnset = '\003\353\377\376',
	powerpointPBlATextBaselineAlignBaseline = '\003\354\000\001',
	powerpointPBlATextBaselineAlignTop = '\003\354\000\002',
	powerpointPBlATextBaselineAlignCenter = '\003\354\000\003',
	powerpointPBlATextBaselineAlignEastAsian50 = '\003\354\000\004',
	powerpointPBlATextBaselineAlignAutomatic = '\003\354\000\005'
};
typedef enum powerpointPBlA powerpointPBlA;

enum powerpointMCbF {
	powerpointMCbFClipboardFormatUnset = '\003\354\377\376',
	powerpointMCbFNativeClipboardFormat = '\003\355\000\001',
	powerpointMCbFHTMlClipboardFormat = '\003\355\000\002',
	powerpointMCbFRTFClipboardFormat = '\003\355\000\003',
	powerpointMCbFPlainTextClipboardFormat = '\003\355\000\004'
};
typedef enum powerpointMCbF powerpointMCbF;

enum powerpointMTiP {
	powerpointMTiPInsertBefore = '\003\356\000\000',
	powerpointMTiPInsertAfter = '\003\356\000\001'
};
typedef enum powerpointMTiP powerpointMTiP;

enum powerpointMPiT {
	powerpointMPiTSaveAsDefault = '\003\362\377\376',
	powerpointMPiTSaveAsPNGFile = '\003\363\000\000',
	powerpointMPiTSaveAsBMPFile = '\003\363\000\001',
	powerpointMPiTSaveAsGIFFile = '\003\363\000\002',
	powerpointMPiTSaveAsJPGFile = '\003\363\000\003',
	powerpointMPiTSaveAsPDFFile = '\003\363\000\004'
};
typedef enum powerpointMPiT powerpointMPiT;

enum powerpointMPeT {
	powerpointMPeTNoEffect = '\003\364\000\000',
	powerpointMPeTEffectBackgroundRemoval = '\003\364\000\001',
	powerpointMPeTEffectBlur = '\003\364\000\002',
	powerpointMPeTEffectBrightnessContrast = '\003\364\000\003',
	powerpointMPeTEffectCement = '\003\364\000\004',
	powerpointMPeTEffectCrisscrossEtching = '\003\364\000\005',
	powerpointMPeTEffectChalkSketch = '\003\364\000\006',
	powerpointMPeTEffectColorTemperature = '\003\364\000\007',
	powerpointMPeTEffectCutout = '\003\364\000\010',
	powerpointMPeTEffectFilmGrain = '\003\364\000\011',
	powerpointMPeTEffectGlass = '\003\364\000\012',
	powerpointMPeTEffectGlowDiffused = '\003\364\000\013',
	powerpointMPeTEffectGlowEdges = '\003\364\000\014',
	powerpointMPeTEffectLightScreen = '\003\364\000\015',
	powerpointMPeTEffectLineDrawing = '\003\364\000\016',
	powerpointMPeTEffectMarker = '\003\364\000\017',
	powerpointMPeTEffectMosiaicBubbles = '\003\364\000\020',
	powerpointMPeTEffectPaintBrush = '\003\364\000\021',
	powerpointMPeTEffectPaintStrokes = '\003\364\000\022',
	powerpointMPeTEffectPastelsSmooth = '\003\364\000\023',
	powerpointMPeTEffectPencilGrayscale = '\003\364\000\024',
	powerpointMPeTEffectPencilSketch = '\003\364\000\025',
	powerpointMPeTEffectPhotocopy = '\003\364\000\026',
	powerpointMPeTEffectPlasticWrap = '\003\364\000\027',
	powerpointMPeTEffectSaturation = '\003\364\000\030',
	powerpointMPeTEffectSharpenSoften = '\003\364\000\031',
	powerpointMPeTEffectTexturizer = '\003\364\000\032',
	powerpointMPeTEffectWatercolorSponge = '\003\364\000\033'
};
typedef enum powerpointMPeT powerpointMPeT;

enum powerpointMSgT {
	powerpointMSgTLine = '\000\217\000\000',
	powerpointMSgTCurve = '\000\217\000\001'
};
typedef enum powerpointMSgT powerpointMSgT;

enum powerpointMEdT {
	powerpointMEdTAuto = '\000\220\000\000',
	powerpointMEdTCorner = '\000\220\000\001',
	powerpointMEdTSmooth = '\000\220\000\002',
	powerpointMEdTSymmetric = '\000\220\000\003'
};
typedef enum powerpointMEdT powerpointMEdT;

enum powerpointSANP {
	powerpointSANPDefaultNodePosition = '\003\365\000\001',
	powerpointSANPAfterNode = '\003\365\000\002',
	powerpointSANPBeforeNode = '\003\365\000\003',
	powerpointSANPAboveNode = '\003\365\000\004',
	powerpointSANPBelowNode = '\003\365\000\005'
};
typedef enum powerpointSANP powerpointSANP;

enum powerpointSANT {
	powerpointSANTDefaultNode = '\003\366\000\001',
	powerpointSANTAssistantNode = '\003\366\000\002'
};
typedef enum powerpointSANT powerpointSANT;

enum powerpointMOCT {
	powerpointMOCTOrgChartLayoutUnset = '\003\366\377\376',
	powerpointMOCTOrgChartLayoutStandard = '\003\367\000\001',
	powerpointMOCTOrgChartLayoutBothHanging = '\003\367\000\002',
	powerpointMOCTOrgChartLayoutLeftHanging = '\003\367\000\003',
	powerpointMOCTOrgChartLayoutRightHanging = '\003\367\000\004',
	powerpointMOCTOrgChartLayoutDefault = '\003\367\000\005'
};
typedef enum powerpointMOCT powerpointMOCT;

enum powerpointMAlC {
	powerpointMAlCAlignLefts = '\000\000\000\000',
	powerpointMAlCAlignCenters = '\000\000\000\001',
	powerpointMAlCAlignRights = '\000\000\000\002',
	powerpointMAlCAlignTops = '\000\000\000\003',
	powerpointMAlCAlignMiddles = '\000\000\000\004',
	powerpointMAlCAlignBottoms = '\000\000\000\005'
};
typedef enum powerpointMAlC powerpointMAlC;

enum powerpointMDsC {
	powerpointMDsCDistributeHorizontally = '\000\000\000\000',
	powerpointMDsCDistributeVertically = '\000\000\000\001'
};
typedef enum powerpointMDsC powerpointMDsC;

enum powerpointMOrT {
	powerpointMOrTOrientationUnset = '\000\214\377\376',
	powerpointMOrTHorizontalOrientation = '\000\215\000\001',
	powerpointMOrTVerticalOrientation = '\000\215\000\002'
};
typedef enum powerpointMOrT powerpointMOrT;

enum powerpointMZoC {
	powerpointMZoCBringShapeToFront = '\000p\000\000',
	powerpointMZoCSendShapeToBack = '\000p\000\001',
	powerpointMZoCBringShapeForward = '\000p\000\002',
	powerpointMZoCSendShapeBackward = '\000p\000\003',
	powerpointMZoCBringShapeInFrontOfText = '\000p\000\004',
	powerpointMZoCSendShapeBehindText = '\000p\000\005'
};
typedef enum powerpointMZoC powerpointMZoC;

enum powerpointMFlC {
	powerpointMFlCFlipHorizontal = '\000q\000\000',
	powerpointMFlCFlipVertical = '\000q\000\001'
};
typedef enum powerpointMFlC powerpointMFlC;

enum powerpointMTri {
	powerpointMTriTrue = '\000\240\377\377',
	powerpointMTriFalse = '\000\241\000\000',
	powerpointMTriCTrue = '\000\241\000\001',
	powerpointMTriToggle = '\000\240\377\375',
	powerpointMTriTriStateUnset = '\000\240\377\376'
};
typedef enum powerpointMTri powerpointMTri;

enum powerpointMBW {
	powerpointMBWBlackAndWhiteUnset = '\000\254\377\376',
	powerpointMBWBlackAndWhiteModeAutomatic = '\000\255\000\001',
	powerpointMBWBlackAndWhiteModeGrayScale = '\000\255\000\002',
	powerpointMBWBlackAndWhiteModeLightGrayScale = '\000\255\000\003',
	powerpointMBWBlackAndWhiteModeInverseGrayScale = '\000\255\000\004',
	powerpointMBWBlackAndWhiteModeGrayOutline = '\000\255\000\005',
	powerpointMBWBlackAndWhiteModeBlackTextAndLine = '\000\255\000\006',
	powerpointMBWBlackAndWhiteModeHighContrast = '\000\255\000\007',
	powerpointMBWBlackAndWhiteModeBlack = '\000\255\000\010',
	powerpointMBWBlackAndWhiteModeWhite = '\000\255\000\011',
	powerpointMBWBlackAndWhiteModeDontShow = '\000\255\000\012'
};
typedef enum powerpointMBW powerpointMBW;

enum powerpointMBPS {
	powerpointMBPSBarLeft = '\000r\000\000',
	powerpointMBPSBarTop = '\000r\000\001',
	powerpointMBPSBarRight = '\000r\000\002',
	powerpointMBPSBarBottom = '\000r\000\003',
	powerpointMBPSBarFloating = '\000r\000\004',
	powerpointMBPSBarPopUp = '\000r\000\005',
	powerpointMBPSBarMenu = '\000r\000\006'
};
typedef enum powerpointMBPS powerpointMBPS;

enum powerpointMBPt {
	powerpointMBPtNoProtection = '\000s\000\000',
	powerpointMBPtNoCustomize = '\000s\000\001',
	powerpointMBPtNoResize = '\000s\000\002',
	powerpointMBPtNoMove = '\000s\000\004',
	powerpointMBPtNoChangeVisible = '\000s\000\010',
	powerpointMBPtNoChangeDock = '\000s\000\020',
	powerpointMBPtNoVerticalDock = '\000s\000 ',
	powerpointMBPtNoHorizontalDock = '\000s\000@'
};
typedef enum powerpointMBPt powerpointMBPt;

enum powerpointMBTY {
	powerpointMBTYNormalCommandBar = '\000t\000\000',
	powerpointMBTYMenubarCommandBar = '\000t\000\001',
	powerpointMBTYPopupCommandBar = '\000t\000\002'
};
typedef enum powerpointMBTY powerpointMBTY;

enum powerpointMCLT {
	powerpointMCLTControlCustom = '\000u\000\000',
	powerpointMCLTControlButton = '\000u\000\001',
	powerpointMCLTControlEdit = '\000u\000\002',
	powerpointMCLTControlDropDown = '\000u\000\003',
	powerpointMCLTControlCombobox = '\000u\000\004',
	powerpointMCLTButtonDropDown = '\000u\000\005',
	powerpointMCLTSplitDropDown = '\000u\000\006',
	powerpointMCLTOCXDropDown = '\000u\000\007',
	powerpointMCLTGenericDropDown = '\000u\000\010',
	powerpointMCLTGraphicDropDown = '\000u\000\011',
	powerpointMCLTControlPopup = '\000u\000\012',
	powerpointMCLTGraphicPopup = '\000u\000\013',
	powerpointMCLTButtonPopup = '\000u\000\014',
	powerpointMCLTSplitButtonPopup = '\000u\000\015',
	powerpointMCLTSplitButtonMRUPopup = '\000u\000\016',
	powerpointMCLTControlLabel = '\000u\000\017',
	powerpointMCLTExpandingGrid = '\000u\000\020',
	powerpointMCLTSplitExpandingGrid = '\000u\000\021',
	powerpointMCLTControlGrid = '\000u\000\022',
	powerpointMCLTControlGauge = '\000u\000\023',
	powerpointMCLTGraphicCombobox = '\000u\000\024',
	powerpointMCLTControlPane = '\000u\000\025',
	powerpointMCLTActiveX = '\000u\000\026',
	powerpointMCLTControlGroup = '\000u\000\027',
	powerpointMCLTControlTab = '\000u\000\030',
	powerpointMCLTControlSpinner = '\000u\000\031'
};
typedef enum powerpointMCLT powerpointMCLT;

enum powerpointMBns {
	powerpointMBnsButtonStateUp = '\000v\000\000',
	powerpointMBnsButtonStateDown = '\000u\377\377',
	powerpointMBnsButtonStateUnset = '\000v\000\002'
};
typedef enum powerpointMBns powerpointMBns;

enum powerpointMcOu {
	powerpointMcOuNeither = '\000w\000\000',
	powerpointMcOuServer = '\000w\000\001',
	powerpointMcOuClient = '\000w\000\002',
	powerpointMcOuBoth = '\000w\000\003'
};
typedef enum powerpointMcOu powerpointMcOu;

enum powerpointMBTs {
	powerpointMBTsButtonAutomatic = '\000x\000\000',
	powerpointMBTsButtonIcon = '\000x\000\001',
	powerpointMBTsButtonCaption = '\000x\000\002',
	powerpointMBTsButtonIconAndCaption = '\000x\000\003'
};
typedef enum powerpointMBTs powerpointMBTs;

enum powerpointMXcb {
	powerpointMXcbComboboxStyleNormal = '\000y\000\000',
	powerpointMXcbComboboxStyleLabel = '\000y\000\001'
};
typedef enum powerpointMXcb powerpointMXcb;

enum powerpointMMNA {
	powerpointMMNANone = '\000{\000\000',
	powerpointMMNARandom = '\000{\000\001',
	powerpointMMNAUnfold = '\000{\000\002',
	powerpointMMNASlide = '\000{\000\003'
};
typedef enum powerpointMMNA powerpointMMNA;

enum powerpointMHlT {
	powerpointMHlTHyperlinkTypeTextRange = '\000\226\000\000',
	powerpointMHlTHyperlinkTypeShape = '\000\226\000\001',
	powerpointMHlTHyperlinkTypeInlineShape = '\000\226\000\002'
};
typedef enum powerpointMHlT powerpointMHlT;

enum powerpointMXiM {
	powerpointMXiMAppendString = '\000\256\000\000',
	powerpointMXiMPostString = '\000\256\000\001'
};
typedef enum powerpointMXiM powerpointMXiM;

enum powerpointMANT {
	powerpointMANTIdle = '\000|\000\001',
	powerpointMANTGreeting = '\000|\000\002',
	powerpointMANTGoodbye = '\000|\000\003',
	powerpointMANTBeginSpeaking = '\000|\000\004',
	powerpointMANTCharacterSuccessMajor = '\000|\000\006',
	powerpointMANTGetAttentionMajor = '\000|\000\013',
	powerpointMANTGetAttentionMinor = '\000|\000\014',
	powerpointMANTSearching = '\000|\000\015',
	powerpointMANTPrinting = '\000|\000\022',
	powerpointMANTGestureRight = '\000|\000\023',
	powerpointMANTWritingNotingSomething = '\000|\000\026',
	powerpointMANTWorkingAtSomething = '\000|\000\027',
	powerpointMANTThinking = '\000|\000\030',
	powerpointMANTSendingMail = '\000|\000\031',
	powerpointMANTListensToComputer = '\000|\000\032',
	powerpointMANTDisappear = '\000|\000\037',
	powerpointMANTAppear = '\000|\000 ',
	powerpointMANTGetArtsy = '\000|\000d',
	powerpointMANTGetTechy = '\000|\000e',
	powerpointMANTGetWizardy = '\000|\000f',
	powerpointMANTCheckingSomething = '\000|\000g',
	powerpointMANTLookDown = '\000|\000h',
	powerpointMANTLookDownLeft = '\000|\000i',
	powerpointMANTLookDownRight = '\000|\000j',
	powerpointMANTLookLeft = '\000|\000k',
	powerpointMANTLookRight = '\000|\000l',
	powerpointMANTLookUp = '\000|\000m',
	powerpointMANTLookUpLeft = '\000|\000n',
	powerpointMANTLookUpRight = '\000|\000o',
	powerpointMANTSaving = '\000|\000p',
	powerpointMANTGestureDown = '\000|\000q',
	powerpointMANTGestureLeft = '\000|\000r',
	powerpointMANTGestureUp = '\000|\000s',
	powerpointMANTEmptyTrash = '\000|\000t'
};
typedef enum powerpointMANT powerpointMANT;

enum powerpointMBSt {
	powerpointMBStButtonNone = '\000}\000\000',
	powerpointMBStButtonOk = '\000}\000\001',
	powerpointMBStButtonCancel = '\000}\000\002',
	powerpointMBStButtonsOkCancel = '\000}\000\003',
	powerpointMBStButtonsYesNo = '\000}\000\004',
	powerpointMBStButtonsYesNoCancel = '\000}\000\005',
	powerpointMBStButtonsBackClose = '\000}\000\006',
	powerpointMBStButtonsNextClose = '\000}\000\007',
	powerpointMBStButtonsBackNextClose = '\000}\000\010',
	powerpointMBStButtonsRetryCancel = '\000}\000\011',
	powerpointMBStButtonsAbortRetryIgnore = '\000}\000\012',
	powerpointMBStButtonsSearchClose = '\000}\000\013',
	powerpointMBStButtonsBackNextSnooze = '\000}\000\014',
	powerpointMBStButtonsTipsOptionsClose = '\000}\000\015',
	powerpointMBStButtonsYesAllNoCancel = '\000}\000\016'
};
typedef enum powerpointMBSt powerpointMBSt;

enum powerpointMIct {
	powerpointMIctIconNone = '\000~\000\000',
	powerpointMIctIconApplication = '\000~\000\001',
	powerpointMIctIconAlert = '\000~\000\002',
	powerpointMIctIconTip = '\000~\000\003',
	powerpointMIctIconAlertCritical = '\000~\000e',
	powerpointMIctIconAlertWarning = '\000~\000g',
	powerpointMIctIconAlertInfo = '\000~\000h'
};
typedef enum powerpointMIct powerpointMIct;

enum powerpointMWAt {
	powerpointMWAtInactive = '\000\202\000\000',
	powerpointMWAtActive = '\000\202\000\001',
	powerpointMWAtSuspend = '\000\202\000\002',
	powerpointMWAtResume = '\000\202\000\003'
};
typedef enum powerpointMWAt powerpointMWAt;

enum powerpointMeDP {
	powerpointMeDPPropertyTypeNumber = '\000\242\000\001',
	powerpointMeDPPropertyTypeBoolean = '\000\242\000\002',
	powerpointMeDPPropertyTypeDate = '\000\242\000\003',
	powerpointMeDPPropertyTypeString = '\000\242\000\004',
	powerpointMeDPPropertyTypeFloat = '\000\242\000\005'
};
typedef enum powerpointMeDP powerpointMeDP;

enum powerpointMASc {
	powerpointMAScMsoAutomationSecurityLow = '\000\243\000\001',
	powerpointMAScMsoAutomationSecurityByUI = '\000\243\000\002',
	powerpointMAScMsoAutomationSecurityForceDisable = '\000\243\000\003'
};
typedef enum powerpointMASc powerpointMASc;

enum powerpointMSsz {
	powerpointMSszResolution544x376 = '\000\204\000\000',
	powerpointMSszResolution640x480 = '\000\204\000\001',
	powerpointMSszResolution720x512 = '\000\204\000\002',
	powerpointMSszResolution800x600 = '\000\204\000\003',
	powerpointMSszResolution1024x768 = '\000\204\000\004',
	powerpointMSszResolution1152x882 = '\000\204\000\005',
	powerpointMSszResolution1152x900 = '\000\204\000\006',
	powerpointMSszResolution1280x1024 = '\000\204\000\007',
	powerpointMSszResolution1600x1200 = '\000\204\000\010',
	powerpointMSszResolution1800x1440 = '\000\204\000\011',
	powerpointMSszResolution1920x1200 = '\000\204\000\012'
};
typedef enum powerpointMSsz powerpointMSsz;

enum powerpointMChS {
	powerpointMChSArabicCharacterSet = '\000\205\000\001',
	powerpointMChSCyrillicCharacterSet = '\000\205\000\002',
	powerpointMChSEnglishCharacterSet = '\000\205\000\003',
	powerpointMChSGreekCharacterSet = '\000\205\000\004',
	powerpointMChSHebrewCharacterSet = '\000\205\000\005',
	powerpointMChSJapaneseCharacterSet = '\000\205\000\006',
	powerpointMChSKoreanCharacterSet = '\000\205\000\007',
	powerpointMChSMultilingualUnicodeCharacterSet = '\000\205\000\010',
	powerpointMChSSimplifiedChineseCharacterSet = '\000\205\000\011',
	powerpointMChSThaiCharacterSet = '\000\205\000\012',
	powerpointMChSTraditionalChineseCharacterSet = '\000\205\000\013',
	powerpointMChSVietnameseCharacterSet = '\000\205\000\014'
};
typedef enum powerpointMChS powerpointMChS;

enum powerpointMtEn {
	powerpointMtEnEncodingThai = '\000\213\003j',
	powerpointMtEnEncodingJapaneseShiftJIS = '\000\213\003\244',
	powerpointMtEnEncodingSimplifiedChinese = '\000\213\003\250',
	powerpointMtEnEncodingKorean = '\000\213\003\265',
	powerpointMtEnEncodingBig5TraditionalChinese = '\000\213\003\266',
	powerpointMtEnEncodingLittleEndian = '\000\213\004\260',
	powerpointMtEnEncodingBigEndian = '\000\213\004\261',
	powerpointMtEnEncodingCentralEuropean = '\000\213\004\342',
	powerpointMtEnEncodingCyrillic = '\000\213\004\343',
	powerpointMtEnEncodingWestern = '\000\213\004\344',
	powerpointMtEnEncodingGreek = '\000\213\004\345',
	powerpointMtEnEncodingTurkish = '\000\213\004\346',
	powerpointMtEnEncodingHebrew = '\000\213\004\347',
	powerpointMtEnEncodingArabic = '\000\213\004\350',
	powerpointMtEnEncodingBaltic = '\000\213\004\351',
	powerpointMtEnEncodingVietnamese = '\000\213\004\352',
	powerpointMtEnEncodingISO88591Latin1 = '\000\213o\257',
	powerpointMtEnEncodingISO88592CentralEurope = '\000\213o\260',
	powerpointMtEnEncodingISO88593Latin3 = '\000\213o\261',
	powerpointMtEnEncodingISO88594Baltic = '\000\213o\262',
	powerpointMtEnEncodingISO88595Cyrillic = '\000\213o\263',
	powerpointMtEnEncodingISO88596Arabic = '\000\213o\264',
	powerpointMtEnEncodingISO88597Greek = '\000\213o\265',
	powerpointMtEnEncodingISO88598Hebrew = '\000\213o\266',
	powerpointMtEnEncodingISO88599Turkish = '\000\213o\267',
	powerpointMtEnEncodingISO885915Latin9 = '\000\213o\275',
	powerpointMtEnEncodingISO2022JapaneseNoHalfWidthKatakana = '\000\213\304,',
	powerpointMtEnEncodingISO2022JapaneseJISX02021984 = '\000\213\304-',
	powerpointMtEnEncodingISO2022JapaneseJISX02011989 = '\000\213\304.',
	powerpointMtEnEncodingISO2022KR = '\000\213\3041',
	powerpointMtEnEncodingISO2022CNTraditionalChinese = '\000\213\3043',
	powerpointMtEnEncodingISO2022CNSimplifiedChinese = '\000\213\3045',
	powerpointMtEnEncodingMacRoman = '\000\213\'\020',
	powerpointMtEnEncodingMacJapanese = '\000\213\'\021',
	powerpointMtEnEncodingMacTraditionalChinese = '\000\213\'\022',
	powerpointMtEnEncodingMacKorean = '\000\213\'\023',
	powerpointMtEnEncodingMacArabic = '\000\213\'\024',
	powerpointMtEnEncodingMacHebrew = '\000\213\'\025',
	powerpointMtEnEncodingMacGreek1 = '\000\213\'\026',
	powerpointMtEnEncodingMacCyrillic = '\000\213\'\027',
	powerpointMtEnEncodingMacSimplifiedChineseGB2312 = '\000\213\'\030',
	powerpointMtEnEncodingMacRomania = '\000\213\'\032',
	powerpointMtEnEncodingMacUkraine = '\000\213\'!',
	powerpointMtEnEncodingMacLatin2 = '\000\213\'-',
	powerpointMtEnEncodingMacIcelandic = '\000\213\'_',
	powerpointMtEnEncodingMacTurkish = '\000\213\'a',
	powerpointMtEnEncodingMacCroatia = '\000\213\'b',
	powerpointMtEnEncodingEBCDICUSCanada = '\000\213\000%',
	powerpointMtEnEncodingEBCDICInternational = '\000\213\001\364',
	powerpointMtEnEncodingEBCDICMultilingualROECELatin2 = '\000\213\003f',
	powerpointMtEnEncodingEBCDICGreekModern = '\000\213\003k',
	powerpointMtEnEncodingEBCDICTurkishLatin5 = '\000\213\004\002',
	powerpointMtEnEncodingEBCDICGermany = '\000\213O1',
	powerpointMtEnEncodingEBCDICDenmarkNorway = '\000\213O5',
	powerpointMtEnEncodingEBCDICFinlandSweden = '\000\213O6',
	powerpointMtEnEncodingEBCDICItaly = '\000\213O8',
	powerpointMtEnEncodingEBCDICLatinAmericaSpain = '\000\213O<',
	powerpointMtEnEncodingEBCDICUnitedKingdom = '\000\213O=',
	powerpointMtEnEncodingEBCDICJapaneseKatakanaExtended = '\000\213OB',
	powerpointMtEnEncodingEBCDICFrance = '\000\213OI',
	powerpointMtEnEncodingEBCDICArabic = '\000\213O\304',
	powerpointMtEnEncodingEBCDICGreek = '\000\213O\307',
	powerpointMtEnEncodingEBCDICHebrew = '\000\213O\310',
	powerpointMtEnEncodingEBCDICKoreanExtended = '\000\213Qa',
	powerpointMtEnEncodingEBCDICThai = '\000\213Qf',
	powerpointMtEnEncodingEBCDICIcelandic = '\000\213Q\207',
	powerpointMtEnEncodingEBCDICTurkish = '\000\213Q\251',
	powerpointMtEnEncodingEBCDICRussian = '\000\213Q\220',
	powerpointMtEnEncodingEBCDICSerbianBulgarian = '\000\213R!',
	powerpointMtEnEncodingEBCDICJapaneseKatakanaExtendedAndJapanese = '\000\213\306\362',
	powerpointMtEnEncodingEBCDICUSCanadaAndJapanese = '\000\213\306\363',
	powerpointMtEnEncodingEBCDICExtendedAndKorean = '\000\213\306\365',
	powerpointMtEnEncodingEBCDICSimplifiedChineseExtendedAndSimplifiedChinese = '\000\213\306\367',
	powerpointMtEnEncodingEBCDICUSCanadaAndTraditionalChinese = '\000\213\306\371',
	powerpointMtEnEncodingEBCDICJapaneseLatinExtendedAndJapanese = '\000\213\306\373',
	powerpointMtEnEncodingOEMUnitedStates = '\000\213\001\265',
	powerpointMtEnEncodingOEMGreek = '\000\213\002\341',
	powerpointMtEnEncodingOEMBaltic = '\000\213\003\007',
	powerpointMtEnEncodingOEMMultilingualLatinI = '\000\213\003R',
	powerpointMtEnEncodingOEMMultilingualLatinII = '\000\213\003T',
	powerpointMtEnEncodingOEMCyrillic = '\000\213\003W',
	powerpointMtEnEncodingOEMTurkish = '\000\213\003Y',
	powerpointMtEnEncodingOEMPortuguese = '\000\213\003\\',
	powerpointMtEnEncodingOEMIcelandic = '\000\213\003]',
	powerpointMtEnEncodingOEMHebrew = '\000\213\003^',
	powerpointMtEnEncodingOEMCanadianFrench = '\000\213\003_',
	powerpointMtEnEncodingOEMArabic = '\000\213\003`',
	powerpointMtEnEncodingOEMNordic = '\000\213\003a',
	powerpointMtEnEncodingOEMCyrillicII = '\000\213\003b',
	powerpointMtEnEncodingOEMModernGreek = '\000\213\003e',
	powerpointMtEnEncodingEUCJapanese = '\000\213\312\334',
	powerpointMtEnEncodingEUCChineseSimplifiedChinese = '\000\213\312\340',
	powerpointMtEnEncodingEUCKorean = '\000\213\312\355',
	powerpointMtEnEncodingEUCTaiwaneseTraditionalChinese = '\000\213\312\356',
	powerpointMtEnEncodingDevanagari = '\000\213\336\252',
	powerpointMtEnEncodingBengali = '\000\213\336\253',
	powerpointMtEnEncodingTamil = '\000\213\336\254',
	powerpointMtEnEncodingTelugu = '\000\213\336\255',
	powerpointMtEnEncodingAssamese = '\000\213\336\256',
	powerpointMtEnEncodingOriya = '\000\213\336\257',
	powerpointMtEnEncodingKannada = '\000\213\336\260',
	powerpointMtEnEncodingMalayalam = '\000\213\336\261',
	powerpointMtEnEncodingGujarati = '\000\213\336\262',
	powerpointMtEnEncodingPunjabi = '\000\213\336\263',
	powerpointMtEnEncodingArabicASMO = '\000\213\002\304',
	powerpointMtEnEncodingArabicTransparentASMO = '\000\213\002\320',
	powerpointMtEnEncodingKoreanJohab = '\000\213\005Q',
	powerpointMtEnEncodingTaiwanCNS = '\000\213N ',
	powerpointMtEnEncodingTaiwanTCA = '\000\213N!',
	powerpointMtEnEncodingTaiwanEten = '\000\213N\"',
	powerpointMtEnEncodingTaiwanIBM5550 = '\000\213N#',
	powerpointMtEnEncodingTaiwanTeletext = '\000\213N$',
	powerpointMtEnEncodingTaiwanWang = '\000\213N%',
	powerpointMtEnEncodingIA5IRV = '\000\213N\211',
	powerpointMtEnEncodingIA5German = '\000\213N\212',
	powerpointMtEnEncodingIA5Swedish = '\000\213N\213',
	powerpointMtEnEncodingIA5Norwegian = '\000\213N\214',
	powerpointMtEnEncodingUSASCII = '\000\213N\237',
	powerpointMtEnEncodingT61 = '\000\213O%',
	powerpointMtEnEncodingISO6937NonspacingAccent = '\000\213O-',
	powerpointMtEnEncodingKOI8R = '\000\213Q\202',
	powerpointMtEnEncodingExtAlphaLowercase = '\000\213R#',
	powerpointMtEnEncodingKOI8U = '\000\213Uj',
	powerpointMtEnEncodingEuropa3 = '\000\213qI',
	powerpointMtEnEncodingHZGBSimplifiedChinese = '\000\213\316\310',
	powerpointMtEnEncodingUTF7 = '\000\213\375\350',
	powerpointMtEnEncodingUTF8 = '\000\213\375\351'
};
typedef enum powerpointMtEn powerpointMtEn;

enum powerpoint4000 {
	powerpoint4000CommandBar = 'msCB',
	powerpoint4000CommandBarControl = 'mCBC'
};
typedef enum powerpoint4000 powerpoint4000;

enum powerpointMHyT {
	powerpointMHyTHyperlinkRange = '\000\310\000\000',
	powerpointMHyTHyperlinkShape = '\000\310\000\001',
	powerpointMHyTHyperlinkInlineShape = '\000\310\000\002'
};
typedef enum powerpointMHyT powerpointMHyT;

enum powerpointPWnS {
	powerpointPWnSWindowNormal = '\000\311\000\001',
	powerpointPWnSWindowMinimized = '\000\311\000\002'
};
typedef enum powerpointPWnS powerpointPWnS;

enum powerpointPArS {
	powerpointPArSArrangeTiled = '\000\321\000\001',
	powerpointPArSArrangeCascade = '\000\321\000\002'
};
typedef enum powerpointPArS powerpointPArS;

enum powerpointPVTy {
	powerpointPVTySlideView = '\000\312\000\001',
	powerpointPVTyMasterView = '\000\312\000\002',
	powerpointPVTyPageView = '\000\312\000\003',
	powerpointPVTyHandoutMasterView = '\000\312\000\004',
	powerpointPVTyNotesMasterView = '\000\312\000\005',
	powerpointPVTyOutlineView = '\000\312\000\006',
	powerpointPVTySlideSorterView = '\000\312\000\007',
	powerpointPVTyTitleMasterView = '\000\312\000\010',
	powerpointPVTyNormalView = '\000\312\000\011',
	powerpointPVTyThumbnailView = '\000\312\000\012',
	powerpointPVTyThumbnailMasterView = '\000\312\000\013'
};
typedef enum powerpointPVTy powerpointPVTy;

enum powerpointPCSi {
	powerpointPCSiSchemeColorUnset = '\000\362\377\376',
	powerpointPCSiNotASchemeColor = '\000\363\000\000',
	powerpointPCSiBackgroundScheme = '\000\363\000\001',
	powerpointPCSiForegroundScheme = '\000\363\000\002',
	powerpointPCSiShadowScheme = '\000\363\000\003',
	powerpointPCSiTitleScheme = '\000\363\000\004',
	powerpointPCSiFillScheme = '\000\363\000\005',
	powerpointPCSiAccent1Scheme = '\000\363\000\006',
	powerpointPCSiAccent2Scheme = '\000\363\000\007',
	powerpointPCSiAccent3Scheme = '\000\363\000\010'
};
typedef enum powerpointPCSi powerpointPCSi;

enum powerpointSSzT {
	powerpointSSzTSlideSizeOnScreen = '\000\313\000\001',
	powerpointSSzTSlideSizeLetterPaper = '\000\313\000\002',
	powerpointSSzTSlideSizeA4Paper = '\000\313\000\003',
	powerpointSSzTSlideSize35MM = '\000\313\000\004',
	powerpointSSzTSlideSizeOverhead = '\000\313\000\005',
	powerpointSSzTSlideSizeBanner = '\000\313\000\006',
	powerpointSSzTSlideSizeCustom = '\000\313\000\007'
};
typedef enum powerpointSSzT powerpointSSzT;

enum powerpointPSAT {
	powerpointPSATSaveAsPresentation = '\000\314\000\001',
	powerpointPSATSaveAsTemplate = '\000\314\000\005',
	powerpointPSATSaveAsRTF = '\000\314\000\006',
	powerpointPSATSaveAsShow = '\000\314\000\007',
	powerpointPSATSaveAsAddIn = '\000\314\000\010',
	powerpointPSATSaveAsDefault = '\000\314\000\012',
	powerpointPSATSaveAsHTML = '\000\314\000\013',
	powerpointPSATSaveAsMovie = '\000\314\000\014',
	powerpointPSATSaveAsPackage = '\000\314\000\015',
	powerpointPSATSaveAsPDF = '\000\314\000\016',
	powerpointPSATSaveAsOpenXMLPresentation = '\000\314\000\017',
	powerpointPSATSaveAsOpenXMLPresentationMacroEnabled = '\000\314\000\020',
	powerpointPSATSaveAsOpenXMLShow = '\000\314\000\021',
	powerpointPSATSaveAsOpenXMLShowMacroEnabled = '\000\314\000\022',
	powerpointPSATSaveAsOpenXMLTemplate = '\000\314\000\023',
	powerpointPSATSaveAsOpenXMLTemplateMacroEnabled = '\000\314\000\024',
	powerpointPSATSaveAsOpenXMLTheme = '\000\314\000\025',
	powerpointPSATSaveAsGIF = '\000\314\000\026',
	powerpointPSATSaveAsJPG = '\000\314\000\027',
	powerpointPSATSaveAsPNG = '\000\314\000\030',
	powerpointPSATSaveAsBMP = '\000\314\000\031',
	powerpointPSATSaveAsTIF = '\000\314\000\032'
};
typedef enum powerpointPSAT powerpointPSAT;

enum powerpointPTst {
	powerpointPTstTextStyleDefault = '\001*\000\001',
	powerpointPTstTextStyleTitle = '\001*\000\002',
	powerpointPTstTextStyleBody = '\001*\000\003'
};
typedef enum powerpointPTst powerpointPTst;

enum powerpointPSLo {
	powerpointPSLoSlideLayoutUnset = '\000\314\377\376',
	powerpointPSLoSlideLayoutTitleSlide = '\000\315\000\001',
	powerpointPSLoSlideLayoutTextSlide = '\000\315\000\002',
	powerpointPSLoSlideLayoutTwoColumnText = '\000\315\000\003',
	powerpointPSLoSlideLayoutTable = '\000\315\000\004',
	powerpointPSLoSlideLayoutTextAndChart = '\000\315\000\005',
	powerpointPSLoSlideLayoutChartAndText = '\000\315\000\006',
	powerpointPSLoSlideLayoutOrgchart = '\000\315\000\007',
	powerpointPSLoSlideLayoutChart = '\000\315\000\010',
	powerpointPSLoSlideLayoutTextAndClipart = '\000\315\000\011',
	powerpointPSLoSlideLayoutClipartAndText = '\000\315\000\012',
	powerpointPSLoSlideLayoutTitleOnly = '\000\315\000\013',
	powerpointPSLoSlideLayoutBlank = '\000\315\000\014',
	powerpointPSLoSlideLayoutTextAndObject = '\000\315\000\015',
	powerpointPSLoSlideLayoutObjectAndText = '\000\315\000\016',
	powerpointPSLoSlideLayoutLargeObject = '\000\315\000\017',
	powerpointPSLoSlideLayoutObject = '\000\315\000\020',
	powerpointPSLoSlideLayoutMediaClip = '\000\315\000\021',
	powerpointPSLoSlideLayoutMediaClipAndText = '\000\315\000\022',
	powerpointPSLoSlideLayoutObjectOverText = '\000\315\000\023',
	powerpointPSLoSlideLayoutTextOverObject = '\000\315\000\024',
	powerpointPSLoSlideLayoutTextAndTwoObjects = '\000\315\000\025',
	powerpointPSLoSlideLayoutTwoObjectsAndText = '\000\315\000\026',
	powerpointPSLoSlideLayoutTwoObjectsOverText = '\000\315\000\027',
	powerpointPSLoSlideLayoutFourObjects = '\000\315\000\030',
	powerpointPSLoSlideLayoutVerticalText = '\000\315\000\031',
	powerpointPSLoSlideLayoutClipartAndVerticalText = '\000\315\000\032',
	powerpointPSLoSlideLayoutVerticalTitleAndText = '\000\315\000\033',
	powerpointPSLoSlideLayoutVerticalTitleAndTextOverChart = '\000\315\000\034',
	powerpointPSLoSlideLayoutTwoObjects = '\000\315\000\035',
	powerpointPSLoSlideLayoutObjectAndTwoObjects = '\000\315\000\036',
	powerpointPSLoSlideLayoutTwoObjectsAndObject = '\000\315\000\037',
	powerpointPSLoSlideLayoutCustom = '\000\315\000 ',
	powerpointPSLoSlideLayoutSectionHeader = '\000\315\000!',
	powerpointPSLoSlideLayoutComparison = '\000\315\000\"',
	powerpointPSLoSlideLayoutContentWithCaption = '\000\315\000#',
	powerpointPSLoSlideLayoutPictureWithCaption = '\000\315\000$'
};
typedef enum powerpointPSLo powerpointPSLo;

enum powerpointPEeF {
	powerpointPEeFEntryEffectAppear = '\000\366\017\004',
	powerpointPEeFEntryEffectBlindsHorizontal = '\000\366\003\001',
	powerpointPEeFEntryEffectBlindsVertical = '\000\366\003\002',
	powerpointPEeFEntryEffectBoxDown = '\000\366\017U',
	powerpointPEeFEntryEffectBoxIn = '\000\366\014\002',
	powerpointPEeFEntryEffectBoxLeft = '\000\366\017R',
	powerpointPEeFEntryEffectBoxOut = '\000\366\014\001',
	powerpointPEeFEntryEffectBoxRight = '\000\366\017T',
	powerpointPEeFEntryEffectBoxUp = '\000\366\017S',
	powerpointPEeFEntryEffectCheckerboardAcross = '\000\366\004\001',
	powerpointPEeFEntryEffectCheckerboardDown = '\000\366\004\002',
	powerpointPEeFEntryEffectCircle = '\000\366\017\005',
	powerpointPEeFEntryEffectCollapseAcross = '\000\366\015\027',
	powerpointPEeFEntryEffectCollapseBottom = '\000\366\015\033',
	powerpointPEeFEntryEffectCollapseLeft = '\000\366\015\030',
	powerpointPEeFEntryEffectCollapseRight = '\000\366\015\032',
	powerpointPEeFEntryEffectCollapseUp = '\000\366\015\031',
	powerpointPEeFEntryEffectCombHorizontal = '\000\366\017\007',
	powerpointPEeFEntryEffectCombVertical = '\000\366\017\010',
	powerpointPEeFEntryEffectConveyorLeft = '\000\366\017*',
	powerpointPEeFEntryEffectConveyorRight = '\000\366\017+',
	powerpointPEeFEntryEffectCoverDown = '\000\366\005\004',
	powerpointPEeFEntryEffectCoverLeftDown = '\000\366\005\007',
	powerpointPEeFEntryEffectCoverLeftUp = '\000\366\005\005',
	powerpointPEeFEntryEffectCoverLeft = '\000\366\005\001',
	powerpointPEeFEntryEffectCoverRightDown = '\000\366\005\010',
	powerpointPEeFEntryEffectCoverRightUp = '\000\366\005\006',
	powerpointPEeFEntryEffectCoverRight = '\000\366\005\003',
	powerpointPEeFEntryEffectCoverUp = '\000\366\005\002',
	powerpointPEeFEntryEffectCrawlFromDown = '\000\366\015\020',
	powerpointPEeFEntryEffectCrawlFromLeft = '\000\366\015\015',
	powerpointPEeFEntryEffectCrawlFromRight = '\000\366\015\017',
	powerpointPEeFEntryEffectCrawlFromUp = '\000\366\015\016',
	powerpointPEeFEntryEffectCubeDown = '\000\366\017M',
	powerpointPEeFEntryEffectCubeLeft = '\000\366\017J',
	powerpointPEeFEntryEffectCubeRight = '\000\366\017K',
	powerpointPEeFEntryEffectCubeUp = '\000\366\017L',
	powerpointPEeFEntryEffectCutBlack = '\000\366\001\002',
	powerpointPEeFEntryEffectCut = '\000\366\001\001',
	powerpointPEeFEntryEffectDiamond = '\000\366\017\006',
	powerpointPEeFEntryEffectDissolve = '\000\366\006\001',
	powerpointPEeFEntryEffectDoorsHorizontal = '\000\366\017-',
	powerpointPEeFEntryEffectDoorsVertical = '\000\366\017,',
	powerpointPEeFEntryEffectFadeBlack = '\000\366\007\001',
	powerpointPEeFEntryEffectFadeFlyFromBottomLeft = '\000\366\015$',
	powerpointPEeFEntryEffectFadeFlyFromBottomRight = '\000\366\015%',
	powerpointPEeFEntryEffectFadeFlyFromBottom = '\000\366\015!',
	powerpointPEeFEntryEffectFadeFlyFromLeft = '\000\366\015\036',
	powerpointPEeFEntryEffectFadeFlyFromRight = '\000\366\015 ',
	powerpointPEeFEntryEffectFadeFlyFromTopLeft = '\000\366\015\"',
	powerpointPEeFEntryEffectFadeFlyFromTopRight = '\000\366\015#',
	powerpointPEeFEntryEffectFadeFlyFromTop = '\000\366\015\037',
	powerpointPEeFEntryEffectFadeSmoothly = '\000\366\017\011',
	powerpointPEeFEntryEffectFade = '\000\366\017\011',
	powerpointPEeFEntryEffectFerrisWheelLeft = '\000\366\017;',
	powerpointPEeFEntryEffectFerrisWheelRight = '\000\366\017<',
	powerpointPEeFEntryEffectFlashOnceFast = '\000\366\017\001',
	powerpointPEeFEntryEffectFlashOnceMedium = '\000\366\017\002',
	powerpointPEeFEntryEffectFlashOnceSlow = '\000\366\017\003',
	powerpointPEeFEntryEffectFlashbulb = '\000\366\017E',
	powerpointPEeFEntryEffectFlipDown = '\000\366\017D',
	powerpointPEeFEntryEffectFlipLeft = '\000\366\017A',
	powerpointPEeFEntryEffectFlipRight = '\000\366\017B',
	powerpointPEeFEntryEffectFlipUp = '\000\366\017C',
	powerpointPEeFEntryEffectFlyFromBottomLeft = '\000\366\015\007',
	powerpointPEeFEntryEffectFlyFromBottomRight = '\000\366\015\010',
	powerpointPEeFEntryEffectFlyFromBottom = '\000\366\015\004',
	powerpointPEeFEntryEffectFlyFromLeft = '\000\366\015\001',
	powerpointPEeFEntryEffectFlyFromRight = '\000\366\015\003',
	powerpointPEeFEntryEffectFlyFromTopLeft = '\000\366\015\005',
	powerpointPEeFEntryEffectFlyFromTopRight = '\000\366\015\006',
	powerpointPEeFEntryEffectFlyFromTop = '\000\366\015\002',
	powerpointPEeFEntryEffectFlyThroughInBounce = '\000\366\0174',
	powerpointPEeFEntryEffectFlyThroughIn = '\000\366\0172',
	powerpointPEeFEntryEffectFlyThroughOutBounce = '\000\366\0175',
	powerpointPEeFEntryEffectFlyThroughOut = '\000\366\0173',
	powerpointPEeFEntryEffectGalleryLeft = '\000\366\017(',
	powerpointPEeFEntryEffectGalleryRight = '\000\366\017)',
	powerpointPEeFEntryEffectGlitterDiamondDown = '\000\366\017#',
	powerpointPEeFEntryEffectGlitterDiamondLeft = '\000\366\017 ',
	powerpointPEeFEntryEffectGlitterDiamondRight = '\000\366\017\"',
	powerpointPEeFEntryEffectGlitterDiamondUp = '\000\366\017!',
	powerpointPEeFEntryEffectGlitterHexagonDown = '\000\366\017\'',
	powerpointPEeFEntryEffectGlitterHexagonLeft = '\000\366\017$',
	powerpointPEeFEntryEffectGlitterHexagonRight = '\000\366\017&',
	powerpointPEeFEntryEffectGlitterHexagonUp = '\000\366\017%',
	powerpointPEeFEntryEffectHoneycomb = '\000\366\017:',
	powerpointPEeFEntryEffectNewsFlash = '\000\366\017\012',
	powerpointPEeFEntryEffectNone = '\000\366\000\000',
	powerpointPEeFEntryEffectOrbitDown = '\000\366\017Y',
	powerpointPEeFEntryEffectOrbitLeft = '\000\366\017V',
	powerpointPEeFEntryEffectOrbitRight = '\000\366\017X',
	powerpointPEeFEntryEffectOrbitUp = '\000\366\017W',
	powerpointPEeFEntryEffectPanDown = '\000\366\017]',
	powerpointPEeFEntryEffectPanLeft = '\000\366\017Z',
	powerpointPEeFEntryEffectPanRight = '\000\366\017\\',
	powerpointPEeFEntryEffectPanUp = '\000\366\017[',
	powerpointPEeFEntryEffectPeekFromDown = '\000\366\015\012',
	powerpointPEeFEntryEffectPeekFromLeft = '\000\366\015\011',
	powerpointPEeFEntryEffectPeekFromRight = '\000\366\015\013',
	powerpointPEeFEntryEffectPeekFromUp = '\000\366\015\014',
	powerpointPEeFEntryEffectPlus = '\000\366\017\013',
	powerpointPEeFEntryEffectPushDown = '\000\366\017\014',
	powerpointPEeFEntryEffectPushLeft = '\000\366\017\015',
	powerpointPEeFEntryEffectPushRight = '\000\366\017\016',
	powerpointPEeFEntryEffectPushUp = '\000\366\017\017',
	powerpointPEeFEntryEffectRandomBarsHorizontal = '\000\366\011\001',
	powerpointPEeFEntryEffectRandomBarsVertical = '\000\366\011\002',
	powerpointPEeFEntryEffectRandom = '\000\366\002\001',
	powerpointPEeFEntryEffectRevealBlackLeft = '\000\366\0178',
	powerpointPEeFEntryEffectRevealBlackRight = '\000\366\0179',
	powerpointPEeFEntryEffectRevealSmoothLeft = '\000\366\0176',
	powerpointPEeFEntryEffectRevealSmoothRight = '\000\366\0177',
	powerpointPEeFEntryEffectRippleCenter = '\000\366\017\033',
	powerpointPEeFEntryEffectRippleLeftDown = '\000\366\017\036',
	powerpointPEeFEntryEffectRippleLeftUp = '\000\366\017\035',
	powerpointPEeFEntryEffectRippleRightDown = '\000\366\017\037',
	powerpointPEeFEntryEffectRippleRightUp = '\000\366\017\034',
	powerpointPEeFEntryEffectRotateDown = '\000\366\017Q',
	powerpointPEeFEntryEffectRotateLeft = '\000\366\017N',
	powerpointPEeFEntryEffectRotateRight = '\000\366\017P',
	powerpointPEeFEntryEffectRotateUp = '\000\366\017O',
	powerpointPEeFEntryEffectShredRectangleIn = '\000\366\017H',
	powerpointPEeFEntryEffectShredRectangleOut = '\000\366\017I',
	powerpointPEeFEntryEffectShredStripsIn = '\000\366\017F',
	powerpointPEeFEntryEffectShredStripsOut = '\000\366\017G',
	powerpointPEeFEntryEffectSpinner = '\000\366\017\012',
	powerpointPEeFEntryEffectSpiral = '\000\366\015\035',
	powerpointPEeFEntryEffectSplitHorizontalIn = '\000\366\016\002',
	powerpointPEeFEntryEffectSplitHorizontalOut = '\000\366\016\001',
	powerpointPEeFEntryEffectSplitVerticalIn = '\000\366\016\004',
	powerpointPEeFEntryEffectSplitVerticalOut = '\000\366\016\003',
	powerpointPEeFEntryEffectStretchAcross = '\000\366\015\027',
	powerpointPEeFEntryEffectStretchDown = '\000\366\015\033',
	powerpointPEeFEntryEffectStretchLeft = '\000\366\015\030',
	powerpointPEeFEntryEffectStretchRight = '\000\366\015\032',
	powerpointPEeFEntryEffectStretchUp = '\000\366\015\031',
	powerpointPEeFEntryEffectStripsDownLeft = '\000\366\012\003',
	powerpointPEeFEntryEffectStripsDownRight = '\000\366\012\004',
	powerpointPEeFEntryEffectStripsLeftDown = '\000\366\012\007',
	powerpointPEeFEntryEffectStripsLeftUp = '\000\366\012\005',
	powerpointPEeFEntryEffectStripsRightDown = '\000\366\012\010',
	powerpointPEeFEntryEffectStripsRightUp = '\000\366\012\006',
	powerpointPEeFEntryEffectStripsUpLeft = '\000\366\012\001',
	powerpointPEeFEntryEffectStripsUpRight = '\000\366\012\002',
	powerpointPEeFEntryEffectSwitchDown = '\000\366\017@',
	powerpointPEeFEntryEffectSwitchLeft = '\000\366\017=',
	powerpointPEeFEntryEffectSwitchRight = '\000\366\017\?',
	powerpointPEeFEntryEffectSwitchUp = '\000\366\017>',
	powerpointPEeFEntryEffectSwivel = '\000\366\015\034',
	powerpointPEeFEntryEffectUncoverDown = '\000\366\010\004',
	powerpointPEeFEntryEffectUncoverLeftDown = '\000\366\010\007',
	powerpointPEeFEntryEffectUncoverLeftUp = '\000\366\010\005',
	powerpointPEeFEntryEffectUncoverLeft = '\000\366\010\001',
	powerpointPEeFEntryEffectUncoverRightDown = '\000\366\010\010',
	powerpointPEeFEntryEffectUncoverRightUp = '\000\366\010\006',
	powerpointPEeFEntryEffectUncoverRight = '\000\366\010\003',
	powerpointPEeFEntryEffectUncoverUp = '\000\366\010\002',
	powerpointPEeFEntryEffectUnset = '\000\365\377\376',
	powerpointPEeFEntryEffectVortexDown = '\000\366\017\032',
	powerpointPEeFEntryEffectVortexLeft = '\000\366\017\027',
	powerpointPEeFEntryEffectVortexRight = '\000\366\017\031',
	powerpointPEeFEntryEffectVortexUp = '\000\366\017\030',
	powerpointPEeFEntryEffectWarpIn = '\000\366\0170',
	powerpointPEeFEntryEffectWarpOut = '\000\366\0171',
	powerpointPEeFEntryEffectWedge = '\000\366\017\020',
	powerpointPEeFEntryEffectWheel1Spoke = '\000\366\017\021',
	powerpointPEeFEntryEffectWheel2Spokes = '\000\366\017\022',
	powerpointPEeFEntryEffectWheel3Spokes = '\000\366\017\023',
	powerpointPEeFEntryEffectWheel4Spokes = '\000\366\017\024',
	powerpointPEeFEntryEffectWheel8Spokes = '\000\366\017\025',
	powerpointPEeFEntryEffectWheelReverse1Spoke = '\000\366\017\026',
	powerpointPEeFEntryEffectWindowHorizontal = '\000\366\017/',
	powerpointPEeFEntryEffectWindowVertical = '\000\366\017.',
	powerpointPEeFEntryEffectWipeDown = '\000\366\013\004',
	powerpointPEeFEntryEffectWipeLeft = '\000\366\013\001',
	powerpointPEeFEntryEffectWipeRight = '\000\366\013\003',
	powerpointPEeFEntryEffectWipeUp = '\000\366\013\002',
	powerpointPEeFEntryEffectZoomBottom = '\000\366\015\026',
	powerpointPEeFEntryEffectZoomCenter = '\000\366\015\025',
	powerpointPEeFEntryEffectZoomInSlightly = '\000\366\015\022',
	powerpointPEeFEntryEffectZoomIn = '\000\366\015\021',
	powerpointPEeFEntryEffectZoomOutSlightly = '\000\366\015\024',
	powerpointPEeFEntryEffectZoomOut = '\000\366\015\023'
};
typedef enum powerpointPEeF powerpointPEeF;

enum powerpointPTlE {
	powerpointPTlEAnimationLevelUnset = '\000\337\377\376',
	powerpointPTlEAnimateLevelNone = '\000\340\000\000',
	powerpointPTlEAnimateLevelFirstLevel = '\000\340\000\001',
	powerpointPTlEAnimateLevelSecondLevel = '\000\340\000\002',
	powerpointPTlEAnimateLevelThirdLevel = '\000\340\000\003',
	powerpointPTlEAnimateLevelFourthLevel = '\000\340\000\004',
	powerpointPTlEAnimateLevelFifthLevel = '\000\340\000\005',
	powerpointPTlEAnimateLevelAllLevels = '\000\340\000\020'
};
typedef enum powerpointPTlE powerpointPTlE;

enum powerpointPTuE {
	powerpointPTuEAnimationUnitUnset = '\000\340\377\376',
	powerpointPTuETextUnitEffectByParagraph = '\000\341\000\000',
	powerpointPTuETextUnitEffectByWord = '\000\341\000\001',
	powerpointPTuETextUnitEffectByCharacter = '\000\341\000\002'
};
typedef enum powerpointPTuE powerpointPTuE;

enum powerpointPCuE {
	powerpointPCuEAnimationChartUnset = '\000\341\377\376',
	powerpointPCuEChartUnitEffectBySeries = '\000\342\000\001',
	powerpointPCuEChartUnitEffectByCategory = '\000\342\000\002',
	powerpointPCuEChartUnitEffectBySeriesElement = '\000\342\000\003'
};
typedef enum powerpointPCuE powerpointPCuE;

enum powerpointAsAe {
	powerpointAsAeAfterEffectUnset = '\000\363\377\376',
	powerpointAsAeAfterEffectNone = '\000\364\000\000',
	powerpointAsAeAfterEffectHide = '\000\364\000\001',
	powerpointAsAeAfterEffectDim = '\000\364\000\002'
};
typedef enum powerpointAsAe powerpointAsAe;

enum powerpointAdMd {
	powerpointAdMdAdvanceModeUnset = '\000\361\377\376',
	powerpointAdMdAdvanceModeOnClick = '\000\362\000\001'
};
typedef enum powerpointAdMd powerpointAdMd;

enum powerpointPSnX {
	powerpointPSnXSoundEffectUnset = '\000\331\377\376',
	powerpointPSnXSoundEffectNone = '\000\332\000\000',
	powerpointPSnXSoundEffectStopPrevious = '\000\332\000\001',
	powerpointPSnXSoundEffectFile = '\000\332\000\002'
};
typedef enum powerpointPSnX powerpointPSnX;

enum powerpointPUdO {
	powerpointPUdOUpdateOptionUnset = '\000\336\377\376',
	powerpointPUdOUpdateOptionManual = '\000\337\000\001'
};
typedef enum powerpointPUdO powerpointPUdO;

enum powerpointPDgM {
	powerpointPDgMDialogModeUnset = '\000\357\377\376',
	powerpointPDgMDialogModeModless = '\000\360\000\000',
	powerpointPDgMDialogModeModal = '\000\360\000\001'
};
typedef enum powerpointPDgM powerpointPDgM;

enum powerpointPDgS {
	powerpointPDgSDialogStyleUnset = '\000\360\377\376',
	powerpointPDgSDialogStyleStandard = '\000\361\000\001'
};
typedef enum powerpointPDgS powerpointPDgS;

enum powerpointPSsP {
	powerpointPSsPSlideShowPointerNone = '\000\322\000\000',
	powerpointPSsPSlideShowPointerArrow = '\000\322\000\001',
	powerpointPSsPSlideShowPointerPen = '\000\322\000\002',
	powerpointPSsPSlideShowPointerAlwaysHidden = '\000\322\000\003'
};
typedef enum powerpointPSsP powerpointPSsP;

enum powerpointPShS {
	powerpointPShSSlideShowStateRunning = '\000\323\000\001',
	powerpointPShSSlideShowStatePaused = '\000\323\000\002',
	powerpointPShSSlideShowStateBlackScreen = '\000\323\000\003',
	powerpointPShSSlideShowStateWhiteScreen = '\000\323\000\004',
	powerpointPShSSlideShowStateDone = '\000\323\000\005'
};
typedef enum powerpointPShS powerpointPShS;

enum powerpointPSta {
	powerpointPStaPlayerStatePlaying = '\000\365\000\000',
	powerpointPStaPlayerStatePaused = '\000\365\000\001',
	powerpointPStaPlayerStateStopped = '\000\365\000\002',
	powerpointPStaPlayerStateNotReady = '\000\365\000\003'
};
typedef enum powerpointPSta powerpointPSta;

enum powerpointPSaM {
	powerpointPSaMSlideShowAdvanceManualAdvance = '\000\324\000\001',
	powerpointPSaMSlideShowAdvanceUseSlideTimings = '\000\324\000\002'
};
typedef enum powerpointPSaM powerpointPSaM;

enum powerpointPtOt {
	powerpointPtOtPrintSlides = '\000\330\000\001',
	powerpointPtOtPrintTwoSlideHandouts = '\000\330\000\002',
	powerpointPtOtPrintThreeSlideHandouts = '\000\330\000\003',
	powerpointPtOtPrintSixSlideHandouts = '\000\330\000\004',
	powerpointPtOtPrintNotesPages = '\000\330\000\005',
	powerpointPtOtPrintOutline = '\000\330\000\006',
	powerpointPtOtPrintFourSlideHandouts = '\000\330\000\007',
	powerpointPtOtPrintNineSlideHandouts = '\000\330\000\010'
};
typedef enum powerpointPtOt powerpointPtOt;

enum powerpointPrCt {
	powerpointPrCtPrintColor = '\000\327\000\001',
	powerpointPrCtPrintBlackAndWhite = '\000\327\000\002'
};
typedef enum powerpointPrCt powerpointPrCt;

enum powerpointPSEL {
	powerpointPSELSelectionTypeNone = '\000\316\000\000',
	powerpointPSELSelectionTypeSlides = '\000\316\000\001',
	powerpointPSELSelectionTypeShapes = '\000\316\000\002',
	powerpointPSELSelectionTypeText = '\000\316\000\003'
};
typedef enum powerpointPSEL powerpointPSEL;

enum powerpointPDtF {
	powerpointPDtFUnset = '\000\342\377\376',
	powerpointPDtFMdyy = '\000\343\000\001',
	powerpointPDtFDdddMMMMddyyyy = '\000\343\000\002',
	powerpointPDtFMMMMyyyy = '\000\343\000\003',
	powerpointPDtFMMMMdyyyy = '\000\343\000\004',
	powerpointPDtFMMMyy = '\000\343\000\005',
	powerpointPDtFMMMMyy = '\000\343\000\006',
	powerpointPDtFMMyy = '\000\343\000\007',
	powerpointPDtFMMddyyHmm = '\000\343\000\010',
	powerpointPDtFMddyyhmmAMPM = '\000\343\000\011',
	powerpointPDtFHmm = '\000\343\000\012',
	powerpointPDtFHmmss = '\000\343\000\013',
	powerpointPDtFHmmAMPM = '\000\343\000\014',
	powerpointPDtFHmmssAMPM = '\000\343\000\015'
};
typedef enum powerpointPDtF powerpointPDtF;

enum powerpointPTnS {
	powerpointPTnSTransitionSpeedUnset = '\000\330\377\376',
	powerpointPTnSTransistionSpeedSlow = '\000\331\000\001',
	powerpointPTnSTransistionSpeedMedium = '\000\331\000\002'
};
typedef enum powerpointPTnS powerpointPTnS;

enum powerpointPMtv {
	powerpointPMtvMouseActivationMouseClick = '\000\372\000\001',
	powerpointPMtvMouseActivationMouseOver = '\000\372\000\002'
};
typedef enum powerpointPMtv powerpointPMtv;

enum powerpointPAxT {
	powerpointPAxTActionTypeUnset = '\000\345\377\376',
	powerpointPAxTActionTypeNone = '\000\346\000\000',
	powerpointPAxTActionTypeNextSlide = '\000\346\000\001',
	powerpointPAxTActionTypePreviousSlide = '\000\346\000\002',
	powerpointPAxTActionTypeFirstSlide = '\000\346\000\003',
	powerpointPAxTActionTypeLastSlide = '\000\346\000\004',
	powerpointPAxTActionTypeLastSlideViewed = '\000\346\000\005',
	powerpointPAxTActionTypeEndShow = '\000\346\000\006',
	powerpointPAxTActionTypeHyperlinkAction = '\000\346\000\007',
	powerpointPAxTActionTypeRunMacro = '\000\346\000\010',
	powerpointPAxTActionTypeRunProgram = '\000\346\000\011',
	powerpointPAxTActionTypeNamedSlideshowAction = '\000\346\000\012',
	powerpointPAxTActionTypeOLEVerb = '\000\346\000\013'
};
typedef enum powerpointPAxT powerpointPAxT;

enum powerpointPPhd {
	powerpointPPhdPlaceholderTypeUnset = '\000\332\377\376',
	powerpointPPhdPlaceholderTypeTitlePlaceholder = '\000\333\000\001',
	powerpointPPhdPlaceholderTypeBodyPlaceholder = '\000\333\000\002',
	powerpointPPhdPlaceholderTypeCenterTitlePlaceholder = '\000\333\000\003',
	powerpointPPhdPlaceholderTypeSubtitlePlaceholder = '\000\333\000\004',
	powerpointPPhdPlaceholderTypeVerticalTitlePlaceholder = '\000\333\000\005',
	powerpointPPhdPlaceholderTypeVerticalBodyPlaceholder = '\000\333\000\006',
	powerpointPPhdPlaceholderTypeObjectPlaceholder = '\000\333\000\007',
	powerpointPPhdPlaceholderTypeChartPlaceholder = '\000\333\000\010',
	powerpointPPhdPlaceholderTypeBitmapPlaceholder = '\000\333\000\011',
	powerpointPPhdPlaceholderTypeMediaClipPlaceholder = '\000\333\000\012',
	powerpointPPhdPlaceholderTypeOrgChartPlaceholder = '\000\333\000\013',
	powerpointPPhdPlaceholderTypeTablePlaceholder = '\000\333\000\014',
	powerpointPPhdPlaceholderTypeSlideNumberPlaceholder = '\000\333\000\015',
	powerpointPPhdPlaceholderTypeHeaderPlaceholder = '\000\333\000\016',
	powerpointPPhdPlaceholderTypeFooterPlaceholder = '\000\333\000\017',
	powerpointPPhdPlaceholderTypeDatePlaceholder = '\000\333\000\020',
	powerpointPPhdPlaceholderTypeVerticalObjectPlaceholder = '\000\333\000\021',
	powerpointPPhdPlaceholderTypePicturePlaceholder = '\000\333\000\022'
};
typedef enum powerpointPPhd powerpointPPhd;

enum powerpointPSSt {
	powerpointPSStSlideShowTypeSpeaker = '\000\325\000\001',
	powerpointPSStSlideShowTypeWindow = '\000\325\000\002',
	powerpointPSStSlideShowTypeKiosk = '\000\325\000\003',
	powerpointPSStSlideShowTypePresenter = '\000\325\000\005'
};
typedef enum powerpointPSSt powerpointPSSt;

enum powerpointRgTy {
	powerpointRgTyPrintRangeAll = '\000\367\000\001',
	powerpointRgTyPrintRangeSelection = '\000\367\000\002',
	powerpointRgTyPrintRangeCurrent = '\000\367\000\003',
	powerpointRgTyPrintRangeSlideRange = '\000\367\000\004',
	powerpointRgTyPrintSection = '\000\367\000\005'
};
typedef enum powerpointRgTy powerpointRgTy;

enum powerpointMedT {
	powerpointMedTMediaTypeUnset = '\000\333\377\376',
	powerpointMedTMediaTypeOther = '\000\334\000\001',
	powerpointMedTMediaTypeSound = '\000\334\000\002',
	powerpointMedTMediaTypeMovie = '\000\334\000\003'
};
typedef enum powerpointMedT powerpointMedT;

enum powerpointPSFy {
	powerpointPSFySoundFormatUnset = '\000\367\377\376',
	powerpointPSFySoundFormatNone = '\000\370\000\000',
	powerpointPSFySoundFormatWAV = '\000\370\000\001',
	powerpointPSFySoundFormatMIDI = '\000\370\000\002'
};
typedef enum powerpointPSFy powerpointPSFy;

enum powerpointPeBl {
	powerpointPeBlEastAsianLineBreakNormal = '\000\354\000\001',
	powerpointPeBlEastAsianLineBreakStrict = '\000\354\000\002',
	powerpointPeBlEastAsianLineBreakCustom = '\000\354\000\003'
};
typedef enum powerpointPeBl powerpointPeBl;

enum powerpointSRgT {
	powerpointSRgTSlideShowRangeShowAll = '\000\326\000\001',
	powerpointSRgTSlideShowRange = '\000\326\000\002',
	powerpointSRgTSlideShowRangeNamedSlideshow = '\000\326\000\003'
};
typedef enum powerpointSRgT powerpointSRgT;

enum powerpointFClr {
	powerpointFClrFrameColorsBrowserColors = '\000\317\000\001',
	powerpointFClrFrameColorsPresentationSchemeTextColor = '\000\317\000\002',
	powerpointFClrFrameColorsPresentationSchemeAccentColor = '\000\317\000\003',
	powerpointFClrFrameColorsWhiteTextOnBlack = '\000\317\000\004',
	powerpointFClrFrameColorsBlackTextOnWhite = '\000\317\000\005'
};
typedef enum powerpointFClr powerpointFClr;

enum powerpointPMOt {
	powerpointPMOtMovieOptimizationNormal = '\000\317\377\376',
	powerpointPMOtMovieOptimizationSize = '\000\320\000\001',
	powerpointPMOtMovieOptimizationSpeed = '\000\320\000\002',
	powerpointPMOtMovieOptimizationQuality = '\000\320\000\003'
};
typedef enum powerpointPMOt powerpointPMOt;

enum powerpointPShF {
	powerpointPShFShapeFormatGIF = '\000\335\000\000',
	powerpointPShFShapeFormatJPEG = '\000\335\000\001',
	powerpointPShFShapeFormatPNG = '\000\335\000\002',
	powerpointPShFShapeFormatPICT = '\000\335\000\003'
};
typedef enum powerpointPShF powerpointPShF;

enum powerpointPBrT {
	powerpointPBrTTopBorder = '\001\032\000\001',
	powerpointPBrTLeftBorder = '\001\032\000\002',
	powerpointPBrTBottomBorder = '\001\032\000\003',
	powerpointPBrTRightBorder = '\001\032\000\004',
	powerpointPBrTDiagonalDownBorder = '\001\032\000\005',
	powerpointPBrTDiagonalUpBorder = '\001\032\000\006'
};
typedef enum powerpointPBrT powerpointPBrT;

enum powerpointCivt {
	powerpointCivtMinorVersion = '\002\304\000\000',
	powerpointCivtMajorVersion = '\002\304\000\001',
	powerpointCivtOverwriteCurrentVersion = '\002\304\000\002'
};
typedef enum powerpointCivt powerpointCivt;

enum powerpointPALO {
	powerpointPALOPageLayoutNormal = '\000\355\000\000',
	powerpointPALOPageLayoutFullScreen = '\000\355\000\001'
};
typedef enum powerpointPALO powerpointPALO;

enum powerpointPBuT {
	powerpointPBuTRegular = '\000\356\000\001',
	powerpointPBuTFancy = '\000\356\000\002',
	powerpointPBuTTextOnly = '\000\356\000\003'
};
typedef enum powerpointPBuT powerpointPBuT;

enum powerpointPNBp {
	powerpointPNBpBarPlacementTop = '\000\357\000\001',
	powerpointPNBpBarPlacementBottom = '\000\357\000\002'
};
typedef enum powerpointPNBp powerpointPNBp;

enum powerpointAnFX {
	powerpointAnFXAnimationTypeCustom = '\001\002\000\000',
	powerpointAnFXAnimationTypeAppear = '\001\002\000\001',
	powerpointAnFXAnimationTypeFly = '\001\002\000\002',
	powerpointAnFXAnimationTypeBlinds = '\001\002\000\003',
	powerpointAnFXAnimationTypeBox = '\001\002\000\004',
	powerpointAnFXAnimationTypeCheckerboard = '\001\002\000\005',
	powerpointAnFXAnimationTypeCircle = '\001\002\000\006',
	powerpointAnFXAnimationTypeCrawl = '\001\002\000\007',
	powerpointAnFXAnimationTypeDiamond = '\001\002\000\010',
	powerpointAnFXAnimationTypeDissolve = '\001\002\000\011',
	powerpointAnFXAnimationTypeFade = '\001\002\000\012',
	powerpointAnFXAnimationTypeFlashOnce = '\001\002\000\013',
	powerpointAnFXAnimationTypePeek = '\001\002\000\014',
	powerpointAnFXAnimationTypePlus = '\001\002\000\015',
	powerpointAnFXAnimationTypeRandomBars = '\001\002\000\016',
	powerpointAnFXAnimationTypeSpiral = '\001\002\000\017',
	powerpointAnFXAnimationTypeSplit = '\001\002\000\020',
	powerpointAnFXAnimationTypeStretch = '\001\002\000\021',
	powerpointAnFXAnimationTypeStrips = '\001\002\000\022',
	powerpointAnFXAnimationTypeSwivel = '\001\002\000\023',
	powerpointAnFXAnimationTypeWedge = '\001\002\000\024',
	powerpointAnFXAnimationTypeWheel = '\001\002\000\025',
	powerpointAnFXAnimationTypeWipe = '\001\002\000\026',
	powerpointAnFXAnimationTypeZoom = '\001\002\000\027',
	powerpointAnFXAnimationTypeRandomEffect = '\001\002\000\030',
	powerpointAnFXAnimationTypeBoomerang = '\001\002\000\031',
	powerpointAnFXAnimationTypeBounce = '\001\002\000\032',
	powerpointAnFXAnimationTypeColorReveal = '\001\002\000\033',
	powerpointAnFXAnimationTypeCredits = '\001\002\000\034',
	powerpointAnFXAnimationTypeEaseIn = '\001\002\000\035',
	powerpointAnFXAnimationTypeFloat = '\001\002\000\036',
	powerpointAnFXAnimationTypeGrowAndTurn = '\001\002\000\037',
	powerpointAnFXAnimationTypeLightSpeed = '\001\002\000 ',
	powerpointAnFXAnimationTypePinwheel = '\001\002\000!',
	powerpointAnFXAnimationTypeRiseUp = '\001\002\000\"',
	powerpointAnFXAnimationTypeSwish = '\001\002\000#',
	powerpointAnFXAnimationTypeThinLine = '\001\002\000$',
	powerpointAnFXAnimationTypeUnfold = '\001\002\000%',
	powerpointAnFXAnimationTypeWhip = '\001\002\000&',
	powerpointAnFXAnimationTypeAscend = '\001\002\000\'',
	powerpointAnFXAnimationTypeCenterRevolve = '\001\002\000(',
	powerpointAnFXAnimationTypeFadedSwivel = '\001\002\000)',
	powerpointAnFXAnimationTypeDescend = '\001\002\000*',
	powerpointAnFXAnimationTypeSling = '\001\002\000+',
	powerpointAnFXAnimationTypeSpinner = '\001\002\000,',
	powerpointAnFXAnimationTypeStretchy = '\001\002\000-',
	powerpointAnFXAnimationTypeZip = '\001\002\000.',
	powerpointAnFXAnimationTypeArcUp = '\001\002\000/',
	powerpointAnFXAnimationTypeFadeZoom = '\001\002\0000',
	powerpointAnFXAnimationTypeGlide = '\001\002\0001',
	powerpointAnFXAnimationTypeExpand = '\001\002\0002',
	powerpointAnFXAnimationTypeFlip = '\001\002\0003',
	powerpointAnFXAnimationTypeShimmer = '\001\002\0004',
	powerpointAnFXAnimationTypeFold = '\001\002\0005',
	powerpointAnFXAnimationTypeChangeFillColor = '\001\002\0006',
	powerpointAnFXAnimationTypeChangeFont = '\001\002\0007',
	powerpointAnFXAnimationTypeChangeFontColor = '\001\002\0008',
	powerpointAnFXAnimationTypeChangeFontSize = '\001\002\0009',
	powerpointAnFXAnimationTypeChangeFontStyle = '\001\002\000:',
	powerpointAnFXAnimationTypeGrowShrink = '\001\002\000;',
	powerpointAnFXAnimationTypeChangeLineColor = '\001\002\000<',
	powerpointAnFXAnimationTypeSpin = '\001\002\000=',
	powerpointAnFXAnimationTypeTransparency = '\001\002\000>',
	powerpointAnFXAnimationTypeBoldFlash = '\001\002\000\?',
	powerpointAnFXAnimationTypeBlast = '\001\002\000@',
	powerpointAnFXAnimationTypeBoldReveal = '\001\002\000A',
	powerpointAnFXAnimationTypeBrushOnColor = '\001\002\000B',
	powerpointAnFXAnimationTypeBrushOnUnderline = '\001\002\000C',
	powerpointAnFXAnimationTypeColorBlend = '\001\002\000D',
	powerpointAnFXAnimationTypeColorWave = '\001\002\000E',
	powerpointAnFXAnimationTypeComplementaryColor = '\001\002\000F',
	powerpointAnFXAnimationTypeComplementaryColor2 = '\001\002\000G',
	powerpointAnFXAnimationTypeConstrastingColor = '\001\002\000H',
	powerpointAnFXAnimationTypeDarken = '\001\002\000I',
	powerpointAnFXAnimationTypeDesaturate = '\001\002\000J',
	powerpointAnFXAnimationTypeFlashBulb = '\001\002\000K',
	powerpointAnFXAnimationTypeFlicker = '\001\002\000L',
	powerpointAnFXAnimationTypeGrowWithColor = '\001\002\000M',
	powerpointAnFXAnimationTypeLighten = '\001\002\000N',
	powerpointAnFXAnimationTypeStyleEmphasis = '\001\002\000O',
	powerpointAnFXAnimationTypeTeeter = '\001\002\000P',
	powerpointAnFXAnimationTypeVerticalGrow = '\001\002\000Q',
	powerpointAnFXAnimationTypeWave = '\001\002\000R',
	powerpointAnFXAnimationTypeMediaPlay = '\001\002\000S',
	powerpointAnFXAnimationTypeMediaPause = '\001\002\000T',
	powerpointAnFXAnimationTypeMediaStop = '\001\002\000U',
	powerpointAnFXAnimationTypeCirclePath = '\001\002\000V',
	powerpointAnFXAnimationTypeRightTrianglePath = '\001\002\000W',
	powerpointAnFXAnimationTypeDiamondPath = '\001\002\000X',
	powerpointAnFXAnimationTypeHexagonPath = '\001\002\000Y',
	powerpointAnFXAnimationType5PointStarPath = '\001\002\000Z',
	powerpointAnFXAnimationTypeCrescentMoonPath = '\001\002\000[',
	powerpointAnFXAnimationTypeSquarePath = '\001\002\000\\',
	powerpointAnFXAnimationTypeTrapezoidPath = '\001\002\000]',
	powerpointAnFXAnimationTypeHeartPath = '\001\002\000^',
	powerpointAnFXAnimationTypeOctagonPath = '\001\002\000_',
	powerpointAnFXAnimationType6PointStarPath = '\001\002\000`',
	powerpointAnFXAnimationTypeFootballPath = '\001\002\000a',
	powerpointAnFXAnimationTypeEqualTrianglePath = '\001\002\000b',
	powerpointAnFXAnimationTypeParallelogramPath = '\001\002\000c',
	powerpointAnFXAnimationTypePentagonPath = '\001\002\000d',
	powerpointAnFXAnimationType4PointStarPath = '\001\002\000e',
	powerpointAnFXAnimationType8PointStarPath = '\001\002\000f',
	powerpointAnFXAnimationTypeTeardropPath = '\001\002\000g',
	powerpointAnFXAnimationTypePointyStarPath = '\001\002\000h',
	powerpointAnFXAnimationTypeCurvedSquarePath = '\001\002\000i',
	powerpointAnFXAnimationTypeCurvedXPath = '\001\002\000j',
	powerpointAnFXAnimationTypeVerticalFigure8Path = '\001\002\000k',
	powerpointAnFXAnimationTypeCurvyStarPath = '\001\002\000l',
	powerpointAnFXAnimationTypeLoopDeLoopPath = '\001\002\000m',
	powerpointAnFXAnimationTypeBuzzsawPath = '\001\002\000n',
	powerpointAnFXAnimationTypeHorizontalFigure8Path = '\001\002\000o',
	powerpointAnFXAnimationTypePeanutPath = '\001\002\000p',
	powerpointAnFXAnimationTypeFigure8FourPath = '\001\002\000q',
	powerpointAnFXAnimationTypeNeutronPath = '\001\002\000r',
	powerpointAnFXAnimationTypeSwooshPath = '\001\002\000s',
	powerpointAnFXAnimationTypeBeanPath = '\001\002\000t',
	powerpointAnFXAnimationTypePlusPath = '\001\002\000u',
	powerpointAnFXAnimationTypeInvertedTrianglePath = '\001\002\000v',
	powerpointAnFXAnimationTypeInvertedSquarePath = '\001\002\000w',
	powerpointAnFXAnimationTypeLeftPath = '\001\002\000x',
	powerpointAnFXAnimationTypeTurnRightPath = '\001\002\000y',
	powerpointAnFXAnimationTypeArcDownPath = '\001\002\000z',
	powerpointAnFXAnimationTypeZigzagPath = '\001\002\000{',
	powerpointAnFXAnimationTypeSCurve2Path = '\001\002\000|',
	powerpointAnFXAnimationTypeSineWavePath = '\001\002\000}',
	powerpointAnFXAnimationTypeBounceLeftPath = '\001\002\000~',
	powerpointAnFXAnimationTypeDownPath = '\001\002\000\177',
	powerpointAnFXAnimationTypeTurnUpPath = '\001\002\000\200',
	powerpointAnFXAnimationTypeArcUpPath = '\001\002\000\201',
	powerpointAnFXAnimationTypeHeartbeatPath = '\001\002\000\202',
	powerpointAnFXAnimationTypeSpiralRightPath = '\001\002\000\203',
	powerpointAnFXAnimationTypeWavePath = '\001\002\000\204',
	powerpointAnFXAnimationTypeCurvyLeftPath = '\001\002\000\205',
	powerpointAnFXAnimationTypeDiagonalDownRightPath = '\001\002\000\206',
	powerpointAnFXAnimationTypeTurnDownPath = '\001\002\000\207',
	powerpointAnFXAnimationTypeArcLeftPath = '\001\002\000\210',
	powerpointAnFXAnimationTypeFunnelPath = '\001\002\000\211',
	powerpointAnFXAnimationTypeSpringPath = '\001\002\000\212',
	powerpointAnFXAnimationTypeBounceRightPath = '\001\002\000\213',
	powerpointAnFXAnimationTypeSpiralLeftPath = '\001\002\000\214',
	powerpointAnFXAnimationTypeDiagonalUpRightPath = '\001\002\000\215',
	powerpointAnFXAnimationTypeTurnUpRightPath = '\001\002\000\216',
	powerpointAnFXAnimationTypeArcRightPath = '\001\002\000\217',
	powerpointAnFXAnimationTypeSCurve1Path = '\001\002\000\220',
	powerpointAnFXAnimationTypeDecayingWavePath = '\001\002\000\221',
	powerpointAnFXAnimationTypeCurvyRightPath = '\001\002\000\222',
	powerpointAnFXAnimationTypeStairsDownPath = '\001\002\000\223',
	powerpointAnFXAnimationTypeUpPath = '\001\002\000\224',
	powerpointAnFXAnimationTypeRightPath = '\001\002\000\225'
};
typedef enum powerpointAnFX powerpointAnFX;

enum powerpointAnLv {
	powerpointAnLvTextByNoLevels = '\001\001\000\000',
	powerpointAnLvTextByAllLevels = '\001\001\000\001',
	powerpointAnLvTextByFirstLevel = '\001\001\000\002',
	powerpointAnLvTextBySecondLevel = '\001\001\000\003',
	powerpointAnLvTextByThirdLevel = '\001\001\000\004',
	powerpointAnLvTextByFourthLevel = '\001\001\000\005',
	powerpointAnLvTextByFifthLevel = '\001\001\000\006',
	powerpointAnLvChartAllAtOnce = '\001\001\000\007',
	powerpointAnLvChartByCategory = '\001\001\000\010',
	powerpointAnLvChartByCtageoryElements = '\001\001\000\011',
	powerpointAnLvChartBySeries = '\001\001\000\012',
	powerpointAnLvChartBySeriesElements = '\001\001\000\013'
};
typedef enum powerpointAnLv powerpointAnLv;

enum powerpointAnTr {
	powerpointAnTrNoTrigger = '\001\000\000\000',
	powerpointAnTrOnPageClick = '\001\000\000\001',
	powerpointAnTrWithPrevious = '\001\000\000\002',
	powerpointAnTrAfterPrevious = '\001\000\000\003',
	powerpointAnTrOnShapeClick = '\001\000\000\004'
};
typedef enum powerpointAnTr powerpointAnTr;

enum powerpointAnAE {
	powerpointAnAENoAfterEffect = '\000\377\000\000',
	powerpointAnAEDim = '\000\377\000\001',
	powerpointAnAEHide = '\000\377\000\002',
	powerpointAnAEHideOnNextClick = '\000\377\000\003'
};
typedef enum powerpointAnAE powerpointAnAE;

enum powerpointAnTU {
	powerpointAnTUByParagraph = '\000\376\000\000',
	powerpointAnTUByCharacter = '\000\376\000\001',
	powerpointAnTUByWord = '\000\376\000\002'
};
typedef enum powerpointAnTU powerpointAnTU;

enum powerpointAnRs {
	powerpointAnRsRestartAlways = '\000\375\000\001',
	powerpointAnRsRestartWhenOff = '\000\375\000\002',
	powerpointAnRsNeverRestart = '\000\375\000\003'
};
typedef enum powerpointAnRs powerpointAnRs;

enum powerpointAnEA {
	powerpointAnEAAfterFreeze = '\000\374\000\001',
	powerpointAnEAAfterRemove = '\000\374\000\002',
	powerpointAnEAAfterHold = '\000\374\000\003',
	powerpointAnEAAfterTransition = '\000\374\000\004'
};
typedef enum powerpointAnEA powerpointAnEA;

enum powerpointAnDi {
	powerpointAnDiNoDirection = '\000\371\000\000',
	powerpointAnDiUp = '\000\371\000\001',
	powerpointAnDiRight = '\000\371\000\002',
	powerpointAnDiDown = '\000\371\000\003',
	powerpointAnDiLeft = '\000\371\000\004',
	powerpointAnDiOrdinalMask = '\000\371\000\005',
	powerpointAnDiUpLeft = '\000\371\000\006',
	powerpointAnDiUpRight = '\000\371\000\007',
	powerpointAnDiDownRight = '\000\371\000\010',
	powerpointAnDiDownLeft = '\000\371\000\011',
	powerpointAnDiTop = '\000\371\000\012',
	powerpointAnDiBottom = '\000\371\000\013',
	powerpointAnDiTopLeft = '\000\371\000\014',
	powerpointAnDiTopRight = '\000\371\000\015',
	powerpointAnDiBottomRight = '\000\371\000\016',
	powerpointAnDiBottomLeft = '\000\371\000\017',
	powerpointAnDiHorizontal = '\000\371\000\020',
	powerpointAnDiVertical = '\000\371\000\021',
	powerpointAnDiAcross = '\000\371\000\022',
	powerpointAnDiInward = '\000\371\000\023',
	powerpointAnDiOut = '\000\371\000\024',
	powerpointAnDiClockwise = '\000\371\000\025',
	powerpointAnDiCounterclockwise = '\000\371\000\026',
	powerpointAnDiHorizontalIn = '\000\371\000\027',
	powerpointAnDiHorizontalOut = '\000\371\000\030',
	powerpointAnDiVerticalIn = '\000\371\000\031',
	powerpointAnDiVerticalOut = '\000\371\000\032',
	powerpointAnDiSlightly = '\000\371\000\033',
	powerpointAnDiCenter = '\000\371\000\034',
	powerpointAnDiInSlightly = '\000\371\000\035',
	powerpointAnDiInCenter = '\000\371\000\036',
	powerpointAnDiInBottom = '\000\371\000\037',
	powerpointAnDiOutSlightly = '\000\371\000 ',
	powerpointAnDiOutCenter = '\000\371\000!',
	powerpointAnDiOutBottom = '\000\371\000\"',
	powerpointAnDiFontBold = '\000\371\000#',
	powerpointAnDiFontItalic = '\000\371\000$',
	powerpointAnDiFontUnderline = '\000\371\000%',
	powerpointAnDiFontStrikethrough = '\000\371\000&',
	powerpointAnDiFontShadow = '\000\371\000\'',
	powerpointAnDiFontAllCaps = '\000\371\000(',
	powerpointAnDiInstant = '\000\371\000)',
	powerpointAnDiGradual = '\000\371\000*',
	powerpointAnDiCycleClockwise = '\000\371\000+',
	powerpointAnDiCycleCounterclockwise = '\000\371\000,'
};
typedef enum powerpointAnDi powerpointAnDi;

enum powerpointAnTy {
	powerpointAnTyAnimationTypeNone = '\001\003\000\000',
	powerpointAnTyAnimationTypeMotion = '\001\003\000\001',
	powerpointAnTyAnimationTypeColor = '\001\003\000\002',
	powerpointAnTyAnimationTypeScale = '\001\003\000\003',
	powerpointAnTyAnimationTypeRotation = '\001\003\000\004',
	powerpointAnTyAnimationTypeProperty = '\001\003\000\005',
	powerpointAnTyAnimationTypeCommand = '\001\003\000\006',
	powerpointAnTyAnimationTypeFilter = '\001\003\000\007',
	powerpointAnTyAnimationTypeSet = '\001\003\000\010'
};
typedef enum powerpointAnTy powerpointAnTy;

enum powerpointAnpp {
	powerpointAnppNoAdditive = '\001\007\000\001',
	powerpointAnppMotion = '\001\007\000\002'
};
typedef enum powerpointAnpp powerpointAnpp;

enum powerpointAnSm {
	powerpointAnSmNoAccumulate = '\001\004\000\001',
	powerpointAnSmAlways = '\001\004\000\002'
};
typedef enum powerpointAnSm powerpointAnSm;

enum powerpointAnPr {
	powerpointAnPrNoProperty = '\001\005\000\000',
	powerpointAnPrX = '\001\005\000\001',
	powerpointAnPrY = '\001\005\000\002',
	powerpointAnPrWidth = '\001\005\000\003',
	powerpointAnPrHeight = '\001\005\000\004',
	powerpointAnPrOpacity = '\001\005\000\005',
	powerpointAnPrRotation = '\001\005\000\006',
	powerpointAnPrColors = '\001\005\000\007',
	powerpointAnPrVisibility = '\001\005\000\010',
	powerpointAnPrTextFontBold = '\001\005\000d',
	powerpointAnPrTextFontColor = '\001\005\000e',
	powerpointAnPrTextFontEmboss = '\001\005\000f',
	powerpointAnPrTextFontItalic = '\001\005\000g',
	powerpointAnPrTextFontName = '\001\005\000h',
	powerpointAnPrTextFontShadow = '\001\005\000i',
	powerpointAnPrTextFontSize = '\001\005\000j',
	powerpointAnPrTextFontSubscript = '\001\005\000k',
	powerpointAnPrTextFontSuperscript = '\001\005\000l',
	powerpointAnPrTextFontUnderline = '\001\005\000m',
	powerpointAnPrTextFontStrikethrough = '\001\005\000n',
	powerpointAnPrTextBulletCharacter = '\001\005\000o',
	powerpointAnPrTextBulletFontName = '\001\005\000p',
	powerpointAnPrTextBulletNumber = '\001\005\000q',
	powerpointAnPrTextBulletColor = '\001\005\000r',
	powerpointAnPrTextBulletRelativeSize = '\001\005\000s',
	powerpointAnPrTextBulletStyle = '\001\005\000t',
	powerpointAnPrTextBulletType = '\001\005\000u',
	powerpointAnPrShapePictureContrast = '\001\005\003\350',
	powerpointAnPrShapePictureBrightness = '\001\005\003\351',
	powerpointAnPrShapePictureGamma = '\001\005\003\352',
	powerpointAnPrShapePictureGrayscale = '\001\005\003\353',
	powerpointAnPrShapeFillOn = '\001\005\003\354',
	powerpointAnPrShapeFillColor = '\001\005\003\355',
	powerpointAnPrShapeFillOpacity = '\001\005\003\356',
	powerpointAnPrShapeFillBackColor = '\001\005\003\357',
	powerpointAnPrShapeLineOn = '\001\005\003\360',
	powerpointAnPrShapeLineColor = '\001\005\003\361',
	powerpointAnPrShapeShadowOn = '\001\005\003\362',
	powerpointAnPrShapeShadowType = '\001\005\003\363',
	powerpointAnPrShapeShadowColor = '\001\005\003\364',
	powerpointAnPrShapeShadowOpacity = '\001\005\003\365',
	powerpointAnPrShapeShadowOffsetX = '\001\005\003\366',
	powerpointAnPrShapeShadowOffsetY = '\001\005\003\367'
};
typedef enum powerpointAnPr powerpointAnPr;

enum powerpointAnCT {
	powerpointAnCTEvent = '\001\006\000\000',
	powerpointAnCTCall = '\001\006\000\001',
	powerpointAnCTVerb = '\001\006\000\002'
};
typedef enum powerpointAnCT powerpointAnCT;

enum powerpointAfet {
	powerpointAfetNoFilterEffectType = '\001\010\000\000',
	powerpointAfetFilterEffectTypeBarn = '\001\010\000\001',
	powerpointAfetFilterEffectTypeBlinds = '\001\010\000\002',
	powerpointAfetFilterEffectTypeBox = '\001\010\000\003',
	powerpointAfetFilterEffectTypeCheckerboard = '\001\010\000\004',
	powerpointAfetFilterEffectTypeCircle = '\001\010\000\005',
	powerpointAfetFilterEffectTypeDiamond = '\001\010\000\006',
	powerpointAfetFilterEffectTypeDissolve = '\001\010\000\007',
	powerpointAfetFilterEffectTypeFade = '\001\010\000\010',
	powerpointAfetFilterEffectTypeImage = '\001\010\000\011',
	powerpointAfetFilterEffectTypePixelate = '\001\010\000\012',
	powerpointAfetFilterEffectTypePlus = '\001\010\000\013',
	powerpointAfetFilterEffectTypeRandomBar = '\001\010\000\014',
	powerpointAfetFilterEffectTypeSlide = '\001\010\000\015',
	powerpointAfetFilterEffectTypeStretch = '\001\010\000\016',
	powerpointAfetFilterEffectTypeStrips = '\001\010\000\017',
	powerpointAfetFilterEffectTypeWedge = '\001\010\000\020',
	powerpointAfetFilterEffectTypeWheel = '\001\010\000\021',
	powerpointAfetFilterEffectTypeWipe = '\001\010\000\022'
};
typedef enum powerpointAfet powerpointAfet;

enum powerpointAfes {
	powerpointAfesNoEffectSubtype = '\001\011\000\000',
	powerpointAfesFilterEffectSubtypeInVertical = '\001\011\000\001',
	powerpointAfesFilterEffectSubtypeOutVertical = '\001\011\000\002',
	powerpointAfesFilterEffectSubtypeInHorizontal = '\001\011\000\003',
	powerpointAfesFilterEffectSubtypeOutHorizontal = '\001\011\000\004',
	powerpointAfesFilterEffectSubtypeHorizontal = '\001\011\000\005',
	powerpointAfesFilterEffectSubtypeVertical = '\001\011\000\006',
	powerpointAfesFilterEffectSubtypeInward = '\001\011\000\007',
	powerpointAfesFilterEffectSubtypeOut = '\001\011\000\010',
	powerpointAfesFilterEffectSubtypeAcross = '\001\011\000\011',
	powerpointAfesFilterEffectSubtypeFromLeft = '\001\011\000\012',
	powerpointAfesFilterEffectSubtypeFromRight = '\001\011\000\013',
	powerpointAfesFilterEffectSubtypeFromTop = '\001\011\000\014',
	powerpointAfesFilterEffectSubtypeFromBottom = '\001\011\000\015',
	powerpointAfesFilterEffectSubtypeDownLeft = '\001\011\000\016',
	powerpointAfesFilterEffectSubtypeUpLeft = '\001\011\000\017',
	powerpointAfesFilterEffectSubtypeDownRight = '\001\011\000\020',
	powerpointAfesFilterEffectSubtypeUpRight = '\001\011\000\021',
	powerpointAfesFilterEffectSubtypeSpoke1 = '\001\011\000\022',
	powerpointAfesFilterEffectSubtypeSpokes2 = '\001\011\000\023',
	powerpointAfesFilterEffectSubtypeSpokes3 = '\001\011\000\024',
	powerpointAfesFilterEffectSubtypeSpokes4 = '\001\011\000\025',
	powerpointAfesFilterEffectSubtypeSpokes8 = '\001\011\000\026',
	powerpointAfesFilterEffectSubtypeLeft = '\001\011\000\027',
	powerpointAfesFilterEffectSubtypeRight = '\001\011\000\030',
	powerpointAfesFilterEffectSubtypeDown = '\001\011\000\031',
	powerpointAfesFilterEffectSubtypeUp = '\001\011\000\032'
};
typedef enum powerpointAfes powerpointAfes;

enum powerpoint4001 {
	powerpoint4001View = 'pVEW',
	powerpoint4001SlideShowView = 'PSSv'
};
typedef enum powerpoint4001 powerpoint4001;

enum powerpoint4003 {
	powerpoint4003View = 'pVEW',
	powerpoint4003Presentation = 'pptP'
};
typedef enum powerpoint4003 powerpoint4003;

enum powerpoint4002 {
	powerpoint4002Slide = 'pSLD',
	powerpoint4002Master = 'pMtr',
	powerpoint4002Presentation = 'pptP'
};
typedef enum powerpoint4002 powerpoint4002;

enum powerpoint4011 {
	powerpoint4011Shape = 'pShp',
	powerpoint4011FillFormat = 'pFFm'
};
typedef enum powerpoint4011 powerpoint4011;

enum powerpoint4016 {
	powerpoint4016Shape = 'pShp',
	powerpoint4016FillFormat = 'pFFm'
};
typedef enum powerpoint4016 powerpoint4016;

enum powerpoint4024 {
	powerpoint4024Callout = 'cD00',
	powerpoint4024CalloutFormat = 'cCoF'
};
typedef enum powerpoint4024 powerpoint4024;

enum powerpoint4019 {
	powerpoint4019Connector = 'cD01',
	powerpoint4019ConnectorFormat = 'pCxF'
};
typedef enum powerpoint4019 powerpoint4019;

enum powerpoint4020 {
	powerpoint4020Connector = 'cD01',
	powerpoint4020ConnectorFormat = 'pCxF'
};
typedef enum powerpoint4020 powerpoint4020;

enum powerpoint4026 {
	powerpoint4026Callout = 'cD00',
	powerpoint4026CalloutFormat = 'cCoF'
};
typedef enum powerpoint4026 powerpoint4026;

enum powerpoint4025 {
	powerpoint4025Callout = 'cD00',
	powerpoint4025CalloutFormat = 'cCoF'
};
typedef enum powerpoint4025 powerpoint4025;

enum powerpoint4021 {
	powerpoint4021Connector = 'cD01',
	powerpoint4021ConnectorFormat = 'pCxF'
};
typedef enum powerpoint4021 powerpoint4021;

enum powerpoint4022 {
	powerpoint4022Connector = 'cD01',
	powerpoint4022ConnectorFormat = 'pCxF'
};
typedef enum powerpoint4022 powerpoint4022;

enum powerpoint4012 {
	powerpoint4012Shape = 'pShp',
	powerpoint4012FillFormat = 'pFFm'
};
typedef enum powerpoint4012 powerpoint4012;

enum powerpoint4010 {
	powerpoint4010Shape = 'pShp',
	powerpoint4010ShapeRange = 'ShpR'
};
typedef enum powerpoint4010 powerpoint4010;

enum powerpoint4015 {
	powerpoint4015Shape = 'pShp',
	powerpoint4015FillFormat = 'pFFm'
};
typedef enum powerpoint4015 powerpoint4015;

enum powerpoint4023 {
	powerpoint4023Shape = 'pShp',
	powerpoint4023ThreeDFormat = 'D3Df'
};
typedef enum powerpoint4023 powerpoint4023;

enum powerpoint4017 {
	powerpoint4017Shape = 'pShp',
	powerpoint4017FillFormat = 'pFFm'
};
typedef enum powerpoint4017 powerpoint4017;

enum powerpoint4018 {
	powerpoint4018Shape = 'pShp',
	powerpoint4018FillFormat = 'pFFm'
};
typedef enum powerpoint4018 powerpoint4018;

enum powerpoint4009 {
	powerpoint4009Shape = 'pShp',
	powerpoint4009ShapeRange = 'ShpR'
};
typedef enum powerpoint4009 powerpoint4009;

enum powerpoint4014 {
	powerpoint4014Shape = 'pShp',
	powerpoint4014FillFormat = 'pFFm'
};
typedef enum powerpoint4014 powerpoint4014;

enum powerpoint4013 {
	powerpoint4013Shape = 'pShp',
	powerpoint4013FillFormat = 'pFFm'
};
typedef enum powerpoint4013 powerpoint4013;

enum powerpoint4004 {
	powerpoint4004Shape = 'pShp',
	powerpoint4004ShapeRange = 'ShpR'
};
typedef enum powerpoint4004 powerpoint4004;

enum powerpoint4008 {
	powerpoint4008Shape = 'pShp',
	powerpoint4008ShapeRange = 'ShpR'
};
typedef enum powerpoint4008 powerpoint4008;

enum powerpoint4005 {
	powerpoint4005Shape = 'pShp',
	powerpoint4005ShapeRange = 'ShpR'
};
typedef enum powerpoint4005 powerpoint4005;

enum powerpoint4006 {
	powerpoint4006Shape = 'pShp',
	powerpoint4006ShapeRange = 'ShpR'
};
typedef enum powerpoint4006 powerpoint4006;

enum powerpoint4007 {
	powerpoint4007Shape = 'pShp',
	powerpoint4007ShapeRange = 'ShpR',
	powerpoint4007ShapeRange = 'ShpR'
};
typedef enum powerpoint4007 powerpoint4007;



/*
 * Standard Suite
 */

// A scriptable object
@interface powerpointBaseObject : SBObject

@property (copy) NSDictionary *properties;  // All of the object's properties

- (void) closeSaving:(powerpointSavo)saving savingIn:(powerpointPPfd)savingIn;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (void) delete;  // Delete an element from an object
- (SBObject *) duplicateTo:(SBObject *)to;  // Duplicate object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (void) openPassword:(NSString *)password writePassword:(NSString *)writePassword;  // Open the specified object(s)
- (void) saveIn:(powerpointPPfd)in_ as:(powerpointPPff)as;  // Save an object
- (void) select;  // Make a selection
- (BOOL) canCheckOutFileName:(NSString *)fileName;  // Returns True if PowerPoint can check out a specified presentation from a server.
- (void) checkOutFileName:(NSString *)fileName;  // Copies a specified presentation from a server to a local computer for editing. Returns a String that represents the local path and file name of the presentation checked out.
- (void) quit;
- (void) setPrinterSettingsPrinterSettings:(NSInteger)printerSettings;

@end

// A basic application program
@interface powerpointBaseApplication : powerpointBaseObject

@property (readonly) BOOL frontmost;  // Is this the frontmost application?
@property (copy, readonly) NSString *name;  // the name
@property (copy, readonly) NSString *version;  // the version of the application


@end

// A basic document
@interface powerpointBaseDocument : powerpointBaseObject

@property (readonly) BOOL modified;  // Has the document been modified since the last save?
@property (copy, readonly) NSString *name;  // the name


@end

// A basic window
@interface powerpointBasicWindow : powerpointBaseObject

@property NSRect bounds;  // the boundary rectangle for the window
@property (readonly) BOOL closeable;  // Does the window have a close box?
@property (readonly) BOOL titled;  // Does the window have a title bar?
@property (readonly) NSInteger entryIndex;  // the number of the window
@property (readonly) BOOL floating;  // Does the window float?
@property (readonly) BOOL modal;  // Is the window modal?
@property NSPoint position;  // upper left coordinates of the window
@property (readonly) BOOL resizable;  // Is the window resizable?
@property (readonly) BOOL zoomable;  // Is the window zoomable?
@property BOOL zoomed;  // Is the window zoomed?
@property (copy, readonly) NSString *name;  // the title of the window
@property (readonly) BOOL visible;  // Is the window visible?
@property (readonly) BOOL collapsable;  // Is the window collapasable?
@property BOOL collapsed;  // Is the window collapsed?
@property (readonly) BOOL sheet;  // Is this window a sheet window?


@end

@interface powerpointPrintSettings : SBObject

@property NSInteger copies;  // the number of copies of a document to be printed 
@property BOOL collating;  // Should printed copies be collated?
@property NSInteger startingPage;  // the first page of the document to be printed
@property NSInteger endingPage;  // the last page of the document to be printed
@property NSInteger pagesAcross;  // number of logical pages laid across a physical page
@property NSInteger pagesDown;  // number of logical pages laid out down a physical page
@property (copy) NSDate *requestedPrintTime;  // the time at which the desktop printer should print the document...
@property (copy) id errorHandling;  // how errors are handled
@property (copy) NSString *faxNumber;  // for fax number
@property (copy) NSString *targetPrinter;  // the queue name of the target printer

- (void) closeSaving:(powerpointSavo)saving savingIn:(powerpointPPfd)savingIn;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (void) delete;  // Delete an element from an object
- (SBObject *) duplicateTo:(SBObject *)to;  // Duplicate object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (void) openPassword:(NSString *)password writePassword:(NSString *)writePassword;  // Open the specified object(s)
- (void) saveIn:(powerpointPPfd)in_ as:(powerpointPPff)as;  // Save an object
- (void) select;  // Make a selection
- (BOOL) canCheckOutFileName:(NSString *)fileName;  // Returns True if PowerPoint can check out a specified presentation from a server.
- (void) checkOutFileName:(NSString *)fileName;  // Copies a specified presentation from a server to a local computer for editing. Returns a String that represents the local path and file name of the presentation checked out.
- (void) quit;
- (void) setPrinterSettingsPrinterSettings:(NSInteger)printerSettings;

@end



/*
 * Microsoft Office Suite
 */

// A control within a command bar.
@interface powerpointCommandBarControl : powerpointBaseObject

@property BOOL beginGroup;  // Returns or sets if the command bar control appears at the beginning of a group of controls on the command bar.
@property (readonly) BOOL builtIn;  // Returns true if the command bar control is a built-in command bar control.
@property (readonly) powerpointMCLT controlType;  // Returns the type of the command bar control.
@property (copy) NSString *descriptionText;  // Returns or sets the description for a command bar control.  The description is not displayed to the user, but it can be useful for documenting the behavior of a control.
@property BOOL enabled;  // Returns or sets if the command bar control is enabled.
@property (readonly) NSInteger entry_index;  // Returns the index number for this command bar control.
@property NSInteger height;  // Returns or sets the height of a command bar control.
@property NSInteger helpContextID;  // Returns or sets the help context ID number for the Help topic attached to the command bar control.
@property (copy) NSString *helpFile;  // Returns or sets the file name for the help topic attached to the command bar.  To use this property, you must also set the help context ID property.
- (NSInteger) id;  // Returns the id for a built-in command bar control.
@property (readonly) NSInteger leftPosition;  // Returns the left position of the command bar control.
@property (copy) NSString *name;  // Returns or sets the caption text for a command bar control.
@property (copy) NSString *parameter;  // Returns or sets a string that is used to execute a command.
@property NSInteger priority;  // Returns or sets the priority of a command bar control. A controls priority determines whether the control can be dropped from a docked command bar if the command bar controls can not fit in a single row.  Valid priority number are 0 through 7.
@property (copy) NSString *tag;  // Returns or sets information about the command bar control, such as data that can be used as an argument in procedures, or information that identifies the control.
@property (copy) NSString *tooltipText;  // Returns or sets the text displayed in a command bar controls tooltip.
@property (readonly) NSInteger top;  // Returns the top position of a command bar control.
@property BOOL visible;  // Returns or sets if the command bar control is visible.
@property NSInteger width;  // Returns or sets the width in pixels of the command bar control.

- (void) execute;  // Runs the procedure or built-in command assigned to the specified command bar control.

@end

// A button control within a command bar.
@interface powerpointCommandBarButton : powerpointCommandBarControl

@property (readonly) BOOL buttonFaceIsDefault;  // Returns if the face of a command bar button control is the original built-in face.
@property powerpointMBns buttonState;  // Returns or set the appearance of a command bar button control.  The property is read-only for built-in command bar buttons.
@property powerpointMBTs buttonStyle;  // Returns or sets the way a command button control is displayed.
@property NSInteger faceId;  // Returns or sets the Id number for the face of the command bar button control.


@end

// A combobox menu control within a command bar.
@interface powerpointCommandBarCombobox : powerpointCommandBarControl

@property powerpointMXcb comboboxStyle;  // Returns or sets the way a command bar combobox control is displayed.
@property (copy) NSString *comboboxText;  // Returns or sets the text in the display or edit portion of the command bar combobox control.
@property NSInteger dropDownLines;  // Returns or sets the number of lines in a command bar control combobox control.  The combobox control must be a custom control.
@property NSInteger dropDownWidth;  // Returns or sets the width in pixels of the list for the specified command bar combobox control.  An error occurs if you attempt to set this property for a built-in combobox control.
@property NSInteger listIndex;

- (void) addItemToComboboxComboboxItem:(NSString *)comboboxItem entry_index:(NSInteger)entry_index;  // Add a new string to a custom combobox control.
- (void) clearCombobox;  // Clear all of the strings form a custom combobox.
- (NSString *) getComboboxItemEntry_index:(NSInteger)entry_index;  // Return the string at the given index within a combobox.
- (NSInteger) getCountOfComboboxItems;  // Return the number of strings within a combobox.
- (void) removeAnItemFromComboboxEntry_index:(NSInteger)entry_index;  // Remove a string from a custom combobox.
- (void) setComboboxItemEntry_index:(NSInteger)entry_index comboboxItem:(NSString *)comboboxItem;  // Set the string an a given index for a custom combobox.

@end

// A popup menu control within a command bar.
@interface powerpointCommandBarPopup : powerpointCommandBarControl

- (SBElementArray *) commandBarControls;


@end

// Toolbars used in all of the Office applications.
@interface powerpointCommandBar : powerpointBaseObject

- (SBElementArray *) commandBarControls;

@property powerpointMBPS barPosition;  // Returns or sets the position of the command bar.
@property (readonly) powerpointMBTY barType;  // Returns the type of this command bar.
@property (readonly) BOOL builtIn;  // True if the command bar is built-in.
@property (copy, readonly) NSString *context;  // Returns or sets a string that determines where a command bar will be saved.
@property (readonly) BOOL embeddable;  // Returns if the command bar can be displayed inside the document window.
@property BOOL embedded;  // Returns or sets if the command bar will be displayed inside the document window.
@property BOOL enabled;  // Returns or set if the command bar is enabled.
@property (readonly) NSInteger entry_index;  // The index of the command bar.
@property NSInteger height;  // Returns or sets the height of the command bar.
@property NSInteger leftPosition;  // Returns or sets the left position of the command bar.
@property (copy) NSString *localName;  // Returns or sets the name of the command bar in the localized language of the application.  An error is returned when trying to set the local name of a built-in command bar.
@property (copy) NSString *name;  // Returns or sets the name of the command bar.
@property (copy) NSArray *protection;  // Returns or sets the way a command bar is protected from user customization.  It accepts a list of the following items: no protection, no customize, no resize, no move, no change visible, no change dock, no vertical dock, no horizontal dock.
@property NSInteger rowIndex;  // Returns or sets the docking order of a command bar in relation to other command bars in the same docking area.  Can be an integer greater than zero.
@property NSInteger top;  // Returns or sets the top position of a command bar.
@property BOOL visible;  // Returns or sets if the command bar is visible.
@property NSInteger width;  // Returns or sets the width in pixels of the command bar.


@end

@interface powerpointDocumentProperty : powerpointBaseObject

@property (copy) NSNumber *documentPropertyType;  // Returns or sets the document property type.
@property (copy) NSString *linkSource;  // Returns or sets the source of a lined custom document property.
@property BOOL linkToContent;  // True if the value of the document property is lined to the content of the container document.  False if the value is static.  This only applies to custom document properties.  For built-in properties this is always false.
@property (copy) NSString *name;  // Returns or sets the name of the document property.
@property (copy) NSString *value;  // Returns or sets the value of the document property.


@end

@interface powerpointCustomDocumentProperty : powerpointDocumentProperty


@end

@interface powerpointWebPageFont : powerpointBaseObject

@property (copy) NSString *fixedWidthFont;  // Returns or sets the fixed-width font setting.
@property double fixedWidthFontSize;  // Returns or sets the fixed-width font size.  You can enter half-point sizes; if you enter other fractional point sizes, they are rounded up or down to the nearest half-point.
@property (copy) NSString *proportionalFont;  // Returns or sets the proportional font setting.
@property double proportionalFontSize;  // Returns or sets the proportional font size.  You can enter half-point sizes; if you enter other fractional point sizes, they are rounded up or down to the nearest half-point.


@end



/*
 * Microsoft PowerPoint Suite
 */

@interface powerpointActionSetting : powerpointBaseObject

@property powerpointPAxT action;
@property (copy) NSString *actionSettingToRun;
@property (copy, readonly) powerpointSoundEffect *actionSoundEffect;
@property (copy) NSString *actionVerb;
@property BOOL animateAction;
@property (copy, readonly) powerpointHyperlink *hyperlink;
@property (copy) NSString *slideShowName;


@end

@interface powerpointAddIn : powerpointBaseObject

@property BOOL autoLoad;
@property (copy, readonly) NSString *fullName;
@property BOOL loaded;
@property (copy, readonly) NSString *name;
@property (copy, readonly) NSString *path;
@property BOOL registered;
@property (readonly) BOOL registeredInHKLM;


@end

@interface powerpointAnimationBehavior : powerpointBaseObject

@property powerpointAnSm accumulate;
@property powerpointAnpp additive;
@property powerpointAnTy animationBehaviorType;
@property (copy, readonly) powerpointColorsEffect *colorsEffect;
@property (copy, readonly) powerpointCommandEffect *commandEffect;
@property (copy, readonly) powerpointFilterEffect *filterEffect;
@property (copy, readonly) powerpointMotionEffect *motionEffect;
@property (copy, readonly) powerpointPropertyEffect *propertyEffect;
@property (copy, readonly) powerpointRotatingEffect *rotatingEffect;
@property (copy, readonly) powerpointScaleEffect *scaleEffect;
@property (copy, readonly) powerpointSetEffect *setEffect;
@property (copy, readonly) powerpointTiming *timing;


@end

@interface powerpointAnimationPoint : powerpointBaseObject

@property (copy) NSString *formula;
@property double time;
@property (copy) SBObject *value;


@end

@interface powerpointAnimationSettings : powerpointBaseObject

@property double advanceTime;
@property powerpointAsAe afterEffect;
@property BOOL animate;
@property BOOL animateBackground;
@property BOOL animateTextInReverse;
@property NSInteger animationOrder;
@property (copy, readonly) powerpointPlaySettings *animationPlaySettings;
@property (copy, readonly) powerpointSoundEffect *animationSoundEffect;
@property powerpointPCuE chartUnitEffect;
@property (copy) NSColor *dimColor;
@property powerpointMCoI dimColorThemeIndex;
@property powerpointPEeF entryEffect;
@property powerpointPTlE textLevelEffect;
@property powerpointPTuE textUnitEffect;


@end

// An AppleScript object representing the Microsoft POWERPOINT application.
@interface powerpointApplication : SBApplication

- (SBElementArray *) presentations;
- (SBElementArray *) documentWindows;
- (SBElementArray *) slideShowWindows;
- (SBElementArray *) commandBars;
- (SBElementArray *) addIns;

@property (copy, readonly) NSString *Version;
@property (copy, readonly) powerpointPresentation *activePresentation;
@property (copy, readonly) NSString *activePrinter;
@property (copy, readonly) powerpointDocumentWindow *activeWindow;
@property (copy, readonly) powerpointAutocorrect *autocorrectObject;  // Returns the autocorrect object
@property (copy, readonly) NSString *build;
@property (copy, readonly) NSString *caption;
@property powerpointPSAT defaultSaveFormat;
@property (copy, readonly) powerpointDefaultWebOptions *defaultWebOptionsObject;
@property NSInteger keyboardScript;  // Returns the current keyboard script
@property (copy, readonly) NSString *name;
@property (copy, readonly) NSString *operatingSystem;
@property (copy, readonly) NSString *path;
@property (copy, readonly) powerpointPreferences *preferenceObject;
@property (copy, readonly) powerpointSaveAsMovieSettings *saveAsMovieSettingsObject;
@property BOOL startUpDialog;

- (void) print:(NSArray *)x withProperties:(powerpointPrintSettings *)withProperties;  // Print the specified object(s)
- (void) quitSaving:(powerpointSavo)saving;  // Quit an application program
- (void) select;  // Make a selection
- (void) reset:(powerpoint4000)x;  // Resets a built-in command bar or command bar control to its default configuration.
- (void) applyTheme:(powerpoint4002)x fileName:(NSString *)fileName;  // Applies a theme or design template to the specified slide, master or presentation
- (void) arrangeWindows:(powerpointPArS)x;  // Arrange Document Windows
- (powerpointPlayer *) getPlayerFrom:(powerpoint4001)x for:(powerpointShape *)for_;  // get a player from a shape inside a slide show view
- (void) insertTheText:(NSString *)theText at:(SBObject *)at;
- (void) pasteObject:(powerpoint4003)x;
- (powerpointAddIn *) registerAddIn:(NSString *)x;
- (NSInteger) runVBMacroMacroName:(NSString *)macroName listOfParameters:(NSArray *)listOfParameters;  // Runs a Visual Basic macro.
- (void) apply:(powerpoint4004)x;
- (void) automaticLength:(powerpoint4024)x;
- (void) beginConnect:(powerpoint4019)x connectedShape:(powerpointShape *)connectedShape connectionSite:(NSInteger)connectionSite;
- (void) beginDisconnect:(powerpoint4020)x;
- (void) customDrop:(powerpoint4025)x dropAmount:(double)dropAmount;
- (void) customLength:(powerpoint4026)x length:(double)length;
- (void) endConnect:(powerpoint4021)x connectedShape:(powerpointShape *)connectedShape connectionSite:(NSInteger)connectionSite;
- (void) endDisconnect:(powerpoint4022)x;
- (void) flip:(powerpoint4008)x direction:(powerpointMFlC)direction;
- (powerpointActionSetting *) getActionSettingFor:(powerpoint4010)x event:(powerpointPMtv)event;
- (void) oneColorGradient:(powerpoint4011)x style:(powerpointMGdS)style variant:(NSInteger)variant degree:(double)degree;
- (void) patterned:(powerpoint4012)x pattern:(powerpointPpTy)pattern;
- (void) pickUp:(powerpoint4005)x;
- (void) presetGradient:(powerpoint4013)x style:(powerpointMGdS)style variant:(NSInteger)variant gradientType:(powerpointMPGb)gradientType;
- (void) presetTextured:(powerpoint4014)x texture:(powerpointMPzT)texture;
- (void) rerouteConnections:(powerpoint4006)x;
- (void) resetRotation:(powerpoint4023)x;  // Resets the extrusion rotation around the x-axis and the y-axis to zero so that the front of the extrusion faces forward. This method doesn't reset the rotation around the z-axis.
- (void) setShapesDefaultProperties:(powerpoint4007)x;
- (void) solid:(powerpoint4015)x;
- (void) twoColorGradient:(powerpoint4016)x style:(powerpointMGdS)style variant:(NSInteger)variant;
- (void) userPicture:(powerpoint4017)x pictureFile:(NSString *)pictureFile;
- (void) userTextured:(powerpoint4018)x textureFile:(NSString *)textureFile;
- (void) zOrder:(powerpoint4009)x zOrderPosition:(powerpointMZoC)zOrderPosition;

@end

// Represents a single autocorrect entry.
@interface powerpointAutocorrectEntry : powerpointBaseObject

@property (copy, readonly) NSString *autocorrectValue;  // Returns the value of the auto correct entry.
@property (readonly) NSInteger entry_index;  // Returns the index for the position of the object in its container element list.
@property (copy, readonly) NSString *name;  // Returns the name of the auto correct entry.


@end

// Represents the autocorrect functionality in PowerPoint.
@interface powerpointAutocorrect : powerpointBaseObject

- (SBElementArray *) autocorrectEntries;
- (SBElementArray *) firstLetterExceptions;
- (SBElementArray *) twoInitialCapsExceptions;

@property BOOL correctDays;  // Returns if PowerPoint automatically capitalizes the first letter of days of the week.
@property BOOL correctInitialCaps;  // Returns if PowerPoint automatically makes the second letter lowercase if the first two letters of a word are typed in uppercase. For example, POwerPoint is corrected to PowerPoint.
@property BOOL correctSentenceCaps;  // Returns if PowerPoint automatically capitalizes the first letter in each sentence.
@property BOOL replaceText;  // Returns if Microsoft PowerPoint automatically replaces specified text with entries from the autocorrect list.


@end

// Represents an interface for broadcasting presentations
@interface powerpointBroadcast : powerpointBaseObject

- (void) endSession;  // End a running broadcast session.
- (NSString *) getAttendeeURL;
- (BOOL) getIsBroadcasting;  // Returns true if the current presentation is being broadcast.
- (void) startServerUrl:(NSString *)serverUrl;  // Starts broadcasting to the given URL.

@end

@interface powerpointBulletFormat : powerpointBaseObject

@property (copy) NSString *bulletCharacter;  // Returns or sets the Unicode character value that is used for bullets in the specified text.
@property (copy, readonly) powerpointFont *bulletFont;  // Returns a font object that represents character formatting for a bullet format object.
@property (readonly) NSInteger bulletNumber;  // Returns the bullet number of a paragraph.
@property NSInteger bulletStartValue;
@property powerpointPBtS bulletStyle;  // Returns or sets a constant that represents the style of a bullet.
@property powerpointPBtT bulletType;  // Returns or sets a constant that represents the type of bullet.
@property double relativeSize;  // Returns or sets the bullet size relative to the size of the first text character in the paragraph.
@property BOOL useTextColor;  // Determines whether the specified bullets are set to the color of the first text character in the paragraph.
@property BOOL useTextFont;  // Determines whether the specified bullets are set to the font of the first text character in the paragraph.
@property BOOL visible;  // Returns or sets a value that specifies whether the bullet is visible.

- (void) setBulletPicturePictureFile:(NSString *)pictureFile;  // Sets the graphics file to be used for bullets in a bulleted list.

@end

@interface powerpointColorScheme : powerpointBaseObject

- (NSColor *) getColorFromAt:(powerpointPCSi)at;
- (void) setColorForAt:(powerpointPCSi)at toColor:(NSColor *)toColor;

@end

@interface powerpointColorsEffect : powerpointBaseObject

@property (copy) NSColor *by_color;
@property powerpointMCoI by_colorThemeIndex;  // Returns an object that represents a change to the color of the object by the specified number, expressed in RGB format.
@property (copy) NSColor *from_color;
@property powerpointMCoI from_colorThemeIndex;  // Returns or sets an object that represents the starting RGB color value of an animation behavior.
@property (copy) NSColor *to_color;
@property powerpointMCoI to_colorThemeIndex;  // Returns or sets an object that represents the RGB color value of an animation behavior.


@end

@interface powerpointCommandEffect : powerpointBaseObject

@property (copy) NSString *command;
@property powerpointAnCT type;


@end

@interface powerpointCustomLayout : powerpointBaseObject

- (SBElementArray *) shapes;

@property (copy, readonly) powerpointShape *background;
@property (copy, readonly) powerpointDesign *design;
@property BOOL displayMasterShapes;
@property BOOL followMasterBackground;
@property (copy, readonly) powerpointHeadersAndFooters *headersAndFooters;
@property (readonly) double height;
@property (copy, readonly) powerpointThemeColorScheme *themeColorScheme;  // Returns the color scheme of a custom layout.
@property (copy, readonly) powerpointTimeline *timeline;
@property (readonly) double width;


@end

@interface powerpointDefaultWebOptions : powerpointBaseObject

@property BOOL allowPNG;
@property BOOL alwaysSaveInDefaultEncoding;
@property BOOL checkIfOfficeIsHTMLEditor;
@property powerpointMtEn encoding;
@property BOOL updateLinksOnSave;


@end

@interface powerpointDesign : powerpointBaseObject

@property (copy, readonly) powerpointMaster *slideMaster;


@end

@interface powerpointDocumentWindow : powerpointBasicWindow

- (SBElementArray *) panes;

@property (readonly) BOOL active;
@property (copy, readonly) powerpointPane *activePane;
@property BOOL blackAndWhite;
@property (copy, readonly) NSString *caption;
@property (readonly) NSInteger entry_index;
@property double height;
@property double leftPosition;
@property (copy, readonly) powerpointPresentation *presentation;
@property (copy, readonly) powerpointSelection *selection;  // Represents the selection in the specified document window.
@property NSInteger splitHorizontal;
@property NSInteger splitVertical;
@property double top;
@property (copy, readonly) powerpointView *view;
@property powerpointPVTy viewType;
@property double width;

- (void) collapseSectionAtPosition:(NSInteger)atPosition;
- (void) expandSectionAtPosition:(NSInteger)atPosition;
- (BOOL) getIsExpandedOfSectionAtPosition:(NSInteger)atPosition;
- (void) launchSpellerOn;

@end

@interface powerpointEffectInformation : powerpointBaseObject

@property (readonly) powerpointAnAE afterEffectInformation;
@property (readonly) BOOL animateBackgroundInformation;
@property (readonly) BOOL animateTextInReverseInformation;
@property (readonly) powerpointAnLv buildByLevel;
@property (copy, readonly) NSColor *dim;
@property (copy, readonly) powerpointPlaySettings *playSettingsInformation;
@property (copy, readonly) powerpointSoundEffect *soundEffectInformation;
@property (readonly) powerpointAnTU textUnitEffectInformation;


@end

@interface powerpointEffectParameters : powerpointBaseObject

@property double amount;
@property (copy, readonly) NSColor *color2;
@property (readonly) powerpointMCoI color2ColorThemeIndex;  // Returns an object that represents the color on which to end a color-cycle animation.
@property powerpointAnDi direction;
@property (copy) NSString *font2;
@property BOOL relative;
@property double size2;


@end

@interface powerpointEffect : powerpointBaseObject

- (SBElementArray *) animationBehaviors;

@property powerpointAnFX animationEffectType;
@property (copy, readonly) powerpointEffectInformation *effectInformation;
@property (copy, readonly) powerpointEffectParameters *effectParameters;
@property BOOL exitAnimation;
@property (copy, readonly) NSString *name;
@property (copy) powerpointShape *shape;
@property NSInteger targetParagraph;
@property (readonly) NSInteger textRangeLength;
@property (readonly) NSInteger textRangeStart;
@property (copy, readonly) powerpointTiming *timing;

- (powerpointAnimationBehavior *) addBehaviorType:(powerpointAnTy)type;  // add an animation behavior

@end

@interface powerpointFilterEffect : powerpointBaseObject

@property powerpointAfet filterType;
@property BOOL reveal;
@property powerpointAfes subtype;


@end

// Represents an abbreviation excluded from automatic correction.
@interface powerpointFirstLetterException : powerpointBaseObject

@property (readonly) NSInteger entry_index;  // Returns the index for the position of the object in its container element list.
@property (copy, readonly) NSString *name;  // Returns the name of the FirstLetterException.


@end

// Contains font attributes, such as font name, size, and color, for an object.
@interface powerpointFont : powerpointBaseObject

@property (copy) NSString *ASCIIName;  // Returns or sets the font used for Latin text; characters with character codes from 0 through 127.
@property BOOL autoRotateNumbers;  // Returns or sets a value that specifies whether the numbers in a numbered list should be rotated when the text is rotated.
@property double baseLineOffset;  // Returns or sets a value specifying the horizontaol offset of the selected font.
@property BOOL bold;  // Returns or sets a value specifying whether the font should be bold.
@property powerpointMTCa capsType;  // Returns or sets a value specifying how the text should be capitalized.
@property (copy) NSString *eastAsianName;  // Returns or sets the font name used for Asian text.
@property (readonly) BOOL embedable;  // Returns a value indicating whether the font can be embedded in a page.
@property (readonly) BOOL embedded;  // Returns a value specifying whether the font is embedded in a page.
@property BOOL emboss;
@property BOOL equalizeCharacterHeight;  // Returns or sets a value specifying whether the text should have the same horizontal height.
@property (copy, readonly) powerpointFillFormat *fillFormat;  // Returns a value specifying the fill formatting for text.
@property (copy) NSColor *fontColor;
@property powerpointMCoI fontColorThemeIndex;  // Returns or sets the color for the specified font.
@property (copy) NSString *fontName;  // Returns or sets a value specifying the font to use for a selection.
@property (copy) NSString *fontNameOther;  // Returns or sets the font used for characters whose character set numbers are greater than 127.
@property double fontSize;
@property (copy, readonly) powerpointGlowFormat *glowFormat;  // Returns a value specifying the glow formatting of the text.
@property (copy) NSColor *highlightColor;  // Returns or sets the text highlight color for object.
@property powerpointMCoI highlightColorThemeIndex;  // Returns or sets the specified text highlight color for object.
@property BOOL italic;
@property double kerning;  // Returns or sets a value specifying the amount of spacing between text characters.
@property (copy, readonly) powerpointLineFormat *lineFormat;  // Returns a value specifiying the line formatting of the text.
@property (copy, readonly) powerpointReflectionFormat *reflectionFormat;  // Returns a value specifying the reflection formatting of the text.
@property (copy, readonly) powerpointShadowFormat *shadowFormat;  // Returns the value specifying the type of shadow effect for the selection of text.
@property powerpointMSET softEdgeFormat;  // Returns or sets a value specifying the soft edge fromatting of the text.
@property double spacing;  // Returns or sets a value specifying the spacing between characters in a selection of text.
@property powerpointMTSt strikeType;  // Returns or sets a value specifying the strike format used for a selection of text.
@property BOOL subscript;  // Returns or sets a value specifying that the selected text should be displayed a subscript.
@property BOOL superscript;  // Returns or sets a value specifying that the selected text should be displayed a superscript.
@property double transparency;
@property BOOL underline;
@property (copy) NSColor *underlineColor;  // Returns or sets the 24-bit color of the underline for the specified font object.
@property powerpointMCoI underlineColorThemeIndex;  // Returns a value specifying the color of the underline for the selected text.
@property powerpointMTUl underlineStyle;  // Returns or sets a value specifying the underline style for the selected text.
@property powerpointMPXF wordArtStylesFormat;  // Returns or sets a value specifying the text effect for the selected text.


@end

@interface powerpointHeaderOrFooter : powerpointBaseObject

@property powerpointPDtF dateFormat;
@property (copy) NSString *headerFooterText;
@property BOOL useDateFormat;
@property BOOL visible;


@end

@interface powerpointHeadersAndFooters : powerpointBaseObject

@property (copy, readonly) powerpointHeaderOrFooter *dateAndTime;
@property BOOL displayHeadersFootersOnTitleSlide;
@property (copy, readonly) powerpointHeaderOrFooter *footer;
@property (copy, readonly) powerpointHeaderOrFooter *header;
@property (copy, readonly) powerpointHeaderOrFooter *slideNumber;


@end

@interface powerpointHyperlink : powerpointBaseObject

@property (copy) NSString *hyperlinkAddress;
@property (copy) NSString *hyperlinkSubAddress;
@property (readonly) powerpointMHyT hyperlinkType;


@end

@interface powerpointMaster : powerpointBaseObject

- (SBElementArray *) shapes;
- (SBElementArray *) hyperlinks;
- (SBElementArray *) customLayouts;

@property (copy, readonly) powerpointShape *background;
@property (copy, readonly) powerpointColorScheme *colorScheme;
@property (copy, readonly) powerpointDesign *design;
@property (copy, readonly) powerpointHeadersAndFooters *headersAndFooters;
@property (readonly) double height;
@property (copy, readonly) powerpointOfficeTheme *theme;
@property (copy, readonly) powerpointTimeline *timeline;
@property (readonly) double width;

- (powerpointTextStyle *) getTextStyleFromAt:(powerpointPTst)at;

@end

@interface powerpointMotionEffect : powerpointBaseObject

@property double byX;
@property double byY;
@property double fromX;
@property double fromY;
@property (copy) NSString *path;
@property double toX;
@property double toY;


@end

@interface powerpointNamedSlideShow : powerpointBaseObject

@property (copy, readonly) NSString *name;
@property (readonly) NSInteger numberOfSlides;
@property (copy, readonly) NSArray *slideIDs;


@end

@interface powerpointPageSetup : powerpointBaseObject

@property NSInteger firstSlideNumber;
@property powerpointMOrT notesOrientation;
@property powerpointMOrT slideOrientation;
@property powerpointSSzT slideSize;
@property double slideWidth;


@end

@interface powerpointPane : powerpointBaseObject

@property (readonly) BOOL active;
@property (readonly) powerpointPVTy paneViewType;


@end

@interface powerpointParagraphFormat : powerpointBaseObject

- (SBElementArray *) tabStops;

@property powerpointPpgA alignment;
@property powerpointPBlA baselineAlignment;  // Returns or sets a constant that represents the vertical position of fonts in a paragraph.
@property (copy, readonly) powerpointBulletFormat *bulletFormat;
@property BOOL eastAsianLineBreakControl;
@property double firstLineIndent;  // Returns or sets the value, in points, for a first line or hanging indent.
@property BOOL hangingPunctuation;  // Determines whether hanging punctuation is enabled for the specified paragraphs.
@property NSInteger indentLevel;  // Returns or sets a value representing the indent level assigned to text in the selected paragraph.
@property double leftIndent;  // Returns or sets a value that represents the left indent value, in points, for the specified paragraphs.
@property BOOL lineRuleAfter;  // Determines whether line spacing after the last line in each paragraph is set to a specific number of points or lines.
@property BOOL lineRuleBefore;  // Determines whether line spacing before the first line in each paragraph is set to a specific number of points or lines.
@property BOOL lineRuleWithin;  // Determines whether line spacing between base lines is set to a specific number of points or lines.
@property double rightIndent;  // Returns or sets the right indent, in points, for the specified paragraphs.
@property double spaceAfter;  // Returns or sets the spacing, in points, after the specified paragraphs.
@property double spaceBefore;  // Returns or sets the spacing, in points, before the specified paragraphs.
@property double spaceWithin;  // Returns or sets the amount of space between base lines in the specified paragraph, in points or lines.
@property powerpointPDrT textDirection;  // Returns or sets the text direction for the specified paragraph.
@property BOOL wordWrap;  // Determines whether the application wraps the Latin text in the middle of a word in the specified paragraphs.


@end

@interface powerpointPlaySettings : powerpointBaseObject

@property BOOL hideWhileNotPlaying;
@property BOOL loopUntilStopped;
@property BOOL pauseAnimation;
@property BOOL playOnEntry;
@property BOOL rewindMove;
@property NSInteger stopAfterSlides;


@end

// Represents an interface for playing movies
@interface powerpointPlayer : powerpointBaseObject

@property NSInteger currentPosition;
@property (readonly) powerpointPSta playerState;

- (void) goToNextBookmarkForPlayer;  // Advance the player to the next bookmark.
- (void) goToPreviousBookmarkForPlayer;  // Rewind the player to the previous bookmark.
- (void) pausePlayer;  // Pause playback.
- (void) playPlayer;  // Begin or resume playback.
- (void) stopPlayer;  // Stop playback.

@end

@interface powerpointPreferences : powerpointBaseObject

@property NSInteger alwaysSuggestCorrections;
@property NSInteger appendDOSExtentions;
@property NSInteger autoFit;
@property NSInteger autoRecoveryFrequency;
@property NSInteger backgroundSpelling;
@property NSInteger compressFile;
@property NSInteger defaultView;
@property NSInteger dragDrop;
@property NSInteger endBlankSlide;
@property NSInteger filePropertiesPrompt;
@property NSInteger fullTextSearch;
@property NSInteger hideSpellingErrors;
@property NSInteger ignoreNumbersInWords;
@property NSInteger ignoreUppercase;
@property NSInteger mruListActive;
@property NSInteger mruListSize;
@property NSInteger optionBitmap;
@property NSInteger rulerUnits;
@property NSInteger saveAutoRecovery;
@property NSInteger showVerticalRuler;
@property NSInteger slideShowControl;
@property NSInteger slideShowRightMouse;
@property NSInteger smartCutPaste;
@property NSInteger smartQuotes;
@property NSInteger undoLevelCount;
@property (copy) NSString *userInitials;
@property (copy) NSString *userName;
@property NSInteger wordSelection;


@end

@interface powerpointPresentation : powerpointBaseObject

- (SBElementArray *) slides;
- (SBElementArray *) colorSchemes;
- (SBElementArray *) fonts;
- (SBElementArray *) documentWindows;
- (SBElementArray *) documentProperties;
- (SBElementArray *) customDocumentProperties;
- (SBElementArray *) designs;

@property (copy, readonly) powerpointBroadcast *broadcast;
@property (copy, readonly) powerpointShape *defaultShape;
@property powerpointPeBl eastAsianLineBreakLevel;  // Returns or sets the East Asian line break control level for the specified paragraph.
@property (copy, readonly) NSString *fullName;
@property (copy, readonly) powerpointMaster *handoutMaster;
@property (readonly) BOOL hasTitleMaster;
@property (readonly) BOOL inMergeMode;
@property (readonly) BOOL isProtected;  // Returns true if the presentation is protected by Information Rights Management.
@property powerpointPDrT layoutDirection;
@property (copy, readonly) NSString *name;
@property (copy) NSString *noLineBreakAfter;
@property (copy) NSString *noLineBreakBefore;
@property (copy, readonly) powerpointMaster *notesMaster;
@property (copy, readonly) powerpointPageSetup *pageSetup;
@property (copy) NSString *password;  // The password for opening the presentation
@property (copy, readonly) NSString *path;
@property (copy, readonly) powerpointPrintOptions *printOptions;
@property (readonly) BOOL readOnly;
@property (copy, readonly) powerpointSaveAsMovieSettings *saveAsMovieSettings;
@property BOOL saved;
@property (copy, readonly) powerpointSectionProperties *sectionProperties;
@property (copy, readonly) powerpointMaster *slideMaster;
@property (copy, readonly) powerpointSlideShowSettings *slideShowSettings;
@property (copy, readonly) powerpointSlideShowWindow *slideShowWindow;
@property (copy, readonly) NSString *templateName;
@property (copy, readonly) powerpointMaster *titleMaster;
@property (copy, readonly) powerpointWebOptions *webOptions;
@property (copy) NSString *writePassword;  // The password for saving changes to the presentation

- (void) acceptAll;  // Accept all of the Merge Compare differences between two Presentations.
- (powerpointDesign *) addDesignDesignName:(NSString *)DesignName index:(NSInteger)index;  // add a new design
- (void) applyTemplateFileName:(NSString *)fileName;  // Applies a theme or design template to the specified slide, master or presentation
- (BOOL) canCheckIn;  // Returns True if PowerPoint can check in a specified presentation to a server.
- (void) checkInSaveChanges:(BOOL)saveChanges comments:(NSString *)comments makePublic:(BOOL)makePublic;  // Returns a presentation from a local computer to a server, and sets the local file to read-only so that it cannot be edited locally.
- (void) checkInWithVersionSaveChanges:(BOOL)saveChanges comments:(NSString *)comments makePublic:(BOOL)makePublic versionType:(powerpointCivt)versionType;  // Returns a presentation from a local computer to a server, and sets the local file to read-only so that it cannot be edited locally.
- (void) endReview;  // End the Merge Compare Process between two Presentations
- (void) mergePresentationWithRevisionPath:(NSString *)withRevisionPath withBaselinePath:(id)withBaselinePath;  // Compare the active presentation between one or two presentations. If two files are to be compared to the active presentation, then the optional second parameter is the Path to the baseline.
- (void) mergeWithBaselineWithRevisionPath:(NSString *)withRevisionPath withBaselinePath:(NSString *)withBaselinePath;  // Compare the active presentation with two presentations. The two files are to be compared to the active presentation, then the second parameter is the Path to the baseline.
- (void) printOutFrom:(NSInteger)from to:(NSInteger)to printToFile:(NSString *)printToFile copies:(NSInteger)copies collate:(BOOL)collate showDialog:(BOOL)showDialog;
- (void) redoTimes:(NSInteger)times;
- (void) rejectAll;  // Reject all of the Merge Compare differences between two Presentations.
- (void) undoTimes:(NSInteger)times;
- (void) updateLinks;

@end

@interface powerpointPresenterTool : powerpointBaseObject

@property (copy, readonly) powerpointSlide *currentPresenterSlide;
@property (readonly) NSInteger currentSlideInShow;
@property (readonly) double elapsedTime;
@property (readonly) NSInteger maxSlidesInShow;
@property (copy) NSString *notesText;
@property NSInteger notesZoom;
@property (readonly) BOOL slideMiniature;

- (void) endShow;
- (void) next;
- (void) pauseTimer;
- (void) previous;
- (void) resetTimer;
- (void) startTimer;
- (void) swapDisplays;
- (void) toggleSlideMiniature;

@end

@interface powerpointPresenterViewWindow : powerpointBasicWindow

@property (readonly) BOOL active;
@property (readonly) double height;
@property (copy, readonly) powerpointPresentation *presentation;
@property (copy, readonly) powerpointPresenterTool *presenterTool;
@property (readonly) double width;


@end

@interface powerpointPrintOptions : powerpointBaseObject

- (SBElementArray *) printRanges;

@property (copy, readonly) NSString *activePrinter;
@property BOOL collate;
@property BOOL fitToPage;
@property BOOL frameSlides;
@property NSInteger numberOfCopies;
@property powerpointPtOt outputType;
@property powerpointPrCt printColorType;
@property BOOL printFontsAsGraphics;
@property BOOL printHiddenSlides;
@property powerpointRgTy rangeType;
@property NSInteger sectionIndex;
@property (copy) NSString *slideShowName;


@end

@interface powerpointPrintRange : powerpointBaseObject

@property (readonly) NSInteger rangeEnd;
@property (readonly) NSInteger rangeStart;


@end

@interface powerpointPropertyEffect : powerpointBaseObject

- (SBElementArray *) animationPoints;

@property (copy, readonly) id ending;
@property powerpointAnPr propertySetEffect;
@property (copy, readonly) id starting;


@end

@interface powerpointRotatingEffect : powerpointBaseObject

@property double rotating;


@end

@interface powerpointRulerLevel : powerpointBaseObject

@property double firstMargin;  // Returns or sets the first-line indent for the specified outline level, in points.
@property double leftMargin;  // Returns or sets the left indent for the specified outline level, in points.


@end

// Represents the ruler for the text in the specified shape or for all text in the specified text style. Contains tab stops and the indentation settings for text outline levels.
@interface powerpointRuler : powerpointBaseObject

- (SBElementArray *) tabStops;
- (SBElementArray *) rulerLevels;


@end

@interface powerpointSaveAsMovieSettings : powerpointBaseObject

@property BOOL autoLoopEnabled;
@property (copy) NSString *backgroundSoundTrackFile;
@property NSInteger backgroundTrackSegmentEnd;
@property NSInteger backgroundTrackSegmentStart;
@property NSInteger backgroundTrackStart;
@property BOOL createMoviePreview;
@property BOOL forceAllInline;
@property BOOL includeNarrationAndSounds;
@property (copy) NSString *movieActors;
@property (copy) NSString *movieAuthor;
@property (copy) NSString *movieCopyright;
@property NSInteger movieFrameHeight;
@property NSInteger movieFrameWidth;
@property (copy) NSString *movieProducer;
@property powerpointPMOt optimization;
@property BOOL showMovieController;
@property (copy) NSString *transitionDescription;
@property BOOL useSingleTransition;


@end

@interface powerpointScaleEffect : powerpointBaseObject

@property double byX;
@property double byY;
@property double fromX;
@property double fromY;
@property double toX;
@property double toY;


@end

@interface powerpointSectionProperties : powerpointBaseObject

- (void) deleteSectionAtPosition:(NSInteger)atPosition deletingSlides:(BOOL)deletingSlides;
- (NSInteger) getCountOfSections;
- (NSInteger) getFirstSlideOfSectionAtPosition:(NSInteger)atPosition;
- (NSString *) getIdOfSectionAtPosition:(NSInteger)atPosition;
- (NSString *) getNameOfSectionAtPosition:(NSInteger)atPosition;
- (NSInteger) getSlideCountOfSectionAtPosition:(NSInteger)atPosition;
- (NSInteger) insertSectionBeforeSection:(NSInteger)beforeSection beforeSlide:(NSInteger)beforeSlide titled:(NSString *)titled;
- (void) moveSectionAtPosition:(NSInteger)atPosition toPosition:(NSInteger)toPosition;
- (void) renameSectionAtPosition:(NSInteger)atPosition to:(NSString *)to;

@end

// Represents the selection in the specified document window
@interface powerpointSelection : powerpointBaseObject

@property (copy, readonly) powerpointShapeRange *childShapeRange;  // Returns the child shapes of a selection.
@property (readonly) BOOL hasChildShapeRange;  // Returns whether the selection contains child shapes.
@property (readonly) powerpointPSEL selectionType;  // Represents the type of objects in a selection.
@property (copy, readonly) powerpointShapeRange *shapeRange;  // Returns a collection of shapes selected on the specified slide.
@property (copy, readonly) powerpointSlideRange *slideRange;  // Returns a collection of selected slides.
@property (copy, readonly) powerpointTextRange *textRange;  // Returns the text and text properties of the selected text.

- (void) unselect;  // Cancels the current selection.

@end

@interface powerpointSequence : powerpointBaseObject

- (SBElementArray *) effects;

- (powerpointEffect *) addEffectFor:(powerpointShape *)for_ fx:(powerpointAnFX)fx level:(powerpointAnLv)level trigger:(powerpointAnTr)trigger index:(NSInteger)index;  // add an effect for a shape
- (powerpointEffect *) convertToTextUnitEffectEffect:(powerpointEffect *)Effect unit:(powerpointAnTU)unit;  // convert an effect to a text unit effect

@end

@interface powerpointSetEffect : powerpointBaseObject

@property (copy) id ending;
@property powerpointAnPr propertySetEffect;


@end

// A collection that represents a notes page or a slide range, which is a set of slides that can contain a single slide to as many as all slides in a presentation.
@interface powerpointSlideRange : powerpointBaseObject

- (SBElementArray *) slides;
- (SBElementArray *) shapes;
- (SBElementArray *) hyperlinks;

@property (copy) powerpointColorScheme *colorScheme;  // Returns or sets the color scheme for the specified slide, slide range, or slide master.
@property (copy) powerpointCustomLayout *customLayout;  // Returns the custom layout associated with the specified range of slides.
@property (copy) powerpointDesign *design;
@property BOOL displayMasterShapes;  // Determines whether the specified range of slides displays the background objects on the slide master.
@property BOOL followMasterBackground;  // Determines whether the range of slides follows the slide master background.
@property (copy, readonly) powerpointHeadersAndFooters *headersAndFooters;  // Returns a collection that represents the header, footer, date and time, and slide number associated with the slide, slide master, or range of slides.
@property powerpointPSLo layout;  // Returns or sets the slide layout.
@property (copy, readonly) powerpointSlideRange *notesPage;  // Returns a slide range object that represents the notes pages for the specified slide or range of slides.
@property (readonly) NSInteger printSteps;
@property (readonly) NSInteger slideID;
@property (readonly) NSInteger slideIndex;
@property (copy, readonly) powerpointMaster *slideMaster;  // Returns the slide master.
@property (readonly) NSInteger slideNumber;  // Returns the slide number.
@property (copy, readonly) powerpointSlideShowTransition *slideShowTransitions;  // Returns the special effects for the specified slide transition.
@property (copy, readonly) powerpointTimeline *timeline;  // Returns the animation timeline for the slide.


@end

@interface powerpointSlideShowSettings : powerpointBaseObject

- (SBElementArray *) namedSlideShows;

@property powerpointPSaM advanceMode;
@property NSInteger endingSlide;
@property BOOL loopUntilStopped;
@property (copy) NSColor *pointerColor;
@property powerpointMCoI pointerColorThemeIndex;  // Returns or sets the color of  default pointer color for a presentation.
@property powerpointSRgT rangeType;
@property powerpointPSSt showType;
@property (readonly) BOOL showWithAnimation;
@property BOOL showWithNarration;
@property BOOL showWithPresenter;
@property (copy) NSString *slideShowName;
@property NSInteger startingSlide;

- (powerpointSlideShowWindow *) runSlideShow;

@end

@interface powerpointSlideShowTransition : powerpointBaseObject

@property BOOL advanceOnClick;
@property BOOL advanceOnTime;
@property double advanceTime;
@property powerpointPEeF entryEffect;
@property BOOL hidden;
@property BOOL loopSoundUntilNext;
@property (copy, readonly) powerpointSoundEffect *soundEffectTransition;
@property double transitionDuration;


@end

@interface powerpointSlideShowView : powerpointBaseObject

@property BOOL accelerationsEnabled;
@property (readonly) NSInteger currentShowPosition;
@property (readonly) BOOL isNamedShow;
@property (copy, readonly) powerpointSlide *lastSlideViewed;
@property (copy) NSColor *pointerColor;
@property powerpointMCoI pointerColorThemeIndex;  // Returns or sets the color of temporary pointer color for a view of a slide show.
@property powerpointPSsP pointerType;
@property (readonly) double presentationElapsedTime;
@property (copy, readonly) powerpointSlide *slide;
@property double slideElapsedTime;
@property (copy, readonly) NSString *slideShowName;
@property powerpointPShS slideState;
@property (readonly) NSInteger zoom;

- (void) exitSlideShow;
- (void) goToFirstSlide;
- (void) goToLastSlide;
- (void) goToNextSlide;
- (void) goToPreviousSlide;
- (void) resetSlideTime;

@end

@interface powerpointSlideShowWindow : powerpointBasicWindow

@property (readonly) BOOL active;
@property NSRect bounds;
@property double height;
@property (readonly) BOOL isFullScreen;
@property double leftPosition;
@property (copy, readonly) powerpointPresentation *presentation;
@property (copy, readonly) powerpointSlideShowView *slideshowView;
@property double top;
@property double width;


@end

@interface powerpointSlide : powerpointBaseObject

- (SBElementArray *) shapes;
- (SBElementArray *) hyperlinks;

@property (copy, readonly) powerpointShape *background;
@property (copy) powerpointColorScheme *colorScheme;
@property (copy) powerpointCustomLayout *customLayout;
@property (copy) powerpointDesign *design;
@property BOOL displayMasterShapes;
@property BOOL followMasterBackground;
@property (copy, readonly) powerpointHeadersAndFooters *headersAndFooters;
@property powerpointPSLo layout;
@property (copy, readonly) powerpointSlide *notesPage;
@property (readonly) NSInteger printSteps;
@property (readonly) NSInteger sectionIndex;
@property (readonly) NSInteger sectionNumber;
@property (readonly) NSInteger slideID;
@property (readonly) NSInteger slideIndex;
@property (copy, readonly) powerpointMaster *slideMaster;
@property (readonly) NSInteger slideNumber;
@property (copy, readonly) powerpointSlideShowTransition *slideShowTransition;
@property (copy, readonly) powerpointTimeline *timeline;

- (void) applyThemeColorSchemeFileName:(NSString *)fileName;  // Applies a theme color to the specified slide.
- (void) copyObject;
- (void) cutObject;
- (void) moveToStartOfSectionAtPosition:(NSInteger)atPosition;

@end

@interface powerpointSoundEffect : powerpointBaseObject

@property (copy, readonly) NSString *name;
@property powerpointPSnX soundType;

- (void) importSoundFileSoundFileName:(NSString *)soundFileName;
- (void) playSoundEffect;

@end

// Represents a single tab stop.
@interface powerpointTabStop : powerpointBaseObject

@property double tabPosition;  // Returns or sets the position of a tab stop relative to the left margin.
@property powerpointPTSp tabStopType;  // Returns or sets the type of the tab stop object.


@end

@interface powerpointTextStyleLevel : powerpointBaseObject

@property (copy, readonly) powerpointFont *font;
@property (copy, readonly) powerpointParagraphFormat *paragraphFormat;


@end

@interface powerpointTextStyle : powerpointBaseObject

- (SBElementArray *) textStyleLevels;

@property (copy, readonly) powerpointRuler *ruler;
@property (copy, readonly) powerpointTextFrame *textFrame;


@end

@interface powerpointTimeline : powerpointBaseObject

- (SBElementArray *) sequences;

@property (copy, readonly) powerpointSequence *mainSequence;

- (powerpointSequence *) addSequenceIndex:(NSInteger)index;  // add an interactive sequence

@end

@interface powerpointTiming : powerpointBaseObject

@property double acceleration;
@property BOOL autoreverse;
@property double deceleration;
@property double duration;
@property NSInteger repeatCount;
@property double repeatDuration;
@property powerpointAnRs restart;
@property BOOL rewind;
@property BOOL smoothEnd;
@property BOOL smoothStart;
@property double speed;


@end

// Represents a single initial-capital autocorrect exception.
@interface powerpointTwoInitialCapsException : powerpointBaseObject

@property (readonly) NSInteger entry_index;  // Returns the index for the position of the object in its container element list.
@property (copy, readonly) NSString *name;  // Returns the name of the TwoInitialCapsException.


@end

@interface powerpointView : powerpointBaseObject

@property BOOL displaySlideMiniature;
@property (copy) powerpointSlide *slide;
@property (readonly) powerpointPVTy viewType;
@property NSInteger zoom;
@property BOOL zoomToFit;

- (void) goToSlideNumber:(NSInteger)number;

@end

@interface powerpointWebOptions : powerpointBaseObject

@property BOOL allowPNG;
@property powerpointMtEn encoding;


@end



/*
 * Drawing Suite
 */

@interface powerpointAdjustment : powerpointBaseObject

@property double adjustment_value;


@end

@interface powerpointCalloutFormat : powerpointBaseObject

@property BOOL accent;
@property powerpointMCAt angle;
@property BOOL autoAttach;
@property (readonly) BOOL autoLength;
@property BOOL border;
@property (readonly) double calloutFormatLength;
@property powerpointMCot calloutType;
@property (readonly) double drop;
@property (readonly) powerpointMCDt dropType;
@property double gap;

- (void) presetDropDropType:(powerpointMCDt)dropType;

@end

@interface powerpointConnectorFormat : powerpointBaseObject

@property (readonly) BOOL beginConnected;
@property (copy, readonly) powerpointShape *beginConnectedShape;
@property (readonly) NSInteger beginConnectionSite;
@property powerpointMCtT connectorType;
@property (readonly) BOOL endConnected;
@property (copy, readonly) powerpointShape *endConnectedShape;
@property (readonly) NSInteger endConnectionSite;


@end

// Represents fill formatting for a shape. A shape can have a solid, gradient, texture, pattern, picture, or semi-transparent fill.
@interface powerpointFillFormat : powerpointBaseObject

- (SBElementArray *) gradientStops;

@property (copy) NSColor *backColor;
@property powerpointMCoI backColorThemeIndex;  // Returns or sets the specified fill background color.
@property (readonly) powerpointMFdT fillFormatType;
@property (copy) NSColor *foreColor;
@property powerpointMCoI foreColorThemeIndex;  // Returns or sets the specified foreground fill or solid color.
@property (readonly) powerpointMGCt gradientColorType;
@property (readonly) double gradientDegree;
@property (readonly) powerpointMGdS gradientStyle;
@property (readonly) NSInteger gradientVariant;
@property (readonly) powerpointPpTy pattern;
@property (readonly) powerpointMPGb presetGradientType;
@property (readonly) powerpointMPzT presetTexture;
@property BOOL rotateWithObject;  // Returns or sets whether the fill rotates with the specified shape.
@property powerpointMTtA textureAlignment;  // Returns or sets the texture alignment for the specified object.
@property double textureHorizontalScale;  // Returns or sets the texture alignment for the specified object.
@property (copy, readonly) NSString *textureName;
@property double textureOffsetX;  // Returns or sets the texture alignment for the specified object.
@property double textureOffsetY;  // Returns or sets the texture alignment for the specified object.
@property BOOL textureTile;  // Returns the texture tile style for the specified fill.
@property double textureVerticalScale;  // Returns or sets the texture alignment for the specified object.
@property double transparency;
@property BOOL visible;

- (void) deleteGradientStopStopIndex:(NSInteger)stopIndex;  // Removes a gradient stop.
- (void) insertGradientStopCustomColor:(NSColor *)customColor position:(double)position transparency:(double)transparency stopIndex:(NSInteger)stopIndex;  // Adds a stop to a gradient.

@end

// Represents the glow formatting for a shape or range of shapes
@interface powerpointGlowFormat : powerpointBaseObject

@property (copy) NSColor *color;  // Returns or sets the color for the specified glow format.
@property powerpointMCoI colorThemeIndex;  // Returns or sets the color for the specified glow format.
@property double radius;  // Returns or sets the length of the radius for the specified glow format.


@end

// Represents one gradient stop.
@interface powerpointGradientStop : powerpointBaseObject

@property (copy) NSColor *color;  // Returns or sets the color for the specified the gradient stop.
@property powerpointMCoI colorThemeIndex;  // Returns or sets the color for the specified gradient stop.
@property double position;  // Returns or sets the position for the specified gradient stop expressed as a percent.
@property double transparency;  // Returns or sets a value representing the transparency of the gradient fill expressed as a percent.


@end

@interface powerpointLineFormat : powerpointBaseObject

@property (copy) NSColor *backColor;
@property powerpointMCoI backColorThemeIndex;  // Returns or sets the background color for a patterned line.
@property powerpointMAhL beginArrowHeadLength;
@property powerpointMAhS beginArrowheadStyle;
@property powerpointMAhW beginArrowheadWidth;
@property powerpointMlDs dashStyle;
@property powerpointMAhL endArrowheadLength;
@property powerpointMAhS endArrowheadStyle;
@property powerpointMAhW endArrowheadWidth;
@property (copy) NSColor *foreColor;
@property powerpointMCoI foreColorThemeIndex;  // Returns or sets the foreground color for the line.
@property powerpointPpTy lineFormatPatterned;
@property powerpointMLnS lineStyle;
@property double lineWeight;
@property double transparency;


@end

@interface powerpointLinkFormat : powerpointBaseObject

@property powerpointPUdO autoUpdate;
@property (copy) NSString *sourceFullName;


@end

// Represents a Microsoft Office theme.
@interface powerpointOfficeTheme : powerpointBaseObject

@property (copy, readonly) powerpointThemeColorScheme *themeColorScheme;  // Returns the color scheme of a Microsoft Office theme.
@property (copy, readonly) powerpointThemeEffectScheme *themeEffectScheme;  // Returns the effects scheme of a Microsoft Office theme.
@property (copy, readonly) powerpointThemeFontScheme *themeFontScheme;  // Returns the font scheme of a Microsoft Office theme.


@end

@interface powerpointPictureFormat : powerpointBaseObject

@property double brightness;  // Returns or sets the brightness of the specified picture. The value for this property must be a number from 0.0, dimmest to 1.0, brightest.
@property powerpointMPc colorType;  // Returns or sets the type of color transformation applied to the specified picture.
@property double contrast;  // Returns or sets the contrast for the specified picture. The value for this property must be a number from 0.0, the least contrast to 1.0, the greatest contrast.
@property double cropBottom;  // Returns or sets the number of points that are cropped off the bottom of the specified picture.
@property double cropLeft;  // Returns or sets the number of points that are cropped off the left side of the specified picture.
@property double cropRight;  // Returns or sets the number of points that are cropped off the right side of the specified picture.
@property double cropTop;  // Returns or sets the number of points that are cropped off the top of the specified picture.
@property (copy) NSColor *transparencyColor;  // Returns or sets the transparent color for the specified picture as aRGB color. For this property to take effect, the transparent background property must be set to true.
@property BOOL transparentBackground;  // Returns or sets if the parts of the picture that are defined with a transparent color actually appear transparent.


@end

@interface powerpointPlaceholderFormat : powerpointBaseObject

@property (readonly) powerpointMShp containedType;
@property (copy) NSString *placeholderName;
@property (readonly) powerpointPPhd placeholderType;


@end

// Represents the reflection effect in Office graphics.
@interface powerpointReflectionFormat : powerpointBaseObject

@property powerpointMRfT reflectionType;  // Returns or sets the type of the reflection format object.


@end

@interface powerpointShadowFormat : powerpointBaseObject

@property double blur;
@property (copy) NSColor *foreColor;
@property powerpointMCoI foreColorThemeIndex;  // Returns or sets the foreground color for the shadow format.
@property BOOL obscured;
@property double offsetX;
@property double offsetY;
@property BOOL rotateWithShape;  // Returns or sets whether to rotate the shadow when rotating the shape.
@property powerpointMSSt shadowStyle;  // Returns or sets the style of shadow formatting to apply to a shape.
@property powerpointMSdT shadowType;
@property double size;  // Returns or sets the width of the shadow.
@property double transparency;
@property BOOL visible;


@end

// A collection that represents a set of shapes on a document.
@interface powerpointShapeRange : powerpointBaseObject

- (SBElementArray *) adjustments;
- (SBElementArray *) shapes;

@property (copy, readonly) powerpointAnimationSettings *animationSettings;  // Returns all the special effects that you can apply to the animation of the specified shape.
@property powerpointMAsT autoShapeType;  // Returns or sets the shape type for AutoShapes other than a line, freeform drawing, or connector.
@property powerpointMBSI backgroundStyle;  // Returns or sets the background style for the specified object.
@property powerpointMBW blackAndWhiteMode;  // Returns or sets a value that indicates how the specified shape appears when the presentation is viewed in black-and-white mode.
@property (copy, readonly) powerpointCalloutFormat *calloutFormat;  // Returns callout formatting properties for the specified line callout shapes.
@property (readonly) BOOL child;  // Returns whether all shapes in a shape range are child shapes of the same parent.
@property (readonly) NSInteger connectionSiteCount;  // Returns the number of connection sites on the specified shape.
@property (copy, readonly) powerpointFillFormat *fillFormat;  // Returns the fill format properties for the specified object.
@property (copy, readonly) powerpointGlowFormat *glowFormat;  // Returns the glow format for the specified range of shapes.
@property (readonly) BOOL hasChild;
@property (readonly) BOOL hasTable;  // Returns whether the specified shape is a table.
@property (readonly) BOOL hasTextFrame;  // Returns whether the specified shape has a text frame.
@property double height;  // Returns or sets the height of the specified object.
@property (readonly) BOOL horizontalFlip;  // Returns whether the specified shape is flipped around the horizontal axis.
@property (readonly) BOOL isConnector;  // Determines whether the specified shape is a connector.
@property double leftPosition;  // Returns or sets a value equal to the distance from the left edge of the leftmost shape in the shape range to the left edge of the slide.
@property (copy, readonly) powerpointLineFormat *lineFormat;  // Returns line format properties for the specified line or shape border.
@property (copy, readonly) powerpointLinkFormat *linkFormat;  // Returns the properties for linked OLE objects.
@property BOOL lockAspectRatio;  // Determines whether the specified shape retains its original proportions when you resize it.
@property (readonly) powerpointMedT mediaType;  // Returns the OLE media type.
@property (copy) NSString *name;  // Identifies the shape on a slide.
@property (copy, readonly) powerpointReflectionFormat *reflectionFormat;  // Returns the reflection format for the specified range of shapes.
@property double rotation;  // Returns or sets the number of degrees that the specified shape is rotated around the z-axis.
@property (copy, readonly) powerpointShadowFormat *shadowFormat;  // Returns shadow formatting for specified shapes.
@property powerpointMSSI shapeStyle;  // Returns or sets the shape style index for the specified object.
@property (readonly) powerpointMShp shapeType;  // Represents the type of shape or shapes in a range of shapes.
@property (copy, readonly) powerpointSoftEdgeFormat *softEdgeFormat;  // Returns the soft edge format for the specified range of shapes.
@property (copy, readonly) powerpointTextFrame *textFrame;  // Returns the alignment and anchoring properties for the specified shape or master text style.
@property (copy, readonly) powerpointThreeDFormat *threeDFormat;  // Returns 3-D effect formatting properties for the specified shape.
@property double top;  // Returns or sets a value equal to the distance from the top edge of the topmost shape in the shape range to the top edge of the document.
@property (readonly) BOOL verticalFlip;  // Determines whether the specified shape is flipped around the vertical axis.
@property BOOL visible;  // Returns or sets the visibility of the specified object or the formatting applied to the specified object.
@property double width;  // Returns or sets the width of the specified object.
@property (readonly) NSInteger zOrderPosition;  // Returns the position of the specified shape in the z-order.

- (void) alignAlignType:(powerpointMAlC)alignType relativeToSlide:(BOOL)relativeToSlide;  // Aligns the shapes in the specified range of shapes.
- (void) copyShapeRange;
- (void) cutShapeRange;
- (void) distributeDistributeType:(powerpointMDsC)distributeType relativeToSlide:(BOOL)relativeToSlide;  // Evenly distributes the shapes in the specified range of shapes. You can specify whether you want to distribute the shapes horizontally or vertically and whether you want to distribute them over the entire slide or over the space they originally occupy.
- (powerpointShape *) group;  // Groups the shapes in the specified shape range.
- (powerpointShape *) regroup;  // Regroups the group that the specified shape range belonged to previously.
- (powerpointShapeRange *) ungroup;  // Ungroups any grouped shapes in the specified shape or range of shapes.

@end

@interface powerpointShape : powerpointBaseObject

- (SBElementArray *) shapes;
- (SBElementArray *) callouts;
- (SBElementArray *) connectors;
- (SBElementArray *) pictures;
- (SBElementArray *) lineShapes;
- (SBElementArray *) placeHolders;
- (SBElementArray *) textBoxes;
- (SBElementArray *) comments;
- (SBElementArray *) shapeTables;
- (SBElementArray *) adjustments;

@property (copy, readonly) powerpointAnimationSettings *animationSettings;
@property powerpointMAsT autoShapeType;
@property powerpointMBSI backgroundStyle;  // Returns or sets the background style.
@property powerpointMBW blackAndWhiteMode;
@property (readonly) BOOL child;  // True if the shape is a child shape.
@property (readonly) NSInteger connectionSiteCount;
@property (copy, readonly) powerpointFillFormat *fillFormat;  // Returns a fill format object that contains fill formatting properties for the specified shape.
@property (copy, readonly) powerpointGlowFormat *glowFormat;  // Returns the formatting properties for a glow effect.
@property (readonly) BOOL hasTable;
@property (readonly) BOOL hasTextFrame;
@property double height;
@property (readonly) BOOL horizontalFlip;
@property (readonly) BOOL isConnector;
@property double leftPosition;
@property (copy, readonly) powerpointLineFormat *lineFormat;
@property (copy, readonly) powerpointLinkFormat *linkFormat;
@property BOOL lockAspectRatio;
@property (readonly) powerpointMedT mediaType;
@property (copy) NSString *name;
@property (copy, readonly) powerpointReflectionFormat *reflectionFormat;  // Returns the formatting properties for a reflection effect.
@property double rotation;
@property (copy, readonly) powerpointShadowFormat *shadowFormat;
@property powerpointMSSI shapeStyle;  // Returns or sets the shape style corresponding to the Quick Styles.
@property (readonly) powerpointMShp shapeType;
@property (copy, readonly) powerpointSoftEdgeFormat *softEdgeFormat;  // Returns the formatting properties for a soft edge effect.
@property (copy, readonly) powerpointTextFrame *textFrame;
@property (copy, readonly) powerpointThreeDFormat *threeDFormat;  // Returns a threeD format object that contains 3-D-effect formatting properties for the specified shape.
@property double top;
@property (readonly) BOOL verticalFlip;
@property BOOL visible;
@property double width;
@property (copy, readonly) powerpointWordArtFormat *wordArtFormat;  // Returns the formatting properties for a word art effect.
@property (readonly) NSInteger zOrderPosition;

- (void) copyShape;
- (void) cutShape;
- (void) saveAsPicturePictureType:(powerpointMPiT)pictureType fileName:(NSString *)fileName;  // Saves the shape in the requested file using the stated graphic format

@end

@interface powerpointCallout : powerpointShape

@property (readonly) powerpointMCot calloutType;
@property (copy, readonly) powerpointCalloutFormat *calloutFormat;


@end

@interface powerpointComment : powerpointShape


@end

@interface powerpointConnector : powerpointShape

@property (copy, readonly) powerpointConnectorFormat *connectorFormat;
@property (readonly) powerpointMCtT connectorType;


@end

// The line shape uses begin line X, begin line Y, end line X, and end line Y when created
@interface powerpointLineShape : powerpointShape

@property double beginLineX;
@property double beginLineY;
@property double endLineX;
@property double endLineY;


@end

@interface powerpointMediaObject : powerpointShape

@property (copy, readonly) NSString *fileName;


@end

@interface powerpointMedia2Object : powerpointShape

@property (copy, readonly) NSString *fileName;
@property (readonly) BOOL linkToFile;
@property (readonly) BOOL saveWithDocument;


@end

@interface powerpointPicture : powerpointShape

@property (copy, readonly) NSString *fileName;
@property (readonly) BOOL linkToFile;
@property (copy, readonly) powerpointPictureFormat *pictureFormat;
@property (readonly) BOOL saveWithDocument;

- (void) scaleHeightFactor:(double)factor relativeToOriginalSize:(BOOL)relativeToOriginalSize scale:(powerpointMSFr)scale;
- (void) scaleWidthFactor:(double)factor relativeToOriginalSize:(BOOL)relativeToOriginalSize scale:(powerpointMSFr)scale;

@end

@interface powerpointPlaceHolder : powerpointShape

@property (copy, readonly) powerpointPlaceholderFormat *placeHolderFormat;
@property (readonly) powerpointPPhd placeholderType;


@end

@interface powerpointShapeTable : powerpointShape

@property (readonly) NSInteger numberOfColumns;
@property (readonly) NSInteger numberOfRows;
@property (copy, readonly) powerpointTable *tableObject;


@end

// Represents the soft edge formatting for a shape or range of shapes
@interface powerpointSoftEdgeFormat : powerpointBaseObject

@property powerpointMSET softEdgeType;  // Returns or sets the type soft edge format object.


@end

@interface powerpointTextBox : powerpointShape

@property (readonly) powerpointTxOr textOrientation;


@end

// Represents a single text column.
@interface powerpointTextColumn : powerpointBaseObject

@property NSInteger columnNumber;  // Returns or sets the index of the text column object.
@property double spacing;  // Returns or sets the spacing between text columns in a text column object.
@property powerpointPDrT textDirection;  // Returns or sets the direction of text in the text column object.


@end

@interface powerpointTextFrame : powerpointBaseObject

@property powerpointPAtS autoSize;
@property (readonly) BOOL hasText;  // Returns whether the specified text frame has text.
@property powerpointMHzA horizontalAnchor;
@property double marginBottom;
@property double marginLeft;
@property double marginRight;
@property double marginTop;
@property (readonly) powerpointTxOr orientation;
@property powerpointMPFo pathFormat;  // Returns or sets the path type for the specified text frame.
@property (copy, readonly) powerpointRuler *ruler;
@property (copy, readonly) powerpointTextColumn *textColumn;  // Returns the text column object that represents the columns within the text frame.
@property powerpointTxOr textOrientation;
@property (copy, readonly) powerpointTextRange *textRange;
@property (copy, readonly) powerpointThreeDFormat *threeDFormat;  // Returns the 3-D effect formatting properties for the specified text.
@property powerpointMVtA verticalAnchor;
@property powerpointMWFo warpFormat;  // Returns or sets the warp type for the specified text frame.
@property (readonly) powerpointMPXF wordArtStylesFormat;  // Returns or sets a value specifying the text effect for the selected text.
@property BOOL wordWrap;  // Returns or sets text break lines within or past the boundaries of the shape.
@property powerpointMPXF wordartFormat;  // Returns or sets the WordArt type for the specified text frame.


@end

// Represents the color scheme of an Office Theme
@interface powerpointThemeColorScheme : powerpointBaseObject

- (SBElementArray *) themeColors;

- (NSColor *) getCustomColorName:(NSString *)name;  // Returns the custom color for the specified Microsoft Office theme.
- (void) loadThemeColorSchemeFileName:(NSString *)fileName;  // Loads the color scheme of a Microsoft Office theme from a file.
- (void) saveThemeColorSchemeFileName:(NSString *)fileName;  // Saves the color scheme of a Microsoft Office theme to a file.

@end

// Represents a color in the color scheme of a Microsoft Office 2007 theme.
@interface powerpointThemeColor : powerpointBaseObject

@property (copy) NSColor *RGB;  // Returns or sets a value of a color in the color scheme of a Microsoft Office theme.
@property (readonly) powerpointMCSI themeColorSchemeIndex;  // Returns the index value a color scheme of a Microsoft Office theme.


@end

// Represents the effect scheme of a Microsoft Office theme.
@interface powerpointThemeEffectScheme : powerpointBaseObject

- (void) loadThemeEffectSchemeFileName:(NSString *)fileName;  // Loads the effects scheme of a Microsoft Office theme from a file.

@end

// Represents the font scheme of a Microsoft Office theme.
@interface powerpointThemeFontScheme : powerpointBaseObject

- (SBElementArray *) minorThemeFonts;
- (SBElementArray *) majorThemeFonts;

- (void) loadThemeFontSchemeFileName:(NSString *)fileName;  // Loads the font scheme of a Microsoft Office theme from a file.
- (void) saveThemeFontSchemeFileName:(NSString *)fileName;  // Saves the font scheme of a Microsoft Office theme to a file.

@end

// Represents a container for the font schemes of a Microsoft Office theme.
@interface powerpointThemeFont : powerpointBaseObject

@property (copy) NSString *name;  // Returns or sets a value specifying the font to use for a selection.


@end

// Represents a container for the font schemes of a Microsoft Office theme.
@interface powerpointMajorThemeFont : powerpointThemeFont


@end

// Represents a container for the font schemes of a Microsoft Office theme.
@interface powerpointMinorThemeFont : powerpointThemeFont


@end

// Represents a shape's three-dimensional formatting.
@interface powerpointThreeDFormat : powerpointBaseObject

@property double ZDistance;  // Returns or sets a Single that represents the distance from the center of an object or text.
@property double bevelBottomDepth;  // Returns or sets the depth/height of the bottom bevel.
@property double bevelBottomInset;  // Returns or sets the inset size/width for the bottom bevel.
@property powerpointMBlT bevelBottomType;  // Returns or sets the bevel type for the bottom bevel.
@property double bevelTopDepth;  // Returns or sets the depth/height of the top bevel.
@property double bevelTopInset;  // Returns or sets the inset size/width for the top bevel.
@property powerpointMBlT bevelTopType;  // Returns or sets the bevel type for the top bevel.
@property (copy, readonly) NSColor *contourColor;  // Returns or sets the color of the contour of an object or text.
@property powerpointMCoI contourColorThemeIndex;  // Returns or sets the color for the specified contour.
@property double contourWidth;  // Returns or sets the width of the contour of an object or text.
@property double depth;  // Returns or sets the depth of the shape's extrusion.
@property (copy, readonly) NSColor *extrusionColor;  // Returns or sets a RGB color that represents the color of the shape's extrusion.
@property powerpointMCoI extrusionColorThemeIndex;  // Returns or sets the color for the specified extrusion.
@property powerpointMExC extrusionColorType;  // Returns or sets a value that indicates what will determine the extrusion color.
@property double fieldOfView;  // Returns or sets the amount of perspective for an object or text.
@property double lightAngle;  // Returns or sets the angle of the lighting.
@property BOOL perspective;  // Returns or sets if the extrusion appears in perspective that is, if the walls of the extrusion narrow toward a vanishing point. If false, the extrusion is a parallel, or orthographic, projection that is, if the walls don't narrow toward a vanishing point.
@property (readonly) powerpointMPzC presetCamera;  // Returns a constant that represents the camera preset.
@property (readonly) powerpointMExD presetExtrusionDirection;  // Returns or sets the direction taken by the extrusion's sweep path leading away from the extruded shape, the front face of the extrusion.
@property powerpointMPLd presetLightingDirection;  // Returns or sets the position of the light source relative to the extrusion.
@property powerpointMLtT presetLightingRig;  // Returns a constant that represents the lighting preset.
@property powerpointMlSf presetLightingSoftness;  // Returns or sets the intensity of the extrusion lighting.
@property powerpointMPMt presetMaterial;  // Returns or sets the extrusion surface material.
@property (readonly) powerpointM3DF presetThreeDFormat;  // Returns or sets the preset extrusion format. Each preset extrusion format contains a set of preset values for the various properties of the extrusion.
@property BOOL projectText;  // Returns or sets whether text on a shape rotates with shape.
@property double rotationX;  // Returns or sets the rotation of the extruded shape around the x-axis in degrees. A positive value indicates upward rotation; a negative value indicates downward rotation.
@property double rotationY;  // Returns or sets the rotation of the extruded shape around the y-axis, in degrees. A positive value indicates rotation to the left; a negative value indicates rotation to the right.
@property double rotationZ;  // Returns or sets the rotation of the extruded shape around the z-axis, in degrees. A positive value indicates clockwise rotation; a negative value indicates anti-clockwise rotation.
@property BOOL visible;  // Returns or sets if the specified object, or the formatting applied to it, is visible.


@end

@interface powerpointWordArtFormat : powerpointBaseObject

@property BOOL fontBold;
@property BOOL fontItalic;
@property (copy) NSString *fontName;
@property double fontSize;
@property BOOL kernedPairs;
@property BOOL normalizedHeight;
@property powerpointMPTs presetShape;
@property BOOL rotatedChars;
@property powerpointMTxA textAlignment;
@property double tracking;
@property powerpointMPXF wordArtStylesFormat;  // Returns or sets a value specifying the text effect for the selected text.
@property (copy) NSString *wordArtText;

- (void) toggleVerticalText;

@end



/*
 * Text Suite
 */

@interface powerpointTextRange : powerpointBaseObject

- (SBElementArray *) characters;
- (SBElementArray *) words;
- (SBElementArray *) sentences;
- (SBElementArray *) lines;
- (SBElementArray *) paragraphs;
- (SBElementArray *) textFlows;

@property (readonly) double boundsHeight;
@property (readonly) double boundsWidth;
@property (copy) NSString *content;
@property (copy, readonly) powerpointFont *font;
@property NSInteger indentLevel;
@property (readonly) double leftBounds;
@property (readonly) NSInteger offset;
@property (copy, readonly) powerpointParagraphFormat *paragraphFormat;
@property (readonly) NSInteger textLength;
@property (readonly) double topBounds;

- (void) addPeriodsTo;
- (void) changeCaseTo:(powerpointPCgC)to;
- (void) copyTextRange;
- (void) cutTextRange;
- (NSArray *) getRotatedTextBounds;  // Returns back a list containing the four point of the text bounds as follows  {x1, y1}, {x2, y2}, {x3, y3}, {x4, y4} }
- (powerpointActionSetting *) getTextActionSettingResult:(powerpointPMtv)result;
- (void) insertTextTextRangeInsertWhere:(powerpointMTiP)insertWhere newText:(NSString *)newText;  // Adds text to existing text.
- (void) pasteTextRange;
- (void) removePeriodsFrom;

@end

@interface powerpointCharacter : powerpointTextRange


@end

@interface powerpointLine : powerpointTextRange


@end

@interface powerpointParagraph : powerpointTextRange


@end

@interface powerpointSentence : powerpointTextRange


@end

@interface powerpointTextFlow : powerpointTextRange


@end

@interface powerpointWord : powerpointTextRange


@end



/*
 * Table Suite
 */

@interface powerpointCell : powerpointBaseObject

@property (readonly) BOOL selected;
@property (copy, readonly) powerpointShape *shape;

- (powerpointLineFormat *) getBorderEdge:(powerpointPBrT)edge;
- (void) mergeMergeWith:(powerpointCell *)mergeWith;
- (void) splitNumberOfRows:(NSInteger)numberOfRows numberOfColumns:(NSInteger)numberOfColumns;

@end

@interface powerpointColumn : powerpointBaseObject

- (SBElementArray *) cells;

@property double width;


@end

@interface powerpointRow : powerpointBaseObject

- (SBElementArray *) cells;

@property double height;


@end

@interface powerpointTable : powerpointBaseObject

- (SBElementArray *) columns;
- (SBElementArray *) rows;

@property powerpointPDrT tableDirection;

- (powerpointCell *) getCellFromRow:(NSInteger)row column:(NSInteger)column;

@end

