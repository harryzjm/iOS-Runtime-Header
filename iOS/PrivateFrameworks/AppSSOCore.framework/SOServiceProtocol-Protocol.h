//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSSOCore/NSObject-Protocol.h>

@class NSString, NSURL, SOAuthorizationRequestParametersCore;

@protocol SOServiceProtocol <NSObject>
- (void)profilesWithExtensionBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)isExtensionProcessWithAuditToken:(CDStruct_6ad76789)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)finishAuthorizationWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)debugHintsWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)realmsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)configurationWithCompletion:(void (^)(SOConfiguration *, NSError *))arg1;
- (void)cancelAuthorizationWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)beginAuthorizationWithRequestParameters:(SOAuthorizationRequestParametersCore *)arg1 completion:(void (^)(NSString *, NSXPCListenerEndpoint *, NSError *))arg2;
- (void)performAuthorizationWithRequestParameters:(SOAuthorizationRequestParametersCore *)arg1 completion:(void (^)(SOAuthorizationCredentialCore *, NSError *))arg2;
- (void)getAuthorizationHintsWithURL:(NSURL *)arg1 responseCode:(long long)arg2 completion:(void (^)(SOAuthorizationHintsCore *, NSError *))arg3;
@end

