//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIGallerySwooshViewControllerDelegate-Protocol.h>

@class NSMapTable, NSString, SKUIGallerySwooshViewController, SKUISwooshPageComponent;

@interface SKUIGallerySwooshPageSection <SKUIArtworkRequestDelegate, SKUIGallerySwooshViewControllerDelegate>
{
    NSMapTable *_componentArtworkRequests;
    SKUIGallerySwooshViewController *_swooshViewController;
}

- (void).cxx_destruct;
- (id)_swooshViewController;
- (id)_newArtworkRequestWithArtwork:(id)arg1;
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didChangePlaybackState:(long long)arg2 forItemAtIndex:(long long)arg3;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUISwooshPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

