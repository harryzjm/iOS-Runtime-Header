//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollView.h>

@interface UIScrollView (IC)
- (struct CGRect)ic_visibleRectConsideringInsets:(_Bool)arg1;
- (void)ic_scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2 consideringInsets:(_Bool)arg3;
@property(readonly, nonatomic) _Bool ic_shouldOptimizeForScrolling;
- (_Bool)nestedScrollViewPanInteraction:(id)arg1 shouldAllowPanningInNestedScrollView:(id)arg2;
- (_Bool)nestedScrollViewPanInteraction:(id)arg1 shouldReceiveTouch:(id)arg2;
@end

