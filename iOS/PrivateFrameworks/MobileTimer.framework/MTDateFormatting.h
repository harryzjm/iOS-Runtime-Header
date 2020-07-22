//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSString;

@interface MTDateFormatting : NSObject
{
    NSString *_amString;
    NSString *_pmString;
    NSDateFormatter *_dateOnlyFormatter;
    NSDateFormatter *_timeOnlyFormatter;
    _Bool _use24HourTime;
    _Bool _timeDesignatorAppearsBeforeTime;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool timeDesignatorAppearsBeforeTime; // @synthesize timeDesignatorAppearsBeforeTime=_timeDesignatorAppearsBeforeTime;
@property(readonly, nonatomic) _Bool use24HourTime; // @synthesize use24HourTime=_use24HourTime;
- (void).cxx_destruct;
- (id)timeDesignatorForDate:(id)arg1 timeZone:(id)arg2;
- (id)timeDesignatorForDate:(id)arg1;
- (id)localizedTimeStringFromDate:(id)arg1 forTimeZone:(id)arg2 timeDesignator:(out id *)arg3;
- (id)localizedTimeStringFromDate:(id)arg1 timeDesignator:(out id *)arg2;
@property(readonly, nonatomic) __weak NSString *pmString;
@property(readonly, nonatomic) __weak NSString *amString;
- (id)_timeOnlyFormatter;
- (id)_dateOnlyFormatter;
- (void)_loadLocaleInfo;
- (void)_reloadLocaleInfo;
- (void)_clearLocaleDependentState;
- (void)dealloc;
- (id)init;

@end

