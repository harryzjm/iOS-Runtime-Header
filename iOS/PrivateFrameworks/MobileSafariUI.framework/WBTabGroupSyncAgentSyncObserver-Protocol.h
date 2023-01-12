//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class CKRecordID, NSDate, NSSet, NSString;

@protocol WBTabGroupSyncAgentSyncObserver <NSObject>

@optional
- (void)didFetchRecentlyAcceptedSharedTabGroupWithUUID:(NSString *)arg1 acceptedShareDate:(NSDate *)arg2;
- (void)didChangeBackgroundImageInSharedTabGroupWithUUID:(NSString *)arg1 byParticipantWithRecordID:(CKRecordID *)arg2;
- (void)didChangeScopedFavoritesInSharedTabGroupWithUUID:(NSString *)arg1 byParticipantWithRecordID:(CKRecordID *)arg2;
- (void)didRemoveTabWithUUID:(NSString *)arg1 title:(NSString *)arg2 inSharedTabGroupWithUUID:(NSString *)arg3 byParticipantWithRecordID:(CKRecordID *)arg4;
- (void)didNavigateInTabWithUUID:(NSString *)arg1 title:(NSString *)arg2 inSharedTabGroupWithUUID:(NSString *)arg3 byParticipantWithRecordID:(CKRecordID *)arg4;
- (void)didAddTabWithUUID:(NSString *)arg1 title:(NSString *)arg2 inSharedTabGroupWithUUID:(NSString *)arg3 byParticipantWithRecordID:(CKRecordID *)arg4;
- (void)activeParticipantsDidUpdateInTabWithUUID:(NSString *)arg1;
- (void)participantsDidUpdateInTabGroupWithUUID:(NSString *)arg1;
- (void)participants:(NSSet *)arg1 didLeaveSharedTabGroupWithUUID:(NSString *)arg2;
- (void)participants:(NSSet *)arg1 didJoinSharedTabGroupWithUUID:(NSString *)arg2;
- (void)shareDidUpdateForTabGroupWithUUID:(NSString *)arg1;
@end

