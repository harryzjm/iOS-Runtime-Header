//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDCharacterProperties : NSObject
{
    WDDocument *mDocument;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_4d9d7b4c *mOriginalProperties;
    CDStruct_4d9d7b4c *mTrackedProperties;
}

+ (SEL)setFontSelectorForFontType:(int)arg1;
+ (SEL)fontOverriddenSelectorForFontType:(int)arg1;
+ (SEL)fontSelectorForFontType:(int)arg1;
- (id)description;
- (void)copyPropertiesInto:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isBracketTwoLinesInOneOverridden;
- (void)setBracketTwoLinesInOne:(int)arg1;
- (int)bracketTwoLinesInOne;
- (_Bool)isTwoLinesInOneOverridden;
- (void)setTwoLinesInOne:(_Bool)arg1;
- (_Bool)twoLinesInOne;
- (_Bool)isCompressHorizontalInVerticalOverridden;
- (void)setCompressHorizontalInVertical:(_Bool)arg1;
- (_Bool)compressHorizontalInVertical;
- (_Bool)isHorizontalInVerticalOverridden;
- (void)setHorizontalInVertical:(_Bool)arg1;
- (_Bool)horizontalInVertical;
- (_Bool)isOffsetToPictureDataOverridden;
- (void)setOffsetToPictureData:(int)arg1;
- (int)offsetToPictureData;
- (_Bool)isObjectIDForOle2Overridden;
- (void)setObjectIDForOle2:(int)arg1;
- (int)objectIDForOle2;
- (_Bool)isOle2Overridden;
- (void)setOle2:(_Bool)arg1;
- (_Bool)ole2;
- (_Bool)isEmbeddedObjectOverridden;
- (void)setEmbeddedObject:(_Bool)arg1;
- (_Bool)embeddedObject;
- (_Bool)isFontSizeForBiTextOverridden;
- (void)setFontSizeForBiText:(unsigned short)arg1;
- (unsigned short)fontSizeForBiText;
- (_Bool)isLanguageForBiTextOverridden;
- (void)setLanguageForBiText:(int)arg1;
- (int)languageForBiText;
- (_Bool)isLanguageForFarEastOverridden;
- (void)setLanguageForFarEast:(int)arg1;
- (int)languageForFarEast;
- (_Bool)isCharPositionOfPictureBulletInBookmarkOverridden;
- (void)setCharPositionOfPictureBulletInBookmark:(int)arg1;
- (int)charPositionOfPictureBulletInBookmark;
- (_Bool)isListCharacterPictureBulletOverridden;
- (void)setListCharacterPictureBullet:(_Bool)arg1;
- (_Bool)isListCharacterPictureBullet;
- (_Bool)isSpecialCharacterOverridden;
- (void)setSpecialCharacter:(_Bool)arg1;
- (_Bool)isSpecialCharacter;
- (_Bool)formattingChangedDifferentFrom:(id)arg1;
- (_Bool)editDifferentFrom:(id)arg1;
- (_Bool)deletionDifferentFrom:(id)arg1;
- (_Bool)isEditDateOverridden;
- (void)setEditDate:(id)arg1;
- (id)editDate;
- (_Bool)isDeletionDateOverridden;
- (void)setDeletionDate:(id)arg1;
- (id)deletionDate;
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (_Bool)isIndexToAuthorIDOfEditOverridden;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfEdit;
- (_Bool)isIndexToAuthorIDOfDeletionOverridden;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfDeletion;
- (_Bool)isFormattingChangedOverridden;
- (void)setFormattingChanged:(int)arg1;
- (int)formattingChanged;
- (_Bool)isEditedOverridden;
- (void)setEdited:(int)arg1;
- (int)edited;
- (_Bool)isDeletedOverridden;
- (void)setDeleted:(int)arg1;
- (int)deleted;
- (_Bool)isUseCsFontOverridden;
- (void)setUseCsFont:(int)arg1;
- (int)useCsFont;
- (_Bool)isRightToLeftOverridden;
- (void)setRightToLeft:(int)arg1;
- (int)rightToLeft;
- (_Bool)isLanguageForDefaultTextOverridden;
- (void)setLanguageForDefaultText:(int)arg1;
- (int)languageForDefaultText;
- (_Bool)isColorAutoOverridden;
- (void)setColorAuto:(_Bool)arg1;
- (_Bool)isColorAuto;
- (_Bool)isColorOverridden;
- (void)setColor:(id)arg1;
- (id)color;
- (_Bool)isEmphasisMarkOverridden;
- (void)setEmphasisMark:(int)arg1;
- (int)emphasisMark;
- (_Bool)isVerticalAlignOverridden;
- (void)setVerticalAlign:(int)arg1;
- (int)verticalAlign;
- (_Bool)isShadow2010Overridden;
- (void)setShadow2010:(id)arg1;
- (id)shadow2010;
- (_Bool)isReflectionOverridden;
- (void)setReflection:(id)arg1;
- (id)reflection;
- (_Bool)isFontSizeOverridden;
- (void)setFontSize:(unsigned short)arg1;
- (unsigned short)fontSize;
- (_Bool)isPositionOverridden;
- (void)setPosition:(short)arg1;
- (short)position;
- (_Bool)isSpacingOverridden;
- (void)setSpacing:(short)arg1;
- (short)spacing;
- (_Bool)isHiddenOverridden;
- (void)setHidden:(int)arg1;
- (int)hidden;
- (_Bool)isLowerCaseOverridden;
- (void)setLowerCase:(_Bool)arg1;
- (_Bool)isLowerCase;
- (_Bool)isCapsOverridden;
- (void)setCaps:(int)arg1;
- (int)caps;
- (_Bool)isSmallCapsOverridden;
- (void)setSmallCaps:(int)arg1;
- (int)smallCaps;
- (_Bool)isLigatureOverridden;
- (void)setLigature:(int)arg1;
- (int)ligature;
- (_Bool)isHighlightColorOverridden;
- (void)setHighlightColor:(int)arg1;
- (int)highlightColor;
- (_Bool)isHighlightOverridden;
- (void)setHighlight:(_Bool)arg1;
- (_Bool)isHighlight;
- (_Bool)isDoubleStrikeThroughOverridden;
- (void)setDoubleStrikeThrough:(int)arg1;
- (int)doubleStrikeThrough;
- (_Bool)isStrikeThroughOverridden;
- (void)setStrikeThrough:(int)arg1;
- (int)strikeThrough;
- (_Bool)isUnderlineOverridden;
- (void)setUnderline:(int)arg1;
- (int)underline;
- (_Bool)isTextScaleOverridden;
- (void)setTextScale:(unsigned short)arg1;
- (unsigned short)textScale;
- (_Bool)isKerningOverridden;
- (void)setKerning:(unsigned short)arg1;
- (unsigned short)kerning;
- (_Bool)isUnderlineColorOverridden;
- (void)setUnderlineColor:(id)arg1;
- (id)underlineColor;
- (_Bool)isShadow2010OpacityOverridden;
- (void)setShadow2010Opacity:(float)arg1;
- (float)shadow2010Opacity;
- (_Bool)isShadowOverridden;
- (void)setShadow:(int)arg1;
- (int)shadow;
- (_Bool)isImprintOverridden;
- (void)setImprint:(int)arg1;
- (int)imprint;
- (_Bool)isEmbossedOverridden;
- (void)setEmbossed:(int)arg1;
- (int)embossed;
- (_Bool)isOutline2010WidthOverridden;
- (void)setOutline2010Width:(float)arg1;
- (float)outline2010Width;
- (_Bool)isOutlineColorOverridden;
- (void)setOutlineColor:(id)arg1;
- (id)outlineColor;
- (_Bool)isOutlineOverridden;
- (void)setOutline:(int)arg1;
- (int)outline;
- (_Bool)isItalicForBiTextOverridden;
- (void)setItalicForBiText:(int)arg1;
- (int)italicForBiText;
- (_Bool)isItalicOverridden;
- (void)setItalic:(int)arg1;
- (int)italic;
- (_Bool)isBoldForBiTextOverridden;
- (void)setBoldForBiText:(int)arg1;
- (int)boldForBiText;
- (_Bool)isBoldOverridden;
- (void)setBold:(int)arg1;
- (int)bold;
- (_Bool)isSymbolCharacterOverridden;
- (void)setSymbolCharacter:(unsigned short)arg1;
- (unsigned short)symbolCharacter;
- (_Bool)isFontHintOverridden;
- (void)setFontHint:(int)arg1;
- (int)fontHint;
- (void)setFont:(id)arg1 forFontType:(int)arg2;
- (_Bool)isFontOverriddenForFontType:(int)arg1;
- (id)fontForFontType:(int)arg1;
- (_Bool)isSymbolFontOverridden;
- (void)setSymbolFont:(id)arg1;
- (id)symbolFont;
- (_Bool)isFarEastFontOverridden;
- (void)setFarEastFont:(id)arg1;
- (id)farEastFont;
- (_Bool)isExtendedFontOverridden;
- (void)setExtendedFont:(id)arg1;
- (id)extendedFont;
- (_Bool)isFontOverridden;
- (void)setFont:(id)arg1;
- (id)font;
- (_Bool)isShadingOverridden;
- (id)mutableShading;
- (id)shading;
- (_Bool)isBorderOverridden;
- (id)mutableBorder;
- (id)border;
- (void)clearBaseStyle;
- (_Bool)isBaseStyleOverridden;
- (void)setBaseStyle:(id)arg1;
- (id)baseStyle;
- (void)removeEmptyFormattingChanges:(id)arg1;
- (void)applyPropertiesFrom:(id)arg1 ifOverriddenIn:(id)arg2;
- (void)negateFormattingChangesWithDefaults:(id)arg1;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (_Bool)isAnythingOverridden;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (int)reverseBooleanProperty:(int)arg1;
- (_Bool)formattingChangedDifferentFrom:(id)arg1 mode:(int)arg2;
- (_Bool)editDifferentFrom:(id)arg1 mode:(int)arg2;
- (_Bool)deletionDifferentFrom:(id)arg1 mode:(int)arg2;
- (_Bool)isBooleanProbablyDifferent:(unsigned char)arg1 than:(unsigned char)arg2;
- (_Bool)isAnythingOverriddenIn:(CDStruct_4d9d7b4c *)arg1;

@end

