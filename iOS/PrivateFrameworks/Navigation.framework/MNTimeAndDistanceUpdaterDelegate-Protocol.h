//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class MNActiveRouteInfo, MNTimeAndDistanceUpdater, NSDate;

@protocol MNTimeAndDistanceUpdaterDelegate <NSObject>
- (void)timeAndDistanceUpdater:(MNTimeAndDistanceUpdater *)arg1 didUpdateDisplayETA:(NSDate *)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(MNActiveRouteInfo *)arg4;
- (void)timeAndDistanceUpdater:(MNTimeAndDistanceUpdater *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)timeAndDistanceUpdater:(MNTimeAndDistanceUpdater *)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
@end
