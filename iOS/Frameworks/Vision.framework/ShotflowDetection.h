//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ShotflowDetection : NSObject
{
    float _area;
    _Bool _hasLabel;
    float _confidence;
    int _mergesCount;
    int _scale;
    float _rotationAngle;
    float _yawAngle;
    float _pitchAngle;
    int _label;
    float _petFaceScore;
    float _associatedX;
    float _associatedY;
    int _groupId;
    struct CGRect _box;
    struct CGRect _defaultBox;
}

@property(nonatomic) int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) float associatedY; // @synthesize associatedY=_associatedY;
@property(nonatomic) float associatedX; // @synthesize associatedX=_associatedX;
@property(nonatomic) float petFaceScore; // @synthesize petFaceScore=_petFaceScore;
@property(nonatomic) int label; // @synthesize label=_label;
@property(nonatomic) _Bool hasLabel; // @synthesize hasLabel=_hasLabel;
@property(nonatomic) float pitchAngle; // @synthesize pitchAngle=_pitchAngle;
@property(nonatomic) float yawAngle; // @synthesize yawAngle=_yawAngle;
@property(nonatomic) float rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(nonatomic) int mergesCount; // @synthesize mergesCount=_mergesCount;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) struct CGRect defaultBox; // @synthesize defaultBox=_defaultBox;
@property(nonatomic) struct CGRect box; // @synthesize box=_box;
- (id)description;
- (_Bool)isOverlappingLowMergeDet:(id)arg1 withOverlapThreshold:(float)arg2 withMergeCountDelta:(int)arg3;
- (_Bool)isOverlappingSmallFace:(id)arg1 withOverlapThreshold:(float)arg2 withSizeRatio:(float)arg3;
- (float)intersectionOverMinArea:(id)arg1;
- (float)intersectionOverArea:(id)arg1;
- (float)overlap:(id)arg1;
@property(readonly, nonatomic) float smartDistance;
@property(readonly, nonatomic) float distanceToDefaultBox;
@property(readonly, nonatomic) struct CGPoint boxCenter;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 mergesCount:(int)arg8 hasLabel:(_Bool)arg9 label:(int)arg10 petFaceScore:(float)arg11 associatedX:(float)arg12 associatedY:(float)arg13 groupId:(int)arg14;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 hasLabel:(_Bool)arg8 label:(int)arg9 petFaceScore:(float)arg10 associatedX:(float)arg11 associatedY:(float)arg12;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 mergesCount:(int)arg8 hasLabel:(_Bool)arg9 label:(int)arg10;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7 hasLabel:(_Bool)arg8 label:(int)arg9;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 hasLabel:(_Bool)arg8 label:(int)arg9;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 hasLabel:(_Bool)arg7 label:(int)arg8;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6;

@end

