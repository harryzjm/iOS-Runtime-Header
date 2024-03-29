//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCFuture, MPCMediaRemoteMiddleware, NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface MPCMediaRemoteMiddlewarePlaybackStateOperation : MPAsyncOperation
{
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCMediaRemoteMiddleware *_middleware;
    MPCFuture *_playbackStateFuture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPCFuture *playbackStateFuture; // @synthesize playbackStateFuture=_playbackStateFuture;
@property(retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (id)timeoutDescription;
- (void)execute;
- (id)initWithMiddleware:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

