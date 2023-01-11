//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <network/OS_nw_parameters-Protocol.h>

@class NSString, NWConcrete_nw_path_parameters, NWConcrete_nw_protocol_stack;
@protocol OS_dispatch_data, OS_nw_array, OS_nw_endpoint, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_parameters : NSObject <OS_nw_parameters>
{
    struct {
        unsigned char parent_id[16];
        struct {
            unsigned int val[8];
        } e_audit_token;
        unsigned long long expected_workload;
        int data_mode;
        int ecn_mode;
        int service_class;
        int expired_dns_behavior;
        unsigned int sleep_keepalive_interval;
        unsigned int dry_run:1;
        unsigned int no_opaque_proxy:1;
        unsigned int fast_open_enabled:1;
        unsigned int use_long_outstanding_queries:1;
        unsigned int ignore_resolver_stats:1;
        unsigned int resolve_ptr:1;
        unsigned int indefinite:1;
        unsigned int indefinite_set:1;
        unsigned int reuse_local_address:1;
        unsigned int receive_any_interface:1;
        unsigned int is_probe:1;
        unsigned int custom_protocols_only:1;
        unsigned int bundle_id_to_uuid_mapping_failed:1;
        unsigned int pid_to_uuid_mapping_failed:1;
        unsigned int local_only:1;
        unsigned int server:1;
        unsigned int is_fallback:1;
        unsigned int no_fullstack_fallback:1;
        unsigned int desperate_ivan:1;
        unsigned int allow_unusable_addresses:1;
        unsigned int https_proxy_is_opaque:1;
        unsigned int https_proxy_over_tls:1;
        unsigned int attach_protocol_listener:1;
        unsigned int prohibit_joining_protocols:1;
        unsigned int allow_joining_connected_fd:1;
        unsigned int multipath_force_enable:1;
        unsigned int allow_duplicate_state_updates:1;
        unsigned int always_open_listener_socket:1;
        unsigned int disable_listener_datapath:1;
        unsigned int tls_should_trust_invalid_certificates:1;
        unsigned int skip_probe_sampling:1;
        unsigned int __pad_bits:1;
    } value;
    NWConcrete_nw_path_parameters *path_parameters;
    char *e_bundle_id;
    char *proxy_bundle_id;
    NSObject<OS_xpc_object> *tls_session_id;
    NSObject<OS_xpc_object> *proxy_configuration;
    NSObject<OS_xpc_object> *effective_proxy_settings;
    NSObject<OS_xpc_object> *extra_parent_ids;
    NSObject<OS_dispatch_data> *initial_data_payload;
    NWConcrete_nw_protocol_stack *default_stack;
    NSObject<OS_nw_array> *proxy_options;
    NSObject<OS_nw_endpoint> *url_endpoint;
    NSObject<OS_xpc_object> *metadata;
}

- (void).cxx_destruct;
- (id)redactedDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
