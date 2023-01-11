//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>
#import <RelevanceEngine/REIndentedDescription-Protocol.h>

@class NSString;

@interface RECondition : NSObject <REIndentedDescription, NSCopying>
{
}

+ (id)notCondition:(id)arg1;
+ (id)orConditions:(id)arg1;
+ (id)andConditions:(id)arg1;
+ (id)conditionForFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3;
+ (id)conditionForFeature:(id)arg1 hasBoolValue:(_Bool)arg2;
+ (id)conditionForFeature:(id)arg1 hasIntegerValue:(long long)arg2;
+ (id)conditionForFeature:(id)arg1 hasValue:(id)arg2;
+ (id)conditionForFeature:(id)arg1 relation:(long long)arg2 integerValue:(long long)arg3;
+ (id)conditionForFeature:(id)arg1 relation:(long long)arg2 floatValue:(float)arg3;
+ (id)conditionHasValueForFeature:(id)arg1;
+ (id)falseCondition;
+ (id)trueCondition;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_inflectionFeatureValuePairs;
- (_Bool)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2;
- (_Bool)_acceptsFeatureMap:(id)arg1;
- (_Bool)_validForRanking;
- (_Bool)_requiresTwoFeatures;
- (id)_notCondition;
- (id)_dependentFeatures;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

