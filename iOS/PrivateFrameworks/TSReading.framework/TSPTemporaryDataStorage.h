//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage
{
    NSURL *_URL;
    SFUCryptoKey *_decryptionKey;
    _Bool _isMissingData;
}

@property(nonatomic) _Bool isMissingData; // @synthesize isMissingData=_isMissingData;
- (void).cxx_destruct;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;

@end

