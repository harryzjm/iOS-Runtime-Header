//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSForYouRecommendationMediatorDataSource.h>

@class NSObject;
@protocol OS_dispatch_queue, WBBookmarkProvider;

__attribute__((visibility("hidden")))
@interface BookmarksForYouDataSource : WBSForYouRecommendationMediatorDataSource
{
    id <WBBookmarkProvider> _bookmarkProvider;
    NSObject<OS_dispatch_queue> *_bookmarkProviderAccessQueue;
}

- (void).cxx_destruct;
- (void)_bookmarksDidChangeWithNotification:(id)arg1;
- (void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithBookmarkProvider:(id)arg1 accessQueue:(id)arg2 bookmarkCollection:(id)arg3;

@end

