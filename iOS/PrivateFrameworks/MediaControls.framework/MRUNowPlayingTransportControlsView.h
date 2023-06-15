//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUTransportButton, MRUTransportControls, MRUVisualStylingProvider;
@protocol MRUNowPlayingTransportControlsViewDelegate;

__attribute__((visibility("hidden")))
@interface MRUNowPlayingTransportControlsView : UIView
{
    _Bool _showTVRemoteButton;
    _Bool _showRoutingButton;
    _Bool _dimmed;
    id <MRUNowPlayingTransportControlsViewDelegate> _delegate;
    MRUTransportControls *_transportControls;
    MRUTransportButton *_routingButton;
    MRUVisualStylingProvider *_stylingProvider;
    long long _layout;
    MRUTransportButton *_leadingButton;
    CDUnknownBlockType _leadingButtonHandler;
    MRUTransportButton *_leftButton;
    MRUTransportButton *_centerButton;
    MRUTransportButton *_rightButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MRUTransportButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MRUTransportButton *centerButton; // @synthesize centerButton=_centerButton;
@property(retain, nonatomic) MRUTransportButton *leftButton; // @synthesize leftButton=_leftButton;
@property(copy, nonatomic) CDUnknownBlockType leadingButtonHandler; // @synthesize leadingButtonHandler=_leadingButtonHandler;
@property(retain, nonatomic) MRUTransportButton *leadingButton; // @synthesize leadingButton=_leadingButton;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) _Bool showRoutingButton; // @synthesize showRoutingButton=_showRoutingButton;
@property(nonatomic) _Bool showTVRemoteButton; // @synthesize showTVRemoteButton=_showTVRemoteButton;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(readonly, nonatomic) MRUTransportButton *routingButton; // @synthesize routingButton=_routingButton;
@property(retain, nonatomic) MRUTransportControls *transportControls; // @synthesize transportControls=_transportControls;
@property(nonatomic) __weak id <MRUNowPlayingTransportControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)showLeadingButton;
- (void)configureLeadingButton;
- (void)updateVisibility;
- (void)updateImageConfiguration;
- (void)didSelectRoutingButton:(id)arg1;
- (void)didSelectLeadingButton:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

