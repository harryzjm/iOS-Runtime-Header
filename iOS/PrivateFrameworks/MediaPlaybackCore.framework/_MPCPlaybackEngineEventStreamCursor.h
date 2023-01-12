//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngineEvent, MPCPlaybackEngineEventStream, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEngineEventStreamCursor : NSObject
{
    unsigned long long _startNS;
    unsigned long long _endNS;
    MPCPlaybackEngineEventStream *_eventStream;
    MPCPlaybackEngineEvent *_startEvent;
    MPCPlaybackEngineEvent *_endEvent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MPCPlaybackEngineEvent *endEvent; // @synthesize endEvent=_endEvent;
@property(readonly, nonatomic) MPCPlaybackEngineEvent *startEvent; // @synthesize startEvent=_startEvent;
@property(readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream; // @synthesize eventStream=_eventStream;
- (id)findPreviousEventWithTypes:(id)arg1 matchingPayload:(id)arg2;
- (id)findPreviousEventWithType:(id)arg1 matchingPayload:(id)arg2;
- (void)enumeratePreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePreviousEventsWithTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePreviousEventsWithType:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)countOfPreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2;
- (long long)countOfPreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2;
- (id)cursorFromEvent:(id)arg1 untilEvent:(id)arg2;
- (id)cursorUntilEvent:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithEventStream:(id)arg1 startEvent:(id)arg2 endEvent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

