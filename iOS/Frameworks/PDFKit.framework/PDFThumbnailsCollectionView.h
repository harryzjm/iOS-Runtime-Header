//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSCache, NSString, PDFThumbnailView, UICollectionView, UICollectionViewDiffableDataSource;

__attribute__((visibility("hidden")))
@interface PDFThumbnailsCollectionView : UIView
{
    PDFThumbnailView *_thumbnailView;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSCache *_cache;
    UIView *_backgroundOnePixelView;
}

- (void).cxx_destruct;
- (void)movePageWithTransaction:(id)arg1;
- (void)movePage:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)insertPages:(id)arg1 atIndexes:(id)arg2;
- (void)removePages:(id)arg1;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)_insertFileAtURL:(id)arg1 type:(id)arg2 atIndex:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)supportedUTTypes;
- (void)_insertImageWithURL:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_insertPDFDocumentWithURL:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)_insertPagesFromProvidedPDFDocument:(id)arg1 atPageIndex:(unsigned long long)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)writePDFDocumentFromPages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)itemProvider:(id)arg1 registerFileRepresentationForPage:(id)arg2 draggedPages:(id)arg3;
- (void)itemProvider:(id)arg1 registerDataRepresentationForPage:(id)arg2 draggedPages:(id)arg3;
- (id)itemsForDragWithSession:(id)arg1 atIndexPath:(id)arg2;
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)pasteAfterPage:(id)arg1;
- (void)copyPage:(id)arg1;
- (id)defaultContextMenuForPage:(id)arg1;
- (id)_pasteActionIfAvailableAfterPage:(id)arg1;
- (_Bool)shouldDisplayActionButtonForPage:(id)arg1;
- (id)contextMenuForPage:(id)arg1;
- (id)contextMenuForBackgroundAtLocation:(struct CGPoint)arg1;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)previewForCollectionView:(id)arg1 indexPath:(id)arg2;
- (id)previewForCollectionView:(id)arg1 contextMenuInteraction:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)updateImageForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateActionsButtonVisibilityAtIndexPath:(id)arg1;
- (_Bool)_canEditDocument;
- (void)_selectAndScrollToCurrentPageIfNeeded;
- (void)_updateScrubber;
- (void)_reloadPage:(id)arg1;
- (void)pageChanged:(id)arg1;
- (void)currentPageChanged:(id)arg1;
- (void)documentMutated:(id)arg1;
- (void)documentChanged:(id)arg1;
- (id)currentPage;
- (void)updateIconsImages;
@property(nonatomic) _Bool allowsPageReordering;
- (struct CGSize)thumbnailSizeForPage:(id)arg1 displayBox:(long long)arg2 thumbnailView:(id)arg3;
- (struct CGSize)thumbnailSizeForPage:(id)arg1 displayBox:(long long)arg2;
- (struct CGSize)thumbnailSizeForPage:(id)arg1;
- (void)applySnapshotWithAnimation:(_Bool)arg1;
- (id)imageDrawingOperationQueue;
- (id)datasourceQueue;
- (void)loadImageWithPage:(id)arg1 displayBox:(long long)arg2 thumbnailView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)cachedImageForPage:(id)arg1 displayBox:(long long)arg2 thumbnailView:(id)arg3;
- (void)updateCacheForPage:(id)arg1 withImage:(id)arg2;
- (id)cacheKeyForPage:(id)arg1;
- (void)configureCell:(id)arg1 withPage:(id)arg2 indexPath:(id)arg3;
- (void)updateImageForCell:(id)arg1 indexPath:(id)arg2 page:(id)arg3;
- (id)makeDatasource;
- (id)initFromThumbnailView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

