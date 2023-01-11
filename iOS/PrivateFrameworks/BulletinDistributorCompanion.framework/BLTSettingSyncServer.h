//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinDistributorCompanion/BLTSettingSyncing-Protocol.h>
#import <BulletinDistributorCompanion/BLTSettingsSendSerializerDelegate-Protocol.h>

@class BLTPreviouslySentMessageStore, BLTSettingsSendSerializerPassthrough, NSString;
@protocol BLTSettingSyncingClient;

@interface BLTSettingSyncServer <BLTSettingsSendSerializerDelegate, BLTSettingSyncing>
{
    BLTSettingsSendSerializerPassthrough *_settingSendSerializer;
    id <BLTSettingSyncingClient> _delegate;
    BLTPreviouslySentMessageStore *_sectionInfoPreviouslySentMessageStore;
    BLTPreviouslySentMessageStore *_sectionSubtypeParametersIconsPreviouslySentMessageStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BLTPreviouslySentMessageStore *sectionSubtypeParametersIconsPreviouslySentMessageStore; // @synthesize sectionSubtypeParametersIconsPreviouslySentMessageStore=_sectionSubtypeParametersIconsPreviouslySentMessageStore;
@property(retain, nonatomic) BLTPreviouslySentMessageStore *sectionInfoPreviouslySentMessageStore; // @synthesize sectionInfoPreviouslySentMessageStore=_sectionInfoPreviouslySentMessageStore;
@property(nonatomic) __weak id <BLTSettingSyncingClient> delegate; // @synthesize delegate=_delegate;
- (void)_handleResponse:(id)arg1;
- (void)handleSetRemoteGlobalSpokenSettingEnabledRequest:(id)arg1;
- (void)handleSetNotificationsCriticalAlertRequest:(id)arg1;
- (void)handleSetNotificationsSoundRequest:(id)arg1;
- (void)handleSetNotificationsGroupingRequest:(id)arg1;
- (void)handleSetNotificationsAlertLevelRequest:(id)arg1;
- (void)handleSetSectionSubtypeParametersIconResponse:(id)arg1;
- (void)handleRemoveSectionRequest:(id)arg1;
- (void)handleSetSectionSubtypeParametersIconRequest:(id)arg1;
- (void)handleSetSectionInfoResponse:(id)arg1;
- (void)handleSetSectionInfoRequest:(id)arg1;
- (void)sendRemoteGlobalSpokenSettingEnabled:(_Bool)arg1 date:(id)arg2;
- (void)setNotificationsCriticalAlertEnabled:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsSoundEnabled:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2 spoolToFile:(_Bool)arg3;
- (void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3 spoolToFile:(_Bool)arg4;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3;
- (void)removeSectionWithSectionID:(id)arg1;
- (void)removeSectionWithSectionID:(id)arg1 sent:(CDUnknownBlockType)arg2;
- (_Bool)isSectionInfoSentCacheEmpty;
- (void)removeSectionInfoSentCacheForSectionID:(id)arg1;
- (void)clearSectionInfoSentCache;
- (void)sendSpooledRequestsNowWithSent:(CDUnknownBlockType)arg1 withAcknowledgement:(CDUnknownBlockType)arg2;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 withQueue:(id)arg4 withSent:(CDUnknownBlockType)arg5 withAcknowledgement:(CDUnknownBlockType)arg6 spoolToFile:(_Bool)arg7;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
- (void)setSectionInfo:(id)arg1 withQueue:(id)arg2 withSent:(CDUnknownBlockType)arg3 withAcknowledgement:(CDUnknownBlockType)arg4 spoolToFile:(_Bool)arg5;
- (void)setSectionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerProtobufHandlers;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
