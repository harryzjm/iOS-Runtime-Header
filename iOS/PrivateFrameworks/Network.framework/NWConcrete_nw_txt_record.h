//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_txt_record : NSObject
{
    char *buffer;
    unsigned long long data_len;
    unsigned long long max_data_len;
    struct os_unfair_lock_s lock;
    unsigned int is_dictionary:1;
    unsigned int __pad_bits:7;
}

@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

