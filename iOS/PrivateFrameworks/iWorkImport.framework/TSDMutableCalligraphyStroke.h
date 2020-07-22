//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSDMutableStroke-Protocol.h>

@class TSDStrokePattern, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDMutableCalligraphyStroke <TSDMutableStroke>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;
@property(copy, nonatomic) TSDStrokePattern *pattern;
@property(nonatomic) int join;
@property(nonatomic) double miterLimit;
@property(nonatomic) int cap;
@property(nonatomic) double actualWidth;
@property(nonatomic) double width;
@property(copy, nonatomic) TSUColor *color;

@end

