//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPArtworkCatalog;

@interface MPConcreteMediaItemArtwork
{
    MPArtworkCatalog *_catalog;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
- (struct CGRect)bounds;
- (id)initWithArtworkCatalog:(id)arg1;
- (id)initWithArtworkCatalog:(id)arg1 allowsNetworking:(_Bool)arg2;

@end
