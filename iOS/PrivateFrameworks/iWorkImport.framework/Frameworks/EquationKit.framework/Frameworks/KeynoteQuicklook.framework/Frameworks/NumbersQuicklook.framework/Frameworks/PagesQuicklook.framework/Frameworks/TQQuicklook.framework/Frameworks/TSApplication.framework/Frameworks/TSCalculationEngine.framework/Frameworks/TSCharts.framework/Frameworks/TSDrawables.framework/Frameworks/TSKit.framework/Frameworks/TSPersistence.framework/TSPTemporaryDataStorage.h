//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSPTemporaryDataStorageURL;
@protocol TSPCryptoInfo;

@interface TSPTemporaryDataStorage
{
    TSPTemporaryDataStorageURL *_temporaryDataStorageURL;
    _Bool _leakTemporaryFile;
    _Bool _isMissingData;
    _Bool _isUnmaterializedDueToPartiallyDownloadedDocument;
    _Bool _isMissingOriginalData;
    id <TSPCryptoInfo> _decryptionInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMissingOriginalData; // @synthesize isMissingOriginalData=_isMissingOriginalData;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(_Bool)arg1;
- (_Bool)isUnmaterializedDueToPartiallyDownloadedDocument;
@property(readonly, nonatomic) _Bool isMissingData; // @synthesize isMissingData=_isMissingData;
- (_Bool)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(_Bool)arg3;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(void *)arg3 preferredFilename:(id)arg4 shouldRemoveData:(_Bool)arg5 error:(id *)arg6;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (unsigned long long)fileFormatVersion;
- (id)decryptionInfo;
- (unsigned long long)materializedLength;
- (_Bool)isLengthPrecise;
- (unsigned long long)length;
- (void)leakTemporaryFile;
- (void)dealloc;
- (id)init;
- (id)initWithTemporaryDataStorageURL:(id)arg1 decryptionInfo:(id)arg2;
- (id)initWithTemporaryDataStorageURL:(id)arg1 decryptionInfo:(id)arg2 isMissingOriginalData:(_Bool)arg3 isMissingData:(_Bool)arg4 isUnmaterializedDueToPartiallyDownloadedDocument:(_Bool)arg5;

@end

