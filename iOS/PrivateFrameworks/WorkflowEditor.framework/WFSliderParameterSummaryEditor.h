//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface WFSliderParameterSummaryEditor <UIPopoverPresentationControllerDelegate>
{
    UIViewController *_presentedViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (void)presentationControllerDidDismiss:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)sliderTouchUp:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
