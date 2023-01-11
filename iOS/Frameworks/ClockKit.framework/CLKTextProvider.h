//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>

@class CLKClockTimerToken, CLKTextProviderCache, NSMutableArray, NSMutableDictionary, NSString, UIColor;

@interface CLKTextProvider : NSObject <NSSecureCoding, NSCopying>
{
    CLKTextProviderCache *_defaultCache;
    NSMutableDictionary *_cachesByKey;
    NSMutableArray *_recentCacheKeys;
    unsigned long long _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    CLKClockTimerToken *_secondTimerToken;
    CLKClockTimerToken *_minuteTimerToken;
    CLKClockTimerToken *_30fpsTimerToken;
    _Bool _finalized;
    _Bool _ignoreUppercaseStyle;
    _Bool _paused;
    _Bool _italicized;
    _Bool _monospacedNumbers;
    UIColor *_tintColor;
    NSString *_accessibilityLabel;
    long long _shrinkTextPreference;
    long long _timeTravelUpdateFrequency;
}

+ (id)textProviderWithJSONObjectRepresentation:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)new;
+ (id)textProviderWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)textProviderWithFormat:(id)arg1;
+ (id)localizableTextProviderWithStringsFileFormatKey:(id)arg1 textProviders:(id)arg2;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)arg1 shortTextKey:(id)arg2;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long timeTravelUpdateFrequency; // @synthesize timeTravelUpdateFrequency=_timeTravelUpdateFrequency;
@property(nonatomic) long long shrinkTextPreference; // @synthesize shrinkTextPreference=_shrinkTextPreference;
@property(nonatomic) _Bool monospacedNumbers; // @synthesize monospacedNumbers=_monospacedNumbers;
@property(nonatomic) _Bool italicized; // @synthesize italicized=_italicized;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool ignoreUppercaseStyle; // @synthesize ignoreUppercaseStyle=_ignoreUppercaseStyle;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_update;
- (void)_maybeStartOrStopUpdates;
- (void)_localeChanged;
- (void)_pruneCacheKeysIfNecessary;
- (id)_cacheForKey:(id)arg1;
- (id)_defaultCache;
- (id)_monospacedNumbers:(id)arg1;
- (id)_italicize:(id)arg1;
- (id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (long long)_updateFrequency;
@property(readonly, nonatomic) long long updateFrequency;
- (id)_description;
- (_Bool)_validate;
- (void)_endSession;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (void)_startSessionWithDate:(id)arg1;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 andRemovingDesignator:(_Bool)arg2 designatorExists:(_Bool *)arg3;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg1;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 designatorExists:(_Bool *)arg2;
- (id)description;
- (void)stopUpdatesForToken:(id)arg1;
- (id)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)finalizedCopy;
- (void)finalize;
- (_Bool)validate;
- (id)sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (struct CGSize)minimumSizeWithStyle:(id)arg1 now:(id)arg2;
- (id)attributedTextAndSize:(struct CGSize *)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 now:(id)arg4;
- (id)localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (id)attributedString;
- (void)dealloc;
- (void)_commonInit;
- (id)init;
- (id)initPrivate;

@end
