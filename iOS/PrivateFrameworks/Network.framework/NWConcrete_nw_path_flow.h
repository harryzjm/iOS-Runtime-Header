//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_array, OS_nw_endpoint, OS_nw_interface, OS_nw_protocol_options, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_path_flow : NSObject
{
    void *nexus_key;
    NSObject<OS_nw_interface> *interface;
    NSObject<OS_xpc_object> *nexus_agent;
    NSObject<OS_nw_endpoint> *local_endpoint;
    NSObject<OS_nw_endpoint> *remote_endpoint;
    NSObject<OS_nw_array> *discovered_endpoints;
    NSObject<OS_nw_array> *resolved_endpoints;
    NSObject<OS_nw_protocol_options> *assigned_protocol;
    struct necp_client_result_netagent nexus_agent_struct;
    struct necp_client_result_interface interface_struct;
    unsigned char tfo_cookie[16];
    unsigned char nexus_instance[16];
    unsigned char flow_id[16];
    unsigned int nexus_key_length;
    unsigned int nexus_flow_index;
    unsigned int nexus_port;
    unsigned int ctl_command_code;
    unsigned int ctl_command_value;
    unsigned int ctl_command_tcp_seq_num;
    unsigned char tfo_cookie_len;
    unsigned int viable:1;
    unsigned int assigned:1;
    unsigned int ecn_enabled:1;
    unsigned int fast_open_blocked:1;
    unsigned int is_local:1;
    unsigned int is_direct:1;
    unsigned int has_ipv4:1;
    unsigned int has_ipv6:1;
    unsigned int has_nat64:1;
    unsigned int ctl_command_valid:1;
    unsigned int defunct:1;
    unsigned int is_custom_ip:1;
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

