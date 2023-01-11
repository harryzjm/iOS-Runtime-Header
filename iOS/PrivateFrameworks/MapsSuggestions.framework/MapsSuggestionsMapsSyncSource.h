//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsMapsSyncObserver-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class MapsSuggestionsMapsSync, NSObject, NSString;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsMapsSyncSource <MapsSuggestionsMapsSyncObserver, MapsSuggestionsSource>
{
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsMapsSync *_mapsSync;
}

+ (unsigned long long)disposition;
+ (_Bool)isEnabled;
- (void).cxx_destruct;
- (void)mapsSync:(id)arg1 didChangeForContentType:(long long)arg2;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)start;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)initWithMapsSync:(id)arg1 delegate:(id)arg2 name:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
