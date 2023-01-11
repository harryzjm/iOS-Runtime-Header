//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsParkedCarObserver-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsPreloadableSource-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class MapsSuggestionsRoutine, NSString;
@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsRoutineSource <MapsSuggestionsParkedCarObserver, MapsSuggestionsSource, MapsSuggestionsPreloadableSource>
{
    MapsSuggestionsRoutine *_routine;
    struct Queue _queue;
}

+ (unsigned long long)disposition;
+ (_Bool)isEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updatedParkedCar;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (BOOL)suggestionsEntriesAtLocation:(id)arg1 period:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (double)updateSuggestionEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)initWithRoutine:(id)arg1 delegate:(id)arg2 name:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
