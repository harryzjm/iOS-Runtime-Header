//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Security/NSObject-Protocol.h>

@class NSData, NSString;

@protocol OTControlProtocol <NSObject>
- (void)scrubBottledPeer:(NSString *)arg1 bottleID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)launchBottledPeer:(NSString *)arg1 bottleID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)preflightBottledPeer:(NSString *)arg1 dsid:(NSString *)arg2 reply:(void (^)(NSData *, NSString *, NSData *, NSError *))arg3;
- (void)scheduleCFUForFuture;
- (void)reset:(void (^)(_Bool, NSError *))arg1;
- (void)signIn:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)signOut:(void (^)(_Bool, NSError *))arg1;
- (void)listOfEligibleBottledPeerRecords:(void (^)(NSArray *, NSError *))arg1;
- (void)octagonSigningPublicKey:(void (^)(NSData *, NSError *))arg1;
- (void)octagonEncryptionPublicKey:(void (^)(NSData *, NSError *))arg1;
- (void)restore:(NSString *)arg1 dsid:(NSString *)arg2 secret:(NSData *)arg3 escrowRecordID:(NSString *)arg4 reply:(void (^)(NSData *, NSData *, NSError *))arg5;
@end

