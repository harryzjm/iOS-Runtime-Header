//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CAShapeLayer, UIColor;

__attribute__((visibility("hidden")))
@interface PUPhotoEditCircularIndicatorView : UIView
{
    double _thickness;
    double _currentValue;
    double _minValue;
    double _maxValue;
    CAShapeLayer *_backgroundLayer;
    CAShapeLayer *_progressLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) double thickness; // @synthesize thickness=_thickness;
- (void)traitCollectionDidChange:(id)arg1;
- (void)resetToDefaults;
- (void)_updateProgressLayer;
@property(retain, nonatomic) UIColor *ringColor;
- (void)_layoutSubLayers;
- (void)layoutSubviews;
- (void)_setupLayers;
- (id)initWithFrame:(struct CGRect)arg1;

@end

