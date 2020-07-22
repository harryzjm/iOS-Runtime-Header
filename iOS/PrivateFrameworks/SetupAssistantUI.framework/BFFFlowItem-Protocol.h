//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistantUI/NSObject-Protocol.h>

@class BFFNavigationController, NSString, UIViewController;
@protocol BFFFlowItemDelegate;

@protocol BFFFlowItem <NSObject>
+ (NSString *)cloudConfigSkipKey;
- (void)setDelegate:(id <BFFFlowItemDelegate>)arg1;

@optional
+ (_Bool)controllerNeedsToRun;
+ (void)skippedByCloudConfig;
+ (_Bool)controllerAffectedByTapFreeSetup;
- (void)handleDebugGesture;
- (_Bool)shouldSuppressExtendedInitializationActivityIndicator;
- (void)performExtendedInitializationWithCompletion:(void (^)(_Bool))arg1;
- (_Bool)isEphemeral;
- (void)cancelHostedPresentation;
- (void)presentHostedViewControllerOnNavigationController:(BFFNavigationController *)arg1 completion:(void (^)(UIViewController *))arg2;
- (UIViewController *)viewController;
- (void)willDisplayStartOver;
- (_Bool)shouldAllowStartOver;
- (void)setNavigationController:(BFFNavigationController *)arg1;
- (void)startOver;
- (_Bool)controllerAllowsNavigatingBack;
- (void)controllerWasPopped;
@end

