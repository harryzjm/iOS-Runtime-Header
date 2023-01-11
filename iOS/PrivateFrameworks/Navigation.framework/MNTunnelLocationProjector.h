//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNLocation, NSDate, NSTimer;
@protocol MNTunnelLocationProjectorDelegate;

@interface MNTunnelLocationProjector : NSObject
{
    id <MNTunnelLocationProjectorDelegate> _delegate;
    NSTimer *_locationUpdateOverdueTimer;
    MNLocation *_lastLocation;
    NSDate *_lastLocationDate;
    double _locationOverdueTimeoutForTunnel;
    double _locationOverdueTimeoutForNotTunnel;
    double _locationOverdueTimeoutForUnknown;
    _Bool _isProjecting;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isProjecting; // @synthesize isProjecting=_isProjecting;
@property(nonatomic) __weak id <MNTunnelLocationProjectorDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_approximateMaxSpeedForRoad:(CDStruct_66740237 *)arg1;
- (id)_projectFromLocation:(id)arg1 timeInterval:(double)arg2;
- (double)_locationOverdueTimeoutForLocation:(id)arg1;
- (void)_locationUpdateOverdueTimerFired:(id)arg1;
- (void)_resetLocationUpdateOverdueWithTimeout:(double)arg1;
- (_Bool)_locationIsGoodEnoughToEndProjection:(id)arg1;
- (void)stop;
- (void)updateLocation:(id)arg1;
- (void)dealloc;
- (id)init;

@end
