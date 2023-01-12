//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNContact, CNMeCardSharingOnboardingAvatarCarouselItem, CNMeCardSharingOnboardingAvatarCarouselLayout, CNSharingProfileLogger, NSArray, NSString, PRMonogramColor, UICollectionView;
@protocol AVTAvatarRecord, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselViewController : UIViewController
{
    id <CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> _delegate;
    PRMonogramColor *_monogramColor;
    NSArray *_items;
    UICollectionView *_collectionView;
    CNMeCardSharingOnboardingAvatarCarouselLayout *_layout;
    id <AVTAvatarRecord> _avatarRecord;
    CNContact *_contact;
    CNMeCardSharingOnboardingAvatarCarouselItem *_photoPickerItem;
    CNMeCardSharingOnboardingAvatarCarouselItem *_animojiItem;
    CNMeCardSharingOnboardingAvatarCarouselItem *_photoItem;
    CNMeCardSharingOnboardingAvatarCarouselItem *_monogramItem;
    CNSharingProfileLogger *_logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNSharingProfileLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *monogramItem; // @synthesize monogramItem=_monogramItem;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoItem; // @synthesize photoItem=_photoItem;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *animojiItem; // @synthesize animojiItem=_animojiItem;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoPickerItem; // @synthesize photoPickerItem=_photoPickerItem;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) PRMonogramColor *monogramColor; // @synthesize monogramColor=_monogramColor;
@property(nonatomic) __weak id <CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollToItemAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *selectedItem;
- (void)notifyDelegateOfUpdateToCenterMostItem;
- (id)monogramImageItemWithContact:(id)arg1;
- (id)contactImageItemWithContact:(id)arg1;
- (void)reloadForUpdatedMonogram;
- (void)reloadForUpdatedContactPhoto;
- (id)standardItems;
- (id)itemsForNoAnimojiAndNoPhoto;
- (void)buildItems;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

