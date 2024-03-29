//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADColor : NSObject
{
    NSMutableArray *mTransforms;
}

+ (int)mapSchemeColorID:(int)arg1 colorMap:(id)arg2;
+ (id)tsuColorWithRgbColor:(id)arg1;
+ (id)tsuColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)tsuColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (float)alphaWithColor:(id)arg1;
+ (id)rgbColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)mapAdjustedColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)basicMapOfColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)colorForStyleColor:(id)arg1;
- (void)addTransformOfType:(int)arg1 value:(float)arg2;
- (void)addTransformOfType:(int)arg1;
- (void)setTransforms:(id)arg1;
- (id)transforms;
- (void)addTransform:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

