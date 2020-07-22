//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSData, NSError, NSHashTable, NSString, SFUCryptoKey, TSPDocumentProperties, TSUZipFileArchive;
@protocol OS_dispatch_queue, TSPFileCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface TSPPackage : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPDocumentProperties *_documentProperties;
    TSUZipFileArchive *_zipArchive;
    unsigned long long _additionalZipArchiveOptions;
    NSError *_lastReloadError;
    NSHashTable *_packageDatas;
    id <TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
    struct {
        unsigned int isLazyLoadingDocumentProperties:1;
        unsigned int isLazyLoadingZip:1;
    } _flags;
    unsigned char _packageIdentifier;
    _Bool _isClosed;
    SFUCryptoKey *_decryptionKey;
    unsigned long long _fileFormatVersion;
}

+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;
+ (_Bool)isZeroLengthFileOrEmptyDirectory:(id)arg1;
+ (_Bool)hasZipArchive;
+ (id)newLazyPackageWithURL:(id)arg1 packageIdentifier:(unsigned char)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4;
+ (id)newPackageWithURL:(id)arg1 options:(unsigned long long)arg2 packageIdentifier:(unsigned char)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 error:(id *)arg6;
+ (id)dataEntryPathForFilename:(id)arg1;
+ (id)objectArchiveEntryPathForPackageLocator:(id)arg1;
+ (_Bool)isValidPackageAtURL:(id)arg1;
@property(readonly, nonatomic) unsigned long long fileFormatVersion; // @synthesize fileFormatVersion=_fileFormatVersion;
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(readonly, nonatomic) SFUCryptoKey *decryptionKey; // @synthesize decryptionKey=_decryptionKey;
@property(readonly, nonatomic) __weak id <TSPFileCoordinatorDelegate> fileCoordinatorDelegate; // @synthesize fileCoordinatorDelegate=_fileCoordinatorDelegate;
@property(readonly, nonatomic) unsigned char packageIdentifier; // @synthesize packageIdentifier=_packageIdentifier;
- (void).cxx_destruct;
- (void)prepareForDocumentReplacementWithSuccess:(_Bool)arg1 forSafeSave:(_Bool)arg2 originalURL:(id)arg3;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id *)arg4;
- (_Bool)checkPassword:(id)arg1;
- (id)keyFromPassword:(id)arg1 passwordVerifier:(id)arg2;
- (id)keyFromPassword:(id)arg1;
@property(readonly, nonatomic) NSData *passwordVerifier;
@property(readonly, nonatomic) NSString *passwordHint;
@property(readonly, nonatomic) _Bool isPasswordProtected;
- (_Bool)hasDataAtRelativePath:(id)arg1;
- (id)dataAtRelativePath:(id)arg1 allowDecryption:(_Bool)arg2 error:(id *)arg3;
- (id)packageEntryInfoAtRelativePath:(id)arg1 error:(id *)arg2;
- (void)removeAllDataReferences;
- (void)enumerateDatasUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsData:(id)arg1;
- (void)didReferenceData:(id)arg1;
- (void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 canLink:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(_Bool)arg2;
- (id)newReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(_Bool)arg2;
- (id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(_Bool)arg2;
@property(readonly) TSUZipFileArchive *componentZipArchive;
@property(readonly) NSError *lastReloadError;
- (_Bool)didReloadZipArchive:(id)arg1 error:(id *)arg2;
@property(retain) TSUZipFileArchive *zipArchive;
- (_Bool)reloadZipArchiveIfNeededWithURLImpl:(id)arg1 isLazyLoading:(_Bool)arg2 error:(id *)arg3;
- (void)peformSynchronousAccessToZipArchive:(CDUnknownBlockType)arg1;
- (id)newZipArchiveFromPackageURL:(id)arg1 isLazyLoading:(_Bool)arg2 error:(id *)arg3;
- (void)didReadFileFormatVersion:(unsigned long long)arg1;
- (void)didCloseDocument;
- (void)didRetrieveDecryptionKey:(id)arg1;
@property(readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property(readonly, nonatomic) long long packageType;
- (id)initWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 isLazyLoading:(_Bool)arg6;
- (id)initWithURL:(id)arg1 zipArchiveOrNil:(id)arg2 zipArchiveOptions:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 decryptionKey:(id)arg6 fileCoordinatorDelegate:(id)arg7 error:(id *)arg8;
- (id)init;

@end
