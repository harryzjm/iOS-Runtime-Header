//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSAppCellularUsageSpecifierDelegate-Protocol.h>
#import <SettingsCellularUI/PSBillingPeriodSelectorSpecifierDelegate-Protocol.h>
#import <SettingsCellularUI/PSUIResetStatisticsGroupDelegate-Protocol.h>

@class CTUIListWithHeaderLoadingGroup, PSListController, PSUICellularUsageLayoutGroup;

__attribute__((visibility("hidden")))
@interface PSUICellularUsageSchedulingGroup : NSObject <PSBillingPeriodSelectorSpecifierDelegate, PSAppCellularUsageSpecifierDelegate, PSUIResetStatisticsGroupDelegate>
{
    PSListController *_hostController;
    CTUIListWithHeaderLoadingGroup *_loadingGroup;
    PSUICellularUsageLayoutGroup *_dataUsageSyncGroup;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSUICellularUsageLayoutGroup *dataUsageSyncGroup; // @synthesize dataUsageSyncGroup=_dataUsageSyncGroup;
@property(retain, nonatomic) CTUIListWithHeaderLoadingGroup *loadingGroup; // @synthesize loadingGroup=_loadingGroup;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
- (void)sortGroup;
- (void)setGroupSpecifierTitle:(id)arg1;
- (void)calculateUsage;
- (void)didResetStatistics;
- (void)selectedBillingPeriodChanged:(unsigned long long)arg1;
- (void)presentAlert:(id)arg1;
- (void)didFailToSetPolicy:(id)arg1 forSpecifier:(id)arg2;
- (void)prefetchResourcesFor:(id)arg1;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifierTitle:(id)arg2;

@end
