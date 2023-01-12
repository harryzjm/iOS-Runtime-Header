//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SeparationAlerts/NSSecureCoding-Protocol.h>
#import <SeparationAlerts/SAWithYouDetectorClientProtocol-Protocol.h>

@class NSMutableDictionary;

@interface SADeviceRecord : NSObject <NSSecureCoding, SAWithYouDetectorClientProtocol>
{
    NSMutableDictionary *_deviceRecord;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *deviceRecord; // @synthesize deviceRecord=_deviceRecord;
- (void)didForceUpdateWithYouStatus;
- (void)updatedWithYouStatusFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forDeviceWithUUID:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ingestTAEvent:(id)arg1;
- (_Bool)hasDisconnectedDevices;
- (_Bool)hasSurfacedNotificationFor:(id)arg1;
- (void)resetAllWithYouStatus;
- (void)updateLastWithYouDate:(id)arg1 forDeviceWithUUID:(id)arg2;
- (void)_updateLatestAdvertisement:(id)arg1;
- (void)_updateConnectionStateOnConnectionEvent:(id)arg1;
- (void)_updateAllRelatedDevices;
- (void)_updateDeviceRecordOnDeviceUpdateEvent:(id)arg1;
- (void)_updateSingleDeviceRecordForDevice:(id)arg1;
- (void)updateLatestAdvertisement:(id)arg1 forDeviceWithUUID:(id)arg2;
- (id)getRelatedDevices:(id)arg1;
- (id)getLastWithYouDate:(id)arg1;
- (id)getLatestAdvertisement:(id)arg1;
- (unsigned long long)getDeviceNotificationState:(id)arg1;
- (unsigned long long)getWithYouStatus:(id)arg1;
- (long long)getConnectionState:(id)arg1;
- (id)getSADevice:(id)arg1;
- (id)getAllUUIDs;
- (id)init;

@end
