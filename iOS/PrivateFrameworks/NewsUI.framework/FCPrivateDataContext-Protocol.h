//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@class FCKeyValueStore, FCNetworkBehaviorMonitor, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCTagSettings, FCUserInfo, NSString;
@protocol FCPrivateDataContextInternal, FCPushNotificationHandling;

@protocol FCPrivateDataContext <NSObject>
@property(readonly, nonatomic) id <FCPrivateDataContextInternal> internalPrivateDataContext;
@property(readonly, copy, nonatomic) NSString *privateDataDirectory;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
@property(readonly, nonatomic) id <FCPushNotificationHandling> privatePushNotificationHandler;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property(readonly, nonatomic) FCTagSettings *tagSettings;
@property(readonly, nonatomic) FCUserInfo *userInfo;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property(readonly, nonatomic) FCPersonalizationData *personalizationData;
- (FCKeyValueStore *)privateStoreWithName:(NSString *)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
@end

