//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBErrorBar : NSObject
{
}

+ (void)readFrom:(struct XlChartErrorBar *)arg1 toSeries:(id)arg2 state:(id)arg3;
+ (int)xlErrorBarSourceFrom:(int)arg1;
+ (int)xlErrorBarTypeFrom:(int)arg1 direction:(int)arg2;
+ (id)readErrorBarGraphicProperties:(const struct XlChartSeriesFormat *)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3;
+ (int)edErrorBarDirectionFrom:(int)arg1;
+ (int)edErrorBarTypeFrom:(int)arg1;

@end

