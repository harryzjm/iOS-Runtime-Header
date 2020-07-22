//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UIMotionEffect;

__attribute__((visibility("hidden")))
@interface _MKCalloutBackgroundMaskView : UIView
{
    UIView *_baseView;
    UIImageView *_topArrow;
    UIImageView *_bottomArrow;
    UIImageView *_leftArrow;
    UIImageView *_rightArrow;
    UIView *_currentArrowContainer;
    UIMotionEffect *_arrowMotionEffect;
}

@property(copy, nonatomic) UIMotionEffect *arrowMotionEffect; // @synthesize arrowMotionEffect=_arrowMotionEffect;
@property(readonly, nonatomic) UIView *currentArrowContainer; // @synthesize currentArrowContainer=_currentArrowContainer;
@property(readonly, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(readonly, nonatomic) UIImageView *leftArrow; // @synthesize leftArrow=_leftArrow;
@property(readonly, nonatomic) UIImageView *bottomArrow; // @synthesize bottomArrow=_bottomArrow;
@property(readonly, nonatomic) UIImageView *topArrow; // @synthesize topArrow=_topArrow;
@property(readonly, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (void)_removeArrows;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupViews;

@end
