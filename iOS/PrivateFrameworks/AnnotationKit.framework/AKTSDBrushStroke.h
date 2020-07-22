//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface AKTSDBrushStroke : NSObject
{
    int _join;
    NSString *_strokeName;
    UIColor *_color;
    double _width;
    double _miterLimit;
}

+ (void)loadSectionsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;
+ (void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;
+ (void)loadBrush:(id)arg1;
+ (id)cacheDirectory;
+ (Class)mutableClass;
+ (id)strokeWithType:(long long)arg1 color:(id)arg2 width:(double)arg3;
+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;
@property(readonly, nonatomic) double miterLimit; // @synthesize miterLimit=_miterLimit;
@property(readonly, nonatomic) int join; // @synthesize join=_join;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
@property(readonly, retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *strokeName; // @synthesize strokeName=_strokeName;
- (void).cxx_destruct;
- (void)brushPath:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)brushPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(struct _NSRange)arg3 into:(id)arg4 sectionIndex:(unsigned long long *)arg5 viewScale:(double)arg6;
- (void)brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CDStruct_c3b9c2ee)arg4 inElementRange:(struct _NSRange)arg5 into:(id)arg6 viewScale:(double)arg7;
- (id)description;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5;
- (id)strokeLineEnd:(id)arg1;
- (id)brushBoundsForId:(id)arg1;
- (id)brushPathsForId:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 join:(int)arg4 miterLimit:(double)arg5;

@end

