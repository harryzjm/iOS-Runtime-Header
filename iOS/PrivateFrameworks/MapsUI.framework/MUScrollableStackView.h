//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class MUStackView, NSArray, NSLayoutConstraint;

@interface MUScrollableStackView : UIScrollView
{
    MUStackView *_stackView;
    NSLayoutConstraint *_axisConstraint;
}

- (void).cxx_destruct;
@property(nonatomic) double spacing;
- (void)setArrangedSubviews:(id)arg1;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)_updateOrientationWithNewAxis:(long long)arg1;
- (void)addArrangedSubview:(id)arg1 withCustomSpacing:(double)arg2;
- (void)addArrangedSubview:(id)arg1 withOrthogonalPadding:(double)arg2;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeArrangedSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *arrangedSubviews;
@property(nonatomic) long long alignment;
@property(nonatomic) long long distribution;
@property(nonatomic) long long axis;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)addArrangedCardShadowViewForView:(id)arg1;

@end
