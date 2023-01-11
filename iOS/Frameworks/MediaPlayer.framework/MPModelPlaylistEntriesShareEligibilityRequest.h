//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPModelPlaylist;

@interface MPModelPlaylistEntriesShareEligibilityRequest : NSObject <NSCopying>
{
    MPModelPlaylist *_playlist;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MPModelPlaylist *playlist; // @synthesize playlist=_playlist;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlaylist:(id)arg1;

@end
