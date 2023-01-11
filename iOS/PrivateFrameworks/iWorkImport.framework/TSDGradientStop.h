//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

@class TSUColor;

__attribute__((visibility("hidden")))
@interface TSDGradientStop : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    TSUColor *mColor;
    double mFraction;
    double mInflection;
}

+ (id)gradientStopWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3;
+ (id)gradientStopWithColor:(id)arg1 fraction:(double)arg2;
@property(readonly, nonatomic) double inflection; // @synthesize inflection=mInflection;
@property(readonly, nonatomic) double fraction; // @synthesize fraction=mFraction;
@property(readonly, copy, nonatomic) TSUColor *color; // @synthesize color=mColor;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)gradientStopWithInflection:(double)arg1;
- (id)gradientStopWithColor:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)p_setInflection:(double)arg1;
- (void)p_setFraction:(double)arg1;
- (void)p_setColor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithGradientStop:(id)arg1;
- (id)initWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3;
- (id)initWithColor:(id)arg1 fraction:(double)arg2;
- (void)saveToArchive:(struct GradientArchive_GradientStop *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct GradientArchive_GradientStop *)arg1 unarchiver:(id)arg2;

@end

