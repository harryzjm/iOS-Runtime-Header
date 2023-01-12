//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGReusableView-Protocol.h>

@class CAShapeLayer, NSString, PXStoryChromeButton, PXStoryChromeButtonConfiguration, PXStoryPlayButtonConfiguration, PXStoryViewModel, PXUpdater;

@interface PXStoryPlayButton : UIView <PXChangeObserver, PXGReusableView>
{
    PXStoryPlayButtonConfiguration *_userData;
    PXUpdater *_updater;
    PXStoryChromeButtonConfiguration *_buttonConfiguration;
    PXStoryChromeButton *_button;
    PXStoryPlayButtonConfiguration *_configuration;
    PXStoryViewModel *_viewModel;
    CAShapeLayer *_progressIndicator;
    NSString *_axPlayLabel;
    NSString *_axPauseLabel;
    NSString *_axReplayLabel;
    struct CGRect _clippingRect;
    struct UIEdgeInsets _hitTestEdgeOutsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *axReplayLabel; // @synthesize axReplayLabel=_axReplayLabel;
@property(readonly, nonatomic) NSString *axPauseLabel; // @synthesize axPauseLabel=_axPauseLabel;
@property(readonly, nonatomic) NSString *axPlayLabel; // @synthesize axPlayLabel=_axPlayLabel;
@property(readonly, nonatomic) CAShapeLayer *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) PXStoryPlayButtonConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) PXStoryChromeButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) PXStoryChromeButtonConfiguration *buttonConfiguration; // @synthesize buttonConfiguration=_buttonConfiguration;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) struct UIEdgeInsets hitTestEdgeOutsets; // @synthesize hitTestEdgeOutsets=_hitTestEdgeOutsets;
@property(copy, nonatomic) PXStoryPlayButtonConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)_updateProgressIndicator;
- (void)_invalidateProgressIndicator;
- (void)_updateButton;
- (void)_invalidateButton;
- (void)_setNeedsUpdate;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
@property(readonly) Class superclass;

@end
