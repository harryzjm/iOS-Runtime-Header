//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIPageControl;

@interface _OFPageViewControllerContentView
{
    UIPageControl *_pageControl;
}

+ (Class)layerClass;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
- (void)layoutSubviews;
- (void)_setupPageControl:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)invalidatePageViewController;
- (void)dealloc;

@end
