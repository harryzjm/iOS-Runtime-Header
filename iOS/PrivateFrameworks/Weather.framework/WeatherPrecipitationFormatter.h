//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLengthFormatter.h>

@class NSLocale;

@interface WeatherPrecipitationFormatter : NSLengthFormatter
{
    NSLocale *_locale;
}

+ (id)convenienceFormatter;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (long long)precipitationUnit;
- (double)convertDistanceInMetric:(double)arg1 to:(long long)arg2;
- (double)convertDistanceInImperial:(double)arg1 to:(long long)arg2;
- (id)stringFromDistance:(double)arg1 isDataMetric:(_Bool)arg2;
- (id)stringFromInches:(double)arg1;
- (id)stringFromCentimeters:(double)arg1;
- (id)init;

@end
