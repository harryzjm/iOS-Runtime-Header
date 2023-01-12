//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUICellularDataPlanDetailGroup : NSObject
{
    PSListController *_listController;
    PSSpecifier *_groupSpecifier;
}

+ (void)configurePlanSpecifiers:(id)arg1 planItem:(id)arg2 target:(id)arg3;
+ (id)accountManageButtonForPlanItem:(id)arg1 target:(id)arg2;
+ (id)specifiersFromCellularPlanItem:(id)arg1 target:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
- (id)getLogger;
- (void)managePlanPressed:(id)arg1;
- (id)removeCellularPlanConfirmationTitle:(id)arg1;
- (id)removeCellularPlanConfirmationMessage:(id)arg1;
- (id)localizedManageAccountAlertTitle:(id)arg1;
- (id)lastUpdatedText;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

