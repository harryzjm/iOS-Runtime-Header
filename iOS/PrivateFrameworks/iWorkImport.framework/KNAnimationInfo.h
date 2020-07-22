//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface KNAnimationInfo : NSObject
{
    Class mAnimationClass;
    NSSet *mValidAnimationTypes;
}

+ (id)localizedEffectNamesForAnimationInfos:(id)arg1 animationType:(long long)arg2;
+ (id)effectIdentifiersForAnimationInfos:(id)arg1;
@property(readonly, nonatomic) NSSet *validAnimationTypes; // @synthesize validAnimationTypes=mValidAnimationTypes;
@property(readonly, nonatomic) Class animationClass; // @synthesize animationClass=mAnimationClass;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)thumbnailImageNameForType:(long long)arg1;
- (_Bool)supportsAnimationType:(long long)arg1;
- (id)localizedNameForType:(long long)arg1;
@property(readonly, nonatomic) NSString *localizedTransitionName;
@property(readonly, nonatomic) NSString *localizedActionBuildName;
@property(readonly, nonatomic) NSString *localizedBuildOutName;
@property(readonly, nonatomic) NSString *localizedBuildInName;
@property(readonly, nonatomic) NSDictionary *customAttributeDefaults;
- (id)customEffectTimingCurveDisplayParametersForAttributes:(id)arg1 layoutStyleOnly:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *customAttributes;
- (id)customAttributesForAttributeKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long directionType;
@property(readonly, nonatomic) long long category;
@property(readonly, nonatomic) NSString *animationFilter;
@property(readonly, nonatomic) NSDictionary *defaultAttributes;
@property(readonly, nonatomic) _Bool isDrift;
@property(readonly, nonatomic) NSString *effectIdentifier;
- (void)dealloc;
- (id)initWithAnimationClass:(Class)arg1;

@end

