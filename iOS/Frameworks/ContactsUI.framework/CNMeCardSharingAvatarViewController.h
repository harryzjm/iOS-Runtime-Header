//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CAShapeLayer, CNAvatarViewController, UIImageView, UILabel, UITapGestureRecognizer, UIView, _TtC10ContactsUI32CNHostingPosterSnapshotImageView;
@protocol CNAvatarImageProvider, CNMeCardSharingAvatarProvider, CNMeCardSharingAvatarViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingAvatarViewController : UIViewController
{
    _Bool _hasImage;
    id <CNMeCardSharingAvatarViewControllerDelegate> _delegate;
    UIView *_avatarContainerView;
    CAShapeLayer *_circularLayer;
    UIImageView *_imageView;
    UILabel *_addPhotoLabel;
    _TtC10ContactsUI32CNHostingPosterSnapshotImageView *_posterPlaceholderView;
    id <CNMeCardSharingAvatarProvider> _avatarProvider;
    id <CNAvatarImageProvider> _fallbackImageProvider;
    CNAvatarViewController *_avatarViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(retain, nonatomic) id <CNAvatarImageProvider> fallbackImageProvider; // @synthesize fallbackImageProvider=_fallbackImageProvider;
@property(retain, nonatomic) id <CNMeCardSharingAvatarProvider> avatarProvider; // @synthesize avatarProvider=_avatarProvider;
@property(retain, nonatomic) _TtC10ContactsUI32CNHostingPosterSnapshotImageView *posterPlaceholderView; // @synthesize posterPlaceholderView=_posterPlaceholderView;
@property(retain, nonatomic) UILabel *addPhotoLabel; // @synthesize addPhotoLabel=_addPhotoLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) CAShapeLayer *circularLayer; // @synthesize circularLayer=_circularLayer;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(nonatomic) __weak id <CNMeCardSharingAvatarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapAvatarView:(id)arg1;
- (void)updateForChangedImageAnimated:(_Bool)arg1;
- (void)updateViewsToUseGeneratedImage:(id)arg1 forSize:(struct CGSize)arg2 usingFallback:(_Bool)arg3;
- (void)updateViewsToUseGeneratedAvatarImage:(id)arg1 forSize:(struct CGSize)arg2;
- (void)updateViewsToUseGeneratedPosterImage:(id)arg1 forSize:(struct CGSize)arg2;
- (void)addPosterAnimationController:(id)arg1;
- (void)setupPosterPlaceholder;
- (void)reloadPosterImage;
- (void)reloadAvatarImage;
- (void)reload;
- (void)updateWithAvatarProvider:(id)arg1;
- (struct CGRect)frameForContainerView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAvatarProvider:(id)arg1 mode:(long long)arg2;
- (id)initWithAvatarProvider:(id)arg1;

@end

