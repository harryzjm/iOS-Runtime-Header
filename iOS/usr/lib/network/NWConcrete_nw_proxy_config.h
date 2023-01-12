//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <network/OS_nw_proxy_config-Protocol.h>

@class NSString;
@protocol OS_nw_agent, OS_nw_authentication_credential, OS_nw_dictionary, OS_nw_endpoint, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_proxy_config : NSObject <OS_nw_proxy_config>
{
    NSObject<OS_nw_dictionary> *stacks;
    NSObject<OS_xpc_object> *proxied_transports;
    NSObject<OS_nw_endpoint> *endpoint;
    unsigned char identifier[16];
    unsigned char fallback_agent_uuid[16];
    NSObject<OS_nw_agent> *agent;
    NSObject<OS_nw_authentication_credential> *credential;
    NSObject<OS_xpc_object> *pac_script;
    NSObject<OS_xpc_object> *exceptions;
    int mode;
    int type;
    int multipath_service;
    unsigned int generation;
    unsigned int is_privacy_proxy:1;
    unsigned int privacy_proxy_fail_open:1;
    unsigned int prohibit_direct:1;
    unsigned int supports_bonjour:1;
    unsigned int match_address_family:1;
    unsigned int prohibit_unsatisfied_paths:1;
    unsigned int exclude_simple_hostnames:1;
    unsigned int force_tfo:1;
    unsigned int force_multipath:1;
    unsigned int apply_tfo:1;
    unsigned int disable_tfo_cookie:1;
    unsigned int override_opaque_https:1;
    unsigned int is_fallback:1;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
