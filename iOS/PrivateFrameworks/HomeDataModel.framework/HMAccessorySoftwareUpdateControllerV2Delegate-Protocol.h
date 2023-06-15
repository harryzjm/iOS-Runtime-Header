//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeDataModel/NSObject-Protocol.h>

@class HMAccessorySoftwareUpdateControllerV2, HMSoftwareUpdateProgressV2, HMSoftwareUpdateV2, NSDate, NSError, NSUUID;

@protocol HMAccessorySoftwareUpdateControllerV2Delegate <NSObject>
- (void)softwareUpdateController:(HMAccessorySoftwareUpdateControllerV2 *)arg1 accessory:(NSUUID *)arg2 didFailUpdate:(HMSoftwareUpdateV2 *)arg3 withError:(NSError *)arg4 timestamp:(NSDate *)arg5;
- (void)softwareUpdateController:(HMAccessorySoftwareUpdateControllerV2 *)arg1 accessory:(NSUUID *)arg2 didReceiveUpdate:(HMSoftwareUpdateV2 *)arg3;

@optional
- (void)softwareUpdateController:(HMAccessorySoftwareUpdateControllerV2 *)arg1 accessory:(NSUUID *)arg2 didUpdateProgress:(HMSoftwareUpdateProgressV2 *)arg3;
@end

