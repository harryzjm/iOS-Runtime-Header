//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFCard;
@protocol SearchUICardViewDelegate;

@interface SearchUICardTableViewController
{
    _Bool _rowSelectionAppearanceEnabled;
    id <SearchUICardViewDelegate> _cardViewDelegate;
    SFCard *_card;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool rowSelectionAppearanceEnabled; // @synthesize rowSelectionAppearanceEnabled=_rowSelectionAppearanceEnabled;
@property(retain, nonatomic) SFCard *card; // @synthesize card=_card;
@property(nonatomic) __weak id <SearchUICardViewDelegate> cardViewDelegate; // @synthesize cardViewDelegate=_cardViewDelegate;
- (_Bool)shouldDrawTopAndBottomSeparators;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)showViewController:(id)arg1;
- (double)offScreenContentScrollDistance;
- (void)updateTopPadding;
- (void)updateSelectionStyleForCell:(id)arg1;
- (void)setShouldUseStandardSectionInsets:(_Bool)arg1;
- (void)setShouldUseInsetRoundedSections:(_Bool)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(_Bool)arg2;
- (void)setTableModel:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)init;

@end
