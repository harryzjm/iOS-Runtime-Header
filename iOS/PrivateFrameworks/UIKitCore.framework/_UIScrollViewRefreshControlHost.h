//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIScrollViewRefreshControlHost : NSObject
{
    UIScrollView *_scrollView;
    _Bool _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
    _Bool _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;
}

- (void).cxx_destruct;
- (void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
- (void)incrementInsetHeight:(double)arg1;
- (void)decrementInsetHeight:(double)arg1;
@property(readonly) __weak UIScrollView *scrollView;
@property(readonly) _Bool refreshControlInsetsAffectScrollViewRubberBanding;
- (id)initWithScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

