//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelStorePlatformMetadataGenericObjectBuilder, MPPropertySet;

@interface MPCModelRadioStationTrackGenericObjectBuilder : NSObject
{
    MPModelStorePlatformMetadataGenericObjectBuilder *_storePlatformBuilder;
    struct {
        unsigned int initialized:1;
        struct {
            unsigned int identifiers:1;
            unsigned int bookmarkTime:1;
            unsigned int shouldRememberBookmarkTime:1;
            unsigned int hasBeenPlayed:1;
            unsigned int startTime:1;
            unsigned int stopTime:1;
            unsigned int storeUbiquitousIdentifier:1;
            unsigned int userPlayCount:1;
        } playbackPosition;
    } _requestedSongProperties;
    MPPropertySet *_requestedProperties;
}

@property(readonly, copy, nonatomic) MPPropertySet *requestedProperties; // @synthesize requestedProperties=_requestedProperties;
- (void).cxx_destruct;
- (id)genericObjectForRadioStationTrack:(id)arg1 contentItemID:(id)arg2;
- (id)initWithRequestedProperties:(id)arg1;

@end

