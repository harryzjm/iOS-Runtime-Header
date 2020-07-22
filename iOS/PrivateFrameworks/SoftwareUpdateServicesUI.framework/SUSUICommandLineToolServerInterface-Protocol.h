//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateServicesUI/NSObject-Protocol.h>

@protocol SUSUICommandLineToolServerInterface <NSObject>
- (void)simulateComingFromOTAUpdate;
- (void)reboot:(_Bool)arg1;
- (void)toggleSettingsBadge:(_Bool)arg1;
- (void)showEmergencyCallUIWithOptions:(unsigned long long)arg1 result:(void (^)(_Bool, NSError *))arg2;
- (void)showAuthenticationUIWithOptions:(unsigned long long)arg1 result:(void (^)(_Bool, NSError *))arg2;
- (void)showMiniAlert:(unsigned long long)arg1 usingFakeData:(_Bool)arg2;
@end
