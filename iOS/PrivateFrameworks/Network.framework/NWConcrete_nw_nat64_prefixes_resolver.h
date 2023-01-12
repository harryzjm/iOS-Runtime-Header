//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_context, OS_nw_parameters, OS_nw_path_evaluator;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_nat64_prefixes_resolver : NSObject
{
    struct os_unfair_lock_s lock;
    unsigned int ifindex;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NWConcrete_nw_nat64_prefixes_resolver *internally_retained_object;
    unsigned int dns_service_id;
    struct _DNSServiceRef_t *dns_service;
    int dns_error;
    CDUnknownBlockType update_handler;
    CDUnknownBlockType cancel_handler;
    NSObject<OS_dispatch_queue> *client_queue;
    struct in6_addr *ipv6_addrs;
    NSObject<OS_nw_path_evaluator> *evaluator;
    int address_count;
}

- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

