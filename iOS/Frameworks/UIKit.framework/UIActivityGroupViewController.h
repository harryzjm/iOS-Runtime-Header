//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/_UIActivityGroupViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSIndexPath, NSString, UILongPressGestureRecognizer, _UIActivityUserDefaults, _UIUserDefaultsActivity;
@protocol UIActivityGroupViewControllerDataSource, UIActivityGroupViewControllerDelegate;

@interface UIActivityGroupViewController <_UIActivityGroupViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    _Bool _hasActivities;
    _Bool _activityIndexDidChangeWhileDragging;
    _Bool _allowsUserCustomization;
    _Bool _darkStyleOnLegacyApp;
    _Bool _embedded;
    _Bool _picker;
    id <UIActivityGroupViewControllerDelegate> _delegate;
    long long _activityCategory;
    NSArray *_activities;
    NSArray *_visibleActivities;
    _UIActivityUserDefaults *_userDefaults;
    _UIUserDefaultsActivity *_userDefaultsActivity;
    UILongPressGestureRecognizer *_editingGestureRecognizer;
    NSIndexPath *_indexPathForMenuActivity;
    id <UIActivityGroupViewControllerDataSource> _dataSource;
    struct CGPoint _initialDraggingLocation;
    struct UIEdgeInsets _externalSafeInset;
}

+ (void)contentSizeCategoryDidChange;
@property(nonatomic) __weak id <UIActivityGroupViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct UIEdgeInsets externalSafeInset; // @synthesize externalSafeInset=_externalSafeInset;
@property(nonatomic, getter=isPicker) _Bool picker; // @synthesize picker=_picker;
@property(nonatomic, getter=isEmbedded) _Bool embedded; // @synthesize embedded=_embedded;
@property(nonatomic) _Bool darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
@property(nonatomic) _Bool allowsUserCustomization; // @synthesize allowsUserCustomization=_allowsUserCustomization;
@property(copy, nonatomic) NSIndexPath *indexPathForMenuActivity; // @synthesize indexPathForMenuActivity=_indexPathForMenuActivity;
@property(nonatomic) _Bool activityIndexDidChangeWhileDragging; // @synthesize activityIndexDidChangeWhileDragging=_activityIndexDidChangeWhileDragging;
@property(nonatomic) struct CGPoint initialDraggingLocation; // @synthesize initialDraggingLocation=_initialDraggingLocation;
@property(retain, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer; // @synthesize editingGestureRecognizer=_editingGestureRecognizer;
@property(retain, nonatomic) _UIUserDefaultsActivity *userDefaultsActivity; // @synthesize userDefaultsActivity=_userDefaultsActivity;
@property(retain, nonatomic) _UIActivityUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSArray *visibleActivities; // @synthesize visibleActivities=_visibleActivities;
@property(nonatomic) _Bool hasActivities; // @synthesize hasActivities=_hasActivities;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property(nonatomic) __weak id <UIActivityGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)registerClassForContentSizeCategoryChanges;
- (void)activityUserDefaultsDidChange:(id)arg1;
- (void)ignoreUserDefaultsChangesWhileUsingBlock:(CDUnknownBlockType)arg1;
- (void)unregisterForActivityUserDefaultsChanges;
- (void)registerForActivityUserDefaultsChanges;
- (void)hideItemAtIndexPath:(id)arg1;
- (id)activityGroupViewLayout;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)_cachedPreferredItemSizeForString:(id)arg1;
- (id)collectionView:(id)arg1 layout:(id)arg2 needsContainerViewForDraggingItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 moveItemAtIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (id)targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2;
- (void)_dismissPresentedMenuControllers;
- (void)handleEditingGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)_updateItemSizeIfNeeded;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)_titleTextForActivity:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)activityForItemAtIndexPath:(id)arg1;
- (void)_performHideActivityForMenuController:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)_setVisibleActivities:(id)arg1 animated:(_Bool)arg2;
- (void)_updateVisibleActivitiesAnimated:(_Bool)arg1;
- (void)_setActivities:(id)arg1 animated:(_Bool)arg2;
- (void)setActivities:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithActivityCategory:(long long)arg1 userDefaults:(id)arg2 userDefaultsIdentifier:(id)arg3;
- (id)initWithActivityCategory:(long long)arg1 userDefaults:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
