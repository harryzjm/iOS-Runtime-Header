//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCHChartAxis;

__attribute__((visibility("hidden")))
@interface TSCH3DAxisGridEnumerator
{
    TSCHChartAxis *mAxis;
}

+ (id)enumeratorWithAxis:(id)arg1;
@property(readonly, nonatomic) TSCHChartAxis *axis; // @synthesize axis=mAxis;
- (struct AxisGridLocation)position;
- (void)update;
- (unsigned long long)count;
@property(readonly, nonatomic) int type;
- (void)dealloc;
- (id)initWithAxis:(id)arg1;

@end

