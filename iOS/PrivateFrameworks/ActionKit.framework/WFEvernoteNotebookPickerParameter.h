//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFEvernoteAccessResource;

@interface WFEvernoteNotebookPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    WFEvernoteAccessResource *_evernoteAccessResource;
}

+ (id)referencedActionResourceClasses;
@property(retain, nonatomic) WFEvernoteAccessResource *evernoteAccessResource; // @synthesize evernoteAccessResource=_evernoteAccessResource;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (void)possibleStatesDidChange;
- (void)updateNotebooks;
- (void)wasAddedToWorkflow;
- (void)setActionResources:(id)arg1;
- (Class)singleStateClass;

@end
