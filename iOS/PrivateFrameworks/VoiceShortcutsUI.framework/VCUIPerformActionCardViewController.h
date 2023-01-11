//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutsUI/CRKCardViewControlling-Protocol.h>
#import <VoiceShortcutsUI/WFLWorkflowControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, WFLWorkflowController;
@protocol CRCard, CRKCardSectionViewSourcing, CRKCardViewControllerDelegate;

@interface VCUIPerformActionCardViewController <WFLWorkflowControllerDelegate, CRKCardViewControlling>
{
    WFLWorkflowController *_currentWorkflowController;
    NSMutableDictionary *_commandWorkflowControllersDictionary;
    NSMutableDictionary *_commandCompletionBlocksDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *commandCompletionBlocksDictionary; // @synthesize commandCompletionBlocksDictionary=_commandCompletionBlocksDictionary;
@property(retain, nonatomic) NSMutableDictionary *commandWorkflowControllersDictionary; // @synthesize commandWorkflowControllersDictionary=_commandWorkflowControllersDictionary;
@property(retain, nonatomic) WFLWorkflowController *currentWorkflowController; // @synthesize currentWorkflowController=_currentWorkflowController;
- (void).cxx_destruct;
- (void)_releaseWorkflowController:(id)arg1;
- (id)_commandIdentifierForWorkflowController:(id)arg1;
- (void)_handleCardCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_setUpHelpers;
- (id)progress;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (void)workflowControllerDidStop:(id)arg1 withError:(id)arg2;
- (void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2;
- (void)workflowControllerWillRun:(id)arg1;
- (void)handleCardCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;

// Remaining properties
@property(retain, nonatomic) id <CRCard> card;
@property(retain, nonatomic) id <CRKCardSectionViewSourcing> cardSectionViewSource;
@property(nonatomic) __weak id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

