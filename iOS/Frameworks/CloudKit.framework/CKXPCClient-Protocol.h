//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSObject-Protocol.h>

@class CKFileOpenInfo, CKOperationResult, NSArray, NSDictionary, NSFileHandle, NSString;

@protocol CKXPCClient <NSObject>
- (void)consumeSandboxExtensions:(NSArray *)arg1 reply:(void (^)(void))arg2;
- (void)getFileMetadataWithFileHandle:(NSFileHandle *)arg1 openInfo:(CKFileOpenInfo *)arg2 reply:(void (^)(CKFileMetadata *, NSError *))arg3;
- (void)openFileWithOpenInfo:(CKFileOpenInfo *)arg1 reply:(void (^)(CKFileOpenResult *, NSError *))arg2;
- (void)handleOperationCheckpoint:(NSDictionary *)arg1 forOperationWithID:(NSString *)arg2;
- (void)handleOperationCompletion:(CKOperationResult *)arg1 forOperationWithID:(NSString *)arg2;
- (void)handleOperationProgress:(NSDictionary *)arg1 forOperationWithID:(NSString *)arg2;
- (void)handleOperationStatistics:(NSDictionary *)arg1 forOperationWithID:(NSString *)arg2;
- (void)handleOperationProgress:(NSDictionary *)arg1 forOperationWithID:(NSString *)arg2 reply:(void (^)(void))arg3;
@end

