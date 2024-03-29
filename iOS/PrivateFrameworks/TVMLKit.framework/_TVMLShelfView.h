//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVShelfView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVMLShelfView : _TVShelfView
{
    double _showcaseFactor;
}

- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (struct UIEdgeInsets)_selectionMarginsForCell:(id)arg1;
@property(readonly, nonatomic) _Bool shouldBindRowsTogether;
- (id)_rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2 firstItemRowIndex:(long long *)arg3 forShowcase:(_Bool)arg4;
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2;
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1;
- (id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2 firstItemRowIndex:(long long *)arg3;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;
- (void)layoutSubviews;
- (void)tv_setShowcaseFactor:(double)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 _shelfViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 shelfViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

