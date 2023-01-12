//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>
#import <PhotosUICore/UIPointerInteractionDelegate-Protocol.h>

@class NSObject, NSString, PXStoryChromeButtonConfiguration, PXUpdater, UIContextMenuInteraction, UIImage, UIImageView, UILabel, UIPointerInteraction, UIVisualEffectView;
@protocol OS_os_log;

@interface PXStoryChromeButton : UIButton <UIPointerInteractionDelegate, PXGReusableView>
{
    _Bool _isMenuOpen;
    PXStoryChromeButtonConfiguration *_userData;
    PXUpdater *_updater;
    UIVisualEffectView *_effectView;
    UIImageView *_systemImageView;
    UIImageView *_badgeSystemImageView;
    UIImageView *_assetImageView;
    UILabel *_label;
    UIImage *_assetImage;
    long long _imageRequestID;
    UIContextMenuInteraction *_customContextMenuInteraction;
    UIPointerInteraction *_pointerInteraction;
    NSObject<OS_os_log> *_log;
    struct CGRect _clippingRect;
}

+ (id)_createBadgeSystemImageView;
+ (id)_createSystemImageView;
+ (struct CGSize)_sizeForAttributedLabel:(id)arg1;
+ (struct CGSize)sizeWithConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property(retain, nonatomic) UIContextMenuInteraction *customContextMenuInteraction; // @synthesize customContextMenuInteraction=_customContextMenuInteraction;
@property(nonatomic) _Bool isMenuOpen; // @synthesize isMenuOpen=_isMenuOpen;
@property(nonatomic) long long imageRequestID; // @synthesize imageRequestID=_imageRequestID;
@property(retain, nonatomic) UIImage *assetImage; // @synthesize assetImage=_assetImage;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *assetImageView; // @synthesize assetImageView=_assetImageView;
@property(readonly, nonatomic) UIImageView *badgeSystemImageView; // @synthesize badgeSystemImageView=_badgeSystemImageView;
@property(readonly, nonatomic) UIImageView *systemImageView; // @synthesize systemImageView=_systemImageView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(copy, nonatomic) PXStoryChromeButtonConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)_configureActions;
- (id)_imageWithSystemName:(id)arg1 symbolConfiguration:(id)arg2;
- (id)_badgeImageWithSystemName:(id)arg1;
- (id)_imageWithSystemName:(id)arg1;
- (void)_updateEffectViewCornerRadius;
- (void)_configureVisualEffectView:(id)arg1;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)_handleImageResult:(id)arg1 info:(id)arg2 forDisplayAsset:(id)arg3 requestID:(long long)arg4 synchronous:(_Bool)arg5;
- (void)_setEffectViewFrame:(struct CGRect)arg1;
- (void)_updateVisualEffectView;
- (void)_updateAssetImageView;
- (void)_updateBadgeSytemImageView;
- (void)_updateSystemImageView;
- (void)_updateLabel;
- (id)_createLabel;
- (id)_createAssetImageView;
- (void)_px_invalidatePointerInteraction;
- (void)_updateAppearance;
- (void)_invalidateAppearance;
- (void)_updateAssetImage;
- (void)_invalidateAssetImage;
- (void)_setNeedsUpdate;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
@property(readonly) Class superclass;

@end
