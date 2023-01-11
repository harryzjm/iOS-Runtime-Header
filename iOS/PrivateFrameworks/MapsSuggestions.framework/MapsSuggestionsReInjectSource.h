//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class NSString;
@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsReInjectSource <MapsSuggestionsSource>
{
    NSString *_path;
}

+ (id)_entriesFromMultilineString:(id)arg1;
+ (unsigned long long)disposition;
+ (_Bool)isEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)start;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
