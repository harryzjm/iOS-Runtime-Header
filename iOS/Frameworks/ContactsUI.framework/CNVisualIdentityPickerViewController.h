//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNPhotoPickerActionsViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNPhotoPickerHeaderViewDelegate-Protocol.h>
#import <ContactsUI/CNPhotoPickerProviderGroupDelegate-Protocol.h>
#import <ContactsUI/CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNVisualIdentityItemEditorViewControllerDelegate-Protocol.h>
#import <ContactsUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <ContactsUI/UICollectionViewDataSource-Protocol.h>
#import <ContactsUI/UICollectionViewDelegate-Protocol.h>
#import <ContactsUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <ContactsUI/UIImagePickerControllerDelegate-Protocol.h>
#import <ContactsUI/UINavigationControllerDelegate-Protocol.h>

@class CNAvatarEditingManager, CNContactStyle, CNPhotoPickerActionsViewController, CNPhotoPickerDataSource, CNPhotoPickerHeaderView, CNPhotoPickerProviderItem, CNVisualIdentity, CNVisualIdentityEditablePrimaryAvatarViewController, NSString, UICollectionView;
@protocol CNVisualIdentityPickerViewControllerDelegate;

@interface CNVisualIdentityPickerViewController : UIViewController <UINavigationControllerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, CNPhotoPickerHeaderViewDelegate, UIAdaptivePresentationControllerDelegate, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate, CNPhotoPickerProviderGroupDelegate, CNPhotoPickerActionsViewControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate>
{
    _Bool _allowRotation;
    id <CNVisualIdentityPickerViewControllerDelegate> _delegate;
    NSString *_assignActionTitleOverride;
    UICollectionView *_collectionView;
    CNPhotoPickerProviderItem *_lastSelectedProviderItem;
    CNPhotoPickerProviderItem *_editingProviderItem;
    CNPhotoPickerProviderItem *_duplicatingProviderItem;
    CNAvatarEditingManager *_avatarEditingManager;
    CNPhotoPickerActionsViewController *_actionsViewController;
    CNVisualIdentityEditablePrimaryAvatarViewController *_editablePrimaryAvatarController;
    CNContactStyle *_contactStyle;
    CNPhotoPickerHeaderView *_headerView;
    CNVisualIdentity *_pendingVisualIdentity;
    CNPhotoPickerDataSource *_dataSource;
}

