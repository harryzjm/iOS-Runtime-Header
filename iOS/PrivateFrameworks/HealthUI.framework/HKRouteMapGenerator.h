//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKLocationReadings;

@interface HKRouteMapGenerator : NSObject
{
    HKLocationReadings *_locationReadings;
}

@property(retain, nonatomic) HKLocationReadings *locationReadings; // @synthesize locationReadings=_locationReadings;
- (void).cxx_destruct;
- (void)_overlayAnnotationView:(id)arg1 point:(CDStruct_c3b9c2ee)arg2 onSnapshot:(id)arg3 context:(struct CGContext *)arg4;
- (id)_createSnapshotOverlayPolyline:(id)arg1 startMarkerView:(id)arg2 endMarkerView:(id)arg3 onSnapshot:(id)arg4 mapRect:(CDStruct_90e2a262)arg5 lineWidth:(double)arg6;
- (void)snapshotWithSize:(struct CGSize)arg1 lineWidth:(double)arg2 showPins:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)relativeColorForSpeed:(double)arg1;
- (void)_drawLineFromPointA:(struct CGPoint)arg1 toPointB:(struct CGPoint)arg2 atSpeed:(double)arg3 context:(struct CGContext *)arg4 drawDashes:(_Bool)arg5 lineWidth:(double)arg6;
- (void)drawLinesWithPolyline:(id)arg1 lineWidth:(double)arg2 mapRect:(CDStruct_90e2a262)arg3 context:(struct CGContext *)arg4 pointFromMapPoint:(CDUnknownBlockType)arg5;

@end

