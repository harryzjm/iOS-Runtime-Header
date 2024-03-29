//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIMotionEffectAcceleratedOutputRange;

__attribute__((visibility("hidden")))
@interface _UIViewerRelativeDevicePose : NSObject
{
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;
    double _planarRotationAngle;
    struct UIOffset _viewerOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double planarRotationAngle; // @synthesize planarRotationAngle=_planarRotationAngle;
@property(nonatomic) struct UIOffset viewerOffset; // @synthesize viewerOffset=_viewerOffset;
- (struct UIOffset)_acceleratedOutputForViewerOffset:(struct UIOffset)arg1 accelerationBoostFactor:(struct CGPoint)arg2;
- (void)_setAcceleration:(struct CGPoint)arg1 fixingOutputForViewerOffset:(struct UIOffset)arg2;
- (void)_reset;
- (id)_acceleratedOutputRange;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

