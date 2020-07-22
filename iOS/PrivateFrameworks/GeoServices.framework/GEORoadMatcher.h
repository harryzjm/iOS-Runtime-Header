//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapFeatureAccess;

@interface GEORoadMatcher : NSObject
{
    GEOMapFeatureAccess *_mapFeatureAccess;
    _Bool _useRawLocations;
}

@property(nonatomic) _Bool useRawLocations; // @synthesize useRawLocations=_useRawLocations;
- (void).cxx_destruct;
- (id)_bestCandidateSegmentForLocation:(id)arg1 transportType:(int)arg2;
- (id)matchLocation:(id)arg1 forTransportType:(int)arg2;
- (void)dealloc;
- (id)init;

@end

