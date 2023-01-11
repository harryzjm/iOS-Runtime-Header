//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILayoutGuide;

@interface AVPlayerViewControllerCustomControlsView : UIView
{
    _Bool _needsInitialConstraints;
    NSLayoutConstraint *_transportControlsVisibleConstraint;
    NSLayoutConstraint *_transportControlsHiddenConstraint;
    NSLayoutConstraint *_volumeControlsVisibleConstraint;
    NSLayoutConstraint *_volumeControlsHiddenConstraint;
    _Bool _areTransportControlsVisible;
    _Bool _areVolumeControlsVisible;
    UILayoutGuide *_transportControlsAreaLayoutGuide;
    UILayoutGuide *_displayModeControlsAreaLayoutGuide;
    UILayoutGuide *_volumeControlsAreaLayoutGuide;
    UILayoutGuide *_unobscuredCenterAreaLayoutGuide;
    UILayoutGuide *_animatedUnobscuredCenterAreaLayoutGuide;
    UILayoutGuide *_unobscuredTopAreaLayoutGuide;
    UIView *_transportControlsAreaLayoutGuideProvidingView;
    UIView *_displayModeControlsAreaLayoutGuideProvidingView;
    UIView *_volumeControlsAreaLayoutGuideProvidingView;
    UIView *_unobscuredTopAreaLayoutGuideProvidingView;
    UIView *_unobscuredCenterAreaLayoutGuideProvidingView;
    UIView *_animatedUnobscuredCenterAreaLayoutGuideProvidingView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool areVolumeControlsVisible; // @synthesize areVolumeControlsVisible=_areVolumeControlsVisible;
@property(nonatomic) _Bool areTransportControlsVisible; // @synthesize areTransportControlsVisible=_areTransportControlsVisible;
@property(readonly, nonatomic) UIView *animatedUnobscuredCenterAreaLayoutGuideProvidingView; // @synthesize animatedUnobscuredCenterAreaLayoutGuideProvidingView=_animatedUnobscuredCenterAreaLayoutGuideProvidingView;
@property(readonly, nonatomic) UIView *unobscuredCenterAreaLayoutGuideProvidingView; // @synthesize unobscuredCenterAreaLayoutGuideProvidingView=_unobscuredCenterAreaLayoutGuideProvidingView;
@property(readonly, nonatomic) UIView *unobscuredTopAreaLayoutGuideProvidingView; // @synthesize unobscuredTopAreaLayoutGuideProvidingView=_unobscuredTopAreaLayoutGuideProvidingView;
@property(readonly, nonatomic) UIView *volumeControlsAreaLayoutGuideProvidingView; // @synthesize volumeControlsAreaLayoutGuideProvidingView=_volumeControlsAreaLayoutGuideProvidingView;
@property(readonly, nonatomic) UIView *displayModeControlsAreaLayoutGuideProvidingView; // @synthesize displayModeControlsAreaLayoutGuideProvidingView=_displayModeControlsAreaLayoutGuideProvidingView;
@property(readonly, nonatomic) UIView *transportControlsAreaLayoutGuideProvidingView; // @synthesize transportControlsAreaLayoutGuideProvidingView=_transportControlsAreaLayoutGuideProvidingView;
@property(readonly, nonatomic) UILayoutGuide *unobscuredTopAreaLayoutGuide; // @synthesize unobscuredTopAreaLayoutGuide=_unobscuredTopAreaLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *animatedUnobscuredCenterAreaLayoutGuide; // @synthesize animatedUnobscuredCenterAreaLayoutGuide=_animatedUnobscuredCenterAreaLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *unobscuredCenterAreaLayoutGuide; // @synthesize unobscuredCenterAreaLayoutGuide=_unobscuredCenterAreaLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *volumeControlsAreaLayoutGuide; // @synthesize volumeControlsAreaLayoutGuide=_volumeControlsAreaLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *displayModeControlsAreaLayoutGuide; // @synthesize displayModeControlsAreaLayoutGuide=_displayModeControlsAreaLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *transportControlsAreaLayoutGuide; // @synthesize transportControlsAreaLayoutGuide=_transportControlsAreaLayoutGuide;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
