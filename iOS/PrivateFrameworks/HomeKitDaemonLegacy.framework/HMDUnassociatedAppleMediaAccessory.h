//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCapabilityFlags, HMDDevice, HMDHomeKitVersion, HMFSoftwareVersion, NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDUnassociatedAppleMediaAccessory
{
    _Bool _currentAccessory;
    NSString *_model;
    NSString *_serialNumber;
    HMFSoftwareVersion *_softwareVersion;
    HMDDevice *_device;
    long long _productColor;
    unsigned long long _supportedStereoPairVersions;
    HMDHomeKitVersion *_minimumRequiredPairingSoftwareVersion;
    NSString *_idsIdentifierString;
    NSData *_rawAccessoryCapabilities;
    NSData *_rawResidentCapabilities;
    HMDCapabilityFlags *_requiredPairingCapabilities;
    unsigned long long _variant;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)namespace;
- (void).cxx_destruct;
@property unsigned long long variant; // @synthesize variant=_variant;
@property(readonly) HMDCapabilityFlags *requiredPairingCapabilities; // @synthesize requiredPairingCapabilities=_requiredPairingCapabilities;
@property(readonly) NSData *rawResidentCapabilities; // @synthesize rawResidentCapabilities=_rawResidentCapabilities;
@property(readonly) NSData *rawAccessoryCapabilities; // @synthesize rawAccessoryCapabilities=_rawAccessoryCapabilities;
@property(readonly) NSString *idsIdentifierString; // @synthesize idsIdentifierString=_idsIdentifierString;
@property(readonly) HMDHomeKitVersion *minimumRequiredPairingSoftwareVersion; // @synthesize minimumRequiredPairingSoftwareVersion=_minimumRequiredPairingSoftwareVersion;
@property unsigned long long supportedStereoPairVersions; // @synthesize supportedStereoPairVersions=_supportedStereoPairVersions;
@property(nonatomic, getter=isCurrentAccessory) _Bool currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property(readonly) long long productColor; // @synthesize productColor=_productColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (id)dumpDescription;
- (_Bool)canPairGivenCapabilities:(unsigned long long)arg1;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
@property(retain) HMDDevice *device; // @synthesize device=_device;
@property(copy) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy) NSString *model; // @synthesize model=_model;
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 requiredPairingCapabilities:(unsigned long long)arg4 minimumPairingSoftware:(id)arg5 productColor:(long long)arg6 idsIdentifierString:(id)arg7 rawAccessoryCapabilities:(id)arg8 rawResidentCapabilities:(id)arg9 messageDispatcher:(id)arg10;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 productColor:(long long)arg4 idsIdentifierString:(id)arg5 rawAccessoryCapabilities:(id)arg6 rawResidentCapabilities:(id)arg7 messageDispatcher:(id)arg8;
- (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

