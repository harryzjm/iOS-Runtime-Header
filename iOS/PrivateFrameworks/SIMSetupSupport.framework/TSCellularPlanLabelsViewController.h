//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistantUI/BFFSplashController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UINavigationControllerDelegate-Protocol.h>
#import <SIMSetupSupport/UITableViewDataSource-Protocol.h>
#import <SIMSetupSupport/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, TSCellularPlanLabelPickerViewController, UIColor, UITableView;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanLabelsViewController : BFFSplashController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem>
{
    _Bool _allowDismiss;
    id <TSSIMSetupFlowDelegate> _delegate;
    UITableView *_tableView;
    NSMutableArray *_sortedPlanItemsWithPendingLabels;
    TSCellularPlanLabelPickerViewController *_labelPickerViewController;
    NSArray *_planItemBadges;
    UIColor *_buttonSystemBlue;
    NSString *_iccid;
}

@property(readonly) NSString *iccid; // @synthesize iccid=_iccid;
@property _Bool allowDismiss; // @synthesize allowDismiss=_allowDismiss;
@property(retain) UIColor *buttonSystemBlue; // @synthesize buttonSystemBlue=_buttonSystemBlue;
@property(retain) NSArray *planItemBadges; // @synthesize planItemBadges=_planItemBadges;
@property(retain) TSCellularPlanLabelPickerViewController *labelPickerViewController; // @synthesize labelPickerViewController=_labelPickerViewController;
@property(retain) NSMutableArray *sortedPlanItemsWithPendingLabels; // @synthesize sortedPlanItemsWithPendingLabels=_sortedPlanItemsWithPendingLabels;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepare:(CDUnknownBlockType)arg1;
- (id)getPredefinedUserLabels;
- (id)getPendingLabelAtIndex:(long long)arg1;
- (id)getPlanItemByIndex:(long long)arg1;
- (void)setPendingLabel:(id)arg1 forPlanItem:(id)arg2;
- (id)formattedPhoneNumber:(id)arg1;
- (void)savePlanLabels:(CDUnknownBlockType)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)leftCancelButtonTapped;
- (void)viewDidLoad;
- (id)initWithIccid:(id)arg1 allowDismiss:(_Bool)arg2;
- (id)initWithAllowDismiss:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
