//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CameraUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, NSTimer, UIImage, UIImageView, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol CAMTransientImageWellDelegate;

@interface CAMTransientImageWell : UIView <UIGestureRecognizerDelegate>
{
    _Bool _autoStashesImages;
    _Bool __stashed;
    id <CAMTransientImageWellDelegate> _delegate;
    long long _orientation;
    UIImageView *__imageView;
    NSTimer *__autoStashTimer;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UISwipeGestureRecognizer *__unstashGestureRecognizer;
    UISwipeGestureRecognizer *__stashGestureRecognizer;
}

@property(readonly, nonatomic) UISwipeGestureRecognizer *_stashGestureRecognizer; // @synthesize _stashGestureRecognizer=__stashGestureRecognizer;
@property(readonly, nonatomic) UISwipeGestureRecognizer *_unstashGestureRecognizer; // @synthesize _unstashGestureRecognizer=__unstashGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(nonatomic, getter=_isStashed, setter=_setStashed:) _Bool _stashed; // @synthesize _stashed=__stashed;
@property(retain, nonatomic) NSTimer *_autoStashTimer; // @synthesize _autoStashTimer=__autoStashTimer;
@property(retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(nonatomic) _Bool autoStashesImages; // @synthesize autoStashesImages=_autoStashesImages;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <CAMTransientImageWellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool currentImageHidden;
- (void)clearImageAnimated:(_Bool)arg1;
@property(readonly, nonatomic) struct CGRect imageFrame;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *image;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_dismissImageView:(id)arg1 animated:(_Bool)arg2;
- (void)_dismissImageAnimated:(_Bool)arg1;
- (void)_cancelAutoStashTimer;
- (void)_handleAutoStashTimerFired:(id)arg1;
- (void)_restartAutoStashTimerWithDuration:(double)arg1;
- (void)_restartAutoStashTimer;
- (struct CGPoint)_imageViewStashPoint;
- (struct CGPoint)_imageViewSpawnPoint;
- (struct CGSize)_imageViewSizeForContentSize:(struct CGSize)arg1;
- (struct CGSize)_imageViewMaxSize;
- (void)_handleStashSwipe:(id)arg1;
- (void)_handleUnstashSwipe:(id)arg1;
- (void)_handleTap:(id)arg1;
- (struct CGRect)_unorientedFrameForImageView:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setStashed:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
