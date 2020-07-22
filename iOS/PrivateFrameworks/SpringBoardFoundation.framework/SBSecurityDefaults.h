//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface SBSecurityDefaults
{
}

- (void)setDeviceLockDefault:(id)arg1 forKey:(id)arg2;
- (id)deviceLockDefaultForKey:(id)arg1;
- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(readonly, nonatomic) _Bool allowLockAndUnlockWithCase; // @dynamic allowLockAndUnlockWithCase;
@property(retain, nonatomic) NSNumber *blockStateGeneration; // @dynamic blockStateGeneration;
@property(retain, nonatomic, getter=isBlockedForPasscode) NSNumber *blockedForPasscode; // @dynamic blockedForPasscode;
@property(nonatomic, getter=isBlockedForThermal) _Bool blockedForThermal; // @dynamic blockedForThermal;
@property(readonly, nonatomic, getter=isDeviceWipeEnabled) _Bool deviceWipeEnabled; // @dynamic deviceWipeEnabled;
@property(readonly, nonatomic) _Bool dontLockEver; // @dynamic dontLockEver;
@property(retain, nonatomic) NSNumber *numberOfFailedPasscodeAttempts; // @dynamic numberOfFailedPasscodeAttempts;
@property(retain, nonatomic, getter=isPendingDeviceWipe) NSNumber *pendingDeviceWipe; // @dynamic pendingDeviceWipe;
@property(retain, nonatomic) NSNumber *unblockTimeFromReferenceDate; // @dynamic unblockTimeFromReferenceDate;

@end
