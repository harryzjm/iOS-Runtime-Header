//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString;

@protocol IMDaemonFileTransferProtocol <NSObject>
- (void)createItemForPHAssetWithUUID:(NSString *)arg1 parentChatItemGUID:(NSString *)arg2 chatGUID:(NSString *)arg3;
- (void)markAttachment:(NSString *)arg1 sender:(NSString *)arg2 recipients:(NSArray *)arg3 isIncoming:(_Bool)arg4;
- (void)downloadHighQualityVariantOfFileTransferWithGUID:(NSString *)arg1;
- (void)deleteFileTransferWithGUID:(NSString *)arg1;
- (void)fileTransfersRecoverablyDeleted:(NSSet *)arg1;
- (void)fileTransferRemoved:(NSString *)arg1;
- (void)fileTransferStopped:(NSString *)arg1;
- (void)fileTransfer:(NSString *)arg1 acceptedWithPath:(NSString *)arg2 autoRename:(_Bool)arg3 overwrite:(_Bool)arg4 options:(long long)arg5;
- (void)fileTransfer:(NSString *)arg1 updatedWithProperties:(NSDictionary *)arg2;
- (void)fileTransfer:(NSString *)arg1 createdWithProperties:(NSDictionary *)arg2;
@end

