//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountHandle, NSData;

__attribute__((visibility("hidden")))
@interface _HMDGlobalDeviceHandle
{
    HMDAccountHandle *_accountHandle;
    NSData *_pushToken;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isValidDestination:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, copy) HMDAccountHandle *accountHandle; // @synthesize accountHandle=_accountHandle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)destination;
- (_Bool)isGlobal;
- (id)privateDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDestination:(id)arg1;
- (id)initWithPushToken:(id)arg1 accountHandle:(id)arg2;

@end

