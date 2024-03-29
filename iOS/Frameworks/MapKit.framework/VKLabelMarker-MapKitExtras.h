//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKLabelMarker.h>

@class MKMapItemIdentifier, NSString, UIView;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@interface VKLabelMarker (MapKitExtras)
@property(nonatomic) _Bool suppressCallout;
- (id)_annotationTitle;
@property(readonly, nonatomic) MKMapItemIdentifier *flyoverTourIdentifier;
@property(readonly, nonatomic) MKMapItemIdentifier *identifier;
- (unsigned long long)_mapkit_muid;
- (_Bool)_mapkit_hasMUID;
@property(retain, nonatomic) UIView *detailCalloutAccessoryView;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) id <GEOTransitTextDataSource> textDataSource;
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, nonatomic) _Bool hasRoutingIncidentBadge;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) int artworkUseType;
@property(readonly, nonatomic) int artworkSourceType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

