//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@protocol PKUIFlowManagerRendererDelegate;

@interface UINavigationController (PassKitUI)
- (id)navViewControllers;
- (id)rootViewController;
- (id)createChildRenderer;
- (void)dismissWithViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentWithViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushWithViewController:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic, retain) id <PKUIFlowManagerRendererDelegate> flowDelegate;
- (void)_pk_popViewControllersFromViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_pk_popToViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_pk_popToViewControllerPresentationMarker:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_pk_presentPaymentSetupViewController:(id)arg1 animated:(_Bool)arg2 performPreflight:(_Bool)arg3 delay:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)pk_presentPaymentSetupViewController:(id)arg1 animated:(_Bool)arg2 delay:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pk_presentPaymentSetupViewController:(id)arg1 animated:(_Bool)arg2 performPreflight:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pk_presentPaymentSetupViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (id)pkui_compactNavigationContainer;
@end

