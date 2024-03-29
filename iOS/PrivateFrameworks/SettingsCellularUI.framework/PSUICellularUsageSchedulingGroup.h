//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTUIListWithHeaderLoadingGroup, NSString, PSListController, PSUIAppDataUsageSpecifierFactory;

__attribute__((visibility("hidden")))
@interface PSUICellularUsageSchedulingGroup : NSObject
{
    _Bool _refreshInProgress;
    PSListController *_hostController;
    CTUIListWithHeaderLoadingGroup *_loadingGroup;
    PSUIAppDataUsageSpecifierFactory *_appDataUsageSpecifierFactory;
}

- (void).cxx_destruct;
@property _Bool refreshInProgress; // @synthesize refreshInProgress=_refreshInProgress;
@property(retain, nonatomic) PSUIAppDataUsageSpecifierFactory *appDataUsageSpecifierFactory; // @synthesize appDataUsageSpecifierFactory=_appDataUsageSpecifierFactory;
@property(retain, nonatomic) CTUIListWithHeaderLoadingGroup *loadingGroup; // @synthesize loadingGroup=_loadingGroup;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
- (id)getLogger;
- (void)sortGroup;
- (void)setGroupSpecifierTitle:(id)arg1;
- (void)calculateUsage;
- (void)didModifyStatisticsSetting;
- (void)didResetStatistics;
- (void)selectedBillingPeriodChanged:(unsigned long long)arg1;
- (void)didFailToSetPolicyForSpecifier:(id)arg1;
- (void)prefetchPoliciesFor:(id)arg1;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifierTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

