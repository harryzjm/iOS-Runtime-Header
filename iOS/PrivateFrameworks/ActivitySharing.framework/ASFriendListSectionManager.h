//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASClient, ASFriendListQuery, FIUIClientToken, FIUIModel, FIUIWorkoutDataProvider, HKActivitySummaryQuery, HKHealthStore, NSCache, NSSet;
@protocol OS_dispatch_queue;

@interface ASFriendListSectionManager : NSObject
{
    HKHealthStore *_healthStore;
    ASClient *_client;
    FIUIModel *_model;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    NSCache *_displayContextToSortedSectionsCache;
    NSSet *_allFriends;
    ASFriendListQuery *_friendListQuery;
    HKActivitySummaryQuery *_meQuery;
    FIUIWorkoutDataProvider *_workoutDataProvider;
    long long _meQueryRetries;
    long long _friendQueryRetries;
    FIUIClientToken *_modelQueryToken;
    _Bool _shouldGenerateDemoData;
    _Bool _hasReceivedFriendListQueryResult;
    _Bool _hasReceivedMeQueryResult;
}

- (void).cxx_destruct;
- (void)_createFakeFriends;
- (id)_copyFriends;
- (id)_queue_me;
- (id)_sortFriends:(id)arg1 forDisplayMode:(long long)arg2 cacheIndex:(id)arg3;
- (id)_filterFriends:(id)arg1 withWheelchairUseAtCacheIndex:(id)arg2;
- (id)_filterFriends:(id)arg1 withActiveFriendshipAtEndOfDay:(id)arg2;
- (id)_filterFriends:(id)arg1 withSnapshotDataAtCacheIndex:(id)arg2;
- (id)_createSectionsForFriends:(id)arg1 withDisplayContext:(id)arg2;
- (id)_datesToShowSnapshotsForFriend:(id)arg1 startingFromCurrentDateComponents:(id)arg2;
- (void)_enumerateVisibleDaysForFriends:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_queue_updateWithNewData;
- (void)_queue_handleMyWorkoutsUpdate;
- (void)_queue_handleActivitySummaryUpdate:(id)arg1;
- (void)_queue_stopQueries;
- (void)_queue_startMeQuery;
- (void)_queue_startFriendsQuery;
- (void)_queue_restartQueryAfterErrorCount:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isWheelchairUserDisplayModeValidForFriends:(id)arg1 filter:(long long)arg2;
- (void)_postFriendsListChangedNotification;
- (void)_calendarDayChangedNotification:(id)arg1;
- (_Bool)hasReachedMaxNumberOfFriends;
- (long long)numberOfNewFriendsAllowed;
- (void)fetchActivitySharingDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)totalNumberOfPendingRequests;
- (unsigned long long)numberOfFriendsWithCompetitionRequestsAwaitingResponseFromMe;
- (unsigned long long)numberOfFriendsWithInvitesAwaitingResponseFromMe;
- (id)allDestinationsForActiveOrPendingFriends;
- (id)allActiveFriendsAsRecipients;
- (_Bool)hasAnyFriendsSetup;
- (id)allFriends;
- (id)me;
- (id)_friendWithUUID:(id)arg1 fromFriends:(id)arg2;
- (id)friendWithUUID:(id)arg1;
- (id)_sectionForDataVisibilityConditionalUsingBlock:(CDUnknownBlockType)arg1 comparator:(CDUnknownBlockType)arg2;
- (id)_sectionForDataVisibilityConditionalUsingBlock:(CDUnknownBlockType)arg1;
- (id)sectionForFriendsCompetingWithMe;
- (id)sectionForFriendsRequestedToCompeteByMe;
- (id)sectionForFriendsRequestingMeToCompete;
- (id)sectionForFriendsWithNoHiding;
- (id)sectionForFriendsMyDataIsHiddenFrom;
- (id)sectionForFriendsHidingDataFromMe;
- (id)sectionForFriendsInvitedByMe;
- (id)sectionForFriendsInvitingMe;
- (void)enumerateValidDisplayModesForFilter:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)sectionsForDisplayContext:(id)arg1;
- (_Bool)hasInitializedFriendData;
- (void)_stopQueries;
- (void)_startQueries;
- (void)_startQueriesIfRequired;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 andWorkoutDataProvider:(id)arg2;
- (id)init;

@end

