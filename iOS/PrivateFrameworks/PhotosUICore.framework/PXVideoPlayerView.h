//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ISWrappedAVPlayer, NSArray, UIImage, UIImageView, _PXVideoView;

@interface PXVideoPlayerView : UIView
{
    _PXVideoView *_videoView;
    NSArray *_videoViewConstraints;
    UIImageView *_previewImageView;
    NSArray *_previewImageViewConstraints;
    long long _placeholderVisibilityRequestID;
    _Bool _displayingPlaceholder;
    _Bool _allowsEdgeAntialiasing;
    ISWrappedAVPlayer *_player;
    UIImage *_placeholderImage;
    NSArray *_placeholderImageFilters;
    double _videoAppearanceCrossfadeDuration;
    long long _placeholderDisplayMode;
    long long _videoViewContentMode;
    struct CGRect _placeholderImageContentsRect;
}

@property(nonatomic) _Bool allowsEdgeAntialiasing; // @synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing;
@property(nonatomic) long long videoViewContentMode; // @synthesize videoViewContentMode=_videoViewContentMode;
@property(nonatomic, getter=isDisplayingPlaceHolder, setter=_setDisplayingPlaceholder:) _Bool displayingPlaceholder; // @synthesize displayingPlaceholder=_displayingPlaceholder;
@property(nonatomic) long long placeholderDisplayMode; // @synthesize placeholderDisplayMode=_placeholderDisplayMode;
@property(nonatomic) struct CGRect placeholderImageContentsRect; // @synthesize placeholderImageContentsRect=_placeholderImageContentsRect;
@property(nonatomic) double videoAppearanceCrossfadeDuration; // @synthesize videoAppearanceCrossfadeDuration=_videoAppearanceCrossfadeDuration;
@property(copy, nonatomic) NSArray *placeholderImageFilters; // @synthesize placeholderImageFilters=_placeholderImageFilters;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) ISWrappedAVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)generateSnapshotImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)_setPlaceholderVisible:(_Bool)arg1 requestID:(long long)arg2;
- (void)_updateSubviewsVisibility;
- (void)_updateEdgeAntialiasing;
- (void)_updateContentMode;
- (void)_updateVideoView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

