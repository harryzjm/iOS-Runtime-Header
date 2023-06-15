//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeKitVersion, HMDResidentDevice, HMFBoolean, HMFProductInfo, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface HMDResidentDeviceElectionParameters : HMFObject
{
    HMDResidentDevice *_resident;
    HMFBoolean *_enabled;
    long long _location;
    NSSet *_accessories;
    HMFProductInfo *_productInfo;
    HMDHomeKitVersion *_version;
}

- (void).cxx_destruct;
@property(readonly) HMDHomeKitVersion *version; // @synthesize version=_version;
@property(readonly) HMFProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(readonly, copy) NSSet *accessories; // @synthesize accessories=_accessories;
@property(readonly) long long location; // @synthesize location=_location;
@property(readonly, copy, getter=isEnabled) HMFBoolean *enabled; // @synthesize enabled=_enabled;
@property(readonly) HMDResidentDevice *resident; // @synthesize resident=_resident;
- (id)attributeDescriptions;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1 outCriteria:(unsigned long long *)arg2;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
- (id)initWithResident:(id)arg1 enabled:(id)arg2 location:(long long)arg3 accessories:(id)arg4;
- (id)initWithResident:(id)arg1 dictionaryRepresentation:(id)arg2;

@end

