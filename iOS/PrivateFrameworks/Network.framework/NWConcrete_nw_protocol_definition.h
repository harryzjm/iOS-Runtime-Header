//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_protocol_definition : NSObject
{
    struct nw_protocol_identifier identifier;
    unsigned char unique_identifier[16];
    int variant;
    struct nw_protocol_definition_common_state *common_state;
    struct nw_protocol_definition_extended_state *extended_state;
    struct nw_protocol_plugin_definition *plugin_definition;
    CDUnknownFunctionPointerType allocate_options;
    CDUnknownFunctionPointerType copy_options;
    CDUnknownFunctionPointerType deallocate_options;
    CDUnknownFunctionPointerType check_equality_options;
    CDUnknownFunctionPointerType compare_options;
    CDUnknownFunctionPointerType serialize_options;
    CDUnknownFunctionPointerType deserialize_options;
    CDUnknownFunctionPointerType allocate_metadata;
    CDUnknownFunctionPointerType deallocate_metadata;
    CDUnknownFunctionPointerType compare_metadata;
    CDUnknownFunctionPointerType serialize_metadata;
    CDUnknownFunctionPointerType deserialize_metadata;
    unsigned int framer:1;
    unsigned int supports_replies:1;
    unsigned int message_is_stream:1;
    unsigned int receive_single_message:1;
    unsigned int multipath:1;
    unsigned int supports_discontiguous_data:1;
    unsigned int has_global_definition:1;
    unsigned int is_proxy:1;
    unsigned int serialize_in_parameters:1;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

