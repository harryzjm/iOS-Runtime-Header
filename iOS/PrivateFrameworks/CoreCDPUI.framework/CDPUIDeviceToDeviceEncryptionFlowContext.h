//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject
{
    UIViewController *_presentingViewController;
    long long _deviceToDeviceEncryptionUpgradeUIStyle;
    long long _deviceToDeviceEncryptionUpgradeType;
    NSString *_securityUpgradeContext;
    NSString *_featureName;
    NSString *_altDSID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(copy, nonatomic) NSString *securityUpgradeContext; // @synthesize securityUpgradeContext=_securityUpgradeContext;
@property(nonatomic) long long deviceToDeviceEncryptionUpgradeType; // @synthesize deviceToDeviceEncryptionUpgradeType=_deviceToDeviceEncryptionUpgradeType;
@property(nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle; // @synthesize deviceToDeviceEncryptionUpgradeUIStyle=_deviceToDeviceEncryptionUpgradeUIStyle;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)initWithAltDSID:(id)arg1;

@end
