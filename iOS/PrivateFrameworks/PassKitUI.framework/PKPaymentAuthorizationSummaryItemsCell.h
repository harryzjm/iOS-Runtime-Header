//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, PKPaymentAuthorizationSummaryItemsView;

@interface PKPaymentAuthorizationSummaryItemsCell
{
    NSMutableArray *_constraints;
    PKPaymentAuthorizationSummaryItemsView *_summaryItemsView;
}

@property(readonly, nonatomic) PKPaymentAuthorizationSummaryItemsView *summaryItemsView; // @synthesize summaryItemsView=_summaryItemsView;
- (void).cxx_destruct;
- (void)_prepareConstraints;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;

@end
