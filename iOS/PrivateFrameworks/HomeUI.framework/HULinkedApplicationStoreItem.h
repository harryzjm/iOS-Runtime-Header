//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSCopying-Protocol.h>

@class SSLookupItem;

@interface HULinkedApplicationStoreItem <NSCopying>
{
    SSLookupItem *_storeItem;
}

@property(readonly, nonatomic) SSLookupItem *storeItem; // @synthesize storeItem=_storeItem;
- (void).cxx_destruct;
- (id)_imageForSize:(struct CGSize)arg1 fromArtwork:(id)arg2;
- (id)_loadStoreIconWithArtwork:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoreItem:(id)arg1;
- (id)init;

@end
