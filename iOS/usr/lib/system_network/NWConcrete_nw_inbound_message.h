//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <system_network/OS_nw_inbound_message-Protocol.h>

@class NSString;
@protocol OS_dispatch_data, OS_nw_dictionary;

@interface NWConcrete_nw_inbound_message : NSObject <OS_nw_inbound_message>
{
    NSObject<OS_dispatch_data> *content;
    NSObject<OS_nw_dictionary> *values;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
