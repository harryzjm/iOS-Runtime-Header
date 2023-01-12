//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentity, NSObject, NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MCMXPCMessageWithKeyValueBase
{
    id _value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long *)arg3;

// Remaining properties
@property(readonly, nonatomic) unsigned long long command;
@property(readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned int disposition;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *key;
@property(readonly, nonatomic) unsigned int platform;
@property(readonly, nonatomic) struct container_client *proxy;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

@end