+ (id)imagePickerForVisualIdentity:(id)arg1;
+ (id)imagePickerForGroupIdentity:(id)arg1;
+ (id)imagePickerForContact:(id)arg1;
+ (_Bool)canShowAvatarEditor;
+ (double)itemsPerRowForWidth:(double)arg1;
+ (id)photoPickerForGameCenterWithContact:(id)arg1;
+ (id)navigationControllerForPicker:(id)arg1;
+ (struct CGSize)defaultItemSize;
+ (struct CGSize)defaultContentSize;
+ (_Bool)canShowPhotoPickerForView:(id)arg1 withTraitCollection:(id)arg2;
+ (id)descriptorForRequiredKeys;
+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNPhotoPickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CNVisualIdentity *pendingVisualIdentity; // @synthesize pendingVisualIdentity=_pendingVisualIdentity;
@property(retain, nonatomic) CNPhotoPickerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool allowRotation; // @synthesize allowRotation=_allowRotation;
@property(retain, nonatomic) CNContactStyle *contactStyle; // @synthesize contactStyle=_contactStyle;
@property(retain, nonatomic) CNVisualIdentityEditablePrimaryAvatarViewController *editablePrimaryAvatarController; // @synthesize editablePrimaryAvatarController=_editablePrimaryAvatarController;
@property(retain, nonatomic) CNPhotoPickerActionsViewController *actionsViewController; // @synthesize actionsViewController=_actionsViewController;
@property(retain, nonatomic) CNAvatarEditingManager *avatarEditingManager; // @synthesize avatarEditingManager=_avatarEditingManager;
@property(retain, nonatomic) CNPhotoPickerProviderItem *duplicatingProviderItem; // @synthesize duplicatingProviderItem=_duplicatingProviderItem;
@property(retain, nonatomic) CNPhotoPickerProviderItem *editingProviderItem; // @synthesize editingProviderItem=_editingProviderItem;
@property(retain, nonatomic) CNPhotoPickerProviderItem *lastSelectedProviderItem; // @synthesize lastSelectedProviderItem=_lastSelectedProviderItem;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSString *assignActionTitleOverride; // @synthesize assignActionTitleOverride=_assignActionTitleOverride;
@property(nonatomic) __weak id <CNVisualIdentityPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewController:(id)arg1 didSelectUpdatedProviderItem:(id)arg2;
- (void)updateForSelectedProviderItem:(id)arg1;
- (void)didCancelEditingProviderItemFromViewController:(id)arg1;
- (void)presentEditItemViewController:(id)arg1 fromViewController:(id)arg2;
- (void)editableAvatarViewController:(id)arg1 didUpdateWithProviderItem:(id)arg2;
- (void)visualIdentityEditorController:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)visualIdentityEditorControllerDidCancel:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)saveItemToRecentsImageStore:(id)arg1;
- (void)deleteItemFromRecentsImageStore:(id)arg1;
- (void)presentDismissConfirmation;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (_Bool)isModalInPresentation;
- (void)photoPickerActionsViewControllerDidFinish:(id)arg1;
- (void)photoPickerActionsViewController:(id)arg1 didPerformAction:(long long)arg2 withProviderItem:(id)arg3 atIndexPath:(id)arg4;
- (void)presentActionsViewControllerForProviderItem:(id)arg1 atIndexPath:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)providerItemFromPhotoPickerInfo:(id)arg1;
- (void)presentImagePicker:(id)arg1 withStyle:(long long)arg2 fromViewController:(id)arg3;
- (id)createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2;
- (_Bool)isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)updateEmojiSuggestionsForUpdatedVisualIdentity:(id)arg1 locale:(id)arg2;
- (void)updateMonogramsForUpdatedVisualIdentity:(id)arg1;
- (void)updateVisualIdentityWithName:(id)arg1 locale:(id)arg2;
- (void)photoPickerHeaderViewDidReceiveDroppedImageData:(id)arg1;
- (void)photoPickerHeaderViewDidTapClearAvatarImageButton:(id)arg1;
- (void)photoPickerHeaderView:(id)arg1 didUpdateIdentityNameTextField:(id)arg2 withText:(id)arg3;
- (void)updateActiveIndexPathForUpdatedSuggestionsGroup:(id)arg1 atSectionIndex:(long long)arg2;
- (void)reloadItemsForUpdatedSuggestionsGroup:(id)arg1 atSectionIndex:(long long)arg2;
- (void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2;
- (void)photoPickerProviderGroupDidUpdate:(id)arg1;
- (void)presentEditImagePickerForImageData:(id)arg1 cropRect:(struct CGRect)arg2 fromViewController:(id)arg3;
- (void)presentCameraImagePicker;
- (void)presentLibraryImagePickerForIndexPath:(id)arg1;
- (void)showAvatarCropAndScaleForItem:(id)arg1 fromViewController:(id)arg2;
- (void)showAvatarPosePickerFromItem:(id)arg1 atIndexPath:(id)arg2;
- (void)showAvatarEditorForCreation;
- (long long)defaultModalPresentationStyle;
- (void)presentVisualIdentityItemEditorForItem:(id)arg1 fromViewController:(id)arg2;
- (void)selectItem:(id)arg1 presentFromViewControllerIfNeeded:(id)arg2;
- (_Bool)isEditingOrDuplicatingItem;
- (void)presentMonogramEditorFromIndexPath:(id)arg1;
- (void)presentEmojiEditor;
- (void)handleAddEmojiItemSelectedWithIndexPath:(id)arg1;
- (void)didSelectSuggestionsAddItemAtIndexPath:(id)arg1;
- (void)processSelectionForSuggestionsProviderItem:(id)arg1 atIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)headerActionPressedAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)contactImageForCurrentActiveItem;
- (void)setSuggestionsProviderItemAsActiveItem:(id)arg1;
- (void)deleteExistingItem:(id)arg1;
- (id)insertNewItem:(id)arg1 toGroupType:(long long)arg2 updateActive:(_Bool)arg3 scrollToItem:(_Bool)arg4;
- (id)insertNewItem:(id)arg1 toGroupType:(long long)arg2 updateActive:(_Bool)arg3;
- (void)updateHeaderViewAvatar;
- (void)updateDoneButtonEnabledState;
- (void)updateInjectedItemsSectionForProviderItem:(id)arg1;
- (void)updateVisualIdentityWithProviderItem:(id)arg1;
- (_Bool)hasPendingChanges;
- (void)updateActiveIndexPath:(id)arg1;
- (void)updateActiveIndexPath:(id)arg1 reload:(_Bool)arg2;
- (id)photoPickerNavigationControllerForRootController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)initializeHeaderView;
- (void)buildHeaderView;
- (void)buildCollectionView;
- (double)textFieldFontSize;
- (void)done:(id)arg1;
- (void)confirmCancelAction;
- (void)cancel:(id)arg1;
- (void)viewDidLoad;
- (id)visualIdentity;
- (id)initWithPhotosDataSource:(id)arg1 style:(id)arg2 allowRotation:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
