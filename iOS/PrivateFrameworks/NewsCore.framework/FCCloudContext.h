//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseEncryptionDelegate-Protocol.h>
#import <NewsCore/FCCacheFlushing-Protocol.h>
#import <NewsCore/FCContentContext-Protocol.h>
#import <NewsCore/FCPrivateDataContext-Protocol.h>
#import <NewsCore/FCTestingContext-Protocol.h>

@class FCArticleController, FCAssetManager, FCClientEndpointConnection, FCCommandQueue, FCFeedManager, FCFlintResourceManager, FCNetworkBehaviorMonitor, FCNotificationController, FCNotificationsEndpointConnection, FCPersonalizationData, FCPrivateChannelMembershipController, FCPurchaseController, FCReadingHistory, FCReadingList, FCSubscriptionController, FCSubscriptionList, FCTagController, FCTagSettings, FCUserInfo, NSString, NSURL;
@protocol FCAppActivityMonitor, FCBackgroundTaskable, FCContentContext, FCContentContextInternal, FCCoreConfigurationManager, FCFeedPersonalizing, FCFlintHelper, FCNewsAppConfigurationManager, FCPPTContext, FCPrivateDataContext, FCPrivateDataContextInternal, FCPushNotificationHandling, FCWebArchiveSource;

@interface FCCloudContext : NSObject <FCTestingContext, FCCKDatabaseEncryptionDelegate, FCContentContext, FCPrivateDataContext, FCCacheFlushing>
{
    _Bool _deviceIsiPad;
    FCSubscriptionController *_subscriptionController;
    FCFeedManager *_feedManager;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id <FCAppActivityMonitor> _appActivityMonitor;
    FCClientEndpointConnection *_endpointConnection;
    FCCommandQueue *_endpointCommandQueue;
    FCNotificationsEndpointConnection *_notificationsEndpointConnection;
    FCCommandQueue *_notificationsEndpointCommandQueue;
    FCNotificationController *_notificationController;
    FCPurchaseController *_purchaseController;
    id <FCFlintHelper> _flintHelper;
    id <FCBackgroundTaskable> _backgroundTaskable;
    id <FCPPTContext> _pptContext;
    id <FCContentContext> _contentContext;
    id <FCPrivateDataContext> _privateDataContext;
}

+ (id)testingContextWithDesiredHeadlineFieldOptions:(unsigned long long)arg1;
+ (id)testingContext;
+ (void)initialize;
@property(retain, nonatomic) id <FCPrivateDataContext> privateDataContext; // @synthesize privateDataContext=_privateDataContext;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(readonly, nonatomic) id <FCPPTContext> pptContext; // @synthesize pptContext=_pptContext;
@property(readonly, nonatomic) _Bool deviceIsiPad; // @synthesize deviceIsiPad=_deviceIsiPad;
@property(nonatomic) __weak id <FCBackgroundTaskable> backgroundTaskable; // @synthesize backgroundTaskable=_backgroundTaskable;
@property(nonatomic) __weak id <FCFlintHelper> flintHelper; // @synthesize flintHelper=_flintHelper;
@property(readonly, nonatomic) FCPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
@property(readonly, nonatomic) FCNotificationController *notificationController; // @synthesize notificationController=_notificationController;
@property(retain, nonatomic) id <FCAppActivityMonitor> appActivityMonitor; // @synthesize appActivityMonitor=_appActivityMonitor;
- (void).cxx_destruct;
- (void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)insertTestArticlesWithCount:(unsigned long long)arg1;
- (id)insertTestArticle;
@property(readonly, nonatomic) id <FCPushNotificationHandling> privatePushNotificationHandler;
@property(readonly, copy, nonatomic) NSString *privateDataDirectory;
@property(readonly, nonatomic) id <FCPrivateDataContextInternal> internalPrivateDataContext;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
@property(readonly, nonatomic) FCTagSettings *tagSettings;
@property(readonly, nonatomic) FCUserInfo *userInfo;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property(readonly, nonatomic) FCPersonalizationData *personalizationData;
- (id)recordTreeSourceWithRecordSources:(id)arg1;
- (id)recordSourceWithSchema:(id)arg1;
@property(retain, nonatomic) id <FCWebArchiveSource> webArchiveSource;
@property(readonly, nonatomic) NSURL *webArchiveCacheDirectoryURL;
@property(readonly, nonatomic) NSURL *assetCacheDirectoryURL;
@property(readonly, copy, nonatomic) NSString *contentDirectory;
@property(readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, copy, nonatomic) NSString *contentStoreFrontID;
@property(readonly, nonatomic) id <FCContentContextInternal> internalContentContext;
- (id)news_core_ConfigurationManager;
@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager;
@property(readonly, nonatomic) FCFlintResourceManager *flintResourceManager;
@property(readonly, nonatomic) FCTagController *tagController;
@property(readonly, nonatomic) FCArticleController *articleController;
@property(readonly, nonatomic) FCAssetManager *assetManager;
- (id)fetchEndOfArticleDataForHeadline:(id)arg1 initialRelatedHeadlineCount:(unsigned long long)arg2 initialPublisherHeadlineCount:(unsigned long long)arg3 totalRelatedHeadlineCount:(unsigned long long)arg4 totalPublisherHeadlineCount:(unsigned long long)arg5 fetchRelatedHeadline:(_Bool)arg6 fetchPublisherHeadlines:(_Bool)arg7 fetchAllTopics:(_Bool)arg8 screenScale:(double)arg9 completion:(CDUnknownBlockType)arg10;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *contentEnvironmentToken;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
@property(readonly, nonatomic) _Bool isPrivateDatabaseTemporarilySuspended;
@property(readonly, nonatomic) _Bool isPrivateDatabaseOnline;
@property(readonly, nonatomic) _Bool isPrivateDatabaseStartingUp;
@property(readonly, nonatomic) _Bool isPrivateDataEncryptionEnabled;
@property(readonly, nonatomic) FCCommandQueue *notificationsEndpointCommandQueue; // @synthesize notificationsEndpointCommandQueue=_notificationsEndpointCommandQueue;
@property(readonly, nonatomic) FCNotificationsEndpointConnection *notificationsEndpointConnection; // @synthesize notificationsEndpointConnection=_notificationsEndpointConnection;
@property(readonly, nonatomic) FCCommandQueue *endpointCommandQueue; // @synthesize endpointCommandQueue=_endpointCommandQueue;
@property(readonly, nonatomic) FCClientEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(readonly, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property(readonly, nonatomic) FCFeedManager *feedManager; // @synthesize feedManager=_feedManager;
- (id)notificationsController;
@property(readonly, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
- (id)initWithContentContext:(id)arg1 privateDataContext:(id)arg2 networkBehaviorMonitor:(id)arg3;
- (id)initForTestingWithDesiredHeadlineFieldOptions:(unsigned long long)arg1;
- (id)initForTesting;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 lockStoreFrontIfNeeded:(_Bool)arg10 deviceIsiPad:(_Bool)arg11 backgroundTaskable:(id)arg12 privateDataSyncAvailability:(id)arg13 pptContext:(id)arg14;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

