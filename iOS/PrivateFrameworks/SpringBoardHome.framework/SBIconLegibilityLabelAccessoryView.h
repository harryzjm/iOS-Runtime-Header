//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView;

@interface SBIconLegibilityLabelAccessoryView
{
    UIImageView *_iconImageView;
}

@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (struct UIEdgeInsets)alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (_Bool)hasBaseline;
- (void)removeInvertingFilter;
- (void)addInvertingFilter;
- (void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
