//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKOverlay-Protocol.h>

@class NSString;

@interface MKCircle <MKOverlay>
{
    struct CLLocationCoordinate2D _coordinate;
    double _radius;
    CDStruct_02837cd9 _boundingMapRect;
}

+ (id)circleWithMapRect:(CDStruct_02837cd9)arg1;
+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
- (id)_initWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

