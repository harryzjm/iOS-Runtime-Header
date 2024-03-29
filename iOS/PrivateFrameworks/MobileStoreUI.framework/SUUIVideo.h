//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SUUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SUUIVideo : NSObject
{
    id <SUUIArtworkProviding> _artworks;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) id <SUUIArtworkProviding> artworks; // @synthesize artworks=_artworks;
- (id)initWithVideoDictionary:(id)arg1;

@end

