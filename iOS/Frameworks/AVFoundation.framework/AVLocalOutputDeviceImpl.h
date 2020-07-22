//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVOutputDeviceImpl-Protocol.h>

@class AVOutputDevice, NSArray, NSData, NSNumber, NSString;

@interface AVLocalOutputDeviceImpl : NSObject <AVOutputDeviceImpl>
{
    AVOutputDevice *_parentDevice;
}

@property __weak AVOutputDevice *parentOutputDevice; // @synthesize parentOutputDevice=_parentDevice;
- (void).cxx_destruct;
- (void)setAdministrativeConfiguration:(id)arg1 administrationPassword:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool groupContainsGroupLeader;
@property(readonly, nonatomic) _Bool isGroupLeader;
@property(readonly, nonatomic) _Bool canBeGroupLeader;
@property(readonly, copy, nonatomic) NSString *groupID;
@property(readonly, nonatomic) _Bool canBeGrouped;
- (void)setVolume:(float)arg1;
@property(readonly) _Bool canSetVolume;
@property(readonly) float volume;
- (void)setSecondDisplayEnabled:(_Bool)arg1;
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
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

