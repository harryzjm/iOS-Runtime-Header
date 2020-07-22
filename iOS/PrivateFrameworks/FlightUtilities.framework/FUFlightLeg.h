//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FlightUtilities/NSSecureCoding-Protocol.h>

@class FUFlightStep, NSString;

@interface FUFlightLeg : NSObject <NSSecureCoding>
{
    long long _status;
    double _duration;
    FUFlightStep *_departure;
    FUFlightStep *_arrival;
    NSString *_baggageClaim;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSString *baggageClaim; // @synthesize baggageClaim=_baggageClaim;
@property(retain) FUFlightStep *arrival; // @synthesize arrival=_arrival;
@property(retain) FUFlightStep *departure; // @synthesize departure=_departure;
@property double duration; // @synthesize duration=_duration;
@property long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly) double currentProgress;
- (_Bool)isEqual:(id)arg1;

@end

