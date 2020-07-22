//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SCRCMathExpression;

__attribute__((visibility("hidden")))
@interface SCRCMathSubSuperscriptExpression
{
    SCRCMathExpression *_base;
    SCRCMathExpression *_subscript;
    SCRCMathExpression *_superscript;
}

@property(retain, nonatomic) SCRCMathExpression *base; // @synthesize base=_base;
@property(retain, nonatomic) SCRCMathExpression *superscript; // @synthesize superscript=_superscript;
@property(retain, nonatomic) SCRCMathExpression *subscript; // @synthesize subscript=_subscript;
- (void).cxx_destruct;
- (id)latexMathModeDescription;
- (id)mathMLString;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2;
- (id)_stringToAddForSuperscript:(id)arg1 withPriorDescription:(id)arg2 updatedDescription:(id *)arg3;
- (id)subExpressions;
- (unsigned long long)fractionLevel;
- (_Bool)isNumber;
- (_Bool)isBaseSubSuperscript;
- (_Bool)isRangeSubSuperscript;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

