//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WeatherFoundation/WFWeatherConditions.h>

@class NSDate, NSString, UIColor;

@interface WFWeatherConditions (NWMLocalizedWind)
+ (int)_preferredWindSpeedUnitForLocale:(id)arg1;
+ (id)_localizedWindspeed:(double)arg1 withUnit:(int)arg2 forLocale:(id)arg3;
+ (id)_defaultWindSpeedWithUnit:(double)arg1;
+ (id)nwm_localizedWindpeedUnit;
+ (id)_nwc_prefixForFamily:(long long)arg1;
+ (id)nwc_noDataImageForComplicationFamily:(long long)arg1;
+ (id)_nwm_shortSuffixedKey:(id)arg1;
+ (id)nwm_localizedNoDataRounded;
+ (id)nwm_localizedNoData;
+ (id)nwm_localizedDescriptionShortKeyForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwm_localizedDescriptionKeyForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwm_localizedDescriptionShortForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwm_localizedDescriptionForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwc_ultravioletIndexCategoryColorUnknown;
+ (id)nwc_ultravioletIndexCategoryColorSpectrum;
- (double)_speedByConverting:(double)arg1 toUnit:(int)arg2;
- (id)_localizedWindDirectionAbbreviation:(_Bool)arg1;
- (unsigned long long)_indexOfWindDirectionKeyForWindDirectionInDegrees:(double)arg1 keys:(id)arg2;
- (id)nwm_windDirectionKey;
@property(readonly, nonatomic) NSString *nwm_localizedWindspeedWithoutUnit;
@property(readonly, nonatomic) NSString *nwm_localizedWindspeedWithUnit;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirection;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirectionAbbreviationCompact;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirectionAbbreviation;
- (unsigned long long)_nwc_code;
- (id)nwc_conditionImageProviderForTimeOfDay:(unsigned long long)arg1 andFamily:(long long)arg2;
- (id)nwc_conditionImageForTimeOfDay:(unsigned long long)arg1 andFamily:(long long)arg2;
- (unsigned long long)nw_timeOfDay;
- (id)nwm_localizedDescriptionShort;
- (id)nwm_localizedDescriptionKey;
- (id)nwm_localizedDescription;
- (id)nwm_localizedDescriptionKeyForTimeOfDay:(unsigned long long)arg1;
- (id)nwm_localizedDescriptionShortForTimeOfDay:(unsigned long long)arg1;
- (id)nwm_localizedDescriptionForTimeOfDay:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *nwc_ultravioletIndexRiskDescription;
@property(readonly, nonatomic) UIColor *nwc_ultravioletIndexCategoryColor;
@property(readonly, nonatomic) unsigned long long nwc_ultravioletIndexCategory;
@property(readonly, nonatomic) NSDate *nwc_expirationDate;
@property(readonly, nonatomic) NSDate *nwc_date;
@property(readonly, nonatomic) unsigned long long nwm_ultravioletIndexCategory;
@property(readonly, nonatomic) NSString *nwm_localizedUltravioletIndexRiskDescription;
@end
