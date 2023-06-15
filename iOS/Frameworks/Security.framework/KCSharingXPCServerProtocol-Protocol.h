//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Security/NSObject-Protocol.h>

@class KCSharingGroupCreateRequest, KCSharingGroupDeleteRequest, KCSharingGroupFetchRequest, KCSharingGroupInvite, KCSharingGroupLeaveRequest, KCSharingGroupUpdateRequest, NSArray, NSString;

@protocol KCSharingXPCServerProtocol <NSObject>
- (void)receivedGroupInvitation:(KCSharingGroupInvite *)arg1;
- (void)checkAvailabilityForHandles:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)declineInviteForGroupID:(NSString *)arg1 completion:(void (^)(KCSharingGroup *, NSError *))arg2;
- (void)acceptInviteForGroupID:(NSString *)arg1 completion:(void (^)(KCSharingGroup *, NSError *))arg2;
- (void)deleteGroupWithRequest:(KCSharingGroupDeleteRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)leaveGroupWithRequest:(KCSharingGroupLeaveRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateGroupWithRequest:(KCSharingGroupUpdateRequest *)arg1 completion:(void (^)(KCSharingGroup *, NSError *))arg2;
- (void)createGroupWithRequest:(KCSharingGroupCreateRequest *)arg1 completion:(void (^)(KCSharingGroup *, NSError *))arg2;
- (void)getGroupsWithRequest:(KCSharingGroupFetchRequest *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getGroupByGroupID:(NSString *)arg1 completion:(void (^)(KCSharingGroup *, NSError *))arg2;
- (void)wipe:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)saveLocalChangesWithReply:(void (^)(NSError *))arg1;
- (void)fetchRemoteChangesWithReply:(void (^)(NSError *))arg1;
- (void)fetchCurrentUserIdentifierWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)provisionWithReply:(void (^)(NSError *))arg1;
- (void)setChangeTrackingEnabled:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)pingWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)ping;
@end

