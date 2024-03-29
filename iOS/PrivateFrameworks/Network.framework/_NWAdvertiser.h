//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NWConcrete_nw_listener;
@protocol OS_nw_advertise_descriptor, OS_nw_dictionary, OS_nw_parameters, OS_nw_path_evaluator;

__attribute__((visibility("hidden")))
@interface _NWAdvertiser : NSObject
{
    NWConcrete_nw_listener *listener;
    NSObject<OS_nw_advertise_descriptor> *advertise;
    _NWAdvertiser *parent;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_parameters> *parameters;
    NSArray *children;
    NSObject<OS_nw_dictionary> *flow_registrations;
    struct _DNSServiceRef_t *dnsref;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)childForDescriptor:(id)arg1;

@end

