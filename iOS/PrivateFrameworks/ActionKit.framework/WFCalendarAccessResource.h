//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFCalendarAccessResource : WFAccessResource
{
}

+ (_Bool)isSystemResource;
+ (unsigned long long)entityType;
- (id)localizedWorkflowLevelMessageTemplate;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end
