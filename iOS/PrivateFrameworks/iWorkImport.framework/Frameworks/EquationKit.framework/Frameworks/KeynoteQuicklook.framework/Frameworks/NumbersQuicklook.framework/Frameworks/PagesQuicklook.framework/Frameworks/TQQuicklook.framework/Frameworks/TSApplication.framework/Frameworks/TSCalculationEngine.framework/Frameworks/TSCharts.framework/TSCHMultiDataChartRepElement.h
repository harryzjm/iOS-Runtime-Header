//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, TSCHMultiDataAnimatingFrameLayer;
@protocol TSCHMultiDataElementShapeLayer;

@interface TSCHMultiDataChartRepElement : NSObject
{
    CALayer<TSCHMultiDataElementShapeLayer> *mElementLayer;
    TSCHMultiDataAnimatingFrameLayer *mLabelLayer;
    _Bool mElementUndefined;
}

+ (id)elementWithElementLayer:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool elementUndefined; // @synthesize elementUndefined=mElementUndefined;
@property(readonly, nonatomic) TSCHMultiDataAnimatingFrameLayer *labelLayer; // @synthesize labelLayer=mLabelLayer;
@property(readonly, nonatomic) CALayer<TSCHMultiDataElementShapeLayer> *elementLayer; // @synthesize elementLayer=mElementLayer;
- (void)addAnimationForKey:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 toAnimationInfo:(id)arg4;
- (void)setOpacity:(double)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithElementLayer:(id)arg1;

@end
