//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NWMTemperatureFormatter;

__attribute__((visibility("hidden")))
@interface NWCFiveHourForecastTemperatureView
{
    NWMTemperatureFormatter *_formatter;
}

@property(retain, nonatomic) NWMTemperatureFormatter *formatter; // @synthesize formatter=_formatter;
- (void).cxx_destruct;
- (id)dataFormatter;
- (Class)hourlyForecastViewClass;

@end
