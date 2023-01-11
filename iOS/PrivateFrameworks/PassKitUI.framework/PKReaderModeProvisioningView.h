//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKReaderModeAnimationView, PKReaderModeHeaderView, UIProgressView;

@interface PKReaderModeProvisioningView : UIView
{
    PKReaderModeAnimationView *_animationView;
    PKReaderModeHeaderView *_headerView;
    UIProgressView *_progressView;
}

- (void).cxx_destruct;
- (void)setDigitalCardImage:(id)arg1;
- (void)setPlasticCardImage:(id)arg1;
- (void)setTransferringProgress:(double)arg1 duration:(double)arg2;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 product:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 context:(long long)arg2 product:(id)arg3;
- (id)initWithContext:(long long)arg1 product:(id)arg2;

@end

