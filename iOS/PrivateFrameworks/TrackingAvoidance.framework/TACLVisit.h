//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/OSLogCoding-Protocol.h>
#import <TrackingAvoidance/TAEventProtocol-Protocol.h>

@class NSDate, NSString;

@interface TACLVisit : NSObject <OSLogCoding, TAEventProtocol>
{
    NSDate *_arrivalDate;
    NSDate *_departureDate;
    double _horizontalAccuracy;
    NSDate *_detectionDate;
    unsigned long long _confidence;
    struct CLLocationCoordinate2D _coordinate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long confidence; // @synthesize confidence=_confidence;
@property(readonly, copy, nonatomic) NSDate *detectionDate; // @synthesize detectionDate=_detectionDate;
@property(readonly, nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, copy, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
@property(readonly, copy, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
- (id)getDate;
@property(readonly, nonatomic) _Bool isTemporalOrderSensical;
@property(readonly, nonatomic) _Bool hasDepartureDate;
@property(readonly, nonatomic) _Bool hasArrivalDate;
@property(readonly, copy) NSString *description;
- (id)descriptionDictionary;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5 confidence:(unsigned long long)arg6;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
