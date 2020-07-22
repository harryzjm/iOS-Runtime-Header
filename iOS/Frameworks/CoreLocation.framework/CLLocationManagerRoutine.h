//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CLLocationManagerRoutineProxy;
@protocol CLLocationManagerRoutineDelegate;

@interface CLLocationManagerRoutine : NSObject
{
    _CLLocationManagerRoutineProxy *_locationManagerRoutineProxy;
}

@property(retain, nonatomic) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy; // @synthesize locationManagerRoutineProxy=_locationManagerRoutineProxy;
@property(nonatomic) id <CLLocationManagerRoutineDelegate> delegate;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)dealloc;
- (id)init;
- (void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopUpdatingPredictedApplications;
- (void)startUpdatingPredictedApplications;

@end
