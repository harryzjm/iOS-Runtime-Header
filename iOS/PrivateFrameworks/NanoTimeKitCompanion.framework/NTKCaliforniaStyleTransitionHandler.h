//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLKDevice;

@interface NTKCaliforniaStyleTransitionHandler : NSObject
{
    double _fraction;
    unsigned long long _dial;
    struct CGPoint *_fadeOutHourMarkersCenterPoints;
    struct CGPoint *_fadeInHourMarkersCenterPoints;
    unsigned long long _hourMarkersCount;
    CLKDevice *_device;
    struct CGPoint _centerPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) unsigned long long hourMarkersCount; // @synthesize hourMarkersCount=_hourMarkersCount;
@property(nonatomic) struct CGPoint *fadeInHourMarkersCenterPoints; // @synthesize fadeInHourMarkersCenterPoints=_fadeInHourMarkersCenterPoints;
@property(nonatomic) struct CGPoint *fadeOutHourMarkersCenterPoints; // @synthesize fadeOutHourMarkersCenterPoints=_fadeOutHourMarkersCenterPoints;
@property(nonatomic) struct CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
@property(nonatomic) unsigned long long dial; // @synthesize dial=_dial;
@property(nonatomic) double fraction; // @synthesize fraction=_fraction;
- (double)animationDurationForHourMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (double)animationStartTimeForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (double)animationProgressForHourMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (struct CGAffineTransform)transformForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (struct CGPoint)positionForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (double)opacityForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1;

@end
