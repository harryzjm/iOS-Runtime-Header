//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUTransportButton, MRUVisualStylingProvider, NSString, UIImage, UIImageSymbolConfiguration;
@protocol MRUStepperDelegate;

__attribute__((visibility("hidden")))
@interface MRUStepper : UIView
{
    _Bool _dimmed;
    id <MRUStepperDelegate> _delegate;
    UIImage *_decrementImage;
    UIImage *_incrementImage;
    MRUVisualStylingProvider *_stylingProvider;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
    UIView *_decrementBackground;
    UIView *_incrementBackground;
    MRUTransportButton *_decrementButton;
    MRUTransportButton *_incrementButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MRUTransportButton *incrementButton; // @synthesize incrementButton=_incrementButton;
@property(retain, nonatomic) MRUTransportButton *decrementButton; // @synthesize decrementButton=_decrementButton;
@property(retain, nonatomic) UIView *incrementBackground; // @synthesize incrementBackground=_incrementBackground;
@property(retain, nonatomic) UIView *decrementBackground; // @synthesize decrementBackground=_decrementBackground;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration; // @synthesize preferredSymbolConfiguration=_preferredSymbolConfiguration;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) UIImage *incrementImage; // @synthesize incrementImage=_incrementImage;
@property(retain, nonatomic) UIImage *decrementImage; // @synthesize decrementImage=_decrementImage;
@property(nonatomic) __weak id <MRUStepperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;
- (void)increaseButtonHoldReleased:(id)arg1;
- (void)increaseButtonHoldBegan:(id)arg1;
- (void)increaseTouchUpInside:(id)arg1;
- (void)decreaseButtonHoldReleased:(id)arg1;
- (void)decreaseButtonHoldBegan:(id)arg1;
- (void)decreaseTouchUpInside:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

