//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PlatterKit/MTMaterialSettingsObserving-Protocol.h>
#import <PlatterKit/PLPlatter-Protocol.h>
#import <PlatterKit/PLPlatterInternal-Protocol.h>

@class MTMaterialView, MTVibrantStylingProvider, NSString, UIImageView;

@interface PLPlatterView : UIView <MTMaterialSettingsObserving, PLPlatterInternal, PLPlatter>
{
    long long _recipe;
    unsigned long long _options;
    UIImageView *_shadowView;
    UIView *_customContentView;
    _Bool _hasShadow;
    _Bool _backgroundBlurred;
    _Bool _usesBackgroundView;
    UIView *_backgroundView;
    double _cornerRadius;
    MTMaterialView *_mainOverlayView;
}

+ (struct CGRect)_shadowImage:(id)arg1 frameForPlatterViewBounds:(struct CGRect)arg2;
+ (id)_shadowImageMask;
@property(retain, nonatomic) MTMaterialView *mainOverlayView; // @synthesize mainOverlayView=_mainOverlayView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool usesBackgroundView; // @synthesize usesBackgroundView=_usesBackgroundView;
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureBackgroundViewIfNecessary;
- (id)_newDefaultBackgroundView;
- (unsigned long long)_optionsForBackgroundWithBlur:(_Bool)arg1;
- (void)_configureBackgroundView:(id)arg1;
- (void)_configureShadowViewIfNecessary;
@property(readonly, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
- (void)updateWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic) MTVibrantStylingProvider *vibrantStylingProvider;
@property(copy, nonatomic) NSString *groupName;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
@property(readonly, nonatomic) MTMaterialView *backgroundMaterialView;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) long long recipe;
- (void)_configureMainOverlayViewIfNecessary;
- (void)_configureCustomContentViewIfNecessary;
- (void)_layoutMainOverlay;
- (void)_willRemoveCustomContent:(id)arg1;
- (void)_configureCustomContentView;
- (void)_configureShadowView;
- (void)_configureMainOverlayView;
- (unsigned long long)_optionsForMainOverlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

