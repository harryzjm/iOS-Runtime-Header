//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFSendEmailAction : WFHandleCustomIntentAction
{
    _Bool _contentManaged;
}

+ (id)userInterfaceProtocol;
@property(nonatomic, getter=isContentManaged) _Bool contentManaged; // @synthesize contentManaged=_contentManaged;
- (id)targetContentAttribution;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;
- (void)generateEmailFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateFilesFromCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getRecipientsFromParameterValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)requiresRemoteExecution;
- (id)prioritizedParameterKeysForRemoteExecution;
- (_Bool)parameterCombinationForIntentSupportsBackgroundExecution:(id)arg1;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2;
- (void)handleWatchResponse:(id)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)generateBodyFromCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)checkManagementLevel:(id)arg1 error:(id *)arg2;
- (void)prepareEmailContentFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)generatedAccessResource;
- (_Bool)populatesInputFromInputParameter;
- (id)requiredResourcesForIntentAvailableResource;

@end
