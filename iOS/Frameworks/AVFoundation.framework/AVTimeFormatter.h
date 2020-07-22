//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@class AVTimeFormatterInternal;

@interface AVTimeFormatter : NSFormatter
{
    AVTimeFormatterInternal *_internal;
}

- (void)setNumberFormatterWithTwoMinimumIntegerDigits:(id)arg1;
- (id)numberFormatterWithTwoMinimumIntegerDigits;
- (void)setNumberFormatterWithOneMinimumIntegerDigits:(id)arg1;
- (id)numberFormatterWithOneMinimumIntegerDigits;
- (void)setCachedDateFormatterTemplate:(id)arg1;
- (id)cachedDateFormatterTemplate;
- (void)setCachedDateFormatterFormat:(id)arg1;
- (id)cachedDateFormatterFormat;
- (void)setIsRightToLeft:(_Bool)arg1;
- (_Bool)isRightToLeft;
- (void)setLocale:(id)arg1;
- (id)locale;
@property(nonatomic, getter=isFullWidth) _Bool fullWidth;
@property(nonatomic) double formatTemplate;
@property(nonatomic) long long style;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (id)stringFromSeconds:(double)arg1;
- (id)stringFromCMTime:(CDStruct_1b6d18a9)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
