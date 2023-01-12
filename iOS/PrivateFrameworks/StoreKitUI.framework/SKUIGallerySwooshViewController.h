//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUISwooshViewController.h"

@class NSString, SKUISwooshPageComponent, SKUISwooshView, UICollectionView;
@protocol SKUIGallerySwooshViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGallerySwooshViewController : SKUISwooshViewController
{
    UICollectionView *_collectionView;
    _Bool _delegateWantsWillDisplay;
    SKUISwooshPageComponent *_gallerySwoosh;
    double _itemHeight;
    SKUISwooshView *_swooshView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SKUISwooshPageComponent *gallerySwoosh; // @synthesize gallerySwoosh=_gallerySwoosh;
- (id)_newViewWithMediaComponent:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)loadView;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
@property(nonatomic) __weak id <SKUIGallerySwooshViewControllerDelegate> delegate; // @dynamic delegate;
- (id)indexPathsForVisibleItems;
- (void)setColorScheme:(id)arg1;
- (void)performActionForItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)artworkForItemAtIndex:(long long)arg1;
- (id)initWithGallerySwoosh:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

