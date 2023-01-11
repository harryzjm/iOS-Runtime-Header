//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackEventTrackerFactory-Protocol.h>

@class NSString;
@protocol SVVideoLoadingStateObserverFactory, SVVideoPlaybackStateObserverFactory;

@interface SVVideoPlaybackEventTrackerFactory : NSObject <SVVideoPlaybackEventTrackerFactory>
{
    id <SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
}

@property(readonly, nonatomic) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory; // @synthesize playbackStateObserverFactory=_playbackStateObserverFactory;
- (void).cxx_destruct;
- (id)createEventTrackerForVideo:(id)arg1;
- (id)initWithPlaybackStateObserverFactory:(id)arg1 loadingStateObserverFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

