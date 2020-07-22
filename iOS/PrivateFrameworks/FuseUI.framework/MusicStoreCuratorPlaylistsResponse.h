//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelResponse.h>

@class MPChangeDetails, NSArray;

@interface MusicStoreCuratorPlaylistsResponse : MPModelResponse
{
    MPChangeDetails *_changeDetails;
    NSArray *_additionalPlaylistIdentifiers;
}

@property(copy, nonatomic) NSArray *additionalPlaylistIdentifiers; // @synthesize additionalPlaylistIdentifiers=_additionalPlaylistIdentifiers;
@property(retain, nonatomic) MPChangeDetails *changeDetails; // @synthesize changeDetails=_changeDetails;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasAdditionalPlaylists;

@end

