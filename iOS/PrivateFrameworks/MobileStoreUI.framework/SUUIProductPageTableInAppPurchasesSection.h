//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumberFormatter, SUUIClientContext, SUUIColorScheme, SUUIProductPageTableExpandableHeaderView;

__attribute__((visibility("hidden")))
@interface SUUIProductPageTableInAppPurchasesSection
{
    SUUIClientContext *_clientContext;
    SUUIColorScheme *_colorScheme;
    SUUIProductPageTableExpandableHeaderView *_headerView;
    NSArray *_inAppPurchases;
    NSNumberFormatter *_numberFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SUUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void)_reloadHeaderView;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setExpanded:(_Bool)arg1;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)headerViewForTableView:(id)arg1;
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;

@end

