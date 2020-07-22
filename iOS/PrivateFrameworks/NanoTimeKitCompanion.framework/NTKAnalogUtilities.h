//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKAnalogUtilities : NSObject
{
}

+ (void)colorizeLabels:(id)arg1 color:(id)arg2;
+ (void)updateNodes:(id)arg1 offset:(unsigned long long)arg2 center:(struct CGPoint)arg3 radius:(double)arg4 angleMultiplier:(double)arg5 scale:(double)arg6 rotate:(_Bool)arg7 round:(_Bool)arg8;
+ (void)scaleNodes:(id)arg1 scale:(double)arg2 andResetNodesAtIndices:(id)arg3;
+ (void)fadeNodes:(id)arg1 alpha:(double)arg2 except:(id)arg3;
+ (id)labelsForFaceStyle:(long long)arg1 count:(unsigned int)arg2 start:(unsigned int)arg3 multiple:(unsigned int)arg4 repeat:(unsigned int)arg5 fontSize:(double)arg6 radius:(double)arg7 paddedWithZeroes:(_Bool)arg8;
+ (id)labelsWithCount:(unsigned int)arg1 start:(unsigned int)arg2 multiple:(unsigned int)arg3 repeat:(unsigned int)arg4 font:(long long)arg5 fontSize:(double)arg6 center:(struct CGPoint)arg7 radius:(double)arg8 paddedWithZeros:(_Bool)arg9 filter:(_Bool)arg10;
+ (struct CGSize)sceneSize;
+ (void)preloadTextures;
+ (_Bool)shouldPreloadTextures;
+ (id)circularMaskShader;
+ (id)artShader;

@end

