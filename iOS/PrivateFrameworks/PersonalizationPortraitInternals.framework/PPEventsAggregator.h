//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PPEventsAggregator : NSObject
{
    NSArray *_eventsPool;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *eventsPool; // @synthesize eventsPool=_eventsPool;
- (id)sortedEvents;
- (void)dedupeEventsInPool;
- (_Bool)isEvent:(id)arg1 dupeOfEvent:(id)arg2;
- (id)tripCandidatesFromEventsPool;
- (id)initWithEventsPool:(id)arg1;

@end
