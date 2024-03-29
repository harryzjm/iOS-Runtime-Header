//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewController.h>

@class NSString, PHFetchResult;

__attribute__((visibility("hidden")))
@interface PUImportSettingsHistoryDebugViewController : UICollectionViewController
{
    PHFetchResult *_importSessions;
}

+ (void)_updateFlowLayout:(id)arg1 withBounds:(struct CGRect)arg2 traitCollection:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) PHFetchResult *importSessions; // @synthesize importSessions=_importSessions;
- (id)_assetsForSection:(long long)arg1;
- (id)_assetForIndexPath:(id)arg1;
- (void)_scrollToBottom:(id)arg1;
- (void)_reloadData;
- (void)photoLibraryDidChange:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_updateTitle;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

