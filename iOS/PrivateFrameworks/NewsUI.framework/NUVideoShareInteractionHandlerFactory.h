//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/SVShareInteractionHandlerFactory-Protocol.h>

@class NSString;
@protocol NSSNewsAnalyticsArticleViewingSessionTracker, NUURLHandling, NUVideoActivityViewControllerFactory, SVVideoPlaybackController, SVVideoViewControllerProviding;

@interface NUVideoShareInteractionHandlerFactory : NSObject <SVShareInteractionHandlerFactory>
{
    id <NUVideoActivityViewControllerFactory> _activityViewControllerFactory;
    id <NSSNewsAnalyticsArticleViewingSessionTracker> _articleViewingSessionTracker;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoPlaybackController> _playbackController;
    id <NUURLHandling> _URLHandler;
}

@property(readonly, nonatomic) id <NUURLHandling> URLHandler; // @synthesize URLHandler=_URLHandler;
@property(readonly, nonatomic) id <SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) id <NSSNewsAnalyticsArticleViewingSessionTracker> articleViewingSessionTracker; // @synthesize articleViewingSessionTracker=_articleViewingSessionTracker;
@property(readonly, nonatomic) id <NUVideoActivityViewControllerFactory> activityViewControllerFactory; // @synthesize activityViewControllerFactory=_activityViewControllerFactory;
- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVideoViewControllerProvider:(id)arg1 playbackController:(id)arg2 activityViewControllerFactory:(id)arg3 articleViewingSessionTracker:(id)arg4 URLHandler:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

