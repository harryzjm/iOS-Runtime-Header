//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface FRPersonalizationFeatureBundle : NSObject
{
    NSNumber *_groupOrder;
    NSNumber *_feedOrder;
    NSNumber *_sessionDuration;
    CDUnknownBlockType _featuresGenerator;
}

+ (id)personalizationFeatureBundleForFeaturesGenerator:(CDUnknownBlockType)arg1 groupOrder:(id)arg2 feedOrder:(id)arg3 userInfo:(id)arg4;
+ (id)personalizationFeatureBundleForFeaturesGenerator:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType featuresGenerator; // @synthesize featuresGenerator=_featuresGenerator;
@property(retain, nonatomic) NSNumber *sessionDuration; // @synthesize sessionDuration=_sessionDuration;
@property(retain, nonatomic) NSNumber *feedOrder; // @synthesize feedOrder=_feedOrder;
@property(retain, nonatomic) NSNumber *groupOrder; // @synthesize groupOrder=_groupOrder;
- (void).cxx_destruct;
- (void)appendPersonalizationFeaturesGenerator:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *features;

@end

