//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, NSUUID;

@interface SFAutoUnlockDevice <NSSecureCoding>
{
    _Bool _unlockEnabled;
    _Bool _keyExists;
    _Bool _bluetoothCloudPaired;
    _Bool _placeholder;
    _Bool _supportsAlwaysDirect;
    _Bool _supportsAuthPrompts;
    _Bool _supportsEncryption;
    NSString *_modelDescription;
    NSUUID *_bluetoothID;
    NSUUID *_proxyBluetoothID;
    NSString *_modelName;
    NSDictionary *_results;
    NSData *_hintToken;
    long long _majorOSVersion;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long majorOSVersion; // @synthesize majorOSVersion=_majorOSVersion;
@property(nonatomic) _Bool supportsEncryption; // @synthesize supportsEncryption=_supportsEncryption;
@property(nonatomic) _Bool supportsAuthPrompts; // @synthesize supportsAuthPrompts=_supportsAuthPrompts;
@property(nonatomic) _Bool supportsAlwaysDirect; // @synthesize supportsAlwaysDirect=_supportsAlwaysDirect;
@property(nonatomic) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSData *hintToken; // @synthesize hintToken=_hintToken;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSUUID *proxyBluetoothID; // @synthesize proxyBluetoothID=_proxyBluetoothID;
@property(retain, nonatomic) NSUUID *bluetoothID; // @synthesize bluetoothID=_bluetoothID;
@property(nonatomic) _Bool bluetoothCloudPaired; // @synthesize bluetoothCloudPaired=_bluetoothCloudPaired;
@property(nonatomic) _Bool keyExists; // @synthesize keyExists=_keyExists;
@property(nonatomic) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(copy, nonatomic) NSString *modelDescription; // @synthesize modelDescription=_modelDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long type;
- (id)init;

@end

