//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _HMDLocalDeviceHandle
{
    NSUUID *_deviceIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isValidDestination:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)destination;
- (_Bool)isLocal;
- (id)privateDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDestination:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1;

@end

