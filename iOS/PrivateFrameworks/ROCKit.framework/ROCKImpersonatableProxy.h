//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, ROCKSessionManager;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface ROCKImpersonatableProxy
{
    NSObject<OS_xpc_object> *_impersonatableProxyUUID;
    ROCKSessionManager *_sessionManager;
    NSObject<OS_xpc_object> *_xpcDictionary;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcDictionary; // @synthesize xpcDictionary=_xpcDictionary;
@property(retain, nonatomic) ROCKSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) NSObject<OS_xpc_object> *impersonatableProxyUUID; // @synthesize impersonatableProxyUUID=_impersonatableProxyUUID;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithSessionManager:(id)arg1 impersonatableProxyUUID:(id)arg2;

@end
