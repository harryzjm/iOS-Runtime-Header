//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtCV12FindMyUICore21StaticLocationMapView11Coordinator : NSObject
{
    MISSING_TYPE *parent;
    MISSING_TYPE *locationManager;
    MISSING_TYPE *hasBeenDraggedOnce;
}

- (void).cxx_destruct;
- (id)init;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleMapPanRecognizer:(id)arg1;

@end

