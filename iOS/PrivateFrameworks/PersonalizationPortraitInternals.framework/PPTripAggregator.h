//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPTripAggregator : NSObject
{
}

+ (id)keyForCategory:(unsigned char)arg1;
+ (id)_eventsFromCategory:(unsigned char)arg1 inPool:(id)arg2;
+ (id)mergeTripCandidates:(id)arg1;
+ (id)tripEventsFromCandidates:(id)arg1;
+ (id)tripCandidatesWithEvents:(id)arg1;
+ (id)tripEventsWithEvents:(id)arg1 from:(id)arg2 to:(id)arg3;

@end
