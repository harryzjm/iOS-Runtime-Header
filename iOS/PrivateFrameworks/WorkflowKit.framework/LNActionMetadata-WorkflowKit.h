//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkMetadata/LNActionMetadata.h>

@class NSArray, WFAppIntentShortcutsMetadata;

@interface LNActionMetadata (WorkflowKit)
@property(nonatomic, readonly) WFAppIntentShortcutsMetadata *shortcutsActionMetadata;
- (_Bool)wf_validateParametersForAction:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *wf_parameterDefinitions;
@end

