//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@interface RTStateModelLocation : NSObject <NSSecureCoding>
{
    double _Latitude_deg;
    double _Longitude_deg;
    double _uncertainty_m;
    double _confidence;
    double _timestamp_s;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double timestamp_s; // @synthesize timestamp_s=_timestamp_s;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) double uncertainty_m; // @synthesize uncertainty_m=_uncertainty_m;
@property(nonatomic) double Longitude_deg; // @synthesize Longitude_deg=_Longitude_deg;
@property(nonatomic) double Latitude_deg; // @synthesize Latitude_deg=_Latitude_deg;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3;
- (id)initWithRTLocation:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithLat:(double)arg1 Lon:(double)arg2 Uncertainty:(double)arg3 confidence:(double)arg4 andTimestamp_s:(double)arg5;
- (id)init;

@end

