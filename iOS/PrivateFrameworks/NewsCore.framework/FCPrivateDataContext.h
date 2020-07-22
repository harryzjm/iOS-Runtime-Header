//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPrivateDataContext-Protocol.h>

@class FCABTestingAgent, FCNetworkBehaviorMonitor, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCTagSettings, FCUserInfo, NSString;
@protocol FCContentContext, FCPrivateDataContextInternal, FCPushNotificationHandling;

@interface FCPrivateDataContext : NSObject <FCPrivateDataContext>
{
    _Bool _privateDataSyncingEnabled;
    _Bool _personalizationEnabled;
    _Bool _abTestingEnabled;
    FCPersonalizationData *_personalizationData;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionList *_subscriptionList;
    FCUserInfo *_userInfo;
    NSString *_privateDataDirectory;
    FCTagSettings *_tagSettings;
    id <FCPushNotificationHandling> _privatePushNotificationHandler;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id <FCPrivateDataContextInternal> _internalPrivateDataContext;
    id <FCContentContext> _contentContext;
    FCABTestingAgent *_abTestingAgent;
}

@property(retain, nonatomic) FCABTestingAgent *abTestingAgent; // @synthesize abTestingAgent=_abTestingAgent;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(retain, nonatomic) id <FCPrivateDataContextInternal> internalPrivateDataContext; // @synthesize internalPrivateDataContext=_internalPrivateDataContext;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(readonly, nonatomic, getter=isABTestingEnabled) _Bool abTestingEnabled; // @synthesize abTestingEnabled=_abTestingEnabled;
@property(readonly, nonatomic, getter=isPersonalizationEnabled) _Bool personalizationEnabled; // @synthesize personalizationEnabled=_personalizationEnabled;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled; // @synthesize privateDataSyncingEnabled=_privateDataSyncingEnabled;
@property(readonly, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
- (void).cxx_destruct;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
@property(readonly, copy, nonatomic) NSString *privateDataDirectory; // @synthesize privateDataDirectory=_privateDataDirectory;
@property(readonly, nonatomic) id <FCPushNotificationHandling> privatePushNotificationHandler; // @synthesize privatePushNotificationHandler=_privatePushNotificationHandler;
@property(readonly, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // @synthesize privateChannelMembershipController=_privateChannelMembershipController;
@property(readonly, nonatomic) FCPersonalizationData *personalizationData; // @synthesize personalizationData=_personalizationData;
- (id)initWithContext:(id)arg1 privateDatabase:(id)arg2 privateDataDirectory:(id)arg3 privateDataActionProvider:(id)arg4 encryptionDelegate:(id)arg5 networkBehaviorMonitor:(id)arg6 privateDataSyncingEnabled:(_Bool)arg7 personalizationEnabled:(_Bool)arg8 abTestingEnabled:(_Bool)arg9 iCloudAccountChanged:(_Bool)arg10;
- (id)initWithContext:(id)arg1 privateDataHostDirectory:(id)arg2 privateDataActionProvider:(id)arg3 encryptionDelegate:(id)arg4 networkBehaviorMonitor:(id)arg5 privateDataSyncingEnabled:(_Bool)arg6 personalizationEnabled:(_Bool)arg7 abTestingEnabled:(_Bool)arg8 iCloudAccountChanged:(_Bool)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
