//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNPhotoPickerProviderItemDelegate-Protocol.h>
#import <ContactsUI/CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate-Protocol.h>
#import <ContactsUI/UICollectionViewDataSource-Protocol.h>
#import <ContactsUI/UICollectionViewDelegate-Protocol.h>
#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, CNVisualIdentityEditablePrimaryAvatarViewController, CNVisualIdentityItemEditorSegmentedControl, NSArray, NSLayoutConstraint, NSString, UICollectionView, UIView;
@protocol CNVisualIdentityItemEditorViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNVisualIdentityItemEditorViewController : UIViewController <UITextFieldDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CNPhotoPickerProviderItemDelegate, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate>
{
    id <CNVisualIdentityItemEditorViewControllerDelegate> _delegate;
    CNVisualIdentityEditablePrimaryAvatarViewController *_editableAvatarViewController;
    CNVisualIdentityItemEditorSegmentedControl *_segmentedControl;
    NSLayoutConstraint *_avatarViewSizeConstraint;
    NSLayoutConstraint *_avatarViewTopConstraint;
    NSLayoutConstraint *_segmentedControlHeightConstraint;
    UICollectionView *_styleCollectionView;
    UIView *_styleDividerView;
    CNPhotoPickerVariantsManager *_variantsManager;
    NSArray *_variantProviderItems;
    CNPhotoPickerProviderItem *_providerItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNPhotoPickerProviderItem *providerItem; // @synthesize providerItem=_providerItem;
@property(retain, nonatomic) NSArray *variantProviderItems; // @synthesize variantProviderItems=_variantProviderItems;
@property(retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(retain, nonatomic) UIView *styleDividerView; // @synthesize styleDividerView=_styleDividerView;
@property(retain, nonatomic) UICollectionView *styleCollectionView; // @synthesize styleCollectionView=_styleCollectionView;
@property(retain, nonatomic) NSLayoutConstraint *segmentedControlHeightConstraint; // @synthesize segmentedControlHeightConstraint=_segmentedControlHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *avatarViewTopConstraint; // @synthesize avatarViewTopConstraint=_avatarViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *avatarViewSizeConstraint; // @synthesize avatarViewSizeConstraint=_avatarViewSizeConstraint;
@property(retain, nonatomic) CNVisualIdentityItemEditorSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) CNVisualIdentityEditablePrimaryAvatarViewController *editableAvatarViewController; // @synthesize editableAvatarViewController=_editableAvatarViewController;
@property(nonatomic) __weak id <CNVisualIdentityItemEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)styleContainerTopMargin;
- (double)segmentedControlTopMargin;
- (double)fontSizeForContainerSize:(double)arg1;
- (double)textFieldFontSize;
- (double)editableAvatarViewEdgeLength;
- (_Bool)editableAvatarViewControllerShouldBecomeFirstResponder:(id)arg1;
- (void)editableAvatarViewController:(id)arg1 didUpdateWithProviderItem:(id)arg2;
- (void)providerItemDidUpdate:(id)arg1;
- (void)generateProviderItems;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didTapSegmentedControl:(id)arg1;
- (void)didTapDone;
- (void)didTapCancel;
- (_Bool)isEmojiProviderItemType;
- (id)updatedProviderItem;
- (long long)numberOfItemsPerRow;
- (void)updateFlowLayoutItemSize;
- (_Bool)shouldShowStyleCollectionView;
- (void)hideStyleCollectionView;
- (void)setupViewWithProviderItem:(id)arg1;
- (void)setupStyleCollectionView;
- (void)setupSegmentedControl;
- (void)switchEditorToMode:(unsigned long long)arg1;
- (_Bool)shouldBeginEditing;
- (void)beginEditingAvatar;
- (void)forceEmojiKeyboardIfNeeded;
- (void)didTapEditableAvatar:(id)arg1;
- (void)setupEditableAvatarViewController;
- (void)updateDoneButtonEnabledStateForText:(id)arg1;
- (void)setupBarButtonItems;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (double)editorViewBottomYForAvatarSize:(double)arg1 withContainerTopMargin:(double)arg2;
- (void)adjustAvatarViewConstraintsForKeyboardFrame:(struct CGRect)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithProviderItem:(id)arg1 variantsManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
