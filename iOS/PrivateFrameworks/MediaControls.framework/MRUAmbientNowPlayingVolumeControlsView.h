//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUCAPackageView, MRUSlider, MRUVisualStylingProvider, MRUVolumeController, MSVTimer, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIWindowScene;
@protocol MPVolumeControllerDataSource;

__attribute__((visibility("hidden")))
@interface MRUAmbientNowPlayingVolumeControlsView : UIView
{
    _Bool _onScreen;
    _Bool _sliderExpanded;
    MRUSlider *_slider;
    MRUVolumeController *_volumeController;
    MRUVisualStylingProvider *_stylingProvider;
    double _sliderExpansionFactor;
    MRUCAPackageView *_packageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _sliderValueOnPanBegin;
    MSVTimer *_idleTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSVTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic) _Bool sliderExpanded; // @synthesize sliderExpanded=_sliderExpanded;
@property(nonatomic) double sliderValueOnPanBegin; // @synthesize sliderValueOnPanBegin=_sliderValueOnPanBegin;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) MRUCAPackageView *packageView; // @synthesize packageView=_packageView;
@property(nonatomic) double sliderExpansionFactor; // @synthesize sliderExpansionFactor=_sliderExpansionFactor;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) MRUVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) MRUSlider *slider; // @synthesize slider=_slider;
- (void)sliderTouchDown:(id)arg1;
- (void)sliderTouchUp:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didPanPackage:(id)arg1;
- (void)didTapPackage:(id)arg1;
- (void)resetIdleTimer;
- (void)invalidateIdleTimer;
- (void)updateVisibility;
- (void)updateVisualStyling;
- (void)updatePackageWithValue:(float)arg1;
- (void)updateVolumeAnimated:(_Bool)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)sliderWillExtend:(id)arg1 insets:(struct UIEdgeInsets)arg2;
- (void)visualStylingProviderDidChange:(id)arg1;
@property(readonly, nonatomic) NSString *volumeAudioCategory;
@property(readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property(readonly, nonatomic, getter=isOnScreenForVolumeDisplay) _Bool onScreenForVolumeDisplay;
- (void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned int)arg2;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
@property(retain, nonatomic) id <MPVolumeControllerDataSource> dataSource;
- (void)createConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

