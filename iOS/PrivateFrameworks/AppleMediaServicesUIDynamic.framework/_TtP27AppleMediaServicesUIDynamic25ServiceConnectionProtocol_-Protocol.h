//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSProcessInfo, NSData, NSURL;

@protocol _TtP27AppleMediaServicesUIDynamic25ServiceConnectionProtocol_
- (void)updateWithAccount:(ACAccount *)arg1 completion:(void (^)(NSError *))arg2;
- (void)tearDownWithCompletion:(void (^)(NSError *))arg1;
- (void)setUpWithCompletion:(void (^)(NSError *))arg1;
- (void)performWithRequestData:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)bootstrapWithAccount:(ACAccount *)arg1 bagData:(NSData *)arg2 clientInfo:(AMSProcessInfo *)arg3 mediaClientData:(NSData *)arg4 metricsContextData:(NSData *)arg5 url:(NSURL *)arg6 completion:(void (^)(NSError *))arg7;
@end

