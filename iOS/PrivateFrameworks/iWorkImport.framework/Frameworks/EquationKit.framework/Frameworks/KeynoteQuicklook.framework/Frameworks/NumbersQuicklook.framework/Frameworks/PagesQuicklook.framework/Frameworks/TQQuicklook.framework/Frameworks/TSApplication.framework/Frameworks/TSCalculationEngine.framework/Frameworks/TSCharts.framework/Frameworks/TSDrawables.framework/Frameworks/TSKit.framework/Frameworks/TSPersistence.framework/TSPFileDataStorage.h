//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol TSPCryptoInfo;

@interface TSPFileDataStorage
{
}

- (unsigned long long)encodedLength;
- (_Bool)isReadable;
- (id)AVAssetWithOptions:(id)arg1 forData:(id)arg2;
- (void)performReadOnBookmarkDataSourceURLWithAccessor:(CDUnknownBlockType)arg1;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <TSPCryptoInfo> decryptionInfo;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;

@end

