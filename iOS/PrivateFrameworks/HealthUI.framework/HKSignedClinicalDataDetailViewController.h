//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKSignedClinicalDataDetailDataProvider;

@interface HKSignedClinicalDataDetailViewController
{
    HKSignedClinicalDataDetailDataProvider *_dataProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKSignedClinicalDataDetailDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (id)configureValueCellForItem:(id)arg1 tableView:(id)arg2;
- (id)configureSubtitleCellForItem:(id)arg1 tableView:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_setUpTableView;
- (void)viewDidLoad;
- (id)initWithSignedRecord:(id)arg1 medicalRecords:(id)arg2;

@end
