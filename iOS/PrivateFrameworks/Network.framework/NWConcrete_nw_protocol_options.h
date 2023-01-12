//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_protocol_definition;
@protocol OS_nw_endpoint, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_protocol_options : NSObject
{
    NWConcrete_nw_protocol_definition *definition;
    struct nw_protocol *protocol_handle;
    NSObject<OS_nw_endpoint> *proxy_endpoint;
    NSObject<OS_xpc_object> *legacy_parameters;
    char *log_id_str;
    unsigned short log_id_num;
    void *handle;
    _Bool override_stack_endpoint;
    _Bool prohibit_joining;
}

- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

