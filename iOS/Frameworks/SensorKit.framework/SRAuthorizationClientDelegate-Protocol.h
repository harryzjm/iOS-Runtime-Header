//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SensorKit/NSObject-Protocol.h>

@class NSSet, NSString;

@protocol SRAuthorizationClientDelegate <NSObject>
- (void)authorizedServicesDidChange:(NSSet *)arg1 deniedServices:(NSSet *)arg2 dataCollectionEnabled:(_Bool)arg3 onboardingCompleted:(_Bool)arg4 forBundleIdentifier:(NSString *)arg5;
@end
