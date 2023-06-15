//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_data, OS_nw_array;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_browse_descriptor : NSObject
{
    int type;
    char *bonjour_type;
    char *bonjour_domain;
    char *description;
    char *logging_description;
    struct os_unfair_lock_s lock;
    NSObject<OS_dispatch_data> *custom_data;
    CDUnknownBlockType browse_block;
    char *application_service_name;
    char *bundle_id;
    unsigned int device_types;
    unsigned int scope;
    NSObject<OS_nw_array> *device_filters;
    unsigned int include_txt_record:1;
    unsigned int sign_results:1;
    unsigned int discover_application_service_endpoints_only:1;
    unsigned int __pad_bits:5;
}

- (void).cxx_destruct;
- (id)redactedDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

