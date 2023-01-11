//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <network/OS_nw_protocol_instance_stub-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_protocol_instance_stub : NSObject <OS_nw_protocol_instance_stub>
{
    struct nw_protocol *protocol;
}

- (struct nw_protocol *)getProtocolStructure;
- (void)dealloc;
- (id)initWithProtocol:(struct nw_protocol *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
