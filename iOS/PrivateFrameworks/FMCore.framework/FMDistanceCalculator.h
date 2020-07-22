//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface FMDistanceCalculator : NSObject
{
    NSLocale *_locale;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_calculationQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calculationQueue; // @synthesize calculationQueue=_calculationQueue;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (id)_localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)_localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 fractionDigits:(unsigned long long)arg3;
- (id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2;
- (id)futureLocalizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
@property(nonatomic) long long measurementSystem;
- (id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2;
- (id)initWithDefaultsSuiteName:(id)arg1;
- (id)init;

@end
