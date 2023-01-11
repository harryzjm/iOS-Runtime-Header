//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <network/OS_nw_advertise_descriptor-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_advertise_descriptor : NSObject <OS_nw_advertise_descriptor>
{
    char *_name;
    char *_type;
    char *_domain;
    char *_txtRecord;
    unsigned long long _txtLength;
    unsigned int _no_auto_rename:1;
    unsigned int __pad_bits:7;
}

@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithName:(const char *)arg1 type:(const char *)arg2 domain:(const char *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

