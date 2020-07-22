//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class GEOComposedRouteStep, MKPolyline, MKRouteStepPolyline, NSString;

@interface MKRouteStep : NSObject
{
    GEOComposedRouteStep *_geoComposedRouteStep;
    NSString *_instructions;
    unsigned long long _transportType;
    MKRouteStepPolyline *_polyline;
}

@property(readonly, nonatomic, getter=_geoComposedRouteStep) GEOComposedRouteStep *geoComposedRouteStep; // @synthesize geoComposedRouteStep=_geoComposedRouteStep;
@property(readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(readonly, nonatomic) MKPolyline *polyline; // @synthesize polyline=_polyline;
- (void).cxx_destruct;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) NSString *notice;
- (id)_initWithGEOComposedRouteStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4;

@end

