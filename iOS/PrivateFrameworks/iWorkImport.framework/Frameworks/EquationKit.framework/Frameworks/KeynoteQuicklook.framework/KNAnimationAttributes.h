//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface KNAnimationAttributes : NSObject
{
    NSString *_effect;
    NSDictionary *_attributes;
}

+ (_Bool)customAttributeKeyIsValid:(id)arg1;
+ (id)supportedCustomAttributes;
+ (id)attributesWithEffect:(id)arg1 attributes:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *effect; // @synthesize effect=_effect;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)p_curveForNameKey:(id)arg1 forTheme:(id)arg2;
- (id)attributesByUpdatingThemeCurveNamesWithOldToNewCurveNameMap:(id)arg1;
- (id)attributesAdjustedForTheme:(id)arg1;
- (id)valueForAttributeKey:(id)arg1;
- (_Bool)containsAttributeForKey:(id)arg1;
- (id)attributesByRemovingAttributeForKey:(id)arg1;
- (id)attributesByAddingAttributesFromDictionary:(id)arg1;
- (id)attributesByChangingEffectToEffect:(id)arg1;
- (id)attributesBySettingValue:(id)arg1 forAttributeKey:(id)arg2;
- (id)attributesByAddingAttributes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEffect:(id)arg1 attributes:(id)arg2;

@end

