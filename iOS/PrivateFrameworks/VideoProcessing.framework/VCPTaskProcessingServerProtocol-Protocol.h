//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IOSurface, NSDictionary, NSString, NSURL;

@protocol VCPTaskProcessingServerProtocol
- (void)requestImageProcessingTask:(NSString *)arg1 forAssetURL:(NSURL *)arg2 withSandboxToken:(NSString *)arg3 options:(NSDictionary *)arg4 andReply:(void (^)(NSDictionary *, NSError *))arg5;
- (void)requestImageProcessingTask:(NSString *)arg1 forIOSurface:(IOSurface *)arg2 withOptions:(NSDictionary *)arg3 andReply:(void (^)(NSDictionary *, NSError *))arg4;
@end
