//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HFExecutionEnvironmentObserver-Protocol.h>
#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HUItemManagerContainer-Protocol.h>
#import <HomeUI/HUItemPresentationContainer-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class HFItem, HFItemManager, HUGridLayoutOptions, NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol NACancelable;

@interface HUItemTableViewController <HFExecutionEnvironmentObserver, HFItemManagerDelegate, HUItemManagerContainer, HUItemPresentationContainer, HUPreloadableViewController>
{
    _Bool _wantsPreferredContentSize;
    _Bool _hasFinishedInitialLoad;
    _Bool _visibilityUpdatesEnabled;
    HFItemManager *_itemManager;
    NSMutableArray *_foregroundUpdateFutures;
    NSMutableSet *_registeredCellClasses;
    id <NACancelable> _deferredVisibilityUpdate;
    NSMapTable *_textFieldToIndexPathMap;
    NSMapTable *_indexPathToTextFieldMap;
    HUGridLayoutOptions *_gridLayoutOptions;
}

+ (unsigned long long)updateMode;
+ (_Bool)adoptsDefaultGridLayoutMargins;
@property(retain, nonatomic) HUGridLayoutOptions *gridLayoutOptions; // @synthesize gridLayoutOptions=_gridLayoutOptions;
@property(readonly, nonatomic) NSMapTable *indexPathToTextFieldMap; // @synthesize indexPathToTextFieldMap=_indexPathToTextFieldMap;
@property(readonly, nonatomic) NSMapTable *textFieldToIndexPathMap; // @synthesize textFieldToIndexPathMap=_textFieldToIndexPathMap;
@property(retain, nonatomic) id <NACancelable> deferredVisibilityUpdate; // @synthesize deferredVisibilityUpdate=_deferredVisibilityUpdate;
@property(nonatomic) _Bool visibilityUpdatesEnabled; // @synthesize visibilityUpdatesEnabled=_visibilityUpdatesEnabled;
@property(readonly, nonatomic) NSMutableSet *registeredCellClasses; // @synthesize registeredCellClasses=_registeredCellClasses;
@property(retain, nonatomic) NSMutableArray *foregroundUpdateFutures; // @synthesize foregroundUpdateFutures=_foregroundUpdateFutures;
@property(nonatomic) _Bool hasFinishedInitialLoad; // @synthesize hasFinishedInitialLoad=_hasFinishedInitialLoad;
@property(retain, nonatomic) HFItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(nonatomic) _Bool wantsPreferredContentSize; // @synthesize wantsPreferredContentSize=_wantsPreferredContentSize;
- (void).cxx_destruct;
- (void)recursivelyDisableItemUpdates:(_Bool)arg1 withReason:(id)arg2;
@property(readonly, nonatomic) HFItem *hu_presentedItem;
- (void)executionEnvironmentRunningStateDidChange:(id)arg1;
- (id)hu_preloadContent;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)highlightItemAnimated:(id)arg1 duration:(double)arg2;
- (void)highlightItemAnimated:(id)arg1;
- (void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned long long)arg2;
- (void)itemManager:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)itemManager:(id)arg1 didInsertSections:(id)arg2;
- (void)itemManager:(id)arg1 didRemoveSections:(id)arg2;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (long long)_rowAnimationForOperationType:(unsigned long long)arg1 item:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_updateLayoutMarginsForCells:(id)arg1;
- (_Bool)_shouldHideFooterForSection:(long long)arg1;
- (_Bool)_shouldHideHeaderForSection:(long long)arg1;
- (void)_updateTableHeaderAndFooter;
- (void)_updateTitle;
- (id)_itemForTextField:(id)arg1;
- (id)_visibleCellForItem:(id)arg1;
- (void)_performCommonUpdateForCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)_dispatchUpdateForCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (id)textFieldForVisibleItem:(id)arg1;
- (id)moduleControllerForItem:(id)arg1;
- (id)subclass_preloadContent;
- (id)childViewControllersToPreload;
- (id)itemTableFooterView;
- (id)itemTableHeaderView;
- (id)itemTableFooterMessage;
- (id)itemTableHeaderMessage;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)automaticallyUpdatesViewControllerTitle;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)itemModuleControllers;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

