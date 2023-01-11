//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _MKUserLocationView;

@interface MKUserLocationView
{
    _Bool _selected;
    _MKUserLocationView *_mkUserLocationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_mkUserLocationView, setter=_setMKUserLocationView:) _MKUserLocationView *mkUserLocationView; // @synthesize mkUserLocationView=_mkUserLocationView;
- (void)_setRotateInnerImageToMatchCourse:(_Bool)arg1;
- (_Bool)_rotateInnerImageToMatchCourse;
- (void)_setInnerImageMask:(id)arg1;
- (id)_innerImageMask;
- (void)_setPuckScale:(double)arg1;
- (void)_setAccuracyRingAlpha:(double)arg1;
- (double)_accuracyRingAlpha;
- (void)_setPuckAlpha:(double)arg1;
- (double)_puckAlpha;
- (void)_setMaxRadiusToShowAccuracyRing:(double)arg1;
- (double)_maxRadiusToShowAccuracyRing;
- (void)_setAllowsAccuracyRing:(_Bool)arg1;
- (_Bool)_allowsAccuracyRing;
- (void)_setShouldShowOuterRing:(_Bool)arg1;
- (_Bool)_shouldShowOuterRing;
- (void)_setShouldInnerPulse:(_Bool)arg1;
- (_Bool)_shouldInnerPulse;
- (void)_setAllowsPulse:(_Bool)arg1;
- (_Bool)_allowsPulse;
- (void)_setHeadingIndicatorStyle:(long long)arg1;
- (long long)_headingIndicatorStyle;
- (struct UIEdgeInsets)_annotationTrackingInsets;
- (void)_setHeading:(double)arg1;
- (double)_heading;
- (void)_setCanShowHeadingIndicator:(_Bool)arg1;
- (_Bool)_canShowHeadingIndicator;
- (void)_setShouldDisplayHeading:(_Bool)arg1;
- (_Bool)_shouldDisplayHeading;
- (_Bool)_isStale;
- (void)_locationManagerFailedToUpdateLocation;
- (void)_updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (id)_lastLocation;
- (struct CGRect)_mapkit_visibleRect;
- (void)_setMapRotationRadians:(double)arg1;
- (void)_setMapPitchRadians:(double)arg1;
- (void)_updateFromMap;
- (void)_setMapDisplayStyle:(CDStruct_80aa614a)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (_Bool)isDraggable;
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isSelected;
- (_Bool)_allowedToShowCallout;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (id)detailCalloutAccessoryView;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (id)rightCalloutAccessoryView;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (id)leftCalloutAccessoryView;
- (void)setRightCalloutOffset:(struct CGPoint)arg1;
- (struct CGPoint)rightCalloutOffset;
- (void)setLeftCalloutOffset:(struct CGPoint)arg1;
- (struct CGPoint)leftCalloutOffset;
- (void)setCalloutOffset:(struct CGPoint)arg1;
- (struct CGPoint)calloutOffset;
- (void)setCanShowCallout:(_Bool)arg1;
- (_Bool)canShowCallout;
- (void)setCenterOffset:(struct CGPoint)arg1;
- (struct CGPoint)centerOffset;
- (void)_setSelectionPriority:(float)arg1;
- (float)_selectionPriority;
- (void)setAnnotation:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end
