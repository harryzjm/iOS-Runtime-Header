//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface BCSConfigRemoteFetch
{
}

- (void)fetchBloomFilterWithStartIndex:(long long)arg1 shardCount:(long long)arg2 forClientBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchConfigItemForClientBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
