//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HDHeadphoneExposureStatisticUpdateResult : NSObject
{
    _Bool _includedSeries;
    _Bool _canTriggerNotification;
}

+ (id)_resultWithIncludedSeries:(_Bool)arg1 canTriggerNotification:(_Bool)arg2;
+ (id)_resultWithIncludedSeries:(_Bool)arg1 samples:(id)arg2;
+ (id)resultForSamplesJournaled:(id)arg1;
+ (id)resultForSamplesAdded:(id)arg1 includedSeries:(_Bool)arg2;
+ (id)resultForAggregation;
+ (id)resultForEmptySamplesAdded;
@property(readonly, nonatomic) _Bool canTriggerNotification; // @synthesize canTriggerNotification=_canTriggerNotification;
@property(readonly, nonatomic) _Bool includedSeries; // @synthesize includedSeries=_includedSeries;
- (id)_initWithIncludedSeries:(_Bool)arg1 canTriggerNotification:(_Bool)arg2;
- (void)combineWithResult:(id)arg1;

@end
