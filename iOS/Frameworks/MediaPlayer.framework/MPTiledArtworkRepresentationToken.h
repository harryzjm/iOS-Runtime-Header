//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol NSCopying;

@interface MPTiledArtworkRepresentationToken : NSObject
{
    id <NSCopying> _revisionIdentifier;
    NSArray *_tileArtworkVisualIdenticalityIdentifiers;
}

@property(copy, nonatomic) NSArray *tileArtworkVisualIdenticalityIdentifiers; // @synthesize tileArtworkVisualIdenticalityIdentifiers=_tileArtworkVisualIdenticalityIdentifiers;
@property(copy, nonatomic) id <NSCopying> revisionIdentifier; // @synthesize revisionIdentifier=_revisionIdentifier;
- (void).cxx_destruct;

@end

