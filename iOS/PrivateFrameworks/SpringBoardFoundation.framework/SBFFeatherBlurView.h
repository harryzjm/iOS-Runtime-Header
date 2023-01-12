//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MTMaterialView;

@interface SBFFeatherBlurView : UIView
{
    MTMaterialView *_backgroundBlurView;
    double _intrinsicHeight;
}

+ (id)matchMoveAnimationForFrame:(struct CGRect)arg1 relativeToView:(id)arg2;
+ (struct UIEdgeInsets)gradientMaskLayerInsetsForFeatherBlurRecipe:(unsigned long long)arg1;
+ (id)configureGradientMaskForFeatherBlurRecipe:(unsigned long long)arg1 onContentView:(id)arg2;
+ (_Bool)_requiresLowQualityFeatherBlur:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) double intrinsicHeight; // @synthesize intrinsicHeight=_intrinsicHeight;
@property(readonly, nonatomic) MTMaterialView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithRecipe:(unsigned long long)arg1;

@end
