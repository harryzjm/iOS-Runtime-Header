//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKQLPreviewControllerDelegate-Protocol.h>
#import <ChatKit/CKSharedAssetsControllerProtocol-Protocol.h>
#import <ChatKit/CKSharedContentsCollectionViewCellDelegate-Protocol.h>
#import <ChatKit/CNAvatarViewDelegate-Protocol.h>
#import <ChatKit/UICollectionViewDataSource-Protocol.h>
#import <ChatKit/UICollectionViewDelegate-Protocol.h>
#import <ChatKit/UICollectionViewDragSource-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>
#import <ChatKit/UIViewControllerPreviewingDelegate-Protocol.h>

@class CKQLDetailsPreviewController, NSArray, NSString, UIBarButtonItem, UICollectionView, UICollectionViewFlowLayout, UIView;
@protocol CKSharedAssetsControllerDelegate;

@interface CKSharedContentsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, UICollectionViewDragSource, UIViewControllerPreviewingDelegate, CKQLPreviewControllerDelegate, UIGestureRecognizerDelegate, CKSharedContentsCollectionViewCellDelegate, CKSharedAssetsControllerProtocol>
{
    _Bool _selectingAttachments;
    UICollectionView *_collectionView;
    id <CKSharedAssetsControllerDelegate> _delegate;
    UICollectionViewFlowLayout *_collectionviewLayout;
    CKQLDetailsPreviewController *_qlPreviewController;
    UIView *_topmostMarkerView;
    NSArray *_attachmentItems;
    UIBarButtonItem *_saveButton;
    UIBarButtonItem *_deleteButton;
    NSArray *_parentRightBarButtonItemsToRestore;
}

@property(retain, nonatomic) NSArray *parentRightBarButtonItemsToRestore; // @synthesize parentRightBarButtonItemsToRestore=_parentRightBarButtonItemsToRestore;
@property(retain, nonatomic) UIBarButtonItem *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic, getter=isSelectingAttachments) _Bool selectingAttachments; // @synthesize selectingAttachments=_selectingAttachments;
@property(retain, nonatomic) NSArray *attachmentItems; // @synthesize attachmentItems=_attachmentItems;
@property(retain, nonatomic) UIView *topmostMarkerView; // @synthesize topmostMarkerView=_topmostMarkerView;
@property(retain, nonatomic) CKQLDetailsPreviewController *qlPreviewController; // @synthesize qlPreviewController=_qlPreviewController;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionviewLayout; // @synthesize collectionviewLayout=_collectionviewLayout;
@property(nonatomic) __weak id <CKSharedAssetsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (id)_collectionView:(id)arg1 dragItemsForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)deleteSelectedContents:(id)arg1;
- (void)saveSelectedContents:(id)arg1;
- (void)cancelSelectingContents:(id)arg1;
- (void)deleteContents:(id)arg1;
- (void)performAction:(SEL)arg1 forSharedContentsCollectionViewCell:(id)arg2;
- (void)sharedContentsCollectionViewCellDidTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)committedViewControllerForPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(struct CGRect *)arg3 realSize:(struct CGSize *)arg4;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (_Bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewControllerDidCancelDismiss:(id)arg1;
- (id)invisibleInkEffectControllerForPreviewController:(id)arg1;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)selectedAttachmentIndexes;
- (_Bool)isDisplayingAttachmentContent;
- (void)parentScrollViewDidScroll:(struct CGPoint)arg1;
- (void)updateAttachmentItems:(id)arg1;
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;
- (unsigned long long)assetType;
- (double)cellAspectRatio;
- (long long)numberOfItemsInRow;
- (double)paddingTopBottomForCell;
- (double)paddingLeftRightForCell;
- (void)updateToolbar;
- (void)teardownToolbar;
- (void)setupToolbar;
- (_Bool)isJ99LandscapeModeFullScreen;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithAttachmentItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

