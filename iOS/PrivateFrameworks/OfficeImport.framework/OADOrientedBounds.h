//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADOrientedBounds : NSObject
{
    struct CGRect mBounds;
    float mRotation;
    unsigned int mFlipX:1;
    unsigned int mFlipY:1;
    int mModeX;
    int mModeY;
}

+ (_Bool)directionCloserToVerticalThanToHorizontal:(float)arg1;
+ (id)orientedBoundsWithBounds:(struct CGRect)arg1;
+ (id)orientedBoundsWithBounds:(struct CGRect)arg1 rotation:(float)arg2 flipX:(_Bool)arg3 flipY:(_Bool)arg4;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToOrientedBounds:(id)arg1;
- (struct CGRect)boundingBox;
- (struct CGSize)boundingBoxSize;
- (void)setYMode:(int)arg1;
- (int)yMode;
- (void)setXMode:(int)arg1;
- (int)xMode;
- (void)setFlipY:(_Bool)arg1;
- (_Bool)flipY;
- (void)setFlipX:(_Bool)arg1;
- (_Bool)flipX;
- (void)setRotation:(float)arg1;
- (float)rotation;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)setOrientedBounds:(id)arg1;
- (id)init;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)initWithBounds:(struct CGRect)arg1 rotation:(float)arg2 flipX:(_Bool)arg3 flipY:(_Bool)arg4;

@end

