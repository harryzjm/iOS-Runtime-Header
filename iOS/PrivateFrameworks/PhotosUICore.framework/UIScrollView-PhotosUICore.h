//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (PhotosUICore)
@property(readonly, nonatomic) _Bool px_isPerformingScrollTest;
- (void)px_cancelScrollAnimation;
- (void)px_cancelScrollGesture;
- (_Bool)_px_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (struct CGSize)_px_currentContentSize;
@property(readonly, nonatomic) unsigned long long px_scrollableAxis;
- (void)px_adjustInsetsForKeyboardInfo:(id)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
@property(readonly, nonatomic) _Bool px_isBouncing;
@property(readonly, nonatomic) _Bool px_isDecelerating;
- (struct CGPoint)px_contentOffsetForEdge:(unsigned int)arg1;
- (void)px_scrollToEdge:(unsigned int)arg1 animated:(_Bool)arg2;
- (_Bool)px_isScrolledBeyondEdge:(unsigned int)arg1;
- (_Bool)px_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (_Bool)px_isScrolledAtEdge:(unsigned int)arg1;
- (void)px_scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (struct CGPoint)px_constrainedContentOffset:(struct CGPoint)arg1;
@end

