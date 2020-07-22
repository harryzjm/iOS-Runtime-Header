//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKAxisLabelStyle, HKFillStyle, HKStrokeStyle, UIImage;

@interface HKLineSeriesPresentationStyle : NSObject
{
    _Bool _shouldApplyRollingAverage;
    int _waveForm;
    HKStrokeStyle *_strokeStyle;
    HKFillStyle *_fillStyle;
    UIImage *_pointMarkerImage;
    UIImage *_lineEndCap;
    HKAxisLabelStyle *_annotationStyle;
    HKAxisLabelStyle *_axisAnnotationStyle;
    double _sineWaveSmoothingFactor;
}

@property(nonatomic) double sineWaveSmoothingFactor; // @synthesize sineWaveSmoothingFactor=_sineWaveSmoothingFactor;
@property(nonatomic) _Bool shouldApplyRollingAverage; // @synthesize shouldApplyRollingAverage=_shouldApplyRollingAverage;
@property(retain, nonatomic) HKAxisLabelStyle *axisAnnotationStyle; // @synthesize axisAnnotationStyle=_axisAnnotationStyle;
@property(retain, nonatomic) HKAxisLabelStyle *annotationStyle; // @synthesize annotationStyle=_annotationStyle;
@property(retain, nonatomic) UIImage *lineEndCap; // @synthesize lineEndCap=_lineEndCap;
@property(retain, nonatomic) UIImage *pointMarkerImage; // @synthesize pointMarkerImage=_pointMarkerImage;
@property(nonatomic) int waveForm; // @synthesize waveForm=_waveForm;
@property(retain, nonatomic) HKFillStyle *fillStyle; // @synthesize fillStyle=_fillStyle;
@property(retain, nonatomic) HKStrokeStyle *strokeStyle; // @synthesize strokeStyle=_strokeStyle;
- (void).cxx_destruct;

@end

