//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, _TtC8FMClient24AuthenticationCredential;

@protocol _TtP8FMClient21ClientSessionProtocol_
- (void)sessionInfoWithCompletion:(void (^)(_TtC8FMClient11SessionInfo *, NSError *))arg1;
- (void)credentialNotAuthorizedWithCredential:(_TtC8FMClient24AuthenticationCredential *)arg1 error:(NSError *)arg2 completion:(void (^)(NSError *))arg3;
- (void)credential:(void (^)(_TtC8FMClient24AuthenticationCredential *, NSError *))arg1;
@end

