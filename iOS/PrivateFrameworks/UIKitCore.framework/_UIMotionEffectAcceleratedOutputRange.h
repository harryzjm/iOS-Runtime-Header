//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectAcceleratedOutputRange : NSObject
{
    struct UIOffset _referenceOffset;
    struct CGPoint _referenceAcceleration;
    struct CGPoint _acceleration;
}

@property(readonly, nonatomic) struct CGPoint acceleration; // @synthesize acceleration=_acceleration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)reset;
- (struct UIOffset)acceleratedOutputForViewerOffset:(struct UIOffset)arg1 accelerationBoostFactor:(struct CGPoint)arg2;
- (void)setAcceleration:(struct CGPoint)arg1 fixingOutputForViewerOffset:(struct UIOffset)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

