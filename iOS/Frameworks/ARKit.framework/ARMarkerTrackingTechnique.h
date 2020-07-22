//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARMarkerTrackingTechnique
{
    NSArray *_markers;
    struct MarkerDetector *_detector;
    struct shared_ptr<acv::math::PinholeCamera> _camera;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    struct map<int, acv::vision::marker::DetectedMarker, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, acv::vision::marker::DetectedMarker>>> _detectedMarkers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (void)dealloc;
- (id)initWithIDMarkers:(id)arg1;
- (id)initWithIDMarker:(id)arg1;

@end
