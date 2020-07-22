//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <system_network/OS_nw_protocol_transform-Protocol.h>

@class NSString;
@protocol OS_nw_endpoint, OS_xpc_object;

@interface NWConcrete_nw_protocol_transform : NSObject <OS_nw_protocol_transform>
{
    unsigned int clear_application:1;
    unsigned int clear_transport:1;
    unsigned int clear_internet:1;
    unsigned int no_proxy:1;
    unsigned int prohibit_direct:1;
    unsigned int tfo:1;
    unsigned int tfo_no_cookie:1;
    unsigned int no_fallback:1;
    unsigned int use_tfo_heuristics:1;
    int fallback_mode;
    int multipath_service;
    int data_mode;
    unsigned char ip_protocol;
    NSObject<OS_nw_endpoint> *replace_endpoint;
    NSObject<OS_xpc_object> *disabled_protocols;
    NSObject<OS_xpc_object> *application_protocols;
    NSObject<OS_xpc_object> *transport_protocols;
    NSObject<OS_xpc_object> *internet_protocols;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

