//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDateFormatter, NSMutableArray, NSTimeZone;

@interface CLKTimeTextProvider
{
    NSDateFormatter *_dateFormatter;
    NSMutableArray *_sizingFallbackBlocks;
    _Bool _disallowBothMinutesAndDesignator;
    _Bool _prefersDesignatorToMinutes;
    NSDate *_date;
    NSTimeZone *_timeZone;
}

+ (_Bool)supportsSecureCoding;
+ (id)textProviderWithDate:(id)arg1 timeZone:(id)arg2;
+ (id)textProviderWithDate:(id)arg1;
@property(nonatomic) _Bool prefersDesignatorToMinutes; // @synthesize prefersDesignatorToMinutes=_prefersDesignatorToMinutes;
@property(nonatomic) _Bool disallowBothMinutesAndDesignator; // @synthesize disallowBothMinutesAndDesignator=_disallowBothMinutesAndDesignator;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)_validate;
- (id)_timeAttributedTextWithStyle:(id)arg1 dropMinutes:(_Bool)arg2 dropDesignator:(_Bool)arg3;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;

@end

