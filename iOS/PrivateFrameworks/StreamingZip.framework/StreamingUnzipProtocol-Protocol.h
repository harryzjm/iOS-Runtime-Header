//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSString;

@protocol StreamingUnzipProtocol
- (void)setActiveDelegateMethods:(int)arg1;
- (void)terminateStreamWithReply:(void (^)(NSError *))arg1;
- (void)finishStreamWithReply:(void (^)(NSError *))arg1;
- (void)suspendStreamWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)supplyBytes:(NSData *)arg1 withReply:(void (^)(NSError *, _Bool))arg2;
- (void)setupUnzipperWithOutputPath:(NSString *)arg1 sandboxExtensionToken:(char *)arg2 options:(NSDictionary *)arg3 withReply:(void (^)(NSError *, unsigned long long))arg4;
@end

