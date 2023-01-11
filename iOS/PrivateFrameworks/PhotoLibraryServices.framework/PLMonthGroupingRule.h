//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLHighlightItemClustererRule-Protocol.h>
#import <PhotoLibraryServices/PLHighlightItemPromoterRule-Protocol.h>

@class NSCalendar, NSString;

@interface PLMonthGroupingRule : NSObject <PLHighlightItemClustererRule, PLHighlightItemPromoterRule>
{
    NSCalendar *_calendar;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)fallbackHighlightItemFromAllHighlightItems:(id)arg1;
- (id)highlightItemsSortedByImportance:(id)arg1;
- (_Bool)highlightItemHasMinimumRequirementToBePromoted:(id)arg1;
- (unsigned long long)maximumNumberOfHighlightItemsToPromote;
- (_Bool)highlightItemList:(id)arg1 canBeMergedWithOtherHighlightItemList:(id)arg2;
- (_Bool)highlightItem:(id)arg1 belongsToHighlightItemList:(id)arg2;
- (id)dominantMonthDateComponentForStartDateComponents:(id)arg1 endDateComponents:(id)arg2 numberOfDaysInMonthOfStartDate:(long long)arg3;
- (void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 forceUpdateLocale:(_Bool)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
