//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class MapsSuggestionsRoutine, NSString;
@protocol MapsSuggestionsMeCardReader;

@interface MapsSuggestionsUser : NSObject <MapsSuggestionsObject>
{
    struct Queue _queue;
    id <MapsSuggestionsMeCardReader> _meCardReader;
    MapsSuggestionsRoutine *_routine;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniqueName;
- (BOOL)hasVisitedMapItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)meCardForProminentPlacesAroundCoordinate:(struct CLLocationCoordinate2D)arg1 maxDistance:(double)arg2 maxAge:(double)arg3 minVisits:(long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithMeCardReader:(id)arg1 routine:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
