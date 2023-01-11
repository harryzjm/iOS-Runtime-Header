//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>

@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing>
{
    double mPattern[6];
    unsigned long long mCount;
    double mPhase;
    int mType;
}

+ (id)strokePatternWithPattern:(const double *)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
+ (id)dashPatternWithSpacing:(double)arg1;
+ (id)roundDashPatternWithSpacing:(double)arg1;
+ (id)roundDashPattern;
+ (id)longDashPattern;
+ (id)mediumDashPattern;
+ (id)shortDashPattern;
+ (id)emptyPattern;
+ (id)solidPattern;
@property(readonly, nonatomic) double phase; // @synthesize phase=mPhase;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=mCount;
@property(readonly, nonatomic) int patternType; // @synthesize patternType=mType;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)p_applyToCAShapeLayer:(id)arg1 lineWidth:(double)arg2;
- (void)applyToCAShapeLayer:(id)arg1;
- (void)i_applyToContext:(struct CGContext *)arg1 lineWidth:(double)arg2 capStyle:(unsigned long long *)arg3;
- (void)applyToContext:(struct CGContext *)arg1 lineWidth:(double)arg2;
@property(readonly, nonatomic) _Bool isRoundDash;
@property(readonly, nonatomic) _Bool isDash;
@property(readonly, nonatomic) double *pattern;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPattern:(const double *)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
- (id)p_initWithType:(int)arg1 pattern:(const double *)arg2 count:(unsigned long long)arg3 phase:(double)arg4;

@end

