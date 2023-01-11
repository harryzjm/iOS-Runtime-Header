//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppActivityObserving-Protocol.h>
#import <NewsCore/FCSubscriptionListObserving-Protocol.h>

@class FCNotificationController, FCPurchaseController, FCSubscriptionList, FCTagController, FCThreadSafeMutableDictionary, FCThreadSafeMutableSet, NSHashTable, NSString;
@protocol FCCoreConfigurationManager;

@interface FCSubscriptionController : NSObject <FCSubscriptionListObserving, FCAppActivityObserving>
{
    FCSubscriptionList *_subscriptionList;
    FCTagController *_tagController;
    FCThreadSafeMutableDictionary *_subscribedTagsByTagID;
    FCThreadSafeMutableSet *_newlyAddedSubscriptions;
    NSHashTable *_observers;
    FCNotificationController *_notificationController;
    FCPurchaseController *_purchaseController;
    id <FCCoreConfigurationManager> _configurationManager;
}

@property(retain, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property(retain, nonatomic) FCPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
@property(retain, nonatomic) FCNotificationController *notificationController; // @synthesize notificationController=_notificationController;
@property(copy, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) FCThreadSafeMutableSet *newlyAddedSubscriptions; // @synthesize newlyAddedSubscriptions=_newlyAddedSubscriptions;
@property(retain, nonatomic) FCThreadSafeMutableDictionary *subscribedTagsByTagID; // @synthesize subscribedTagsByTagID=_subscribedTagsByTagID;
@property(retain, nonatomic) FCTagController *tagController; // @synthesize tagController=_tagController;
@property(retain, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
- (void).cxx_destruct;
- (void)_handleNonTagSubscriptionType:(unsigned long long)arg1 addedSubscriptionsByType:(id)arg2 removedSubscriptionsByType:(id)arg3 changedSubscriptionsByType:(id)arg4 eventInitiationLevel:(long long)arg5;
- (void)_handleTagSubscriptionsAdded:(id)arg1 tagSubscriptionsChanged:(id)arg2 tagSubscriptionsMoved:(id)arg3 tagSubscriptionsRemoved:(id)arg4 eventInitiationLevel:(long long)arg5;
- (void)_notifyOfTagsWithNotificationSupport:(id)arg1;
- (void)_notifyOfTagsAdded:(id)arg1 tagsChanged:(id)arg2 tagsMoved:(id)arg3 tagsRemoved:(id)arg4 subscriptionType:(unsigned long long)arg5 eventInitiationLevel:(long long)arg6;
- (void)_prewarmFeedNavAssetsInOrderedSubscribedTags:(id)arg1 limit:(unsigned long long)arg2;
- (void)_fetchTagsForIDs:(id)arg1 maxCachedAge:(double)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_integrateTags:(id)arg1 eventInitiationLevel:(long long)arg2;
- (void)_fetchMissingTagsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableTopStoriesNotifications;
- (void)_refreshChannelsWithNotificationsEnabled;
- (void)_updateNotificationsForPurchaseTagIDs:(id)arg1 isPaid:(_Bool)arg2;
- (void)_purchaseListDidRemoveTagIDs:(id)arg1;
- (void)_purchaseListDidAddTagIDs:(id)arg1;
- (void)activityObservingApplicationDidEnterBackground;
- (void)subscriptionList:(id)arg1 didAddSubscriptions:(id)arg2 changeSubscriptions:(id)arg3 moveSubscriptions:(id)arg4 removeSubscriptions:(id)arg5 eventInitiationLevel:(long long)arg6;
- (_Bool)addGroupableSubscriptionForTagID:(id)arg1 origin:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (void)addAutoFavoriteSubscriptionForTagIDs:(id)arg1 groupableSubscriptionForTagIDs:(id)arg2 originProvider:(CDUnknownBlockType)arg3 eventInitiationLevelProvider:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeAllAutoFavoriteSubscriptions:(CDUnknownBlockType)arg1;
- (id)externalSignalDrivenAutoFavorites;
- (_Bool)addIgnoredSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(long long)arg3;
- (_Bool)addIgnoredSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)hasIgnoredSubscriptionForTagID:(id)arg1;
- (_Bool)addMutedSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(long long)arg3;
- (_Bool)addMutedSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)hasMutedSubscriptionForTagID:(id)arg1;
- (_Bool)hasAutoFavoriteSubscriptionForTagID:(id)arg1;
- (_Bool)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)newlySubscribedTagIDsInDateRange:(id)arg1;
- (void)fetchSubscribedTagsWithCallbackQueue:(id)arg1 preferCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAllTagsWithCallbackQueue:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchExtraTagsWithPreSubscribedNotificationSupportWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshSubscriptionTags;
- (id)subscriptionSurfacingHeadline:(id)arg1;
- (_Bool)hasNotificationsEnabledForTag:(id)arg1;
- (_Bool)setNotificationsEnabled:(_Bool)arg1 forTagID:(id)arg2 error:(id *)arg3;
- (_Bool)setNotificationsEnabled:(_Bool)arg1 forTag:(id)arg2 error:(id *)arg3;
- (void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (void)removeAutoFavoriteSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2;
- (void)removeSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)addSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2 options:(long long)arg3 error:(id *)arg4;
- (_Bool)addSubscriptionToTag:(id)arg1 notificationsEnabled:(_Bool)arg2 error:(id *)arg3 eventInitiationLevel:(long long)arg4;
- (_Bool)addSubscriptionToTag:(id)arg1 error:(id *)arg2 eventInitiationLevel:(long long)arg3;
- (id)subscriptionForTagID:(id)arg1;
- (id)subscriptionForTag:(id)arg1 type:(unsigned long long)arg2;
- (id)subscriptionForTag:(id)arg1;
- (_Bool)hasSubscriptionToTagID:(id)arg1;
- (_Bool)hasSubscriptionToTag:(id)arg1;
- (_Bool)canAddSubscriptionWithError:(id *)arg1;
- (_Bool)canAddSubscription;
- (id)subscriptionsWithType:(unsigned long long)arg1;
- (id)tagIDsWithType:(unsigned long long)arg1;
- (id)groupableTagIDs;
- (id)ignoredTagIDs;
- (id)autoFavoriteTagIDs;
- (id)mutedTagIDs;
- (id)subscribedTagIDs;
- (id)cachedSubscribedTags;
- (id)orderedCachedSubscribedTags;
- (id)subscribedTagIDsWithNotificationsEnabled;
- (id)subscriptions;
- (id)subscribedTagForTagID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithSubscriptionList:(id)arg1 tagController:(id)arg2 notificationController:(id)arg3 purchaseController:(id)arg4 configurationManager:(id)arg5 appActivityMonitor:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

