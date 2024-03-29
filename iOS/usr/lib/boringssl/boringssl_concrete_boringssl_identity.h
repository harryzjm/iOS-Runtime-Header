//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_data, OS_dispatch_queue, OS_sec_array, OS_sec_identity;

__attribute__((visibility("hidden")))
@interface boringssl_concrete_boringssl_identity : NSObject
{
    struct __SecKey *private_key;
    NSObject<OS_sec_array> *certificates;
    NSObject<OS_sec_identity> *identity;
    CDUnknownBlockType sign_block;
    CDUnknownBlockType decrypt_block;
    NSObject<OS_dispatch_queue> *queue;
    _Bool private_key_operation_complete;
    NSObject<OS_dispatch_data> *signature_result;
    NSObject<OS_dispatch_data> *decryption_result;
}

- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

