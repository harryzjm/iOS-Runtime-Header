//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSAlwaysOnTimeline.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface BLSAlwaysOnPeriodicTimeline : BLSAlwaysOnTimeline
{
    double _periodicInterval;
    NSDate *_periodicStart;
}

- (void).cxx_destruct;
- (id)unconfiguredEntriesForDateInterval:(id)arg1 previousEntry:(id)arg2;
- (long long)requestedFidelityForStartEntryInDateInterval:(id)arg1 withPreviousEntry:(id)arg2;
- (id)initWithUpdateInterval:(double)arg1 startDate:(id)arg2 identifier:(id)arg3 configure:(CDUnknownBlockType)arg4;

@end

