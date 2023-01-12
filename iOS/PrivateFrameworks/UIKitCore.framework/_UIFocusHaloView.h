//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIColor, UITraitCollection, _UIShape, _UIShapeView;

__attribute__((visibility("hidden")))
@interface _UIFocusHaloView : UIView
{
    _Bool _geometryFrozen;
    _UIShape *_shape;
    long long _position;
    double _thickness;
    double _gapWidth;
    _UIShapeView *_haloView;
    _UIShapeView *_gapView;
    _UIShapeView *_maskViewWhenInside;
    UIColor *_gapColor;
    UITraitCollection *_gapSourceTraitCollection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITraitCollection *gapSourceTraitCollection; // @synthesize gapSourceTraitCollection=_gapSourceTraitCollection;
@property(retain, nonatomic) UIColor *gapColor; // @synthesize gapColor=_gapColor;
@property(retain, nonatomic) _UIShapeView *maskViewWhenInside; // @synthesize maskViewWhenInside=_maskViewWhenInside;
@property(retain, nonatomic) _UIShapeView *gapView; // @synthesize gapView=_gapView;
@property(retain, nonatomic) _UIShapeView *haloView; // @synthesize haloView=_haloView;
@property(nonatomic) _Bool geometryFrozen; // @synthesize geometryFrozen=_geometryFrozen;
@property(nonatomic) double gapWidth; // @synthesize gapWidth=_gapWidth;
@property(nonatomic) double thickness; // @synthesize thickness=_thickness;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) _UIShape *shape; // @synthesize shape=_shape;
- (void)_updateDebugUI;
- (_Bool)_debugEnabled;
@property(readonly, copy) NSString *description;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateGapColor;
- (id)resolvedGapColor;
@property(readonly, nonatomic) UIColor *haloColor;
- (_Bool)_ignoreRemoveAllAnimations;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToSuperview;
@property(readonly, nonatomic) double totalConsumedSpace;
- (void)_updateHalo;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

