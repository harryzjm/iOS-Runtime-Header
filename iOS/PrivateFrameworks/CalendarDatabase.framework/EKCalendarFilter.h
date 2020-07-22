//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CalendarDatabase/NSCopying-Protocol.h>

@class NSMutableSet, NSString;

@interface EKCalendarFilter : NSObject <NSCopying>
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableSet *_calendarUIDs;
    struct CalDatabase *_database;
    NSString *_searchTerm;
    int _entityType;
}

+ (void)_addCalendarsForStoreWithUID:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase *)arg3;
+ (void)_addCalendarUIDsFromPrefs:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase *)arg3;
+ (void)_addCalendarWithUID:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase *)arg3;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void).cxx_destruct;
- (id)calendarIDClauseForQueryWithVariableName:(id)arg1;
- (id)filterQueryForKey:(id)arg1 prefix:(id)arg2 whereClause:(id)arg3 creator:(CDUnknownFunctionPointerType)arg4 userInfo:(void *)arg5;
- (id)filterQueryForQueryString:(id)arg1 creator:(CDUnknownFunctionPointerType)arg2 userInfo:(void *)arg3;
- (id)_addFilterToQuery:(id)arg1 creator:(CDUnknownFunctionPointerType)arg2 userInfo:(void *)arg3;
- (void)validate;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeCalendarWithUID:(id)arg1;
- (_Bool)isCalendarUIDVisible:(id)arg1;
- (int)visibleCalendarCountWithOptions:(int)arg1;
- (id)visibleCalendarsWithOptions:(int)arg1;
- (id)filteredCalendars;
- (id)_generateUIDSetToFilterAllCalendars;
- (id)_generateUIDSetToShowCalendarUIDs:(id)arg1;
- (id)_generateUIDSetToFilterCalendars:(id)arg1;
- (id)_generateUIDSetToShowCalendars:(id)arg1;
- (id)_UIDAntiSetWithCalendars:(id)arg1;
- (id)_UIDSetWithCalendars:(id)arg1;
- (_Bool)isFilteringAll;
- (_Bool)_isFilteringAllWhileLocked;
- (_Bool)isShowingAll;
- (void)dealloc;
- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2 calendarUIDs:(id)arg3;
- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2 filteringCalendarsWithUIDs:(id)arg3;
- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2 filteringCalendars:(id)arg3;
- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2 showingCalendarsWithUIDs:(id)arg3;
- (id)initWithDatabase:(struct CalDatabase *)arg1 showingCalendarsWithUIDs:(id)arg2;
- (id)initWithDatabase:(struct CalDatabase *)arg1 showingCalendars:(id)arg2;
- (id)initFilteringAllWithDatabase:(struct CalDatabase *)arg1;
- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2;
- (id)initWithDatabase:(struct CalDatabase *)arg1;

@end

