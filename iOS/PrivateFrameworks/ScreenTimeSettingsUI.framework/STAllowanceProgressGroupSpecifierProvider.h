//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, PSSpecifier, STUsageItem;

__attribute__((visibility("hidden")))
@interface STAllowanceProgressGroupSpecifierProvider
{
    NSSet *_budgetedIdentifiers;
    STUsageItem *_usageItem;
    PSSpecifier *_addAllowanceSpecifier;
}

- (void).cxx_destruct;
@property(readonly, copy) PSSpecifier *addAllowanceSpecifier; // @synthesize addAllowanceSpecifier=_addAllowanceSpecifier;
@property(readonly, nonatomic) STUsageItem *usageItem; // @synthesize usageItem=_usageItem;
@property(readonly, copy, nonatomic) NSSet *budgetedIdentifiers; // @synthesize budgetedIdentifiers=_budgetedIdentifiers;
- (void)_didFetchAppInfo:(id)arg1;
- (void)allowanceDetailControllerDidCancel:(id)arg1;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (void)_showAllowanceSetupListController:(id)arg1;
- (void)_showAllowanceDetailListController:(id)arg1;
- (id)_allowanceDetailText:(id)arg1;
- (id)_specifierForAllowance:(id)arg1;
- (void)_allowancesByIdentifierDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)initWithBudgetedIdentifiers:(id)arg1 usageItem:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

