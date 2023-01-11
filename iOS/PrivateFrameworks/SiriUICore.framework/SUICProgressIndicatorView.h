//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, _SUICCheckGlyphLayer, _SUICProgressRingLayer, _SUICRingLayer;

@interface SUICProgressIndicatorView : UIView
{
    _SUICRingLayer *_shadowRingLayer;
    _SUICProgressRingLayer *_progressRingLayer;
    _SUICCheckGlyphLayer *_checkGlyphLayer;
    UIImageView *_actionArrowImageView;
}

- (void).cxx_destruct;
- (void)setDarkened:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isDarkened) _Bool darkened;
- (void)setCheckmarkVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isCheckmarkVisible) _Bool checkmarkVisible;
@property(nonatomic, getter=isSpinning) _Bool spinning;
- (void)setArrowVisible:(_Bool)arg1 delay:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic, getter=isArrowVisible) _Bool arrowVisible;
- (void)setProgressValue:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double progressValue;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
