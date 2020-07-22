//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iAd/NSObject-Protocol.h>

@class ADMRAIDAction, NSError, NSString, UIView, UIViewController;

@protocol ADAdRecipient <NSObject>
@property(nonatomic) long long lastErrorCode;
@property(nonatomic) _Bool reUsed;
@property(nonatomic) _Bool displayed;
@property(nonatomic) int slotPosition;
@property(nonatomic) int screenfuls;
@property(copy, nonatomic) NSString *adResponseId;
@property(readonly, nonatomic) UIViewController *presentingViewController;
@property(readonly, nonatomic) UIView *adSpaceView;
@property(readonly, nonatomic) long long options;
@property(readonly, nonatomic) int internalAdType;
- (_Bool)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)resumeBannerMedia;
- (void)pauseBannerMedia;
- (void)storyboardViewControllerDidPresent;
- (void)privacyButtonWasTapped;
- (void)serverStoryboardDidTransitionOut;
- (void)serverBannerViewDidFailToReceiveAdWithError:(NSError *)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;

@optional
- (void)creativeControllerViewWasTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(ADMRAIDAction *)arg2;
- (void)setViewSizeInPortrait:(struct CGSize)arg1 inLandscape:(struct CGSize)arg2;
@end
