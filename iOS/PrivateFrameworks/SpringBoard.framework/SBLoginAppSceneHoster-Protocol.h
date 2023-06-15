//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, SBApplication, UIView;
@protocol SBLoginAppSceneHosterDelegate;

@protocol SBLoginAppSceneHoster <NSObject>
@property(nonatomic) _Bool deferHIDEvents;
@property(readonly, nonatomic) SBApplication *hostedApp;
@property(readonly, nonatomic) NSString *hostedSceneIdentifier;
@property(readonly, nonatomic) NSString *hostedAppBundleID;
@property(readonly, nonatomic) UIView *contentView;
@property(nonatomic) __weak id <SBLoginAppSceneHosterDelegate> delegate;
- (void)updateSettingsWithTransitionBlock:(FBSSceneTransitionContext * (^)(FBSMutableSceneSettings *))arg1;
- (void)killLoginApp;
- (void)launchLoginAppWithInitialOrientation:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

