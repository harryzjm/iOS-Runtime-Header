//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessage, NSObject, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDRemoteReadRequestMessage : HMFObject
{
    HMFMessage *_readMessage;
    NSUUID *_accessoryUUID;
    NSObject<OS_dispatch_queue> *_responseQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, nonatomic) HMFMessage *readMessage; // @synthesize readMessage=_readMessage;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithReadMessage:(id)arg1 accessoryUUID:(id)arg2 responseQueue:(id)arg3;

@end

