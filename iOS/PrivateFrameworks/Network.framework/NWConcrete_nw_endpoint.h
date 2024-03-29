//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_data, OS_nw_array, OS_nw_context, OS_nw_interface, OS_nw_protocol_instance_registrar, OS_nw_txt_record, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_endpoint : NSObject
{
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_interface> *interface;
    int interface_type;
    unsigned char agent_identifier[16];
    NSArray *public_keys;
    NSString *ns_description;
    char *description;
    NSString *ns_redacted_description;
    char *redacted_description;
    char *known_tracker_name;
    char *tracker_owner;
    char *device_id;
    NWConcrete_nw_endpoint *parent_endpoint;
    NSObject<OS_nw_array> *cname_array;
    struct nw_endpoint_alterative_s first_alternative;
    struct {
        struct nw_endpoint_alterative_s *tqh_first;
        struct nw_endpoint_alterative_s **tqh_last;
    } alternative_list;
    struct os_unfair_lock_s endpoint_lock;
    struct os_unfair_lock_s description_lock;
    NSObject<OS_nw_txt_record> *txt_record;
    NSObject<OS_xpc_object> *signature;
    struct nw_hash_table *associations;
    NSObject<OS_nw_protocol_instance_registrar> *registrar;
    NSObject<OS_nw_array> *endpoint_edges;
    unsigned short alternate_port;
    unsigned char selected_key;
    unsigned int is_local_domain:1;
    unsigned int parent_is_proxy:1;
    unsigned int is_registered:1;
    unsigned int description_used:1;
    unsigned int redacted_description_used:1;
    unsigned int do_not_redact_description:1;
    unsigned int approved_app_domain:1;
    unsigned int can_block_request:1;
}

- (void).cxx_destruct;
- (unsigned long long)getHash;
- (id)copyEndpoint;
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)redactedDescription;
@property(readonly, copy) NSString *description;
- (char *)createDescription:(_Bool)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_data> *echConfig;
@property(nonatomic) unsigned short weight;
@property(nonatomic) unsigned short priority;
@property(readonly, nonatomic) unsigned short port;
@property(readonly, nonatomic) const char *hostname;
@property(readonly, nonatomic) const char *domainForPolicy;
- (id)copyDictionary;
@property(readonly, nonatomic) unsigned int type;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

