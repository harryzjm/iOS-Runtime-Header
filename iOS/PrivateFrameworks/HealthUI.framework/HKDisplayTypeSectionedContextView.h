//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HealthUI/UICollectionViewDataSource-Protocol.h>
#import <HealthUI/UICollectionViewDelegate-Protocol.h>

@class HKDisplayTypeContextItem, HKDisplayTypeContextVerticalCollectionViewCell, NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewLayout;
@protocol HKDisplayTypeSectionedContextViewDelegate;

@interface HKDisplayTypeSectionedContextView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    long long _style;
    _Bool _bottomInsetsEnabled;
    UICollectionView *_collectionView;
    UICollectionViewLayout *_collectionViewLayout;
    NSIndexPath *_lastSelectedIndex;
    NSArray *_displayTypeContextSections;
    id <HKDisplayTypeSectionedContextViewDelegate> _delegate;
    HKDisplayTypeContextVerticalCollectionViewCell *_sizingCell;
    HKDisplayTypeContextItem *_sizingItem;
    double _sizingCellEstimatedHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double sizingCellEstimatedHeight; // @synthesize sizingCellEstimatedHeight=_sizingCellEstimatedHeight;
@property(retain, nonatomic) HKDisplayTypeContextItem *sizingItem; // @synthesize sizingItem=_sizingItem;
@property(retain, nonatomic) HKDisplayTypeContextVerticalCollectionViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(nonatomic) __weak id <HKDisplayTypeSectionedContextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *displayTypeContextSections; // @synthesize displayTypeContextSections=_displayTypeContextSections;
- (double)_maximumHeaderLabelLength;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)_handleSelection:(id)arg1 indexPath:(id)arg2 informDelegate:(_Bool)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)_rowsForScreenSize;
- (double)_cellSizingWidth;
- (double)_contentWidth;
- (double)_contentHeight;
- (double)_preferredCollectionViewHeightForCount:(long long)arg1;
- (double)_estimatedDynamicCellHeight;
- (void)_updateSizingCellWithContextItemSections:(id)arg1;
- (id)_makeSizingItemWithItem:(id)arg1;
- (id)_makeDummySizingItem;
- (struct CGSize)intrinsicContentSize;
- (void)deselectAllItemsAnimated:(_Bool)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (id)_buildCollectionViewLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithStyle:(long long)arg1 useBottomInsets:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
