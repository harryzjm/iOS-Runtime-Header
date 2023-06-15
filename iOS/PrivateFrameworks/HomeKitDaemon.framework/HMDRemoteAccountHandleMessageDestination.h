//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountHandle, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDRemoteAccountHandleMessageDestination
{
    _Bool _multicast;
    _Bool _restrictToResidentCapable;
    HMDAccountHandle *_handle;
    NSDictionary *_deviceCapabilities;
}

+ (id)shortDescription;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *deviceCapabilities; // @synthesize deviceCapabilities=_deviceCapabilities;
@property _Bool restrictToResidentCapable; // @synthesize restrictToResidentCapable=_restrictToResidentCapable;
@property(readonly, getter=isMulticast) _Bool multicast; // @synthesize multicast=_multicast;
@property(readonly, copy) HMDAccountHandle *handle; // @synthesize handle=_handle;
- (id)remoteDestinationString;
- (id)privateDescription;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(_Bool)arg3 deviceCapabilities:(id)arg4;
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(_Bool)arg3;
- (id)initWithTarget:(id)arg1;

@end

