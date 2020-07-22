//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryMoviePlaybackItemMetadata
{
    MPModelGenericObject *_modelGenericObject;
    MPModelPlaylistEntry *_playlistEntry;
}

+ (id)requiredProperties;
@property(retain, nonatomic) MPModelPlaylistEntry *playlistEntry; // @synthesize playlistEntry=_playlistEntry;
- (void).cxx_destruct;
- (id)movie;
- (void)setMovie:(id)arg1;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)modelGenericObject;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

