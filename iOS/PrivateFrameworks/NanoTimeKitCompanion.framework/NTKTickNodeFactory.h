//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKTickNodeFactory : NSObject
{
}

+ (id)_shaderWithTickWidth:(double)arg1 filterWidth:(double)arg2;
+ (id)_shaderCache;
+ (id)_tickTexture;
+ (id)textureAtlas;
+ (id)imagesDictionary;
+ (void)layoutNodes:(id)arg1 offset:(unsigned long long)arg2 center:(struct CGPoint)arg3 radius:(double)arg4 angleMultiplier:(double)arg5 scale:(double)arg6 rotate:(_Bool)arg7 round:(_Bool)arg8;
+ (void)setBackgroundColor:(id)arg1 onTicks:(id)arg2;
+ (void)colorizeTicks:(id)arg1 baseColor:(id)arg2 accentColor:(id)arg3 baseAlpha:(double)arg4 accentAlpha:(double)arg5 accentModulo:(long long)arg6;
+ (id)ticks:(unsigned int)arg1 center:(struct CGPoint)arg2 radius:(double)arg3 color1:(id)arg4 color2:(id)arg5 smallSize:(struct CGSize)arg6 largeSize:(struct CGSize)arg7 smallFilterWidth:(double)arg8 largeFilterWidth:(double)arg9 l1mod:(unsigned int)arg10 l2mod:(unsigned int)arg11;

@end

