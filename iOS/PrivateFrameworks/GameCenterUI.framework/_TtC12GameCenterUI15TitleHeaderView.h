//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, UIView, _TtC12GameCenterUI16DynamicTypeLabel;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI15TitleHeaderView
{
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *detailLabel;
    MISSING_TYPE *style;
    MISSING_TYPE *accessoryView;
    MISSING_TYPE *accessory;
    MISSING_TYPE *accessoryAction;
    MISSING_TYPE *separatorLineView;
    MISSING_TYPE *separatorInset;
    MISSING_TYPE *allowsAccessibilityLayouts;
    MISSING_TYPE *avoidanceRegion;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) UIView *accessibilityAccessoryView;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didTapWithAccessoryView:(id)arg1;
@property(nonatomic, retain) UIView *accessoryView; // @synthesize accessoryView;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *titleLabel; // @synthesize titleLabel;
- (_Bool)_disableRasterizeInAnimations;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
