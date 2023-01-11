//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface WFMaskedShadowView : UIView
{
    _Bool _attributesChanged;
    long long _mode;
    double _cornerRadius;
    UIColor *_borderColor;
    double _borderWidth;
    CAShapeLayer *_borderLayer;
}

@property(nonatomic) __weak CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyAttributes;
- (void)attributesDidChange;

@end
