//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol AKAppleIDSigningDaemonProtocol <NSObject>
- (void)signaturesForData:(NSDictionary *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSData *, NSError *))arg3;
- (void)absintheSignatureForData:(NSData *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end

