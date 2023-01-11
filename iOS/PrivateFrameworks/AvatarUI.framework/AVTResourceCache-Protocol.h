//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTCacheableResource, AVTCacheableResourceScope, AVTCachedResource;

@protocol AVTResourceCache <NSObject>
- (id <AVTCachedResource>)resourceForItem:(id <AVTCacheableResource>)arg1 scope:(id <AVTCacheableResourceScope>)arg2 cacheMissHandler:(id <AVTCachedResource> (^)(id <AVTCacheableResource>, id <AVTCacheableResourceScope>))arg3;
- (id <AVTCachedResource>)resourceForItem:(id <AVTCacheableResource>)arg1 scope:(id <AVTCacheableResourceScope>)arg2;

@optional
- (void)clearCache;
@end

