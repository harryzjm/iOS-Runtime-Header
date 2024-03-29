//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSDGradient.h"

@class NSArray, NSString, TSUColor;

@interface TSDMutableGradient : TSDGradient
{
}

- (void)setFraction:(double)arg1 ofStopAtIndex:(unsigned long long)arg2;
@property(nonatomic) double opacity; // @dynamic opacity;
@property(nonatomic) _Bool isAdvancedGradient; // @dynamic isAdvancedGradient;
@property(retain, nonatomic) TSUColor *lastColor;
@property(retain, nonatomic) TSUColor *firstColor;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
@property(nonatomic) unsigned long long gradientType; // @dynamic gradientType;
- (void)evenlyDistributeStops;
- (void)reverseStopOrder;
- (id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (id)insertStopAtFraction:(double)arg1;
- (id)removeStopAtIndex:(unsigned long long)arg1;
- (void)removeStop:(id)arg1;
- (void)insertGradientStop:(id)arg1;
@property(retain, nonatomic) NSArray *gradientStops; // @dynamic gradientStops;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

