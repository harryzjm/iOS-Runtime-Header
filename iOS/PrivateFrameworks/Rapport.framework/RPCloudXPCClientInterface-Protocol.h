//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSString;

@protocol RPCloudXPCClientInterface

@optional
- (void)xpcCloudReceivedFrameData:(NSData *)arg1 fromID:(NSString *)arg2;
- (void)xpcCloudReceivedSessionStartRequest:(NSDictionary *)arg1 fromID:(NSString *)arg2 multicastFromID:(NSString *)arg3;
@end
