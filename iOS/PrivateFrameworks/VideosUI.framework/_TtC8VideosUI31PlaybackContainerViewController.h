//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;
@protocol VUIPlaybackContainerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI31PlaybackContainerViewController : UIViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *pipTargetView;
    MISSING_TYPE *postPlayViewController;
    MISSING_TYPE *multiPlayerViewController;
    MISSING_TYPE *playerViewController;
    MISSING_TYPE *isPiPed;
    MISSING_TYPE *isAnimatingPiP;
    MISSING_TYPE *$__lazy_storage_$_fullscreenButtonLayout;
    MISSING_TYPE *$__lazy_storage_$_fullscreenButton;
    MISSING_TYPE *cancellables;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)hidePictureInPictureWithCompletion:(CDUnknownBlockType)arg1;
- (void)exitPictureInPictureWithCompletion:(CDUnknownBlockType)arg1;
- (void)enterPictureInPicture;
- (id)unembedMultiPlayerViewController;
- (void)embedMultiPlayerViewController:(id)arg1;
- (void)removePostPlayViewController;
- (void)loadPostPlayForMediaItem:(id)arg1;
- (void)presentPlayerViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) _Bool shouldAutorotate;
@property(nonatomic) __weak id <VUIPlaybackContainerViewControllerDelegate> delegate; // @synthesize delegate;

@end

