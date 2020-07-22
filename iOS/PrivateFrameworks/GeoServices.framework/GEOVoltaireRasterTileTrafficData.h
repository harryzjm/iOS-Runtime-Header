//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface GEOVoltaireRasterTileTrafficData : NSObject
{
    CDStruct_912cb5d2 *_vertices;
    NSMutableArray *_trafficSegments;
    NSArray *_trafficIncidents;
    double _expirationTime;
}

+ (double)expirationTimeInterval;
+ (id)createWithData:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2;
@property(readonly, nonatomic) NSArray *trafficIncidents; // @synthesize trafficIncidents=_trafficIncidents;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(retain, nonatomic) NSMutableArray *trafficSegments; // @synthesize trafficSegments=_trafficSegments;
@property(nonatomic) CDStruct_912cb5d2 *vertices; // @synthesize vertices=_vertices;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithData:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2;

@end

