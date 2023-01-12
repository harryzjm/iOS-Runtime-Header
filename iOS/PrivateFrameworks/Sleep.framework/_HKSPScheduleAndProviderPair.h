//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKSPSleepSchedule;
@protocol HKSPSuggestionProvider;

__attribute__((visibility("hidden")))
@interface _HKSPScheduleAndProviderPair : NSObject
{
    id <HKSPSuggestionProvider> _provider;
    HKSPSleepSchedule *_schedule;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKSPSleepSchedule *schedule; // @synthesize schedule=_schedule;
@property(retain, nonatomic) id <HKSPSuggestionProvider> provider; // @synthesize provider=_provider;

@end

