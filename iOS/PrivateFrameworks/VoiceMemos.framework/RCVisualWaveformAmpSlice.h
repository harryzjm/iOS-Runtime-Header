//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSMutableSet;

__attribute__((visibility("hidden")))
@interface RCVisualWaveformAmpSlice : NSObject
{
    NSMutableSet *_segments;
    double _visualAmplitudeHeight;
    double _interpolatingvisualAmplitudeHeight;
    double _interpolatingvisualAmplitudeHeightDiff;
    long long _interpolatingVisualAmplitudeHeightFrameCount;
    _Bool _needsPathUpdate;
    double _sliceIndex;
    double _amplitude;
    long long _visualAmplitudeHeightInterpolatingFrames;
    CALayer *_sliceLayer;
}

@property(nonatomic) _Bool needsPathUpdate; // @synthesize needsPathUpdate=_needsPathUpdate;
@property(retain, nonatomic) CALayer *sliceLayer; // @synthesize sliceLayer=_sliceLayer;
@property(nonatomic) long long visualAmplitudeHeightInterpolatingFrames; // @synthesize visualAmplitudeHeightInterpolatingFrames=_visualAmplitudeHeightInterpolatingFrames;
@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) double sliceIndex; // @synthesize sliceIndex=_sliceIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool segmentsAreRendered;
- (void)clearSegments;
- (void)addSegment:(id)arg1;
@property(nonatomic) double visualAmplitudeHeight;
- (id)init;
- (id)initWithIndex:(double)arg1 amplitude:(double)arg2;

@end

