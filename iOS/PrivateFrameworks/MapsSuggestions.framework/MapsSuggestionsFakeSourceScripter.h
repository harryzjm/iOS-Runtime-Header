//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class MapsSuggestionsFakeSource, MapsSuggestionsFakeSourceScripterStep, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsFakeSourceScripter : NSObject <MapsSuggestionsObject>
{
    NSMutableArray *_steps;
    MapsSuggestionsFakeSourceScripterStep *_previousStep;
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsFakeSource *_fakeSource;
}

@property(retain, nonatomic) MapsSuggestionsFakeSource *fakeSource; // @synthesize fakeSource=_fakeSource;
- (void).cxx_destruct;
- (void)resendSameAfterSeconds:(double)arg1;
- (void)resendSameNow;
- (void)sendNextAfterSeconds:(double)arg1;
- (void)sendNextNow;
- (void)_sendStep:(id)arg1;
- (void)addEntriesToDelete:(struct NSArray *)arg1;
- (void)addEntriesToAdd:(struct NSArray *)arg1 deleteMissing:(_Bool)arg2;
- (id)initWithFakeSource:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

