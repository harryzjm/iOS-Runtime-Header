//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSDictionary, WFContentCollection, WFWorkflow;

@interface WFWorkflowControllerState : NSObject <NSSecureCoding>
{
    WFWorkflow *_workflow;
    WFContentCollection *_currentInput;
    NSDictionary *_currentProcessedParameters;
    NSDictionary *_variables;
    unsigned long long _currentActionIndex;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long currentActionIndex; // @synthesize currentActionIndex=_currentActionIndex;
@property(readonly, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(readonly, nonatomic) NSDictionary *currentProcessedParameters; // @synthesize currentProcessedParameters=_currentProcessedParameters;
@property(readonly, nonatomic) WFContentCollection *currentInput; // @synthesize currentInput=_currentInput;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkflow:(id)arg1 variables:(id)arg2 currentActionIndex:(unsigned long long)arg3 currentInput:(id)arg4 currentProcessedParameters:(id)arg5;

@end
