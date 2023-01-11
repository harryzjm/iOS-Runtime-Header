//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class CPManeuver, CPSNavigator, CPTravelEstimates, NSArray, NSString;

@protocol CPSNavigationDisplaying <NSObject>

@optional
- (void)navigator:(CPSNavigator *)arg1 didEndTrip:(_Bool)arg2;
- (void)updateTripEstimates:(CPTravelEstimates *)arg1;
- (void)navigator:(CPSNavigator *)arg1 pausedTripForReason:(unsigned long long)arg2 description:(NSString *)arg3;
- (void)updateEstimates:(CPTravelEstimates *)arg1 forManeuver:(CPManeuver *)arg2;
- (void)showManeuvers:(NSArray *)arg1 usingDisplayStyles:(NSArray *)arg2;
@end
