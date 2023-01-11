//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXTextViewDelegate-Protocol.h>

@class NSString, SXTangierController, SXTextView;

@interface SXTextComponentView <SXTextViewDelegate>
{
    SXTangierController *_tangierController;
    SXTextView *_textView;
    struct CGSize _calculatedSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize calculatedSize; // @synthesize calculatedSize=_calculatedSize;
@property(retain, nonatomic) SXTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) __weak SXTangierController *tangierController; // @synthesize tangierController=_tangierController;
- (void)setHighlighted:(_Bool)arg1;
- (void)provideInfosLayoutTo:(id)arg1;
- (id)accessibilityContextualLabelForTextView:(id)arg1;
- (id)accessibilityCustomRotorMembershipForTextView:(id)arg1;
- (id)textRulesForTextView:(id)arg1;
- (id)componentIdentifierForTextView:(id)arg1;
- (_Bool)userInteractable;
- (void)didApplyBehavior:(id)arg1;
- (void)animationDidFinish:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (id)textSource;
- (struct CGRect)absoluteTextViewFrame;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)setupTextView;
- (void)setPresentationFrame:(struct CGRect)arg1;
- (void)setAbsoluteFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)presentComponentWithChanges:(CDStruct_12a35e6e)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 tangierController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
