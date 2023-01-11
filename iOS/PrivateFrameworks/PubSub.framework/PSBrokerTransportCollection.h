//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <PubSub/PSBrokerTransport-Protocol.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface PSBrokerTransportCollection : HMFObject <PSBrokerTransport>
{
    NSMutableSet *_transports;
    NSString *identifier;
}

- (void).cxx_destruct;
@property(readonly) NSString *identifier; // @synthesize identifier;
- (void)publishEvent:(id)arg1 forTopicWithName:(id)arg2 toRemoteDevices:(id)arg3;
- (void)removeSubscriptions:(id)arg1 forTopicWithName:(id)arg2;
- (void)addSubscriptions:(id)arg1 forTopicWithName:(id)arg2;
- (void)addTransport:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
