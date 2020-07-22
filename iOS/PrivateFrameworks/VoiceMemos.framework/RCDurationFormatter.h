//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumberFormatter;
@protocol OS_dispatch_queue;

@interface RCDurationFormatter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_positionalParameterFormatStrings;
    NSNumberFormatter *_defaultFormatter;
    NSNumberFormatter *_nonPaddedHourFormatter;
}

+ (id)_localizedPositionalFormatStringForDurationFormattingStyle:(long long)arg1;
+ (id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)arg1;
+ (id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)arg1;
+ (id)sharedFormatter;
- (void).cxx_destruct;
- (void)_onQueueReloadLocalizedFormatStrings;
- (id)_onQueuePositionalFormatStringForStyle:(long long)arg1;
- (id)_onQueueStringFromDuration:(double)arg1 style:(long long)arg2;
- (id)_onQueueStringFromDuration:(double)arg1 byReplacingDigitsWithDigit:(long long)arg2 style:(long long)arg3;
- (void)reloadLocalizedFormatStrings;
- (id)stringFromDuration:(double)arg1 style:(long long)arg2;
- (id)stringFromDuration:(double)arg1 replacingDigitsWithDigit:(unsigned long long)arg2 style:(long long)arg3;
- (void)dealloc;
- (id)init;

@end

