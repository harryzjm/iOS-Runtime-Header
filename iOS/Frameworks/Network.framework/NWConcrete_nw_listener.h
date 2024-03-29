//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NWConcrete_nw_connection, _NWAdvertiser;
@protocol OS_dispatch_queue, OS_nw_advertise_descriptor, OS_nw_array, OS_nw_context, OS_nw_endpoint, OS_nw_error, OS_nw_group_descriptor, OS_nw_parameters, OS_nw_path, OS_nw_path_evaluator, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_listener : NSObject
{
    struct os_unfair_lock_s lock;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_group_descriptor> *multicast_descriptor;
    unsigned short id_value;
    char id_str[6];
    NWConcrete_nw_connection *join_connection;
    char *launchd_key;
    NSObject<OS_dispatch_queue> *client_queue;
    unsigned int client_qos_class;
    CDUnknownBlockType event_handler;
    CDUnknownBlockType new_connection_handler;
    CDUnknownBlockType new_connection_group_handler;
    unsigned int new_connection_limit;
    CDUnknownBlockType new_packet_handler;
    CDUnknownBlockType advertised_endpoint_changed_handler;
    int state;
    NSObject<OS_nw_error> *last_error;
    NSObject<OS_nw_array> *inboxes;
    NSObject<OS_nw_array> *flow_registrations;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_path> *path;
    NSObject<OS_xpc_object> *inactive_agents;
    NSObject<OS_xpc_object> *inactive_agent_dictionaries;
    NSObject<OS_xpc_object> *triggered_agents;
    NSObject<OS_nw_parameters> *current_derived_parameters;
    NSArray *authorized_keys;
    NSObject<OS_nw_array> *ids_info;
    char *device_id;
    unsigned short awdl_use_count;
    void *advertise_new_connection_timer;
    NWConcrete_nw_listener *internally_retained_object;
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;
    _NWAdvertiser *advertiser;
    NSObject<OS_nw_endpoint> *advertised_endpoint;
    NSObject<OS_nw_endpoint> *local_endpoint;
    unsigned int defer_socket;
    unsigned short port;
    unsigned int cancelling:1;
    unsigned int reported_state:1;
    unsigned int allow_new_connection_inline:1;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (char *)getPeerDeviceID;
- (id)getIDSInformation;
- (void)updateParametersForNewConnection:(id)arg1;
- (void)handleInboxCancelComplete:(id)arg1;
- (void)handleInboxFailed:(id)arg1 error:(id)arg2;
- (void)handleInboundPacket:(const char *)arg1 length:(unsigned short)arg2 from:(id)arg3 to:(id)arg4 interface:(id)arg5 socket:(id)arg6;
- (void)handleInbound:(id)arg1 addProtocolInbox:(_Bool)arg2;
- (_Bool)canHandleNewConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

