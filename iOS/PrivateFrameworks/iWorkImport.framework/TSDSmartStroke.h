//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDSmartStroke
{
    NSString *mStrokeName;
}

+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;
+ (Class)classForName:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (_Bool)shouldAntialiasDefeat;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)canApplyDirectlyToRepCALayer;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
@property(readonly, copy, nonatomic) NSString *strokeName;
- (void)saveToArchive:(struct StrokeArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct StrokeArchive *)arg1 unarchiver:(id)arg2;

@end
