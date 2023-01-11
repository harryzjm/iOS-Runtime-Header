//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NCNotificationRequest, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface NCNotificationSummaryBuilder : NSObject
{
    NCNotificationRequest *_leadingNotificationRequest;
    NSMutableArray *_notificationRequests;
    NSMutableOrderedSet *_formatStrings;
    NSMutableDictionary *_formatStringsCounts;
    NSMutableOrderedSet *_arguments;
    NSMutableDictionary *_argumentsCounts;
    unsigned long long _defaultFormatsCount;
    unsigned long long _emptyArgumentsCount;
    NSString *_summaryText;
}

@property(readonly, copy, nonatomic) NSString *summaryText; // @synthesize summaryText=_summaryText;
- (void).cxx_destruct;
- (void)_insertString:(id)arg1 intoSequence:(id)arg2 withCounters:(id)arg3;
- (id)_filteredArgumentsArrayWithArguments:(id)arg1;
- (id)_formatListWithArguments:(id)arg1 truncated:(_Bool)arg2 truncatedArgumentsCount:(unsigned long long *)arg3;
- (id)_formatListWithArguments:(id)arg1;
- (id)_localizedSummaryWithFormat:(id)arg1 notificationsCount:(unsigned long long)arg2 arguments:(id)arg3;
- (id)_localizedSummaryWithFormats:(id)arg1 andCounts:(id)arg2;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)arg1 arguments:(id)arg2;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)arg1;
- (unsigned long long)_summaryNotificationsCount;
- (id)_buildSummaryText;
- (void)_updateSummaryText;
- (void)_addNotificationRequest:(id)arg1;
- (id)description;
- (void)updateWithNotificationRequests:(id)arg1;

@end

