//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIView;
@protocol TFFeedbackDataUpdateProxy;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormBaseCell : UITableViewCell
{
    id <TFFeedbackDataUpdateProxy> _updateProxy;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
}

+ (struct CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(nonatomic) __weak id <TFFeedbackDataUpdateProxy> updateProxy; // @synthesize updateProxy=_updateProxy;
- (struct CGRect)_separatorFrameForTop:(_Bool)arg1 inLayoutBounds:(struct CGRect)arg2;
- (id)_createSeparatorSubview;
- (void)_setupSeparatorViewsForAppearingInSectionLocation:(int)arg1;
- (void)setDisplayedDataImageCollection:(id)arg1;
- (void)setDisplayedDataNumber:(id)arg1;
- (void)setDisplayedDataString:(id)arg1;
- (void)setDisplayedDataGroupInclusionBool:(_Bool)arg1;
- (unsigned long long)displayableDataType;
- (void)prepareSeparatorsForCellInSectionLocation:(int)arg1;
- (void)applyContentsOfEntry:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic, getter=isSelectable) _Bool selectable;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

