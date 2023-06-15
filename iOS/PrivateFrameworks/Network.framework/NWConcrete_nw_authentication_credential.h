//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_sec_identity, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_authentication_credential : NSObject
{
    int type;
    int persistence;
    char *username;
    char *password;
    NSObject<OS_sec_identity> *identity;
    NSObject<OS_xpc_object> *valid_authentication_types;
}

- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

