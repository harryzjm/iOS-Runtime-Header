//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSDStroke.h"

@class NSString;

@interface TSDSmartStroke : TSDStroke
{
    NSString *mStrokeName;
    double mDeprecatedPatternOffsetDistance;
}

+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;
+ (Class)classForName:(id)arg1;
+ (id)p_mapOfStrokeNamesToAlternatesForOldVersions;
- (void).cxx_destruct;
@property(readonly, nonatomic) double deprecatedPatternOffsetDistance; // @synthesize deprecatedPatternOffsetDistance=mDeprecatedPatternOffsetDistance;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (_Bool)shouldAntialiasDefeat;
- (unsigned long long)hash;
- (_Bool)canDrawWithOtherStroke:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)canApplyDirectlyToRepRenderable;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (void)i_setDeprecatedPatternOffsetDistance:(double)arg1;
- (void)i_setStrokeName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *strokeName;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2;

@end

