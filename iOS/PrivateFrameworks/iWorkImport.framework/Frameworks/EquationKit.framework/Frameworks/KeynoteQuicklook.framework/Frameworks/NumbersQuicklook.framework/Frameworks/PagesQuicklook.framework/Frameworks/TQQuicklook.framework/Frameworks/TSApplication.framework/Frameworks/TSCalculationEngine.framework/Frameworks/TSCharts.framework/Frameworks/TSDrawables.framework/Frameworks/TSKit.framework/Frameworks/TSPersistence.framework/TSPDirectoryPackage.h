//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSPDirectoryPackage
{
}

+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;
+ (_Bool)isValidPackageAtURL:(id)arg1;
+ (id)componentFileURLForPackageURL:(id)arg1 packageLocator:(id)arg2;
+ (id)objectArchiveURLForPackageURL:(id)arg1;
- (void)prepareForDocumentReplacementWithSuccess:(_Bool)arg1 forSafeSave:(_Bool)arg2 originalURL:(id)arg3;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)hasDataAtRelativePath:(id)arg1;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)dataAtRelativePath:(id)arg1 allowDecryption:(_Bool)arg2 error:(id *)arg3;
- (id)packageEntryInfoAtRelativePath:(id)arg1 error:(id *)arg2;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 materializedLength:(unsigned long long)arg3 packageURL:(id)arg4 lastModificationDate:(out id *)arg5;
- (void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 canLink:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(_Bool)arg2 error:(id *)arg3;
- (id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(_Bool)arg2;
- (long long)packageType;

@end

