//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage, UIImageView, _PUVideoView;
@protocol PUVideoPlayerViewDelegate;

@interface PUVideoPlayerView : UIView
{
    _PUVideoView *_videoView;
    NSArray *_videoViewConstraints;
    UIImageView *_previewImageView;
    NSArray *_previewImageViewConstraints;
    _Bool _isReadyForVideoDisplay;
    _Bool _isDisplayingPlaceholder;
    _Bool _allowsEdgeAntialiasing;
    _Bool _isDisplayingVideo;
    UIImage *_placeholderImage;
    unsigned long long _videoViewContentMode;
    id <PUVideoPlayerViewDelegate> _delegate;
    struct CGRect _placeholderImageContentsRect;
}

@property(nonatomic) _Bool isDisplayingVideo; // @synthesize isDisplayingVideo=_isDisplayingVideo;
@property(nonatomic) _Bool allowsEdgeAntialiasing; // @synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing;
@property(nonatomic) __weak id <PUVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long videoViewContentMode; // @synthesize videoViewContentMode=_videoViewContentMode;
@property(nonatomic) _Bool isDisplayingPlaceholder; // @synthesize isDisplayingPlaceholder=_isDisplayingPlaceholder;
@property(nonatomic) _Bool isReadyForVideoDisplay; // @synthesize isReadyForVideoDisplay=_isReadyForVideoDisplay;
@property(nonatomic) struct CGRect placeholderImageContentsRect; // @synthesize placeholderImageContentsRect=_placeholderImageContentsRect;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
- (id)generateSnapshotImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)_updateSubviewsVisibility;
- (void)_updateEdgeAntialiasing;
- (void)_updateContentMode;
- (void)_installNewVideoViewIfNecessaryWithPlayer:(id)arg1;
- (void)configureWithAVPlayer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

