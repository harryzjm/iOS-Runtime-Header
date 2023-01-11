//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MPButton, MPVolumeController, MTMaterialView, MTVisualStylingProvider, NSBundle;

__attribute__((visibility("hidden")))
@interface MediaControlsRelativeVolumeStepper : UIView
{
    MPVolumeController *_volumeController;
    MTVisualStylingProvider *_visualStylingProvider;
    MTMaterialView *_increaseBackground;
    MTMaterialView *_decreaseBackground;
    MPButton *_increaseButton;
    MPButton *_decreaseButton;
    NSBundle *_mediaControlsBundle;
}

@property(retain, nonatomic) NSBundle *mediaControlsBundle; // @synthesize mediaControlsBundle=_mediaControlsBundle;
@property(retain, nonatomic) MPButton *decreaseButton; // @synthesize decreaseButton=_decreaseButton;
@property(retain, nonatomic) MPButton *increaseButton; // @synthesize increaseButton=_increaseButton;
@property(retain, nonatomic) MTMaterialView *decreaseBackground; // @synthesize decreaseBackground=_decreaseBackground;
@property(retain, nonatomic) MTMaterialView *increaseBackground; // @synthesize increaseBackground=_increaseBackground;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(retain, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
- (void).cxx_destruct;
- (void)increaseButtonHoldReleased:(id)arg1;
- (void)increaseButtonHoldBegan:(id)arg1;
- (void)increaseTouchUpInside:(id)arg1;
- (void)decreaseButtonHoldReleased:(id)arg1;
- (void)decreaseButtonHoldBegan:(id)arg1;
- (void)decreaseTouchUpInside:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
