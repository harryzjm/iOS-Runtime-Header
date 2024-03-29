//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class WKWebView;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface WKScrollView : UIScrollView
{
    struct WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;
    struct RetainPtr<WKScrollViewDelegateForwarder> _delegateForwarder;
    _Bool _backgroundColorSetByClient;
    _Bool _indicatorStyleSetByClient;
    _Bool _decelerationRateSetByClient;
    _Bool _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    _Bool _contentInsetWasExternallyOverridden;
    double _keyboardBottomInsetAdjustment;
    _Bool _scrollEnabledByClient;
    _Bool _scrollEnabledInternal;
    _Bool _zoomEnabledByClient;
    _Bool _zoomEnabledInternal;
    _Bool _bouncesSetByClient;
    _Bool _bouncesHorizontalInternal;
    _Bool _bouncesVerticalInternal;
    struct optional<UIEdgeInsets> _contentScrollInsetFromClient;
    struct optional<UIEdgeInsets> _contentScrollInsetInternal;
    WKWebView<UIScrollViewDelegate> *_internalDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate; // @synthesize internalDelegate=_internalDelegate;
- (void)_updateContentScrollInset;
- (_Bool)_setContentScrollInsetInternal:(struct UIEdgeInsets)arg1;
- (void)_setContentScrollInset:(struct UIEdgeInsets)arg1;
- (void)handlePan:(id)arg1;
- (void)_sendPinchGestureActionEarlyIfNeeded;
- (void)_updateZoomability;
- (void)_setZoomEnabledInternal:(_Bool)arg1;
- (void)setZoomEnabled:(_Bool)arg1;
- (void)_updateBouncability;
- (void)_setBouncesInternal:(_Bool)arg1 vertical:(_Bool)arg2;
- (void)setBounces:(_Bool)arg1;
- (void)_updateScrollability;
- (void)_setScrollEnabledInternal:(_Bool)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
- (_Bool)isScrollEnabled;
- (struct UIEdgeInsets)_systemContentInset;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(_Bool)arg2 lastAdjustment:(double *)arg3;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize)arg1;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize)arg1;
- (struct CGSize)_currentTopLeftRubberbandAmount;
- (void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
@property(readonly, nonatomic) _Bool _contentInsetAdjustmentBehaviorWasExternallyOverridden;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(_Bool *)arg5;
- (void)_setDecelerationRateInternal:(double)arg1;
- (void)setDecelerationRate:(double)arg1;
- (void)_setIndicatorStyleInternal:(long long)arg1;
- (void)setIndicatorStyle:(long long)arg1;
- (void)_setBackgroundColorInternal:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)_updateDelegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

