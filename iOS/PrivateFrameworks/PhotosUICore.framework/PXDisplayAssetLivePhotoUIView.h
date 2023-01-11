//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class AVPlayerItem, ISLivePhotoUIView, NSString;

@interface PXDisplayAssetLivePhotoUIView <PXChangeObserver>
{
    ISLivePhotoUIView *_livePhotoView;
    long long _requestID;
    AVPlayerItem *_videoPlayerItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
- (void)_updateLivePhotoPlayerItem;
- (_Bool)isDisplayingFullQualityContent;
- (void)contentsRectDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)imageDidChange;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3;
- (void)updateContent;
- (id)contentView;
- (long long)playbackStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
