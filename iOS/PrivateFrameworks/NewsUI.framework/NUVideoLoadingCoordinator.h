//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAsyncContentViewControllerLoader-Protocol.h>
#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@class NSString;
@protocol SVVideoPlaybackController;

@interface NUVideoLoadingCoordinator : NSObject <NUVideoPlayerEventTracker, NUAsyncContentViewControllerLoader>
{
    _Bool _loadStarted;
    id <SVVideoPlaybackController> _playbackController;
    CDUnknownBlockType _completionBlock;
}

@property(nonatomic, getter=hasLoadStarted) _Bool loadStarted; // @synthesize loadStarted=_loadStarted;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) id <SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
- (void).cxx_destruct;
- (void)_invokeAndClearCompletionBlockWithError:(id)arg1;
- (id)loadContentWithTimeoutTime:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)playbackStartedForVideoAdWithMetadata:(id)arg1;
- (void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (id)initWithPlaybackController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

