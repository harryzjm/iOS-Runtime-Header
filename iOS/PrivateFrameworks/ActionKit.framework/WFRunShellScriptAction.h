//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>

@class NSDictionary, NSString;

@interface WFRunShellScriptAction : WFAction <WFDynamicEnumerationDataSource>
{
    NSDictionary *_shells;
}

- (void).cxx_destruct;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)contentDestination;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
@property(readonly, nonatomic) NSDictionary *shells; // @synthesize shells=_shells;
- (void)initializeParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
