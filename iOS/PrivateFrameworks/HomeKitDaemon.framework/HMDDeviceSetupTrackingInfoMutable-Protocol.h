//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDDeviceSetupTrackingInfo-Protocol.h>

@class NSError, NSString, NSUUID;

@protocol HMDDeviceSetupTrackingInfoMutable <HMDDeviceSetupTrackingInfo>
@property(copy) NSString *category;
@property(copy) NSError *sessionError;
@property unsigned long long endTime;
@property unsigned long long startTime;
@property(copy) NSUUID *accessoryUUID;
@end

