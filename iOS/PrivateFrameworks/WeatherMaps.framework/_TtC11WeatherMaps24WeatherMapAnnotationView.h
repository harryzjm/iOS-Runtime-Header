//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKAnnotationView.h>

@class MISSING_TYPE, NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _TtC11WeatherMaps24WeatherMapAnnotationView : MKAnnotationView
{
    MISSING_TYPE *dataSource;
    MISSING_TYPE *delegate;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *shouldDisableImplicitAnimations;
    MISSING_TYPE *axBalloonContentView;
    MISSING_TYPE *mapAnnotation;
    MISSING_TYPE *$__lazy_storage_$_locationLabel;
    MISSING_TYPE *$__lazy_storage_$_pinView;
}

- (void).cxx_destruct;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) struct CGPoint accessibilityActivationPoint;
@property(nonatomic, retain) UIBezierPath *accessibilityPath;
@property(nonatomic) struct CGRect accessibilityFrame;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) _Bool isAccessibilityElement;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;

@end

