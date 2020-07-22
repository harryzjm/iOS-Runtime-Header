//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <network/OS_nw_endpoint_resolver-Protocol.h>

@class NSString, NWConcrete_nw_endpoint_handler;
@protocol OS_nw_array, OS_nw_resolver;

@interface NWConcrete_nw_endpoint_resolver : NSObject <OS_nw_endpoint_resolver>
{
    NSObject<OS_nw_resolver> *resolver;
    int last_resolver_status;
    unsigned int next_child_endpoint_index;
    unsigned int failed_to_start_next_child:1;
    unsigned int started_desperate_ivan:1;
    NWConcrete_nw_endpoint_handler *connected_child;
    NSObject<OS_nw_array> *child_endpoint_handlers;
    NSObject<OS_nw_array> *ready_child_endpoint_handlers;
    NSObject<OS_nw_array> *failed_child_endpoint_handlers;
    void *child_timer;
    void *trigger_agent_timer;
    void *desperate_ivan_timer;
}

- (void).cxx_destruct;
- (void)applyWithHandler:(id)arg1 toChildren:(CDUnknownBlockType)arg2;
- (void)updatePathWithHandler:(id)arg1;
- (void)cancelWithHandler:(id)arg1 forced:(_Bool)arg2;
- (void)startWithHandler:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

