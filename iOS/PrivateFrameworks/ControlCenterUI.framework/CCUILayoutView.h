//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CCUILayoutOptions;
@protocol CCUILayoutViewLayoutSource;

@interface CCUILayoutView
{
    CCUILayoutOptions *_layoutOptions;
    id <CCUILayoutViewLayoutSource> _layoutSource;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) __weak id <CCUILayoutViewLayoutSource> layoutSource; // @synthesize layoutSource=_layoutSource;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)iterateLayoutSubviewsWithBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)frameForLayoutRect:(struct CCUILayoutRect)arg1;
- (struct CGRect)frameForSubview:(id)arg1;
- (id)subviewsToLayout;
- (id)initWithFrame:(struct CGRect)arg1 layoutOptions:(id)arg2;

@end

