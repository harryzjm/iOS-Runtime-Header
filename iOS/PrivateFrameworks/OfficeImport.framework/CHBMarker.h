//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBMarker : NSObject
{
}

+ (id)readFrom:(const struct XlChartSeriesFormat *)arg1 state:(id)arg2;
+ (int)xlMarkerStyleFromCHDMarkerType:(int)arg1;
+ (int)chdMarkerStyleFromXlMarkerType:(int)arg1;

@end

