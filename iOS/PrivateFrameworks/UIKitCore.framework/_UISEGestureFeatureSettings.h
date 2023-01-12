//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UISEGestureFeatureSettings : NSObject
{
    double _backProjectTime;
    double _bottomEdgeAngleWindow;
    double _bottomEdgeRegionSize;
    double _cornerAngleWindow;
    double _edgeAngleWindow;
    double _edgeAngleWindowDecayTime;
    double _edgeRegionSize;
    double _hysteresis;
    unsigned long long _interfaceBottomEdge;
    unsigned long long _minimumNumberOfSubfeatures;
    double _maximumBackProjectTimeFactor;
    double _maximumSwipeDuration;
    unsigned long long _targetEdges;
    struct CGRect _bounds;
}

@property(nonatomic) unsigned long long targetEdges; // @synthesize targetEdges=_targetEdges;
@property(nonatomic) double maximumSwipeDuration; // @synthesize maximumSwipeDuration=_maximumSwipeDuration;
@property(nonatomic) double maximumBackProjectTimeFactor; // @synthesize maximumBackProjectTimeFactor=_maximumBackProjectTimeFactor;
@property(nonatomic) unsigned long long minimumNumberOfSubfeatures; // @synthesize minimumNumberOfSubfeatures=_minimumNumberOfSubfeatures;
@property(nonatomic) unsigned long long interfaceBottomEdge; // @synthesize interfaceBottomEdge=_interfaceBottomEdge;
@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property(nonatomic) double edgeRegionSize; // @synthesize edgeRegionSize=_edgeRegionSize;
@property(nonatomic) double edgeAngleWindowDecayTime; // @synthesize edgeAngleWindowDecayTime=_edgeAngleWindowDecayTime;
@property(nonatomic) double edgeAngleWindow; // @synthesize edgeAngleWindow=_edgeAngleWindow;
@property(nonatomic) double cornerAngleWindow; // @synthesize cornerAngleWindow=_cornerAngleWindow;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) double bottomEdgeRegionSize; // @synthesize bottomEdgeRegionSize=_bottomEdgeRegionSize;
@property(nonatomic) double bottomEdgeAngleWindow; // @synthesize bottomEdgeAngleWindow=_bottomEdgeAngleWindow;
@property(nonatomic) double backProjectTime; // @synthesize backProjectTime=_backProjectTime;
- (id)init;

@end

