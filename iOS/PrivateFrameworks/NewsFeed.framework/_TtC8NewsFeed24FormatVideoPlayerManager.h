//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8NewsFeed24FormatVideoPlayerManager : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *reuseDelegate;
    MISSING_TYPE *offscreenVisibility;
    MISSING_TYPE *partialVisibility;
    MISSING_TYPE *onscreenVisibility;
    MISSING_TYPE *playerViewController;
    MISSING_TYPE *pictureInPictureState;
    MISSING_TYPE *offlineManager;
    MISSING_TYPE *visibilityPercentage;
    MISSING_TYPE *isBookmarkInProgress;
    MISSING_TYPE *isViewTransitionInProcess;
    MISSING_TYPE *cover;
    MISSING_TYPE *cacheKey;
    MISSING_TYPE *data;
    MISSING_TYPE *videoAdProviderFactory;
    MISSING_TYPE *coordinator;
    MISSING_TYPE *commandCenter;
    MISSING_TYPE *adJournal;
    MISSING_TYPE *sceneProvider;
    MISSING_TYPE *offlineAlertControllerFactory;
}

- (void).cxx_destruct;
- (id)init;
- (void)didFinishCoveringWithNotification:(id)arg1;
- (void)didStartCoveringWithNotification:(id)arg1;
- (void)didApplyBookmark;
- (void)willApplyBookmark;
- (void)startPictureInPictureIfPossible;

@end

