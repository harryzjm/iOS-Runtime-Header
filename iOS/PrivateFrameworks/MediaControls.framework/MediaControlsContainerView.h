//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MPCPlayerResponse, MediaControlsTimeControl, MediaControlsTransportStackView, UIVisualEffectView;

@interface MediaControlsContainerView : UIView
{
    _Bool _empty;
    long long _mediaControlsPlayerState;
    long long _style;
    MediaControlsTransportStackView *_mediaControlsTransportStackView;
    MediaControlsTimeControl *_mediaControlsTimeControl;
    UIVisualEffectView *_primaryVisualEffectView;
}

@property(retain, nonatomic) UIVisualEffectView *primaryVisualEffectView; // @synthesize primaryVisualEffectView=_primaryVisualEffectView;
@property(retain, nonatomic) MediaControlsTimeControl *mediaControlsTimeControl; // @synthesize mediaControlsTimeControl=_mediaControlsTimeControl;
@property(retain, nonatomic) MediaControlsTransportStackView *mediaControlsTransportStackView; // @synthesize mediaControlsTransportStackView=_mediaControlsTransportStackView;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long mediaControlsPlayerState; // @synthesize mediaControlsPlayerState=_mediaControlsPlayerState;
- (void).cxx_destruct;
@property(retain, nonatomic) MPCPlayerResponse *response;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, getter=isTimeControlOnScreen) _Bool timeControlOnScreen;
- (void)setRatingActionSheetDelegate:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
