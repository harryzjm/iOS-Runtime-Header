//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber;

@protocol ICCameraDeviceProtocol
- (void)notifyDeviceCloseWithUSBLocationID:(NSNumber *)arg1;
- (void)notifyStatus:(NSDictionary *)arg1;
- (void)notifyPtpEvent:(NSDictionary *)arg1;
- (void)notifyUpdatedItems:(NSDictionary *)arg1;
- (void)notifyRemovedItems:(NSDictionary *)arg1;
- (void)notifyAddedItems:(NSDictionary *)arg1;
- (void)postNotification:(NSDictionary *)arg1;
- (void)unregisterInterestedEventNotifications:(NSArray *)arg1;
- (void)registerInterestedEventNotifications:(NSArray *)arg1;
- (void)ptpEventForwarding:(_Bool)arg1;
- (void)enumerateContentWithOptions:(NSDictionary *)arg1;
- (void)requestEjectDeviceWithReply:(void (^)(NSMutableDictionary *))arg1;
- (void)requestStartUsingDeviceWithReply:(void (^)(NSMutableDictionary *))arg1;
- (void)requestDeleteObjectHandle:(NSNumber *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)imageCaptureEventNotification:(NSMutableDictionary *)arg1 completion:(void (^)(NSMutableDictionary *))arg2;
- (void)requestReadDataFromObjectHandle:(NSNumber *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)requestDownloadObjectHandle:(NSNumber *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)requestThumbnailDataForObjectHandle:(NSNumber *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)requestMetadataForObjectHandle:(NSNumber *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)sendPTPCommand:(NSData *)arg1 andPayload:(NSData *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)openDeviceSessionWithReply:(void (^)(NSMutableDictionary *))arg1;
@end

