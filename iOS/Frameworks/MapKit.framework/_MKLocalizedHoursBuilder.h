//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSTimeZone, UIColor;

@interface _MKLocalizedHoursBuilder : NSObject
{
    _Bool _isClosedTodayAllDay;
    _Bool _isCurrentlyClosed;
    _Bool _isClosingSoon;
    _Bool _isOpeningSoon;
    NSString *_localizedOperatingHours;
    UIColor *_hoursStateLabelColor;
    unsigned long long _geoMapItemOpeningHourOptions;
    unsigned long long _localizedHoursStringOptions;
    NSTimeZone *_timeZone;
    NSArray *_operatingHours;
}

@property(retain, nonatomic) NSArray *operatingHours; // @synthesize operatingHours=_operatingHours;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) unsigned long long localizedHoursStringOptions; // @synthesize localizedHoursStringOptions=_localizedHoursStringOptions;
@property(nonatomic) unsigned long long geoMapItemOpeningHourOptions; // @synthesize geoMapItemOpeningHourOptions=_geoMapItemOpeningHourOptions;
- (void).cxx_destruct;
- (id)_updatedHoursLabelColor;
- (id)_updatedLocalizedOperatingHoursString;
- (void)_updateLocalizedString;
@property(readonly, nonatomic) UIColor *hoursStateLabelColor; // @synthesize hoursStateLabelColor=_hoursStateLabelColor;
@property(readonly, nonatomic) NSString *localizedOperatingHours; // @synthesize localizedOperatingHours=_localizedOperatingHours;
- (id)initWithTimeZone:(id)arg1 operatingHours:(id)arg2 geoMapItemOpeningHourOptions:(unsigned long long)arg3 localizedHoursStringOptions:(unsigned long long)arg4;
- (id)initWithMapItemForMessageForBusiness:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (id)initWithMapItem:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;

@end
