//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableMessagesStackPlaybackControlViewModel-Protocol.h>

@class NSString, PXGDisplayAssetVideoPresentationController;

@interface PXMessagesStackPlaybackControlViewModel <PXMutableMessagesStackPlaybackControlViewModel>
{
    _Bool _settled;
    long long _currentItem;
    PXGDisplayAssetVideoPresentationController *_videoController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXGDisplayAssetVideoPresentationController *videoController; // @synthesize videoController=_videoController;
@property(readonly, nonatomic) long long currentItem; // @synthesize currentItem=_currentItem;
@property(readonly, nonatomic, getter=isSettled) _Bool settled; // @synthesize settled=_settled;
- (void)setVideoController:(id)arg1;
- (void)setCurrentItem:(long long)arg1;
- (void)setSettled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
