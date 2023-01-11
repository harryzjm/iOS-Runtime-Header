//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFShortcutsAccessResource : WFAccessResource
{
}

+ (_Bool)isSystemResource;
- (void)makeAvailableAtLevel:(unsigned long long)arg1 withUserInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)workflowLevelPromptTemplate;
- (id)attemptRecoveryFromGlobalLevelErrorMessage;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)protectedResourceDescription;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;

@end
