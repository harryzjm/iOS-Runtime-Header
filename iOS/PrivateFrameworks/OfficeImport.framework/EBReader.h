//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface EBReader
{
    NSString *mTemporaryDirectory;
    struct XlObjectFactory *mXlObjectFactory;
    _Bool mUseStringOptimization;
    _Bool mIsFileStructuredStorage;
    const void *mBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFileStructuredStorage; // @synthesize isFileStructuredStorage=mIsFileStructuredStorage;
@property(nonatomic) _Bool useStringOptimization; // @synthesize useStringOptimization=mUseStringOptimization;
@property(retain, nonatomic) NSString *temporaryDirectory; // @synthesize temporaryDirectory=mTemporaryDirectory;
@property(readonly, nonatomic) void *xlReader;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
- (id)read;
- (_Bool)start;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;

@end

