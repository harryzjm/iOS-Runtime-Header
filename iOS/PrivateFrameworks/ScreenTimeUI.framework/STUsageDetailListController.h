//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STAllowanceProgressGroupSpecifierProvider, STDevicePickupsUsageGroupSpecifierProvider, STMostUsedGroupSpecifierProvider, STNoUsageDataView, STNotificationsUsageGroupSpecifierProvider, STScreenTimeUsageGroupSpecifierProvider, STTestGroupSpecifierProvider, UILabel;

@interface STUsageDetailListController
{
    STTestGroupSpecifierProvider *_testProvider;
    STScreenTimeUsageGroupSpecifierProvider *_screenTimeProvider;
    STAllowanceProgressGroupSpecifierProvider *_allowancesProvider;
    STMostUsedGroupSpecifierProvider *_mostUsedProvider;
    STNotificationsUsageGroupSpecifierProvider *_notificationsProvider;
    STDevicePickupsUsageGroupSpecifierProvider *_pickupsProvider;
    UILabel *_titleLabel;
    STNoUsageDataView *_noUsageDataView;
}

@property(readonly, nonatomic) STNoUsageDataView *noUsageDataView; // @synthesize noUsageDataView=_noUsageDataView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) STDevicePickupsUsageGroupSpecifierProvider *pickupsProvider; // @synthesize pickupsProvider=_pickupsProvider;
@property(retain, nonatomic) STNotificationsUsageGroupSpecifierProvider *notificationsProvider; // @synthesize notificationsProvider=_notificationsProvider;
@property(retain, nonatomic) STMostUsedGroupSpecifierProvider *mostUsedProvider; // @synthesize mostUsedProvider=_mostUsedProvider;
@property(retain, nonatomic) STAllowanceProgressGroupSpecifierProvider *allowancesProvider; // @synthesize allowancesProvider=_allowancesProvider;
@property(retain, nonatomic) STScreenTimeUsageGroupSpecifierProvider *screenTimeProvider; // @synthesize screenTimeProvider=_screenTimeProvider;
@property(retain, nonatomic) STTestGroupSpecifierProvider *testProvider; // @synthesize testProvider=_testProvider;
- (void).cxx_destruct;
- (void)showDeviceSelectionAlertController:(id)arg1;
- (void)showNoUsageDataViewIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRootViewModelCoordinator:(id)arg1;

@end

