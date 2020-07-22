//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSLocale, NSNumberFormatter;

@interface NSMeasurementFormatter <NSSecureCoding>
{
    void *_formatter;
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringFromUnit:(id)arg1;
- (id)measurementFromString:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromMeasurement:(id)arg1;
@property(copy) NSNumberFormatter *numberFormatter;
@property(copy) NSLocale *locale;
@property long long unitStyle;
@property unsigned long long unitOptions;
- (void)dealloc;
- (id)init;

@end

