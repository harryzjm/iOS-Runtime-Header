//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusKit/MKMapViewDelegate-Protocol.h>
#import <OpusKit/OKWidgetMapViewProxyExports-Protocol.h>
#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class MKMapView, NSString, OKMKMapView;

@interface OKWidgetMapViewProxy <OKWidgetMapViewProxyExports, UIGestureRecognizerDelegate, MKMapViewDelegate>
{
    OKMKMapView *_mapView;
    CDStruct_b7cb895d _region;
    _Bool _zoomToFitAnnotations;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(readonly, retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (_Bool)supportsReadiness;
- (void)zoomToAnnotationsWithIdentifiers:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotationWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)setAntialiasing:(_Bool)arg1;
- (void)setSettingZoomToFitAnnotations:(_Bool)arg1;
- (void)setSettingAnnotations:(id)arg1;
- (void)setSettingCenterCoordinate:(struct CLLocationCoordinate2D)arg1;
- (struct CLLocationCoordinate2D)settingCenterCoordinate;
- (void)setSettingRegion:(CDStruct_b7cb895d)arg1;
- (CDStruct_b7cb895d)settingRegion;
- (void)setSettingShowsUserLocation:(_Bool)arg1;
- (_Bool)settingShowsUserLocation;
- (void)setSettingScrollWheelEnabled:(_Bool)arg1;
- (_Bool)settingScrollWheelEnabled;
- (void)setSettingScrollEnabled:(_Bool)arg1;
- (_Bool)settingScrollEnabled;
- (void)setSettingZoomEnabled:(_Bool)arg1;
- (_Bool)settingZoomEnabled;
- (void)setSettingMapType:(unsigned long long)arg1;
- (unsigned long long)settingMapType;
- (_Bool)settingShowsBuildings;
- (void)setSettingShowsBuildings:(_Bool)arg1;
- (_Bool)settingShowsPointsOfInterest;
- (void)setSettingShowsPointsOfInterest:(_Bool)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

