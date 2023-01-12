//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class IMMessageItem, NSArray, NSAttributedString, NSDictionary, NSString;

@protocol IMDaemonChatSendMessageProtocol <NSObject>
- (void)removePersonInfoFromiMessageChat:(NSDictionary *)arg1 chatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)removePersonInfo:(NSDictionary *)arg1 chatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)retryGroupPhotoUpload:(NSString *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)sendGroupPhotoUpdate:(NSString *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)invitePersonInfoToiMessageChat:(NSDictionary *)arg1 withMessage:(IMMessageItem *)arg2 toChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5 account:(NSString *)arg6;
- (void)invitePersonInfo:(NSDictionary *)arg1 withMessage:(IMMessageItem *)arg2 toChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5 account:(NSString *)arg6;
- (void)joinChatID:(NSString *)arg1 handleInfo:(NSArray *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 groupID:(NSString *)arg5 lastAddressedHandle:(NSString *)arg6 lastAddressedSIMID:(NSString *)arg7 joinProperties:(NSDictionary *)arg8 account:(NSString *)arg9;
- (void)sendMappingPacket:(NSString *)arg1 toHandle:(NSString *)arg2 account:(NSString *)arg3;
- (void)sendEditedMessage:(IMMessageItem *)arg1 previousMessage:(IMMessageItem *)arg2 partIndex:(long long)arg3 editType:(unsigned long long)arg4 toChatIdentifier:(NSString *)arg5 style:(unsigned char)arg6 account:(NSString *)arg7 backwardCompatabilityText:(NSAttributedString *)arg8;
- (void)sendJunkReportMessage:(IMMessageItem *)arg1 account:(NSString *)arg2;
- (void)sendMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
@end

