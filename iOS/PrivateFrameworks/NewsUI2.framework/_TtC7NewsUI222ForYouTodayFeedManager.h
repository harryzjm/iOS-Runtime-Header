//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC7NewsUI222ForYouTodayFeedManager : _TtCs12_SwiftObject
{
    MISSING_TYPE *configurationManager;
    MISSING_TYPE *feedGroupEmitterFactory;
    MISSING_TYPE *emitterQueue;
    MISSING_TYPE *store;
    MISSING_TYPE *paidBundleConfigManager;
    MISSING_TYPE *subscriptionController;
    MISSING_TYPE *feedContextFactory;
}

- (id)knownGroupForIdentifier:(id)arg1 headlines:(id)arg2 tags:(id)arg3 assetHandles:(id)arg4;
- (void)fetchGroupsWithGroupConfigs:(id)arg1 forYouConfig:(id)arg2 precedingArticleIDs:(id)arg3 prefetchedHeadlinesByID:(id)arg4 assetManager:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end
