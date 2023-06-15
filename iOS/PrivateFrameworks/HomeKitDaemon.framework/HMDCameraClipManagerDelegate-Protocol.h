//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMCameraClipSignificantEvent, HMDCameraClipManager, NSUUID;

@protocol HMDCameraClipManagerDelegate <NSObject>

@optional
- (void)clipManagerDidDisableCloudStorage:(HMDCameraClipManager *)arg1;
- (void)clipManager:(HMDCameraClipManager *)arg1 didDeleteClipWithUUID:(NSUUID *)arg2;
- (void)clipManager:(HMDCameraClipManager *)arg1 didUpdateSignificantEvent:(HMCameraClipSignificantEvent *)arg2;
- (void)clipManagerDidStop:(HMDCameraClipManager *)arg1;
- (void)clipManagerDidStartUpCloudZone:(HMDCameraClipManager *)arg1;
- (void)clipManagerDidStart:(HMDCameraClipManager *)arg1;
@end

