//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MDMClientLibrary/MDMClientProtocol-Protocol.h>
#import <MDMClientLibrary/MDMSharedXPCProtocol-Protocol.h>
#import <MDMClientLibrary/NSObject-Protocol.h>

@class NSDictionary;

@protocol MDMUserXPCProtocol <NSObject, MDMSharedXPCProtocol, MDMClientProtocol>
- (void)isAwaitingUserConfiguredWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)processUserRequest:(NSDictionary *)arg1 encodeResponse:(_Bool)arg2 completion:(void (^)(NSError *, NSDictionary *, NSData *))arg3;
@end

