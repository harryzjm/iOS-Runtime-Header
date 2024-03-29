//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPPairingIdentity, HMDBulletinBoard, NSArray, NSNotificationCenter, NSString;

__attribute__((visibility("hidden")))
@interface HMDAppleAccessoryPairingControllerDataSource
{
}

- (id)deviceForIdentifier:(id)arg1;
@property(readonly, nonatomic) HMDBulletinBoard *bulletinBoard;
- (void)deletePairingAccessoryState:(id)arg1;
- (void)updatePairingAccessoryState:(id)arg1;
- (id)timerWithInterval:(double)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property(readonly, nonatomic) HAPPairingIdentity *hh1ControllerIdentity;
@property(readonly, nonatomic) NSArray *inProgressPairingAccessories;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

