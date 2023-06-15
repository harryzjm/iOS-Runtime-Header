//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class INAppDescriptor, INIntent, INInteraction, LNActionMetadata, LNActionParameterMetadata, LNConfirmationActionName, LNSuccessResult, LNViewSnippet, NSArray, NSDictionary, NSNumber, NSString, NSURL, WFAlert, WFContentCollection, WFDialogTransformer, WFSiriActionRequest, WFSmartPromptConfiguration, WFWorkflowAuthorizationConfiguration;

@protocol WFUserInterfaceHost <NSObject>
@property(readonly, nonatomic) NSString *userInterfaceType;
- (_Bool)isRunningInSiri;
- (void)presentAlert:(WFAlert *)arg1;

@optional
@property(readonly, nonatomic) long long executionContext;
@property(readonly, copy, nonatomic) NSArray *airPlayRouteIDs;
- (void)willBeginExecutingShortcutStep:(NSNumber *)arg1;
- (void)configureIntent:(INIntent *)arg1;
- (_Bool)performSiriRequest:(WFSiriActionRequest *)arg1 completionHandler:(void (^)(WFSiriActionResponse *))arg2;
- (void)resolveDescriptor:(INAppDescriptor *)arg1 completionHandler:(void (^)(INAppDescriptor *))arg2;
- (void)openURL:(NSURL *)arg1 withBundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (WFDialogTransformer *)dialogTransformer;
- (_Bool)shouldNotHandoff;
- (void)requestFileAccessForURLs:(NSArray *)arg1 workflowName:(NSString *)arg2 workflowID:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)requestAuthorizationWithConfiguration:(WFWorkflowAuthorizationConfiguration *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
- (void)requestActionInterfacePresentationForActionClassName:(NSString *)arg1 classNamesByType:(NSDictionary *)arg2 completionHandler:(void (^)(id <WFActionRemoteUserInterface>, NSError *))arg3;
- (void)dismissPresentedContentWithCompletionHandler:(void (^)(void))arg1;
- (void)showPreviewForContentCollection:(WFContentCollection *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)presentAlertWithSmartPromptConfiguration:(WFSmartPromptConfiguration *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
- (void)getPreferredSizeForLinkViewSnippetWithCompletion:(void (^)(NSValue *))arg1;
- (void)getEnvironmentForLinkViewSnippetWithCompletion:(void (^)(LNSnippetEnvironment *))arg1;
- (void)showLinkResult:(LNSuccessResult *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
- (void)showLinkActionConfirmationWithActionMetadata:(LNActionMetadata *)arg1 showPrompt:(_Bool)arg2 dialogString:(NSString *)arg3 viewSnippet:(LNViewSnippet *)arg4 confirmationActionName:(LNConfirmationActionName *)arg5 completionHandler:(void (^)(unsigned long long))arg6;
- (void)showLinkParameterConfirmationWithActionMetadata:(LNActionParameterMetadata *)arg1 dialogString:(NSString *)arg2 viewSnippet:(LNViewSnippet *)arg3 completionHandler:(void (^)(unsigned long long))arg4;
- (void)showHandleInteraction:(INInteraction *)arg1 prompt:(NSString *)arg2 completionHandler:(void (^)(unsigned long long))arg3;
- (void)showConfirmInteraction:(INInteraction *)arg1 prompt:(NSString *)arg2 requireAuthentication:(_Bool)arg3 completionHandler:(void (^)(unsigned long long))arg4;
- (_Bool)requestedInHomeResident;
- (_Bool)requestedFromAnotherDevice;
@end

