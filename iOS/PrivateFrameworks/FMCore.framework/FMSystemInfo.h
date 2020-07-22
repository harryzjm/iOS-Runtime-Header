//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FMSystemInfo : NSObject
{
}

+ (id)sharedInstance;
- (id)ownerAccount;
- (_Bool)hasSEP;
- (_Bool)isDeviceSecured;
- (_Bool)isInternalBuild;
- (id)btMacAddress;
- (id)wifiMacAddress;
- (id)chipId;
- (id)ecid;
- (id)meid;
- (id)imei;
- (id)serialNumber;
- (id)deviceModelName;
- (id)deviceName;
- (id)osBuildVersion;
- (id)osVersion;
- (id)deviceUDID;
- (id)deviceClass;
- (id)productName;
- (id)productType;

@end
