//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, WFContentCollection, WFDeletionAuthorizationState, WFWorkflowReference;

@interface WFSmartPromptConfiguration
{
    _Bool _isSpecialRequest;
    NSString *_localizedPrompt;
    NSString *_requestType;
    NSString *_requestSource;
    NSString *_actionUUID;
    NSArray *_smartPromptStates;
    WFDeletionAuthorizationState *_deletionAuthorizationState;
    WFWorkflowReference *_workflowReference;
    NSData *_archivedSourceContentCollection;
    WFContentCollection *_cachedSourceContentCollection;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) WFContentCollection *cachedSourceContentCollection; // @synthesize cachedSourceContentCollection=_cachedSourceContentCollection;
@property(readonly, copy, nonatomic) NSData *archivedSourceContentCollection; // @synthesize archivedSourceContentCollection=_archivedSourceContentCollection;
@property(readonly, nonatomic) _Bool isSpecialRequest; // @synthesize isSpecialRequest=_isSpecialRequest;
@property(readonly, nonatomic) WFWorkflowReference *workflowReference; // @synthesize workflowReference=_workflowReference;
@property(readonly, copy, nonatomic) WFDeletionAuthorizationState *deletionAuthorizationState; // @synthesize deletionAuthorizationState=_deletionAuthorizationState;
@property(readonly, copy, nonatomic) NSArray *smartPromptStates; // @synthesize smartPromptStates=_smartPromptStates;
@property(readonly, copy, nonatomic) NSString *actionUUID; // @synthesize actionUUID=_actionUUID;
@property(readonly, copy, nonatomic) NSString *requestSource; // @synthesize requestSource=_requestSource;
@property(readonly, copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
@property(readonly, copy, nonatomic) NSString *localizedPrompt; // @synthesize localizedPrompt=_localizedPrompt;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)authorizationDialogRequestWithAttribution:(id)arg1;
- (id)initWithDeletionAuthorizationState:(id)arg1 contentCollection:(id)arg2 action:(id)arg3 reference:(id)arg4 source:(id)arg5;
- (id)initWithSmartPromptStates:(id)arg1 attributionSet:(id)arg2 contentItemCache:(id)arg3 action:(id)arg4 contentDestination:(id)arg5 reference:(id)arg6 source:(id)arg7;

@end
