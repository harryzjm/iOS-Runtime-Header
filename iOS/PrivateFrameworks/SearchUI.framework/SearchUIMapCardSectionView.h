//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/MKMapViewDelegate-Protocol.h>

@class CLGeocoder, CLPlacemark, MKMapView, MKPinAnnotationView, NSString, SFMapCardSection, UIButton, UILabel;

@interface SearchUIMapCardSectionView <MKMapViewDelegate>
{
    _Bool _needsToNotifyDelegateOfLocationUpdate;
    MKMapView *_mapView;
    UILabel *_footnoteDescriptorLabel;
    UILabel *_footnoteLabel;
    MKPinAnnotationView *_pinAnnotationView;
    UIButton *_mapButton;
    CLPlacemark *_currentPlacemark;
    CLGeocoder *_geocoder;
}

+ (id)_postalAddressFromAddressBookDictionaryAddress:(id)arg1;
@property(nonatomic) _Bool needsToNotifyDelegateOfLocationUpdate; // @synthesize needsToNotifyDelegateOfLocationUpdate=_needsToNotifyDelegateOfLocationUpdate;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) CLPlacemark *currentPlacemark; // @synthesize currentPlacemark=_currentPlacemark;
@property(retain, nonatomic) UIButton *mapButton; // @synthesize mapButton=_mapButton;
@property(retain, nonatomic) MKPinAnnotationView *pinAnnotationView; // @synthesize pinAnnotationView=_pinAnnotationView;
@property(retain, nonatomic) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) UILabel *footnoteDescriptorLabel; // @synthesize footnoteDescriptorLabel=_footnoteDescriptorLabel;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (_Bool)_pinShouldFloat;
- (id)_uiColorFromSFColor:(id)arg1;
- (id)_clLocationFromSFLatLng:(id)arg1;
- (void)_mapButtonPressed:(id)arg1;
- (id)_configuredLabel;
- (id)_configuredFootnoteLabel;
- (id)_configuredFootnoteDescriptorLabel;
- (void)_notifyDelegateOfLocationUpdateIfNeededWithPlacemark:(id)arg1;
- (void)prepareForDismissal;
- (void)layoutSubviews;
- (double)desiredHeight;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)reloadData;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SFMapCardSection *section; // @dynamic section;
@property(readonly) Class superclass;

@end

