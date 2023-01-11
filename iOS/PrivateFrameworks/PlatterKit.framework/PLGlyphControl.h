//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MTMaterialView, NSString, UIImage, UIImageView, UIView;

@interface PLGlyphControl : UIControl
{
    NSString *_groupName;
    long long _materialRecipe;
    unsigned long long _backgroundMaterialOptions;
    unsigned long long _overlayMaterialOptions;
    UIImageView *_glyphView;
    MTMaterialView *_backgroundMaterialView;
    MTMaterialView *_overlayMaterialView;
    UIView *_highlightView;
}

+ (id)dismissControlWithMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
@property(retain, nonatomic, getter=_hightlightView) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic, getter=_overlayMaterialView) MTMaterialView *overlayMaterialView; // @synthesize overlayMaterialView=_overlayMaterialView;
@property(retain, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView; // @synthesize backgroundMaterialView=_backgroundMaterialView;
@property(retain, nonatomic, getter=_glyphView) UIImageView *glyphView; // @synthesize glyphView=_glyphView;
@property(readonly, nonatomic) unsigned long long overlayMaterialOptions; // @synthesize overlayMaterialOptions=_overlayMaterialOptions;
@property(readonly, nonatomic) unsigned long long backgroundMaterialOptions; // @synthesize backgroundMaterialOptions=_backgroundMaterialOptions;
@property(readonly, nonatomic) long long materialRecipe; // @synthesize materialRecipe=_materialRecipe;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (void)_configureOverlayMaterialViewIfNecessary;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_configureMaterialView:(id *)arg1 ifNecessaryWithOptions:(unsigned long long)arg2 positioningAtIndex:(unsigned long long)arg3;
- (void)_configureGlyphViewIfNecessaryWithImage:(id)arg1;
- (void)_updateGlyphViewVibrantStyling;
- (void)layoutSubviews;
- (double)_cornerRadius;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
@property(copy, nonatomic) UIImage *glyph;
- (void)dealloc;
- (id)initWithMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
- (void)_updateVibrantStylingOfView:(id)arg1;
- (void)_reduceTransparencyStatusDidChange:(id)arg1;
- (void)_darkerSystemColorsStatusDidChange:(id)arg1;
- (void)_handleTouchUpInsideWithEvent:(id)arg1;

@end
