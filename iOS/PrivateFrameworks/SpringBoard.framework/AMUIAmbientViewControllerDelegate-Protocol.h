//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class AMUIAmbientViewController, AMUIWidgetHostManager, NSDictionary, NSString, PRSPosterConfiguration;
@protocol AMAuthenticationHandling, AMUnlockRequest;

@protocol AMUIAmbientViewControllerDelegate <NSObject>
- (_Bool)ambientViewControllerIsAuthenticated:(AMUIAmbientViewController *)arg1;

@optional
- (void)ambientViewController:(AMUIAmbientViewController *)arg1 didSetInlineAuthenticationViewVisible:(_Bool)arg2;
- (id <AMAuthenticationHandling>)ambientViewControllerAuthenticationHandler:(AMUIAmbientViewController *)arg1;
- (void)ambientViewController:(AMUIAmbientViewController *)arg1 didUpdateActiveConfiguration:(PRSPosterConfiguration *)arg2 withMetadata:(NSDictionary *)arg3;
- (AMUIWidgetHostManager *)widgetHostManagerForAmbientViewController:(AMUIAmbientViewController *)arg1;
- (void)ambientViewControllerWillEndConfiguration:(AMUIAmbientViewController *)arg1;
- (void)ambientViewControllerWillBeginConfiguration:(AMUIAmbientViewController *)arg1;
- (void)ambientViewController:(AMUIAmbientViewController *)arg1 requestsUnlock:(id <AMUnlockRequest>)arg2 withCompletion:(void (^)(_Bool))arg3;
- (NSString *)ambientViewControllerRequestsConnectedChargerId:(AMUIAmbientViewController *)arg1;
- (void)ambientViewController:(AMUIAmbientViewController *)arg1 isTransitioningSettled:(_Bool)arg2;
@end

