//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessageDestination, NSDictionary, NSUUID;

@interface HMDIDSMessageContext : HMFObject
{
    NSUUID *_identifier;
    HMFMessageDestination *_destination;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) HMFMessageDestination *destination; // @synthesize destination=_destination;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 destination:(id)arg2 userInfo:(id)arg3;
- (id)init;

@end
