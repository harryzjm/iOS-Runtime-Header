//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIPageControl, UIPageViewController, _UIQueuingScrollView;

__attribute__((visibility("hidden")))
@interface _UIPageViewControllerContentView : UIView
{
    UIPageViewController *_pageViewController;
    _UIQueuingScrollView *_scrollView;
    UIPageControl *_pageControl;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) _UIQueuingScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)layoutSubviews;
- (void)_setupPageControl:(id)arg1;
- (struct CGRect)_scrollViewFrame;
- (double)_pageSpacing;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)invalidatePageViewController;
- (id)initWithFrame:(struct CGRect)arg1 andPageViewController:(id)arg2;
- (id)preferredFocusedView;
- (_Bool)canBecomeFocused;

@end

