//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString, UIAutocorrectBubble;

__attribute__((visibility("hidden")))
@interface UIAutocorrectBubbleContainer : UIView
{
    NSString *_typedText;
    UIAutocorrectBubble *_bubble;
    UIView *_fakeTextSelectionHighlight;
    UIView *_typedTextAnimationPlaceholder;
    NSLayoutConstraint *_highlightWidthConstraint;
    NSLayoutConstraint *_bubbleTopConstraint;
    NSLayoutConstraint *_xConstraint;
    NSLayoutConstraint *_yConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_widthConstraint;
    struct CGRect _referenceRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *yConstraint; // @synthesize yConstraint=_yConstraint;
@property(retain, nonatomic) NSLayoutConstraint *xConstraint; // @synthesize xConstraint=_xConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bubbleTopConstraint; // @synthesize bubbleTopConstraint=_bubbleTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *highlightWidthConstraint; // @synthesize highlightWidthConstraint=_highlightWidthConstraint;
@property(retain, nonatomic) UIView *typedTextAnimationPlaceholder; // @synthesize typedTextAnimationPlaceholder=_typedTextAnimationPlaceholder;
@property(retain, nonatomic) UIView *fakeTextSelectionHighlight; // @synthesize fakeTextSelectionHighlight=_fakeTextSelectionHighlight;
@property(retain, nonatomic) UIAutocorrectBubble *bubble; // @synthesize bubble=_bubble;
@property(nonatomic) struct CGRect referenceRect; // @synthesize referenceRect=_referenceRect;
@property(retain, nonatomic) NSString *typedText; // @synthesize typedText=_typedText;
- (void)performReset;
- (_Bool)isViewAnimating;
- (void)reset;
- (void)animateAutocorrectionAccepted;
- (void)dismissAutocorrectBubble;
- (void)didTapAutocorrectionBubble;
- (id)createTypedTextViewWithTypedText:(id)arg1;
- (void)updateSelfWithRect:(struct CGRect)arg1;
- (void)updateBubbleWithAutocorrectionText:(id)arg1 referenceRect:(struct CGRect)arg2;
- (void)updateFakeTextSelectionHighlightForRect:(struct CGRect)arg1;
- (void)updateWithAutocorrectionText:(id)arg1 typedText:(id)arg2 referenceTextView:(id)arg3 referenceRect:(struct CGRect)arg4;
- (id)init;

@end

