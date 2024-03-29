//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSText/TSWPShapeInfo.h>

@interface TSWPShapeInfo (TemplatesEquivalentForCrossDocumentPaste)
+ (unsigned long long)numberOfDifferencesBetweenStyleProperties:(id)arg1 betweenOutgoingStorage:(id)arg2 outgoingRange:(struct _NSRange)arg3 incomingStorage:(id)arg4 incomingRange:(struct _NSRange)arg5 maxDifferencesBeforeReturning:(unsigned long long)arg6;
+ (_Bool)shouldDisableTextMorphsFromPropertiesBetweenOutgoingStorage:(id)arg1 outgoingRange:(struct _NSRange)arg2 incomingStorage:(id)arg3 incomingRange:(struct _NSRange)arg4;
+ (_Bool)stylesAreEqualWithOutgoingStorage:(id)arg1 outgoingRange:(struct _NSRange)arg2 incomingStorage:(id)arg3 incomingRange:(struct _NSRange)arg4;
+ (id)textPropertiesAffectingTextMorph;
+ (id)textPropertiesNotAffectingVisualStyle;
+ (id)textPropertiesAffectingVisualStyleExceptSize;
+ (id)textPropertiesAffectingVisualStyle;
+ (id)textPropertiesAffectingObjectMatch;
+ (id)textPropertiesNeedingCharacterAnimation;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)notifyThatInstructionalTextMightHaveChanged;
- (_Bool)canBeDefinedAsTextPlaceholder;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)instructionalText;
- (_Bool)displaysInstructionalText;
- (id)instructionalTextFromModel;
- (_Bool)shouldHideEmptyBullets;
- (_Bool)isRightToLeft;
@end

