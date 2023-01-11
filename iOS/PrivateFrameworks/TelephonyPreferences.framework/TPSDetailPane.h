//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyPreferences/UITableViewDataSource-Protocol.h>
#import <TelephonyPreferences/UITableViewDelegate-Protocol.h>

@class NSString, UITableView, UITableViewCell;

@interface TPSDetailPane <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UITableViewCell *_tableViewCell;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITableViewCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)setPreferenceValue:(id)arg1;
- (id)preferenceValue;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
