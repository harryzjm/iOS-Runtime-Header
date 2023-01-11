//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NTKEditOption, UIImageView;
@protocol NTKEditOptionTransitioningViewDelegate;

@interface NTKEditOptionTransitioningView : UIView
{
    UIView *_transitionContainer;
    UIView *_transitionDimmingView;
    double _breathScaleModifier;
    double _rubberBandScaleModifier;
    UIImageView *_toTransitionImageView;
    UIImageView *_fromTransitionImageView;
    id <NTKEditOptionTransitioningViewDelegate> _delegate;
    NTKEditOption *_toEditOption;
    NTKEditOption *_fromEditOption;
}

@property(retain, nonatomic) NTKEditOption *fromEditOption; // @synthesize fromEditOption=_fromEditOption;
@property(retain, nonatomic) NTKEditOption *toEditOption; // @synthesize toEditOption=_toEditOption;
@property(nonatomic) __weak id <NTKEditOptionTransitioningViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resetTransitionImageView:(id)arg1;
- (void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3;
- (void)setOption:(id)arg1;
- (void)setDimmingAlpha:(double)arg1;
- (void)_updateUnifiedScaleTransform;
- (void)setRubberBandingFraction:(double)arg1;
- (void)setBreatheFraction:(double)arg1;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

