//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/WFWorkflowRunDescriptor.h>

@class NSSet, WFWorkflowControllerState;

@interface WFWorkflowControllerStateRunDescriptor : WFWorkflowRunDescriptor
{
    WFWorkflowControllerState *_state;
    NSSet *_extensionResourceClasses;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *extensionResourceClasses; // @synthesize extensionResourceClasses=_extensionResourceClasses;
@property(readonly, nonatomic) WFWorkflowControllerState *state; // @synthesize state=_state;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithState:(id)arg1;
- (id)initWithState:(id)arg1 extensionResourceClasses:(id)arg2;

@end
