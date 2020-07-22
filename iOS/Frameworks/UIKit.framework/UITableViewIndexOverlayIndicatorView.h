//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel, UITableView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UITableViewIndexOverlayIndicatorView
{
    UILabel *_label;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITableView *_table;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentText;
- (void)layoutSubviews;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)_invalidateTable;
- (void)_tapGestureChanged:(id)arg1;
- (id)initWithTable:(id)arg1;

@end

