//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BKSAccelerometerDelegate-Protocol.h>

@class BKSAccelerometer, NSString;
@protocol SBSAccelerometerDelegate;

@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate>
{
    id <SBSAccelerometerDelegate> _delegate;
    BKSAccelerometer *_bksMirror;
}

@property(nonatomic) __weak id <SBSAccelerometerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (int)currentDeviceOrientation;
@property(nonatomic) _Bool orientationEventsEnabled;
@property(nonatomic) float zThreshold;
@property(nonatomic) float yThreshold;
@property(nonatomic) float xThreshold;
@property(nonatomic) double updateInterval;
@property(nonatomic) _Bool accelerometerEventsEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
