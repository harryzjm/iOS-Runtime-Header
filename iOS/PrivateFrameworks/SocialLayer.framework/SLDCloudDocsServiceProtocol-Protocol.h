//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SocialLayer/NSObject-Protocol.h>

@class NSData, NSURL;

@protocol SLDCloudDocsServiceProtocol <NSObject>
- (void)prepareConnectionWithReply:(void (^)(void))arg1;
- (void)shareURLForFileURL:(NSURL *)arg1 sandboxTokenData:(NSData *)arg2 reply:(void (^)(NSURL *))arg3;
@end

