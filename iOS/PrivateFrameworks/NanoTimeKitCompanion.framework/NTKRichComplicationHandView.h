//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface NTKRichComplicationHandView : UIView
{
    CALayer *_dotLayer;
    CALayer *_handLayer;
    double _beginAngle;
    double _endAngle;
    double _handWidth;
    float _value;
}

@property(readonly, nonatomic) CALayer *handLayer; // @synthesize handLayer=_handLayer;
@property(readonly, nonatomic) CALayer *dotLayer; // @synthesize dotLayer=_dotLayer;
- (void).cxx_destruct;
- (void)_updateHandTransform;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithDotSize:(double)arg1 handWidth:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4;

@end

