//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUIPlistMediaEntityImageLoadParamsCreating-Protocol.h>

@class VUIPlistMediaDatabaseShow;

__attribute__((visibility("hidden")))
@interface VUIPlistShowMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating>
{
    VUIPlistMediaDatabaseShow *_databaseShow;
}

@property(retain, nonatomic) VUIPlistMediaDatabaseShow *databaseShow; // @synthesize databaseShow=_databaseShow;
- (void).cxx_destruct;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)mediaItemCount;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)playedState;
- (id)coverArtImageIdentifier;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)initWithMediaLibrary:(id)arg1 databaseShow:(id)arg2 requestedProperties:(id)arg3;

@end

