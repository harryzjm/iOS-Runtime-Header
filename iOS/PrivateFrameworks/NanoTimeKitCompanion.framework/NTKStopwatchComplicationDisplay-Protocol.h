//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>

@class NSDate;

@protocol NTKStopwatchComplicationDisplay <NTKComplicationDisplay>
- (void)setStopwatchState:(long long)arg1 elapsedTime:(double)arg2 shouldPauseTextCountdown:(_Bool)arg3 timeTravelDate:(NSDate *)arg4;
@end
