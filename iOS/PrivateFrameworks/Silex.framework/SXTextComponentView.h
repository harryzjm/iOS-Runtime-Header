//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXTextViewDelegate-Protocol.h>

@class NSString, SXTextView;

@interface SXTextComponentView <SXTextViewDelegate>
{
    SXTextComponentView *_previousTextComponentView;
    SXTextComponentView *_nextTextComponentView;
    SXTextView *_textView;
    struct CGSize _calculatedSize;
}

@property(nonatomic) struct CGSize calculatedSize; // @synthesize calculatedSize=_calculatedSize;
@property(retain, nonatomic) SXTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak SXTextComponentView *nextTextComponentView; // @synthesize nextTextComponentView=_nextTextComponentView;
@property(nonatomic) __weak SXTextComponentView *previousTextComponentView; // @synthesize previousTextComponentView=_previousTextComponentView;
- (void).cxx_destruct;
- (void)provideInfosLayoutTo:(id)arg1;
- (id)accessibilityContextualLabelForTextView:(id)arg1;
- (id)accessibilityCustomRotorMembershipForTextView:(id)arg1;
- (id)textRulesForTextView:(id)arg1;
- (id)componentIdentifierForTextView:(id)arg1;
- (void)didApplyBehavior:(id)arg1;
- (void)animationDidFinish:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (_Bool)gestureShouldBegin:(id)arg1;
- (id)textSource;
- (struct CGRect)frameForTextRange:(struct _NSRange)arg1;
- (struct CGRect)absoluteTextViewFrame;
- (void)applyAddition:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)setupTextView;
- (void)setPresentationFrame:(struct CGRect)arg1;
- (void)setAbsoluteFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)presentComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
