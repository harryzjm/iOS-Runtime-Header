//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKRichComplicationRingView;

@interface NTKRichComplicationRingProgressView
{
    double _curveWidth;
    NTKRichComplicationRingView *_backgroundView;
    NTKRichComplicationRingView *_foregroundView;
    _Bool _clockwise;
}

@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
- (void).cxx_destruct;
- (id)initWithCurveWidth:(double)arg1 padding:(double)arg2 forDevice:(id)arg3;

@end
