//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, UIColor;

__attribute__((visibility("hidden")))
@interface _MKCalloutLayer
{
    struct CGImage *_contentImage;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
    CDStruct_f381021a _metrics;
    long long _arrowPosition;
    double _arrowOffset;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) long long arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(nonatomic) CDStruct_f381021a metrics; // @synthesize metrics=_metrics;
- (void)layoutSublayers;
- (void)setContentsScale:(double)arg1;
- (void)dealloc;
- (id)init;
- (struct CGImage *)_newContentImage;
- (struct CGSize)_contentSize;

@end

