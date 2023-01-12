//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUTriggerSummaryActionGridViewControllerDelegate-Protocol.h>

@class HUTriggerSummaryActionGridViewController, NSString;
@protocol HUTriggerActionSetsModuleControllerDelegate;

@interface HUTriggerActionSetsModuleController <HUTriggerSummaryActionGridViewControllerDelegate>
{
    HUTriggerSummaryActionGridViewController *_actionSetsGridViewController;
    HUTriggerSummaryActionGridViewController *_serviceActionsGridViewController;
    HUTriggerSummaryActionGridViewController *_prioritizedServiceActionsGridViewController;
    id <HUTriggerActionSetsModuleControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HUTriggerActionSetsModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)triggerSummaryActionGridViewController:(id)arg1 didUpdateTriggerBuilder:(id)arg2;
- (_Bool)triggerSummaryActionGridViewController:(id)arg1 shouldShowAction:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
@property(readonly, nonatomic) HUTriggerSummaryActionGridViewController *prioritizedServiceActionsGridViewController; // @synthesize prioritizedServiceActionsGridViewController=_prioritizedServiceActionsGridViewController;
@property(readonly, nonatomic) HUTriggerSummaryActionGridViewController *serviceActionsGridViewController; // @synthesize serviceActionsGridViewController=_serviceActionsGridViewController;
@property(readonly, nonatomic) HUTriggerSummaryActionGridViewController *actionSetsGridViewController; // @synthesize actionSetsGridViewController=_actionSetsGridViewController;
- (id)childViewControllersToPreload;
- (void)reloadActions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
