//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol AXPIPointSmootherClientDelegate;

@interface AXPIPointSmoother : NSObject
{
    _Bool _useWeightedMovingAverage;
    _Bool _shouldOffsetBufferPoints;
    unsigned long long _bufferSize;
    id <AXPIPointSmootherClientDelegate> _delegate;
    double _smoothingMaxDelta;
    double _xOrder;
    double _yOrder;
    double _xOffset;
    double _yOffset;
    NSMutableArray *_pointBuffer;
    unsigned long long _framesPerSecond;
    unsigned long long _lastTimePointAdded;
    unsigned long long _lowFPSDetectedCount;
}

+ (struct CGPoint)_averagePointsInArray:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lowFPSDetectedCount; // @synthesize lowFPSDetectedCount=_lowFPSDetectedCount;
@property(nonatomic) unsigned long long lastTimePointAdded; // @synthesize lastTimePointAdded=_lastTimePointAdded;
@property(nonatomic) unsigned long long framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property(retain, nonatomic) NSMutableArray *pointBuffer; // @synthesize pointBuffer=_pointBuffer;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) double xOffset; // @synthesize xOffset=_xOffset;
@property(nonatomic) double yOrder; // @synthesize yOrder=_yOrder;
@property(nonatomic) double xOrder; // @synthesize xOrder=_xOrder;
@property(nonatomic) _Bool shouldOffsetBufferPoints; // @synthesize shouldOffsetBufferPoints=_shouldOffsetBufferPoints;
@property(nonatomic) double smoothingMaxDelta; // @synthesize smoothingMaxDelta=_smoothingMaxDelta;
@property(nonatomic) _Bool useWeightedMovingAverage; // @synthesize useWeightedMovingAverage=_useWeightedMovingAverage;
@property(nonatomic) __weak id <AXPIPointSmootherClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (void)updateFPS;
- (void)removeAllPoints;
- (struct CGSize)_deltaForPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGPoint point;
- (void)addPoint:(struct CGPoint)arg1;
- (id)init;

@end
