//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, NSNumber, UITableView;

@interface UITableViewCell (IBCocoaTouchToolIntegration)
- (id)ibEffectiveViewForRendering;
- (_Bool)ibWantsWindowForRenderingAndPrimitiveAutolayoutQuestions;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (id)ibEffectiveViewToPlaceInLayoutEngineWindow;
- (id)ibOverriddenDesignableContentItem;
- (void)awakeAfterMarshallerDidEstablishRelationshipsWithContext:(id)arg1 populatingWarningMessages:(id)arg2;
- (id)ibImageSizeForImageView;
- (void)setIbImageSizeForImageView:(id)arg1;
- (id)ibSampleTextForDetailTextLabel;
- (void)setIbSampleTextForDetailTextLabel:(id)arg1;
- (id)ibSampleTextForTextLabel;
- (void)setIbSampleTextForTextLabel:(id)arg1;
- (void)awakeAfterMarshallerDidEstablishAttributesWithContext:(id)arg1;
@property(readonly) NSDictionary *ibLayoutFrames;
- (void)ibDidIncrementallyUpdateValueForKeyPath:(id)arg1;
@property(copy) NSNumber *ibRowHeight;
@property __weak UITableView *ibAssociatedTableView;
- (void)createAndWrapCellWithTableViewWithFrame:(struct CGRect)arg1 tableViewStyle:(long long)arg2 defaultRowHeight:(double)arg3 separatorStyle:(id)arg4 positionInSection:(id)arg5 globalMarshallingContext:(id)arg6;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 globalMarshallingContext:(id)arg4;
@end

