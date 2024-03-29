//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDDepartureSequenceContainer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitNearbyScheduleLine : NSObject
{
    GEOPDDepartureSequenceContainer *_departureSequenceContainer;
    NSArray *_departureSequences;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *departureSequences; // @synthesize departureSequences=_departureSequences;
@property(readonly, nonatomic) _Bool isSignificant;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSArray *artworks;
- (id)initWithDepartureSequenceContainer:(id)arg1 departureSequences:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

