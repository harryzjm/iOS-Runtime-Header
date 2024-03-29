//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString, PHAsset, PLCloudSharedComment, PLManagedAsset, PUPhotoCommentEntryView, UITableView;
@protocol PUCommentsTableDataControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCommentsTableDataController : NSObject
{
    NSCache *_commentsHeightCache;
    PUPhotoCommentEntryView *_entryView;
    _Bool _hasPendingChanges;
    _Bool _editing;
    _Bool _shouldUseCompactCommentSeparators;
    UITableView *_tableView;
    PHAsset *_asset;
    id <PUCommentsTableDataControllerDelegate> _delegate;
    PLManagedAsset *_managedAsset;
    PLCloudSharedComment *_justInsertedComment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PLCloudSharedComment *justInsertedComment; // @synthesize justInsertedComment=_justInsertedComment;
@property(retain, nonatomic) PLManagedAsset *managedAsset; // @synthesize managedAsset=_managedAsset;
@property(nonatomic) __weak id <PUCommentsTableDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldUseCompactCommentSeparators; // @synthesize shouldUseCompactCommentSeparators=_shouldUseCompactCommentSeparators;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)photoCommentEntryViewDidEndEditing:(id)arg1;
- (_Bool)photoCommentEntryViewShouldEndEditing:(id)arg1;
- (void)photoCommentEntryViewDidBeginEditing:(id)arg1;
- (void)photoCommentEntryViewWillBeginEditing:(id)arg1;
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_validateAndPostComment:(id)arg1;
- (void)_fontCacheDidChange:(id)arg1;
- (void)_postCommentWithText:(id)arg1;
- (_Bool)_canPostCommentWithText:(id)arg1 localizedFailureDescription:(id *)arg2;
- (id)_commentText;
- (double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
- (void)_scrollToComment:(id)arg1 animated:(_Bool)arg2;
- (id)_currentEntryView;
- (long long)_textCommentSection;
- (long long)_postCommentSection;
- (long long)_assetOwnerCommentSection;
- (long long)_smileCommentSection;
- (_Bool)_isAssetOwnerSectionVisible;
- (void)_updateFirstResponder;
@property(readonly, nonatomic) double minimumHeight;
- (void)dealloc;
- (id)init;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

