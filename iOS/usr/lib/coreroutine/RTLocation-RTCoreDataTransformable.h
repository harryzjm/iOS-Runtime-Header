//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRoutine/RTLocation.h>

@class NSString;

@interface RTLocation (RTCoreDataTransformable)
+ (id)createWithMapItemMO:(id)arg1;
+ (id)createWithManagedObject:(id)arg1;
+ (int)convertLocationReferenceFrame:(int)arg1;
- (id)locationAtDistance:(double)arg1 course:(double)arg2;
- (void)_distanceBetweenShiftedLocation:(id)arg1 unshiftedLocation:(id)arg2 locationShifter:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)distanceFromLocation:(id)arg1 locationShifter:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (double)distanceFromLocation:(id)arg1 locationShifter:(id)arg2 error:(id *)arg3;
- (id)initWithCLCircularRegion:(id)arg1;
- (id)initWithCLLocationCoordinate2D:(struct CLLocationCoordinate2D *)arg1;
- (id)initWithRTPair:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithRTPLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

