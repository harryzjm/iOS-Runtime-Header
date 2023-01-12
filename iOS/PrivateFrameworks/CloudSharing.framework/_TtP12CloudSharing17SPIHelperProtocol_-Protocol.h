//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKContainerSetupInfo, CKShare, NSArray, NSData, NSString, NSURL;

@protocol _TtP12CloudSharing17SPIHelperProtocol_
- (void)forciblyShareFolder:(NSURL *)arg1 emailAddresses:(NSArray *)arg2 phoneNumbers:(NSArray *)arg3 accessType:(long long)arg4 permissionType:(long long)arg5 allowOthersToInvite:(_Bool)arg6 withReply:(void (^)(NSURL *, CKShare *, NSError *))arg7;
- (void)userNameAndEmail:(NSURL *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 withReply:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)existingShareForFile:(NSURL *)arg1 withReply:(void (^)(NSURL *, CKShare *, NSError *))arg2;
- (void)addParticipantsToShare:(CKShare *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 emailAddresses:(NSArray *)arg3 phoneNumbers:(NSArray *)arg4 permissionType:(long long)arg5 allowOthersToInvite:(_Bool)arg6 withReply:(void (^)(NSURL *, CKShare *, NSError *))arg7;
- (void)addParticipantsToShare:(CKShare *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 emailAddresses:(NSArray *)arg3 phoneNumbers:(NSArray *)arg4 withReply:(void (^)(NSURL *, CKShare *, NSError *))arg5;
- (void)currentUserSharingStatusFor:(CKShare *)arg1 withReply:(void (^)(long long, NSError *))arg2;
- (void)updateShare:(CKShare *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 withReply:(void (^)(NSURL *, CKShare *, NSError *))arg3;
- (void)getMetadataFromShareFromSharingURL:(NSURL *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 withReply:(void (^)(CKShareMetadata *, NSError *))arg3;
- (void)mailContentFromSharingURL:(NSURL *)arg1 share:(CKShare *)arg2 fileURL:(NSURL *)arg3 appName:(NSString *)arg4 appIconData:(NSData *)arg5 withReply:(void (^)(NSString *, NSString *, NSError *))arg6;
- (void)removeFromShare:(CKShare *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 withReply:(void (^)(_Bool, NSError *))arg3;
- (void)removeFromShareFromSharingURL:(NSURL *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 withReply:(void (^)(_Bool, NSError *))arg3;
- (void)addToShareFromSharingURL:(NSURL *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 emailAddresses:(NSArray *)arg3 phoneNumbers:(NSArray *)arg4 accessType:(long long)arg5 permissionType:(long long)arg6 allowOthersToInvite:(_Bool)arg7 withReply:(void (^)(_Bool, CKShare *, NSError *))arg8;
- (void)addToCloudKitSharing:(CKShare *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 emailAddresses:(NSArray *)arg3 phoneNumbers:(NSArray *)arg4 accessType:(long long)arg5 permissionType:(long long)arg6 allowOthersToInvite:(_Bool)arg7 withReply:(void (^)(NSURL *, CKShare *, NSError *))arg8;
- (void)startFileSharing:(NSURL *)arg1 emailAddresses:(NSArray *)arg2 phoneNumbers:(NSArray *)arg3 accessType:(long long)arg4 permissionType:(long long)arg5 allowOthersToInvite:(_Bool)arg6 withReply:(void (^)(NSURL *, CKShare *, NSError *))arg7;
- (void)sharingStatusFor:(NSURL *)arg1 withReply:(void (^)(long long, NSError *))arg2;
@end

