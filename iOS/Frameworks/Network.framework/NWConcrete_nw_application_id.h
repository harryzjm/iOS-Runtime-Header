//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_application_id : NSObject
{
    struct os_unfair_lock_s lock;
    unsigned char uuid[16];
    char *originating_process;
    char *bundle_id;
    CDStruct_4c969caf audit_token;
    int pid;
    int system_service;
}

- (id)redactedDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

