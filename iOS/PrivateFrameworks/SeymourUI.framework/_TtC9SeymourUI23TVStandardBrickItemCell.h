//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI23TVStandardBrickItemCell
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *itemInfo;
    MISSING_TYPE *layout;
    MISSING_TYPE *tvArtworkView;
    MISSING_TYPE *captionLabel;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *subtitleLabel;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityCaptionLabel;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
