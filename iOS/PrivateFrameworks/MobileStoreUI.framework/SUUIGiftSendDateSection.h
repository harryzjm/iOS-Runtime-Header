//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, SUUIGiftTableSectionHeaderView, SUUIItem;
@protocol SUUIGiftSendDateSectionDelegate;

__attribute__((visibility("hidden")))
@interface SUUIGiftSendDateSection
{
    SUUIItem *_giftItem;
    struct UIEdgeInsets _headerInsets;
    SUUIGiftTableSectionHeaderView *_headerView;
    NSDate *_sendDate;
    long long _sendDateStyle;
    id <SUUIGiftSendDateSectionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) long long sendDateStyle; // @synthesize sendDateStyle=_sendDateStyle;
@property(copy, nonatomic) NSDate *sendDate; // @synthesize sendDate=_sendDate;
@property(retain, nonatomic) SUUIItem *giftItem; // @synthesize giftItem=_giftItem;
@property(nonatomic) __weak id <SUUIGiftSendDateSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)giftDateTableViewCell:(id)arg1 didChangeDate:(id)arg2;
- (id)_headerView;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)headerViewForTableView:(id)arg1;
- (void)updateCell:(id)arg1 forTransitionToSize:(struct CGSize)arg2;
@property(nonatomic) struct UIEdgeInsets headerInsets;

@end

