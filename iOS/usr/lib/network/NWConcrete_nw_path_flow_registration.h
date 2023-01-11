//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <network/OS_nw_path_flow_registration-Protocol.h>

@class NSString, NWConcrete_nw_path_evaluator;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_path_flow_registration : NSObject <OS_nw_path_flow_registration>
{
    NWConcrete_nw_path_evaluator *parent_evaluator;
    unsigned char registration_id[16];
    unsigned char nexus_agent[16];
    struct necp_all_stats *flow_stats_area;
    struct ifnet_stats_per_flow *flow_interface_stats;
    const struct sk_nexusadv *advisory;
    struct nw_protocol_identifier *transport_stats_protocol;
    struct nw_protocol_identifier *internet_stats_protocol;
    void *transport_stats_region;
    void *internet_stats_region;
    unsigned int override_traffic_class;
    unsigned int registered:1;
    unsigned int partial_checksum_offload:1;
    unsigned int uses_nexus:1;
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
