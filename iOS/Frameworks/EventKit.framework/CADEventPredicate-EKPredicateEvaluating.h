//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/CADEventPredicate.h>

@interface CADEventPredicate (EKPredicateEvaluating)
+ (void)_addEventOccurrenceAndProposedTimeOccurrenceFor:(id)arg1 withOccurrenceStartDate:(id)arg2 toResults:(id)arg3 excludeProposed:(_Bool)arg4 excludeDeclinedUnlessProposed:(_Bool)arg5;
- (_Bool)ekPredicateEvaluateWithObject:(id)arg1;
- (void)expandWithObjectsPendingCommit:(id)arg1 deletedObjectIDs:(id)arg2 andResultArray:(id)arg3;
@end

