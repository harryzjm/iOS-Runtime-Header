//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

@class NSArray, UICollectionReusableView, UICollectionViewFlowLayout, UIColor;

@interface UICollectionView (IBCocoaTouchToolIntegration)
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)ibInstallPlaceholderView:(id)arg1;
@property(retain, nonatomic) UICollectionReusableView *ibPrototypeSectionFooterView;
@property(retain, nonatomic) UICollectionReusableView *ibPrototypeSectionHeaderView;
@property(readonly) NSArray *ibCellBackgroundColors;
- (void)setIbCellBackgroundColors:(id)arg1;
@property(copy, nonatomic) NSArray *ibCells;
- (void)setIbHasBackgroundView:(id)arg1;
- (id)ibCellFrames;
- (id)ibBackgroundViewFrame;
- (id)ibSectionFooterViewFrames;
- (id)ibSectionHeaderViewFrames;
- (_Bool)ibIsChildASubarbitrationUnitRoot:(id)arg1;
@property(readonly) UICollectionViewFlowLayout *ibFlowLayout;
- (id)ibFramesForSupplementaryElementsOfKind:(id)arg1;
- (_Bool)ibCapturePlaceholderTable:(id)arg1 forRelationship:(id)arg2 withContext:(id)arg3;
- (void)setIbCompiledPrototypeNibs:(id)arg1;
- (id)ibContentSize;
- (void)ibReloadDataAndLayoutSubviewsIfNeeded;
@property(readonly) UIColor *ibSectionFooterViewBackgroundColor;
- (void)setIbSectionFooterViewBackgroundColor:(id)arg1;
@property(readonly) UIColor *ibSectionHeaderViewBackgroundColor;
- (void)setIbSectionHeaderViewBackgroundColor:(id)arg1;
- (void)setIbDataSourceType:(id)arg1;
- (void)awakeAfterMarshallerDidEstablishRelationshipsWithContext:(id)arg1 populatingWarningMessages:(id)arg2;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 globalMarshallingContext:(id)arg4;
@end

