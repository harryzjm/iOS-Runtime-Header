//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEOAlmanacRiseTransitSet : NSObject
{
    double _julianDay;
    struct CAARiseTransitSetDetails _riseTransitSet;
    NSDate *_sunrise;
    NSDate *_transit;
    NSDate *_sunset;
}

@property(readonly, nonatomic) struct CAARiseTransitSetDetails riseTransitSet; // @synthesize riseTransitSet=_riseTransitSet;
@property(readonly, nonatomic) double julianDay; // @synthesize julianDay=_julianDay;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *sunset;
@property(readonly, nonatomic) NSDate *transit;
@property(readonly, nonatomic) NSDate *sunrise;
- (id)_dateFromOffset:(double)arg1 ofJulianDay:(double)arg2;
- (id)initWithJulianDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails)arg2;

@end
