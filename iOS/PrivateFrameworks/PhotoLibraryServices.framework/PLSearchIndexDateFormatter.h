//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDateFormatter, NSString, PLDateRangeFormatter;
@protocol OS_dispatch_queue;

@interface PLSearchIndexDateFormatter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDateFormatter *_dateFormatter;
    PLDateRangeFormatter *_dateRangeFormatter;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_displayFormat;
    NSString *_parseFormat;
    NSArray *_monthSymbols;
    _Bool _localeDidChange;
}

- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2;
- (id)newLocalizedStringFromDate:(id)arg1;
- (id)_inqNewLocalizedStringFromDate:(id)arg1;
- (id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(_Bool)arg2;
- (id)localizedMonthStringsFromDate:(id)arg1;
- (id)localizedSeasonNameFromDate:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)_inqUpdateDateFormat:(id)arg1;
- (void)_inqSetupDateFormatter;
- (id)_arrangedMonthSymbols;
- (void)dealloc;
- (id)init;

@end

