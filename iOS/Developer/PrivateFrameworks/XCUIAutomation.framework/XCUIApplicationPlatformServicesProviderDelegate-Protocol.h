//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCUIAutomation/NSObject-Protocol.h>

@class XCTApplicationStateSnapshot;

@protocol XCUIApplicationPlatformServicesProviderDelegate <NSObject>
- (void)updatedInterfaceOrientation:(long long)arg1;
- (void)updatedDeviceOrientation:(long long)arg1;
- (void)updatedApplicationStateSnapshot:(XCTApplicationStateSnapshot *)arg1;
@end

