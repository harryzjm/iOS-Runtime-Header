//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TSDStrokePattern, TSUColor;

@interface TSDMutableCalligraphyStroke
{
}

- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) double actualWidth; // @dynamic actualWidth;
@property(nonatomic) int cap; // @dynamic cap;
@property(retain, nonatomic) TSUColor *color; // @dynamic color;
@property(nonatomic) int join; // @dynamic join;
@property(nonatomic) double miterLimit; // @dynamic miterLimit;
@property(retain, nonatomic) TSDStrokePattern *pattern; // @dynamic pattern;
@property(copy, nonatomic) NSString *strokeName; // @dynamic strokeName;
@property(nonatomic) double width; // @dynamic width;

@end

