//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSTMutableStrokeLayer, TSTStrokeLayer, TSTStrokeOrderedLayer;

@interface TSTStrokeLayerMergedStack
{
    TSTStrokeLayer *_defaultMinorStrokeLayer;
    TSTStrokeLayer *_defaultMajorStrokeLayer;
    TSTStrokeLayer *_customUnorderedStrokeLayer;
    TSTStrokeOrderedLayer *_customOrderedStrokeLayer;
    TSTMutableStrokeLayer *_clearedMinorStrokeLayer;
    TSTMutableStrokeLayer *_clearedMajorStrokeLayer;
    TSTMutableStrokeLayer *_dynamicUnorderedStrokeLayer;
    TSTStrokeOrderedLayer *_dynamicOrderedStrokeLayer;
    TSTMutableStrokeLayer *_spillMinorStrokeLayer;
    TSTMutableStrokeLayer *_spillMajorStrokeLayer;
}

+ (void)enumerateWidthsInLayers:(void *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)mergeLeftStrokes:(id)arg1 withRightStrokes:(id)arg2;
+ (id)mergeTopStrokes:(id)arg1 withBottomStrokes:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TSTMutableStrokeLayer *spillMajorStrokeLayer; // @synthesize spillMajorStrokeLayer=_spillMajorStrokeLayer;
@property(retain, nonatomic) TSTMutableStrokeLayer *spillMinorStrokeLayer; // @synthesize spillMinorStrokeLayer=_spillMinorStrokeLayer;
@property(retain, nonatomic) TSTStrokeOrderedLayer *dynamicOrderedStrokeLayer; // @synthesize dynamicOrderedStrokeLayer=_dynamicOrderedStrokeLayer;
@property(retain, nonatomic) TSTMutableStrokeLayer *dynamicUnorderedStrokeLayer; // @synthesize dynamicUnorderedStrokeLayer=_dynamicUnorderedStrokeLayer;
@property(retain, nonatomic) TSTMutableStrokeLayer *clearedMajorStrokeLayer; // @synthesize clearedMajorStrokeLayer=_clearedMajorStrokeLayer;
@property(retain, nonatomic) TSTMutableStrokeLayer *clearedMinorStrokeLayer; // @synthesize clearedMinorStrokeLayer=_clearedMinorStrokeLayer;
@property(retain, nonatomic) TSTStrokeOrderedLayer *customOrderedStrokeLayer; // @synthesize customOrderedStrokeLayer=_customOrderedStrokeLayer;
@property(retain, nonatomic) TSTStrokeLayer *customUnorderedStrokeLayer; // @synthesize customUnorderedStrokeLayer=_customUnorderedStrokeLayer;
@property(retain, nonatomic) TSTStrokeLayer *defaultMajorStrokeLayer; // @synthesize defaultMajorStrokeLayer=_defaultMajorStrokeLayer;
@property(retain, nonatomic) TSTStrokeLayer *defaultMinorStrokeLayer; // @synthesize defaultMinorStrokeLayer=_defaultMinorStrokeLayer;
- (void)lockForWrite;
- (void)lockForRead;
- (void)unlock;
- (double)p_widthOfStrokesAtIndex:(long long)arg1;
- (double)maxWidthOfStrokesInRange:(struct TSTSimpleRange)arg1 cachedMax:(double)arg2;
- (void)invalidateSpillStrokes;
- (id)portalledStrokeLayer;
- (unsigned long long)count;
- (vector_7cb30fb3)p_strokeLayerVector;
- (id)initWithCopyOfMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2;

@end

