//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSForYouRecommendationMediator.h>

@class BookmarksForYouDataSource, CNAvatarImageRenderer, CNMonogrammer, CloudTabsForYouDataSource, FeatureManager, NSObject, ReadingListForYouDataSource, WebBookmarkCollection;
@protocol OS_dispatch_queue, WBBookmarkProvider;

__attribute__((visibility("hidden")))
@interface ForYouRecommendationMediator : WBSForYouRecommendationMediator
{
    BookmarksForYouDataSource *_bookmarksDataSource;
    CloudTabsForYouDataSource *_cloudTabsDataSource;
    ReadingListForYouDataSource *_readingListDataSource;
    WebBookmarkCollection *_bookmarkCollection;
    id <WBBookmarkProvider> _bookmarkProvider;
    NSObject<OS_dispatch_queue> *_bookmarkProviderAccessQueue;
    FeatureManager *_featureManager;
    CNAvatarImageRenderer *_avatarImageRenderer;
    CNMonogrammer *_monogrammer;
    struct os_unfair_lock_s _rendererLock;
}

- (void).cxx_destruct;
- (id)_loadDemoSuggestions;
- (void)updatedRecommendationsForTopics:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_cloudTabFeatureAvailabilityDidChange:(id)arg1;
- (void)fetchImageForRecommendation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_cloudTabsDataSourceIfAvailable;
- (id)dataSources;
- (void)loadLinkPresentationMetadataForMessageWithGUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithContextClient:(id)arg1 featureManager:(id)arg2 historyProvider:(CDUnknownBlockType)arg3;

@end

