//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMOdometer;
@protocol OS_dispatch_queue;

@interface CMOdometerProxy : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fHandler;
    long long fGpsAvailability;
    CMOdometer *_odometer;
    double _totalDistance;
    double _averageSpeed;
    double _startDate;
}

@property double startDate; // @synthesize startDate=_startDate;
@property double averageSpeed; // @synthesize averageSpeed=_averageSpeed;
@property double totalDistance; // @synthesize totalDistance=_totalDistance;
@property(nonatomic) CMOdometer *odometer; // @synthesize odometer=_odometer;
- (void)_stopOdometerUpdates;
- (void)_startOdometerUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_startDaemonConnection;
- (void)_teardown;
- (void)dealloc;
- (id)initWithOdometer:(id)arg1;

@end
