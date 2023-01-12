//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class NSString, UIMutableApplicationSceneSettings;

@protocol CSAppHostContextProviding <NSObject>
@property(readonly, nonatomic) _Bool hostedAppShouldHideHomeGrabberView;
@property(readonly, nonatomic) NSString *hostedAppBundleIdentifier;

@optional
- (_Bool)hostedAppShouldReactivateUponDestruction;
- (_Bool)hostedAppShouldInvalidateUponDeactivation;
- (_Bool)hostedAppShouldDeactivateAfterDisappearance;
- (void)appendToHostedAppSceneSettings:(UIMutableApplicationSceneSettings *)arg1;
@end

