//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLLocation.h>

@interface CLLocation (Geohash)
- (struct CLLocationCoordinate2D)sh_geoHashToCoordinates:(id)arg1;
- (id)sh_geohashOfLength:(unsigned long long)arg1;
- (struct CLLocationCoordinate2D)sh_roundCoordinateValuesToGeohashOfLength:(unsigned long long)arg1;
- (id)sh_toGeohash;
@end

