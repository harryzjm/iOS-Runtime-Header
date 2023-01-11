//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClockKitUI/NSSecureCoding-Protocol.h>

@class NSArray, NSDate;

@interface CLKUIAlmanacTransitInfo : NSObject <NSSecureCoding>
{
    NSDate *_day;
    long long _constantSun;
    NSDate *_rise;
    NSDate *_solarNoon;
    NSDate *_set;
    NSArray *_solarMidnights;
    CDStruct_2c43369c _location;
}

+ (id)transitInfoForDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;
+ (id)transitInfoForDate:(id)arg1 location:(CDStruct_2c43369c)arg2 sunAltitude:(double)arg3;
+ (id)transitInfoForDate:(id)arg1 city:(id)arg2;
+ (id)transitInfoForDate:(id)arg1 location:(CDStruct_2c43369c)arg2;
+ (id)transitInfoForDate:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *solarMidnights; // @synthesize solarMidnights=_solarMidnights;
@property(retain, nonatomic) NSDate *set; // @synthesize set=_set;
@property(retain, nonatomic) NSDate *solarNoon; // @synthesize solarNoon=_solarNoon;
@property(retain, nonatomic) NSDate *rise; // @synthesize rise=_rise;
@property(nonatomic) long long constantSun; // @synthesize constantSun=_constantSun;
@property(nonatomic) CDStruct_2c43369c location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *day; // @synthesize day=_day;
- (id)description;
- (id)initWithDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;
- (id)initWithDate:(id)arg1 location:(CDStruct_2c43369c)arg2 sunAltitude:(double)arg3;
- (id)initWithDate:(id)arg1 city:(id)arg2;
- (id)initWithDate:(id)arg1 location:(CDStruct_2c43369c)arg2;
- (id)initWithDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
