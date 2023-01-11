//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <network/OS_nw_activity-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_activity : NSObject <OS_nw_activity>
{
    unsigned char token[16];
    unsigned long long investigation_identifier;
    unsigned long long start_time;
    unsigned long long end_time;
    NWConcrete_nw_activity *parent;
    unsigned int label;
    unsigned int domain;
    int reporting_strategy;
    int completion_reason;
    struct atomic_flag activated;
    struct atomic_flag completed;
    unsigned int is_retry:1;
    unsigned int is_lightweight:1;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithOriginal:(id)arg1;
- (id)initWithToken:(unsigned char [16])arg1;
- (id)initWithDomain:(unsigned int)arg1 label:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
