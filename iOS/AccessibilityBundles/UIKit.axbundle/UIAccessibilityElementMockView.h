//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@class UIView;
@protocol UIAccessibilityElementMockViewDelegateProtocol;

@interface UIAccessibilityElementMockView : UIAccessibilityElement
{
    id <UIAccessibilityElementMockViewDelegateProtocol> _delegate;
    long long _subviewIndex;
    UIView *_view;
}

@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) long long subviewIndex; // @synthesize subviewIndex=_subviewIndex;
@property(nonatomic) __weak id <UIAccessibilityElementMockViewDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct _NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint)arg1;
- (_Bool)_accessibilityIsSpeakThisElement;
- (_Bool)_accessibilityIsScannerElement;
- (unsigned long long)_accessibilityScannerGroupTraits;
- (_Bool)_accessibilityIsScannerGroup;
- (id)_accessibilityScannerGroupElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)description;
- (long long)accessibilityCompareGeometry:(id)arg1;
- (void)dealloc;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilityUserTestingParent;
- (void)setAccessibilityContainer:(id)arg1;
- (long long)_accessibilityPageIndex;
- (long long)_accessibilityPageCount;
- (_Bool)becomeFirstResponder;
- (_Bool)accessibilityActivate;
- (_Bool)accessibilityPerformEscape;
- (_Bool)_accessibilityCanPerformEscapeAction;
- (_Bool)accessibilityPerformMagicTap;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (struct CGPoint)_accessibilityMaxScrubberPosition;
- (struct CGPoint)_accessibilityMinScrubberPosition;
- (id)_accessibilityTextViewTextOperationResponder;
- (_Bool)_accessibilityScrollToVisible;
- (id)accessibilityElements;
- (_Bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (struct CGPoint)accessibilityActivationPoint;
- (id)_accessibilityUserTestingElementType;
- (id)accessibilityValue;
- (id)accessibilityIdentifier;
- (id)accessibilityIdentification;
- (struct _NSRange)accessibilityRowRange;
- (id)accessibilityLanguage;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)revalidate;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)_accessibilitySupportsActivateAction;
- (void)_accessibilitySetValue:(id)arg1;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomRotors;
- (id)_accessibilityScrollAncestor;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@end

