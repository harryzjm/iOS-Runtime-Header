//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKMapView, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString, UIColor, _MKScaleUnitsView;

@interface MKScaleView : UIView
{
    double _distanceInMeters;
    _Bool _useMetric;
    _Bool _useYardsForShortDistances;
    NSNumberFormatter *_floatNumberFormatter;
    double _magicNumbers[3];
    UIColor *_lightSegmentColorRegular;
    UIColor *_darkSegmentColorRegular;
    UIColor *_borderColorRegular;
    UIColor *_lightSegmentColorSatellite;
    UIColor *_darkSegmentColorSatellite;
    UIColor *_borderColorSatellite;
    NSMutableArray *_segments;
    _MKScaleUnitsView *_unitsView;
    long long _oldNumberOfSegments;
    UIView *_outlineViewA;
    UIView *_outlineViewB;
    UIView *_displayedOutline;
    double _segmentLengthInPixels;
    double _resultSegmentLength;
    double _resultSegmentLengthInMeters;
    NSMutableDictionary *_formattedNumberCache;
    NSString *_feetAbbreviation;
    NSString *_yardAbbreviation;
    NSString *_milesAbbreviation;
    NSString *_metersAbbreviation;
    NSString *_kilometersAbbreviation;
    long long _grQuality;
    int _layoutCounter;
    _Bool _useLightText;
    _Bool _isVisible;
    MKMapView *_mapView;
    long long _scaleVisibility;
    long long _legendAlignment;
}

+ (id)scaleViewWithMapView:(id)arg1;
@property(nonatomic) long long legendAlignment; // @synthesize legendAlignment=_legendAlignment;
@property(nonatomic) long long scaleVisibility; // @synthesize scaleVisibility=_scaleVisibility;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)_localizedDistanceStringsWithMeters:(unsigned int)arg1 imperial:(double)arg2 useFeet:(_Bool)arg3 inMetric:(_Bool)arg4 displaysYardsForShortDistances:(_Bool)arg5 strings:(id)arg6;
- (id)_scaleViewFormattedStringForInteger:(long long)arg1;
- (id)_scaleViewFormattedStringForFloat:(double)arg1;
- (id)_formattedStringForFloat:(double)arg1;
- (void)layoutSubviews;
- (void)_calculateSegments;
- (void)_updateSegmentStrokes;
- (void)didMoveToWindow;
@property(nonatomic) _Bool useLightText; // @dynamic useLightText;
@property(nonatomic) double distanceInMeters; // @dynamic distanceInMeters;
- (void)setFrame:(struct CGRect)arg1;
- (void)memoryWarning:(id)arg1;
- (void)updateLocale:(id)arg1;
- (void)_updateStrings;
- (void)_updateVisibility;
- (void)shouldUpdateScaleNotification:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)_systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithMapView:(id)arg1;

@end

