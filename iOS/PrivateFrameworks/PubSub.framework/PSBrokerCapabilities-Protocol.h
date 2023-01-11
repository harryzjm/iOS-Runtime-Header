//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PubSub/NSObject-Protocol.h>

@class NSArray, NSSet, NSUUID;

@protocol PSBrokerCapabilities <NSObject>
@property(readonly, copy) NSSet *supportedTransportIdentifiers;
@property(readonly, copy) NSArray *exportedTopics;
@property(readonly) NSUUID *identifier;
@end
