//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <NanoTimeKitCompanion/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, CLKDevice, NSHashTable, NSString, REContent, UIImage, UIImageView, UIView;

@interface NTKUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    struct CGSize _shadowSize;
    UIImageView *_shadowView;
    CALayer *_imageLayer;
    UIView *_overlayView;
    double _darkeningAmount;
    double _contentBrightness;
    REContent *_content;
    NSHashTable *_layerProviders;
    _Bool _paused;
    CLKDevice *_device;
    UIImage *_contentImage;
    UIImage *_overrideContentImage;
    NSString *_representedElementIdentifier;
}

+ (struct CGSize)suggestedBodyImageSizeForDevice:(id)arg1;
+ (struct CGSize)suggestedHeaderImageSizeForDevice:(id)arg1;
+ (void)clearLabel:(id)arg1;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) NSString *representedElementIdentifier; // @synthesize representedElementIdentifier=_representedElementIdentifier;
@property(readonly, nonatomic) REContent *content; // @synthesize content=_content;
@property(retain, nonatomic) UIImage *overrideContentImage; // @synthesize overrideContentImage=_overrideContentImage;
@property(readonly, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)transitionContextInView:(id)arg1;
- (void)_updateColorOverlay;
- (void)applyLayoutAttributes:(id)arg1;
- (void)configureWithContent:(id)arg1;
- (void)enumerateContentsLayersWithBlock:(CDUnknownBlockType)arg1;
- (void)setContentImage:(id)arg1 animated:(_Bool)arg2;
- (void)setContentBrightness:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)removeContentsLayerProvider:(id)arg1;
- (void)addContentsLayerProvider:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

