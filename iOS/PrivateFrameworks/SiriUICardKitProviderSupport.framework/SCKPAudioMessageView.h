//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView;
@protocol SCKPAudioMessageViewDelegate;

@interface SCKPAudioMessageView : UIView
{
    id <SCKPAudioMessageViewDelegate> _delegate;
    UIButton *_playButton;
    UIImage *_playImage;
    UIImage *_pauseImage;
    UIImageView *_waveformImageView;
    long long _playButtonState;
}

- (void).cxx_destruct;
@property(nonatomic) long long playButtonState; // @synthesize playButtonState=_playButtonState;
- (void)_playButtonPressed:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithAudioMessageURL:(id)arg1 delegate:(id)arg2;

@end
