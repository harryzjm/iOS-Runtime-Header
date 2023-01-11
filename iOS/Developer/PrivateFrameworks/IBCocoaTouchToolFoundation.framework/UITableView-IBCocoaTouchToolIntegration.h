//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@class IBPlaceholderDrawingAttributes, NSArray;

@interface UITableView (IBCocoaTouchToolIntegration)
- (void)ibSwizzled_layoutSubviews;
- (double)ibSwizzled_spacingForExtraSeparators_55192336;
@property(retain, nonatomic) IBPlaceholderDrawingAttributes *ibUnusedAreaDrawingAttributes;
- (void)setIbUnusedAreaPlaceholderView:(id)arg1;
- (id)ibUnusedAreaPlaceholderView;
- (_Bool)ibIsChildASubarbitrationUnitRoot:(id)arg1;
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)setIbMinimumGeometryForCellFramesAndContentSize:(id)arg1;
- (_Bool)ibCapturePlaceholderTable:(id)arg1 forRelationship:(id)arg2 withContext:(id)arg3;
- (id)ibContentSize;
- (id)sectionAndCellFrames;
- (void)setIbReuseIdentifiersToPrototypeNibData:(id)arg1;
- (void)setIbCachedSectionsIncludingPrototypes:(id)arg1;
- (id)ibCachedSectionsIncludingPrototypes;
@property(readonly) NSArray *ibSectionsIncludingPrototypes;
- (_Bool)ibInsetsContentViewsToSafeArea;
- (void)setIbInsetsContentViewsToSafeArea:(_Bool)arg1;
- (void)setIbPrototypes:(id)arg1;
- (id)ibPrototypes;
- (void)setIbSections:(id)arg1;
- (void)_setAssociationCellForSections:(id)arg1 withTableView:(id)arg2;
- (void)_setAssociationCells:(id)arg1 withTableView:(id)arg2;
- (id)ibSections;
@property(nonatomic) double ibShadowedEstimatedSectionFooterHeight;
@property(nonatomic) double ibShadowedEstimatedSectionHeaderHeight;
@property(nonatomic) double ibShadowedEstimatedRowHeight;
- (void)ibTableViewCell:(id)arg1 didIncrementallyChangeValueForKeyPath:(id)arg2;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 globalMarshallingContext:(id)arg4;
@end
