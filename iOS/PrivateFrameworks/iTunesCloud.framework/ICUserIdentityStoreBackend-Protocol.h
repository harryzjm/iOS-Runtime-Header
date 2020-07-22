//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSObject-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICMutableUserIdentityProperties, ICUserIdentityProperties, ICUserVerificationContext, NSNumber;
@protocol ICUserIdentityStoreBackendDelegate;

@protocol ICUserIdentityStoreBackend <NSObject, NSCopying, NSSecureCoding>
@property(readonly, copy, nonatomic) ICUserVerificationContext *verificationContextToEstablishAccount;
@property(readonly, copy, nonatomic) ICUserIdentityProperties *primaryICloudAccountIdentityProperties;
@property(readonly, nonatomic) NSNumber *activeLockerAccountDSID;
@property(readonly, nonatomic) NSNumber *activeAccountDSID;
@property(nonatomic) __weak id <ICUserIdentityStoreBackendDelegate> delegate;
- (ICUserVerificationContext *)verificationContextForDSID:(NSNumber *)arg1;
- (void)synchronize;
- (void)setIdentityProperties:(ICUserIdentityProperties *)arg1 forDSID:(NSNumber *)arg2 withCompletionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)replaceIdentityProperties:(ICUserIdentityProperties *)arg1 forDSID:(NSNumber *)arg2 withCompletionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)removeIdentityForDSID:(NSNumber *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (ICMutableUserIdentityProperties *)identityPropertiesForDSID:(NSNumber *)arg1;
- (void)updateActiveLockerAccountDSID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateActiveAccountDSID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
@end

