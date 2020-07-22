//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Weather/NSCopying-Protocol.h>

@class WFTemperature;

@interface WACurrentForecast : NSObject <NSCopying>
{
    float _windSpeed;
    float _windDirection;
    float _humidity;
    float _dewPoint;
    float _visibility;
    float _pressure;
    float _precipitationPast24Hours;
    WFTemperature *_temperature;
    WFTemperature *_feelsLike;
    unsigned long long _pressureRising;
    unsigned long long _UVIndex;
    long long _conditionCode;
    unsigned long long _observationTime;
}

+ (id)currentForecastForLocation:(id)arg1 conditions:(id)arg2;
@property(nonatomic) unsigned long long observationTime; // @synthesize observationTime=_observationTime;
@property(nonatomic) long long conditionCode; // @synthesize conditionCode=_conditionCode;
@property(nonatomic) float precipitationPast24Hours; // @synthesize precipitationPast24Hours=_precipitationPast24Hours;
@property(nonatomic) unsigned long long UVIndex; // @synthesize UVIndex=_UVIndex;
@property(nonatomic) unsigned long long pressureRising; // @synthesize pressureRising=_pressureRising;
@property(nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(nonatomic) float visibility; // @synthesize visibility=_visibility;
@property(nonatomic) float dewPoint; // @synthesize dewPoint=_dewPoint;
@property(nonatomic) float humidity; // @synthesize humidity=_humidity;
@property(nonatomic) float windDirection; // @synthesize windDirection=_windDirection;
@property(nonatomic) float windSpeed; // @synthesize windSpeed=_windSpeed;
@property(retain, nonatomic) WFTemperature *feelsLike; // @synthesize feelsLike=_feelsLike;
@property(retain, nonatomic) WFTemperature *temperature; // @synthesize temperature=_temperature;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

