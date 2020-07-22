//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/NSObject-Protocol.h>

@class AVOutputDevice, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol AVOutputDeviceImpl <NSObject>
@property(readonly, nonatomic) _Bool groupContainsGroupLeader;
@property(readonly, nonatomic) _Bool isGroupLeader;
@property(readonly, nonatomic) _Bool canBeGroupLeader;
@property(readonly, copy, nonatomic) NSString *groupID;
@property(readonly, nonatomic) _Bool canBeGrouped;
@property(readonly) _Bool canSetVolume;
@property(readonly) float volume;
@property(readonly, nonatomic) _Bool canAccessRemoteAssets;
@property(readonly, nonatomic) _Bool requiresAuthorization;
@property(readonly, nonatomic) unsigned long long deviceFeatures;
@property(readonly, copy, nonatomic) NSArray *connectedPairedDevices;
@property(readonly, nonatomic, getter=isInUseByPairedDevice) _Bool inUseByPairedDevice;
@property(readonly, nonatomic) NSNumber *rightBatteryLevel;
@property(readonly, nonatomic) NSNumber *leftBatteryLevel;
@property(readonly, nonatomic) NSNumber *caseBatteryLevel;
@property(readonly, nonatomic) NSNumber *batteryLevel;
@property(readonly, copy, nonatomic) NSData *identifyingMACAddress;
@property(readonly, copy, nonatomic) NSString *modelID;
@property(readonly, nonatomic) long long deviceSubType;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, copy, nonatomic) NSString *ID;
@property(readonly, copy, nonatomic) NSString *name;
@property __weak AVOutputDevice *parentOutputDevice;
- (void)setAdministrativeConfiguration:(NSDictionary *)arg1 administrationPassword:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *, NSDictionary *))arg3;
- (void)setVolume:(float)arg1;
- (void)setSecondDisplayEnabled:(_Bool)arg1;
@end

