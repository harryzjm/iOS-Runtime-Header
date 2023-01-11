//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPrefetcherFactory-Protocol.h>

@class NSString;
@protocol SVPlayerItemLoaderProviding, SVPrefetchPolicyHandler, SVVideoBufferObserverFactory, SVVideoLoadingProgressObserverFactory, SVVideoLoadingStateObserverFactory, SVVideoPlaybackProgressObserverFactory;

@interface SVPrefetcherFactory : NSObject <SVPrefetcherFactory>
{
    id <SVVideoBufferObserverFactory> _bufferObserverFactory;
    id <SVPrefetchPolicyHandler> _prefetchPolicyHandler;
    id <SVPlayerItemLoaderProviding> _playerItemLoaderProvider;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id <SVVideoLoadingProgressObserverFactory> _loadingProgressObserverFactory;
    id <SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
}

@property(readonly, nonatomic) id <SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory; // @synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory;
@property(readonly, nonatomic) id <SVVideoLoadingProgressObserverFactory> loadingProgressObserverFactory; // @synthesize loadingProgressObserverFactory=_loadingProgressObserverFactory;
@property(readonly, nonatomic) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SVPlayerItemLoaderProviding> playerItemLoaderProvider; // @synthesize playerItemLoaderProvider=_playerItemLoaderProvider;
@property(readonly, nonatomic) id <SVPrefetchPolicyHandler> prefetchPolicyHandler; // @synthesize prefetchPolicyHandler=_prefetchPolicyHandler;
@property(readonly, nonatomic) id <SVVideoBufferObserverFactory> bufferObserverFactory; // @synthesize bufferObserverFactory=_bufferObserverFactory;
- (void).cxx_destruct;
- (id)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;
- (id)initWithPrefetchPolicyHandler:(id)arg1 bufferObserverFactory:(id)arg2 playerItemLoaderProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 loadingProgressObserverFactory:(id)arg5 playbackProgressObserverFactory:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

