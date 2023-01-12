//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class INAppDescriptor, INInteraction, NSDictionary, NSString, NSURL, UIWindow, WFAlert, WFContentCollection, WFDialogTransformer, WFWorkflowAuthorizationConfiguration;

@protocol WFUserInterfaceHost <NSObject>
- (void)presentAlert:(WFAlert *)arg1;
@property(nonatomic, readonly) NSString *userInterfaceType;

@optional
- (void)resolveDescriptor:(INAppDescriptor *)arg1 completionHandler:(void (^)(INAppDescriptor *))arg2;
- (UIWindow *)presentationAnchor;
- (_Bool)openURL:(NSURL *)arg1 withBundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (WFDialogTransformer *)dialogTransformer;
- (_Bool)shouldNotHandoff;
- (void)requestFileAccessForLocation:(NSURL *)arg1 workflowName:(NSString *)arg2 workflowID:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)requestAuthorizationWithConfiguration:(WFWorkflowAuthorizationConfiguration *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
- (void)requestActionInterfacePresentationForActionClassName:(NSString *)arg1 classNamesByType:(NSDictionary *)arg2 completionHandler:(void (^)(id <WFActionRemoteUserInterface>, NSError *))arg3;
- (void)dismissPresentedContentWithCompletionHandler:(void (^)(void))arg1;
- (void)showPreviewForContentCollection:(WFContentCollection *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)showHandleInteraction:(INInteraction *)arg1 prompt:(NSString *)arg2 completionHandler:(void (^)(unsigned long long))arg3;
- (void)showConfirmInteraction:(INInteraction *)arg1 prompt:(NSString *)arg2 requireAuthentication:(_Bool)arg3 completionHandler:(void (^)(unsigned long long))arg4;
- (_Bool)requestedFromAnotherDevice;
@end
