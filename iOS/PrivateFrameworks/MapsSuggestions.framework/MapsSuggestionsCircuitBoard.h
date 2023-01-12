//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsJSONable-Protocol.h>

@class NSArray, NSString;

@interface MapsSuggestionsCircuitBoard : NSObject <MapsSuggestionsJSONable>
{
    struct Queue _queue;
    struct _Config {
        NSArray *circuits;
        NSArray *triggers;
        NSArray *conditions;
    } _config;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)awaitQueue;
- (id)uniqueName;
- (id)objectForJSON;
- (id)nameForJSON;
- (void)disconnectCondition:(id)arg1 fromCircuit:(id)arg2;
- (void)disconnectTrigger:(id)arg1 fromCircuit:(id)arg2;
- (void)connectCondition:(id)arg1 toCircuit:(id)arg2;
- (void)connectTrigger:(id)arg1 toCircuit:(id)arg2;
- (id)addAction:(id)arg1;
- (id)addCircuit:(id)arg1;
- (id)addCondition:(id)arg1;
- (id)addTrigger:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
