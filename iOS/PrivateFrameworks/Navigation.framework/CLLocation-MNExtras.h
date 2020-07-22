//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLLocation.h>

@class GEONavigationMatchInfo, GEORouteMatch, NSString;

@interface CLLocation (MNExtras)
+ (id)_navigation_stringWithType:(int)arg1;
@property(nonatomic, getter=_navigation_gtLog, setter=_navigation_setGtLog:) _Bool gtLog;
@property(readonly, nonatomic, getter=_navigation_detailedMatchInfo) GEONavigationMatchInfo *detailedMatchInfo;
@property(readonly, nonatomic, getter=_navigation_rawShiftedCoordinate) struct CLLocationCoordinate2D rawShiftedCoordinate;
@property(readonly, nonatomic, getter=_navigation_hasMatch) _Bool hasMatch;
- (double)_navigation_speedAccuracy;
@property(readonly, nonatomic, getter=_navigation_courseAccuracy) double courseAccuracy;
- (_Bool)_navigation_isEqualToLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic, getter=_navigation_locationDescription) NSString *locationDescription;
@property(readonly, nonatomic, getter=_navigation_routeMatch) GEORouteMatch *routeMatch;
@property(readonly, nonatomic, getter=_navigation_hasValidCourse) _Bool hasValidCourse;
@property(readonly, nonatomic, getter=_navigation_isStale) _Bool isStale;
- (id)initWithGeoLocation:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 rawCoordinate:(struct CLLocationCoordinate2D)arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12 referenceFrame:(int)arg13;
@end

