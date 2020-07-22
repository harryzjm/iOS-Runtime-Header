//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/FRReadonlyPersonalizationAggregateStore-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol FCDerivedPersonalizationData;

@interface FRReadonlyPersonalizationAggregateStore : NSObject <FRReadonlyPersonalizationAggregateStore>
{
    id <FCDerivedPersonalizationData> _derivedPersonalizationData;
    NSMutableDictionary *_overrideAggregatesByFeatureKey;
}

@property(retain, nonatomic) NSMutableDictionary *overrideAggregatesByFeatureKey; // @synthesize overrideAggregatesByFeatureKey=_overrideAggregatesByFeatureKey;
@property(retain, nonatomic) id <FCDerivedPersonalizationData> derivedPersonalizationData; // @synthesize derivedPersonalizationData=_derivedPersonalizationData;
- (void).cxx_destruct;
- (void)processTodayPersonalizationUpdates:(id)arg1 withConfigurableValues:(id)arg2;
- (id)aggregatesForFeatures:(id)arg1;
- (id)baselineAggregateWithConfigurableValues:(id)arg1;
- (void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(_Bool)arg5 configurableValues:(id)arg6;
- (void)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 configurableValues:(id)arg7;
- (id)initWithDerivedPersonalizationData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
