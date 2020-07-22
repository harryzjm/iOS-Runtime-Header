//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSMutableArray, UIImage;

@interface BLRetouchRedEyeLayer
{
    CIImage *_ciSourceImage;
    NSMutableArray *_eyePoints;
    UIImage *_repairSourceImage;
    UIImage *_repairedImage;
}

+ (id)addAutoRedEyeCorrection:(id)arg1 toLayerData:(id)arg2 maskSize:(struct CGSize)arg3 newTimestampIncrement:(double *)arg4;
+ (long long)indexOfPointNear:(struct CGPoint)arg1 inEyePoints:(id)arg2 andMaskSize:(struct CGSize)arg3;
@property(retain, nonatomic) UIImage *repairedImage; // @synthesize repairedImage=_repairedImage;
@property(retain, nonatomic) UIImage *repairSourceImage; // @synthesize repairSourceImage=_repairSourceImage;
- (void).cxx_destruct;
- (void)clearRedEyes;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (struct CGRect)area;
- (void)dealloc;
- (struct CGRect)tapAtPoint:(struct CGPoint)arg1 actualLocation:(struct CGPoint *)arg2 foundEye:(_Bool *)arg3 addedEye:(_Bool *)arg4;
- (void)setLayerData:(id)arg1;
- (id)layerData;
- (long long)indexOfPointNear:(struct CGPoint)arg1;
@property(copy, nonatomic) NSMutableArray *eyePoints; // @synthesize eyePoints=_eyePoints;
- (void)repairRedEyes;
- (struct CGRect)maskFrame;
- (_Bool)hasLayerMask;
- (float)amount;
- (void)hasLayerMaskDidChange;

@end

