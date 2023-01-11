//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/WFAdjustableLabelDelegate-Protocol.h>

@class NSString, UIColor, UILabel, UIPageControl;
@protocol WFNumericPageControlDelegate;

@interface WFNumericPageControl : UIView <WFAdjustableLabelDelegate>
{
    _Bool _usesBoldText;
    long long _currentPage;
    long long _numberOfPages;
    id <WFNumericPageControlDelegate> _delegate;
    UIColor *_selectedPageTintColor;
    UIColor *_deselectedPageTintColor;
    UIPageControl *_pageControl;
    UILabel *_pageLabel;
}

@property(nonatomic) __weak UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) _Bool usesBoldText; // @synthesize usesBoldText=_usesBoldText;
@property(retain, nonatomic) UIColor *deselectedPageTintColor; // @synthesize deselectedPageTintColor=_deselectedPageTintColor;
@property(retain, nonatomic) UIColor *selectedPageTintColor; // @synthesize selectedPageTintColor=_selectedPageTintColor;
@property(nonatomic) __weak id <WFNumericPageControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (void)adjustableLabelRequestedDecrement:(id)arg1;
- (void)adjustableLabelRequestedIncrement:(id)arg1;
- (void)pageControlValueChanged:(id)arg1;
- (void)updateControls;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
