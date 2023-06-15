//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class IMCollaborationClearTransmission, IMCollaborationNoticeTransmission, IMMessageItem, IMNickname, NSArray, NSDictionary, NSSet, NSString, NSURL;

@protocol IMDaemonAnyProtocol <NSObject>
- (void)markReadForMessageGUID:(NSString *)arg1 callerOrigin:(long long)arg2 queryID:(NSString *)arg3;
- (void)sendClearNotice:(IMCollaborationClearTransmission *)arg1 toHandles:(NSSet *)arg2 reply:(void (^)(_Bool))arg3;
- (void)sendNotice:(IMCollaborationNoticeTransmission *)arg1 toHandles:(NSSet *)arg2 fromHandle:(NSString *)arg3 reply:(void (^)(_Bool))arg4;
- (void)terminateForcingIfNeeded:(_Bool)arg1;
- (void)conference:(NSString *)arg1 account:(NSString *)arg2 notifyInvitationCancelledFromPerson:(NSString *)arg3;
- (void)requestPendingACInvites;
- (void)requestPendingVCInvites;
- (void)askHandleIDToShareTheirScreen:(NSString *)arg1 isContact:(_Bool)arg2;
- (void)inviteHandleIDToShareMyScreen:(NSString *)arg1 isContact:(_Bool)arg2;
- (void)sendNotificationMessageToUniqueID:(NSString *)arg1 withCommand:(long long)arg2;
- (void)requestGroupsAccount:(NSString *)arg1;
- (void)setValue:(id)arg1 ofProperty:(NSString *)arg2 ofPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)requestProperty:(NSString *)arg1 ofPerson:(NSString *)arg2 account:(NSString *)arg3;
- (void)stopWatchingBuddy:(NSString *)arg1 account:(NSString *)arg2;
- (void)startWatchingBuddy:(NSString *)arg1 account:(NSString *)arg2;
- (void)resumeBuddyUpdatesAccount:(NSString *)arg1;
- (void)holdBuddyUpdatesAccount:(NSString *)arg1;
- (void)downloadStickerPackWithGUID:(NSString *)arg1 isIncomingMessage:(_Bool)arg2 ignoreCache:(_Bool)arg3;
- (void)downloadStickerWithGUID:(NSString *)arg1;
- (void)eagerUploadCancel:(NSURL *)arg1;
- (void)eagerUploadTransfer:(NSDictionary *)arg1 recipients:(NSArray *)arg2;
- (void)markAllNicknamesAsPending;
- (void)sendNameOnlyToHandleIDs:(NSArray *)arg1 fromHandleID:(NSString *)arg2;
- (void)markNicknamesAsTransitionedForHandleIDs:(NSSet *)arg1 isAutoUpdate:(_Bool)arg2;
- (void)acceptPendingNicknameForHandleID:(NSString *)arg1 updateType:(unsigned long long)arg2;
- (void)setNewPersonalNickname:(IMNickname *)arg1;
- (void)fetchPersonalNicknameWithReply:(void (^)(IMNickname *))arg1;
- (void)nicknamePreferencesDidChange;
- (void)markProfileRecordsAsIgnored:(NSDictionary *)arg1;
- (void)markProfileRecords:(NSDictionary *)arg1 asActive:(_Bool)arg2;
- (void)denyHandleIDsForNicknameSharing:(NSSet *)arg1;
- (void)allowHandleIDsForNicknameSharing:(NSSet *)arg1 onChatGUIDs:(NSArray *)arg2 fromHandle:(NSString *)arg3;
- (void)ignorePendingNicknameUpdatesForHandleIDs:(NSArray *)arg1;
- (void)clearPendingNicknamePhotoUpdateForHandleIDs:(NSSet *)arg1;
- (void)clearPendingNicknameUpdatesForHandleIDs:(NSArray *)arg1;
- (void)fetchiCloudAccountStatusWithReply:(void (^)(_Bool))arg1;
- (void)fetchIgnoredNicknameHandlesWithReply:(void (^)(NSDictionary *))arg1;
- (void)fetchActiveNicknamesWithReply:(void (^)(NSDictionary *))arg1;
- (void)fetchTransitionedNicknameHandlesWithReply:(void (^)(NSSet *))arg1;
- (void)fetchHandleSharingStateWithReply:(void (^)(NSSet *, NSSet *))arg1;
- (void)fetchNicknamesWithReply:(void (^)(NSDictionary *, NSDictionary *, NSDictionary *))arg1;
- (void)requestQOSClassWhileServicingRequestsWithID:(NSString *)arg1;
- (void)initiateQuickSwitch;
- (void)downloadPurgedAttachmentsForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 chatID:(NSString *)arg4;
- (void)preWarm;
- (void)simulateOneTimeCodeArriving:(NSDictionary *)arg1;
- (void)fetchAutoDeletionPreferenceWithReply:(void (^)(_Bool))arg1;
- (void)setAutoDeletionPreference:(_Bool)arg1;
- (void)onboardDeleteVerificationCodesIfNeededWithMessage:(NSString *)arg1 reply:(void (^)(long long))arg2;
- (void)onboardDeleteVerificationCodesIfNeededWithReply:(void (^)(long long))arg1;
- (void)consumeCodeWithMessageGUID:(NSString *)arg1;
- (void)requestOneTimeCodeStatus;
- (void)forceReloadChatRegistryWithQueryID:(NSString *)arg1;
- (void)requestBuddyPicturesAndPropertiesForAccount:(NSString *)arg1;
- (void)requestNetworkDataAvailability;
- (void)playSendSoundForMessageGUID:(NSString *)arg1 callerOrigin:(long long)arg2;
- (void)markPlayedForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 message:(IMMessageItem *)arg4;
- (void)markPlayedForMessageGUID:(NSString *)arg1;
- (void)markMessageAsReadWithGUID:(NSString *)arg1 callerOrigin:(long long)arg2 reply:(void (^)(_Bool))arg3;
- (void)markUnreadForMessageGUID:(NSString *)arg1 IDs:(NSArray *)arg2 style:(unsigned char)arg3 services:(NSArray *)arg4;
- (void)setValue:(id)arg1 ofPersistentProperty:(NSString *)arg2;
- (void)setValue:(id)arg1 ofProperty:(NSString *)arg2;
- (void)requestSetupXPCObjectWithClientID:(NSString *)arg1 capabilities:(unsigned long long)arg2 context:(NSDictionary *)arg3 reply:(void (^)(_Bool, IMXPCDictionary *))arg4;
- (void)requestSetupWithClientID:(NSString *)arg1 capabilities:(unsigned long long)arg2 context:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSDictionary *))arg4;
@end

