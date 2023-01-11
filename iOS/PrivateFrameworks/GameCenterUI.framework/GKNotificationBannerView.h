//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GKDashboardPlayerPhotoView, UIImageView, UILabel;

@interface GKNotificationBannerView : UIView
{
    _Bool _canTransitionToPlayerAvatar;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    double _duration;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _touchHandler;
    GKDashboardPlayerPhotoView *_playerAvatarView;
    UILabel *_messageLabel2;
    UILabel *_actionLabel;
    UIView *_centeringView;
    double _preferredBannerWidth;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
- (void).cxx_destruct;
@property(readonly, nonatomic) double preferredBannerWidth; // @synthesize preferredBannerWidth=_preferredBannerWidth;
@property(retain, nonatomic) UIView *centeringView; // @synthesize centeringView=_centeringView;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UILabel *messageLabel2; // @synthesize messageLabel2=_messageLabel2;
@property(nonatomic) _Bool canTransitionToPlayerAvatar; // @synthesize canTransitionToPlayerAvatar=_canTransitionToPlayerAvatar;
@property(retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView; // @synthesize playerAvatarView=_playerAvatarView;
@property(copy, nonatomic) CDUnknownBlockType touchHandler; // @synthesize touchHandler=_touchHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)fadeOutQuickly:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fadeInWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)callCompletionHandler;
- (void)_wasTouched:(id)arg1;
- (void)hideBanner;
- (void)showWithTouchHandler:(CDUnknownBlockType)arg1;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showPlayerAvatarAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)transitionToPlayerAvatar;
- (void)startLoadingPlayerAvatar;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 player:(id)arg2 imageView:(id)arg3 message:(id)arg4;
- (void)createMessageLabel:(id)arg1 withTextStyle:(id)arg2;
- (void)createTitleLabel:(id)arg1 withTextStyle:(id)arg2;
- (void)createBackdropView;
- (void)awakeFromNib;

@end
