//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, SUUIColorScheme, SUUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SUUIProductPageTableLinksSection
{
    NSMutableArray *_actions;
    SUUIProductPageItem *_item;
    NSMutableArray *_titles;
    SUUIColorScheme *_colorScheme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SUUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2 askPermission:(_Bool)arg3;

@end

