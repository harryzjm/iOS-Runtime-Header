//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/WFOutOfProcessWorkflowController.h>

@interface WFOutOfProcessWorkflowController (ContextualActions)
+ (id)computeFinderResizedSizesForImages:(id)arg1 inSizes:(id)arg2 error:(id *)arg3;
+ (id)filteredContextualActions:(id)arg1 forContext:(id)arg2 error:(id *)arg3;
+ (id)contextualActionsForContext:(id)arg1 error:(id *)arg2;
- (void)populateSleepWorkflowsFromWorkflows:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createSleepWorkflow:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end

