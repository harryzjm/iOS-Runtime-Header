//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNAccountsAndGroupsActionsProvider, CNAccountsAndGroupsAuthorizationContext, CNAccountsAndGroupsDataSource, CNContainerDataSource, CNManagedConfiguration, CNUIEditAuthorizationController, CNUIGroupsAndContainersSaveManager, CNUIUserActivityManager, NSString, UIBarButtonItem, UICollectionView, UICollectionViewDiffableDataSource, UIKeyCommand, _UIDiffableDataSourceOutlineSectionController;
@protocol CNAccountsAndGroupsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsViewController : UIViewController
{
    _Bool _allowsEditing;
    _Bool _allowsCanceling;
    _Bool _allowsDone;
    _Bool _needsReload;
    _Bool _isVisible;
    CNAccountsAndGroupsDataSource *_dataSource;
    CNManagedConfiguration *_managedConfiguration;
    id <CNAccountsAndGroupsViewControllerDelegate> _delegate;
    CNUIGroupsAndContainersSaveManager *_groupsAndContainersSaveManager;
    CNUIEditAuthorizationController *_editAuthorizationController;
    CNContainerDataSource *_containerDataSource;
    CNAccountsAndGroupsAuthorizationContext *_currentAuthorizationContext;
    CNAccountsAndGroupsActionsProvider *_actionsProvider;
    CNUIUserActivityManager *_activityManager;
    long long _buttonBehavior;
    UIKeyCommand *_addGroupKeyCommand;
    UIViewController *_potentiallyPresentedViewController;
    UICollectionView *_collectionView;
    _UIDiffableDataSourceOutlineSectionController *_sectionController;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    UIBarButtonItem *_addGroupBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
}

+ (id)allowedDropTypes;
+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *addGroupBarButtonItem; // @synthesize addGroupBarButtonItem=_addGroupBarButtonItem;
@property(retain) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain) _UIDiffableDataSourceOutlineSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(retain) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIViewController *potentiallyPresentedViewController; // @synthesize potentiallyPresentedViewController=_potentiallyPresentedViewController;
@property(retain, nonatomic) UIKeyCommand *addGroupKeyCommand; // @synthesize addGroupKeyCommand=_addGroupKeyCommand;
@property(nonatomic) long long buttonBehavior; // @synthesize buttonBehavior=_buttonBehavior;
@property(readonly, nonatomic) CNUIUserActivityManager *activityManager; // @synthesize activityManager=_activityManager;
@property(retain, nonatomic) CNAccountsAndGroupsActionsProvider *actionsProvider; // @synthesize actionsProvider=_actionsProvider;
@property(retain, nonatomic) CNAccountsAndGroupsAuthorizationContext *currentAuthorizationContext; // @synthesize currentAuthorizationContext=_currentAuthorizationContext;
@property(retain, nonatomic) CNContainerDataSource *containerDataSource; // @synthesize containerDataSource=_containerDataSource;
@property(retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController; // @synthesize editAuthorizationController=_editAuthorizationController;
@property(retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // @synthesize groupsAndContainersSaveManager=_groupsAndContainersSaveManager;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) _Bool allowsDone; // @synthesize allowsDone=_allowsDone;
@property(nonatomic) _Bool allowsCanceling; // @synthesize allowsCanceling=_allowsCanceling;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) __weak id <CNAccountsAndGroupsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(retain, nonatomic) CNAccountsAndGroupsDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateUserActivity;
- (id)presentingViewControllerForActions;
- (void)actionDidFinish:(id)arg1;
- (void)action:(id)arg1 presentViewController:(id)arg2;
- (void)expandLargeTitle;
- (void)expandLargeTitleIfNeeded;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dismissKeyboard;
- (void)didTapCollectionView:(id)arg1;
- (void)showEditAuthorizationPaneWithAuthorizationContext:(id)arg1 animated:(_Bool)arg2;
- (void)presentErrorAlertWithTitle:(id)arg1 message:(id)arg2 animated:(_Bool)arg3;
- (void)presentErrorAlertWithMessage:(id)arg1 animated:(_Bool)arg2;
- (void)presentController:(id)arg1 animated:(_Bool)arg2;
- (void)editAuthorizationController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2;
- (void)authorizedAddContacts:(id)arg1 toDestinationItem:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (id)multitaskingDragExclusionRects;
- (void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 dismissalPreviewForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 highlightPreviewForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)item:(id)arg1 didEndEditingWithName:(id)arg2;
- (void)cellTextViewDidChangeHeight;
- (_Bool)isCollectionViewEditing;
- (void)selectAllContacts;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)shouldEnableItem:(id)arg1;
- (void)configureDataSource;
- (id)layout;
- (id)groupsStyle;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (_Bool)viewCanReload;
- (_Bool)isNotificationInternalSave:(id)arg1;
- (void)contactStoreDidChange:(id)arg1;
- (void)deselectAllItems;
- (_Bool)isAnyListCellCurrentlyEditing;
- (void)setEditingForGroupItem:(id)arg1;
- (void)restoreCurrentlyEditingGroupIfNeeded;
- (id)currentlySelectedItem;
- (void)updateSelectionIfNeeded;
- (void)resignAllFirstRespondersSavingCurrentlyEditing:(_Bool)arg1;
- (void)expandSectionForAccountWithIdentifier:(id)arg1;
- (void)reloadData;
- (void)reloadCollectionViewForSectionWithIdentifier:(id)arg1 settingFilterForEditingItem:(_Bool)arg2 allowsReloadWhenEditing:(_Bool)arg3;
- (void)reloadCollectionViewAddingPlaceholderItem:(id)arg1 inSectionWithIdentifier:(id)arg2;
- (void)removePlaceholderCellsIfNeededInSection:(id)arg1 animated:(_Bool)arg2;
- (void)cleanUpItemIfNeeded:(id)arg1;
- (void)reloadCollectionViewDeletingItem:(id)arg1;
- (void)cancel:(id)arg1;
- (void)updateToolbarVisibility;
- (void)updateNavigationButtons;
- (void)clearNavigationButtonsIfNeeded;
- (_Bool)shouldShowCancelButton;
- (id)menuForContainers;
- (void)reloadAddGroupButton;
- (void)addDefaultGroup:(id)arg1;
- (void)authorizedSetCollectionViewEditing:(_Bool)arg1;
- (void)authorizedSetViewEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)editingCollectionViewRequiresAuthorization;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUpCollectionView;
- (void)dealloc;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)shouldSetFirstResponder;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewIsAppearing:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

