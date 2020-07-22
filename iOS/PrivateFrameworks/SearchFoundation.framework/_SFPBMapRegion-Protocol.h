//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _SFPBMapRegion <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasEastLng;
@property(nonatomic) double eastLng;
@property(readonly, nonatomic) _Bool hasNorthLat;
@property(nonatomic) double northLat;
@property(readonly, nonatomic) _Bool hasWestLng;
@property(nonatomic) double westLng;
@property(readonly, nonatomic) _Bool hasSouthLat;
@property(nonatomic) double southLat;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
