//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKPeerPaymentCredential, PKPeerPaymentHeroBubbleView, UIImageView;

@interface PKPeerPaymentSetupFlowHeroView : UIView
{
    UIImageView *_passSnapshotView;
    PKPeerPaymentHeroBubbleView *_bubbleView;
    PKPeerPaymentCredential *_credential;
    long long _animationState;
}

- (void).cxx_destruct;
- (_Bool)_bubbleIsOnLeftSide;
- (_Bool)_shouldShowBubbleView;
- (id)_defaultCurrencyAmount;
- (void)startAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)startAnimation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithPeerPaymentPassSnapShot:(id)arg1 peerPaymentCredential:(id)arg2;

@end

