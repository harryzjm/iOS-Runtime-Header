//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <HealthExperienceUI/HKSourceListDataSourceObserver-Protocol.h>
#import <HealthExperienceUI/HKSwitchTableViewCellDelegate-Protocol.h>

@class HKAuthorizationStore, HKCharacteristicType, HKDisplayType, HKDisplayTypeController, HKHealthStore, HKSourceListDataSource, NSArray, NSDictionary, NSString, WDDisplayTypeDescriptionTableFooterView;

@interface ProfileCharacteristicTypePermissionsViewController : UITableViewController <HKSwitchTableViewCellDelegate, HKSourceListDataSourceObserver>
{
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    NSString *_firstName;
    HKAuthorizationStore *_authorizationStore;
    HKCharacteristicType *_characteristicType;
    NSDictionary *_characteristicAuthorizationRecordsBySource;
    WDDisplayTypeDescriptionTableFooterView *_footerView;
    HKDisplayType *_displayType;
    _Bool _isLoaded;
    NSArray *_orderedSectionIdentifiers;
    HKSourceListDataSource *_sourceListDataSource;
    NSDictionary *_sourceToAuthRecord;
}

+ (id)orderedSectionIdentifiersForProfile:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *sourceToAuthRecord; // @synthesize sourceToAuthRecord=_sourceToAuthRecord;
@property(retain, nonatomic) HKSourceListDataSource *sourceListDataSource; // @synthesize sourceListDataSource=_sourceListDataSource;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (id)_sourceForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_shouldDisplayNameInFooters;
- (long long)_profileSectionIdentifierForIndex:(long long)arg1;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5;
- (void)_fetchAuthorizationRecordsBySourceForCharacteristic:(id)arg1;
- (void)_gatherDataAndRefreshUI;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_adjustFooterHeight;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithHealthStore:(id)arg1 characteristicType:(id)arg2 firstName:(id)arg3;

@end
