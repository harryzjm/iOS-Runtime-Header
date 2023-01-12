//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDCameraProfile, HMDCharacteristic, NSDate, NSSet, NSString;

@protocol HMDDoorbellBulletinUtilities <NSObject>
+ (NSSet *)clipUUIDsForCoalesceableSignificantEvents:(NSSet *)arg1;
+ (NSSet *)faceClassificationsNearDateOfDoorbellPress:(NSDate *)arg1 forCameraProfile:(HMDCameraProfile *)arg2;
+ (NSSet *)significantEventsRelevantToDoorbellPress:(NSDate *)arg1 forCameraProfile:(HMDCameraProfile *)arg2;
+ (NSString *)localizedMessageForCharacteristic:(HMDCharacteristic *)arg1;
+ (NSString *)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(NSSet *)arg1;
+ (NSString *)localizedDoorbellMessageForSignificantEvents:(NSSet *)arg1;
@end

