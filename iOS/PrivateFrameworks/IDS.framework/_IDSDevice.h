//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTWeakReference, IDSEndpointCapabilities, NSArray, NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface _IDSDevice : NSObject
{
    NSDictionary *_info;
    CUTWeakReference *_account;
    CUTWeakReference *_serviceReference;
    int _nearbyToken;
    _Bool _nearby;
    _Bool _connected;
    _Bool _immutableCloudConnected;
    _Bool _cloudConnected;
}

- (void).cxx_destruct;
- (void)_setService:(id)arg1;
- (void)_setAccount:(id)arg1;
- (void)_stateChanged;
- (void)_cloudConnectedStateChanged;
- (void)_connectedStateChanged;
- (void)_nearbyStateChanged;
- (_Bool)isTinker;
@property(readonly, nonatomic) IDSEndpointCapabilities *capabilities;
- (void)_addIdentity:(id)arg1;
@property(readonly, nonatomic) NSArray *identities;
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) _Bool isHSATrusted;
@property(readonly, nonatomic) NSString *enclosureColor;
@property(readonly, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) _Bool supportsPhoneCalls;
@property(readonly, nonatomic) _Bool supportsMMSRelay;
@property(readonly, nonatomic) _Bool supportsSMSRelay;
@property(readonly, nonatomic) _Bool supportsApplePay;
@property(readonly, nonatomic) _Bool supportsHandoff;
@property(readonly, nonatomic) _Bool supportsTethering;
@property(readonly, nonatomic) _Bool supportsiCloudPairing;
@property(retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property(readonly, nonatomic) NSArray *linkedUserURIs;
@property(readonly, nonatomic) unsigned long long serviceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long pairingProtocolVersion;
@property(readonly, nonatomic) NSDate *lastActivityDate;
@property(readonly, nonatomic) long long relationship;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) _Bool isLocallyPaired;
@property(readonly, nonatomic) _Bool isDefaultPairedDevice;
@property(readonly, nonatomic) _Bool locallyPresent;
@property(readonly, nonatomic, getter=isCloudConnected) _Bool cloudConnected;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isNearby) _Bool nearby;
- (id)compactDescription;
- (id)description;
- (id)fullDescription;
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *modelIdentifier;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *uniqueIDOverride;
@property(readonly, nonatomic) NSString *uniqueID;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
