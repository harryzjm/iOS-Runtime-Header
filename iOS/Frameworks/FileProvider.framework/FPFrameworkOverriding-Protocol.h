//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSObject-Protocol.h>

@class FPItem, NSArray, NSMutableSet, NSSet, NSString, NSURL;

@protocol FPFrameworkOverriding <NSObject>

@optional
- (void)FPStateForDomainWithID:(NSString *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)FPEvictItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)FPFetchLatestVersionForFileAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSFileVersion *, NSError *))arg2;
- (void)FPGetPausedFilesList:(void (^)(NSURL *))arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)FPResumeSyncForFileAtURL:(NSURL *)arg1 resumeOptions:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)FPPauseSyncForFileAtURL:(NSURL *)arg1 timeout:(double)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)FPDocumentURLFromUniversalBookmarkableString:(NSString *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)FPUniversalBookmarkableStringFromDocumentURL:(NSURL *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (NSURL *)FPTrashURLForItemAtURL:(NSURL *)arg1 error:(id *)arg2;
- (_Bool)FPSetValue:(id)arg1 forAttribute:(NSString *)arg2 onItemAtURL:(NSURL *)arg3 error:(id *)arg4;
- (void)FPValuesForAttributes:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (_Bool)FPAreUTIsImportable:(NSArray *)arg1 toFolderItem:(FPItem *)arg2;
- (NSSet *)FPServerPackageExtensions;
- (_Bool)FPFilterActions:(NSMutableSet *)arg1 forDroppingItems:(NSArray *)arg2 underItem:(FPItem *)arg3;
- (void)FPFileProviderServiceEndpointCreatingWithName:(NSString *)arg1 itemAtURL:(NSURL *)arg2 synchronously:(_Bool)arg3 completionHandler:(void (^)(id <NSXPCProxyCreating><NSFileProviderServiceEndpointCreating>, void (^)(void), NSError *))arg4;
- (void)FPFileProviderServiceEndpointCreatingForItemAtURL:(NSURL *)arg1 synchronously:(_Bool)arg2 completionHandler:(void (^)(id <NSXPCProxyCreating><NSFileProviderServiceEndpointCreating>, NSArray *, void (^)(void), NSError *))arg3;
- (void)FPFileProviderServiceEndpointCreatingForItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(id <NSXPCProxyCreating><NSFileProviderServiceEndpointCreating>, NSArray *, void (^)(void), NSError *))arg2;
- (void)FPExtendBookmarkForDocumentURL:(NSURL *)arg1 forBundleID:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
- (NSURL *)FPDocumentURLFromBookmarkableString:(NSString *)arg1 error:(id *)arg2;
- (void)FPDocumentURLFromBookmarkableString:(NSString *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (NSString *)FPBookmarkableStringFromDocumentURL:(NSURL *)arg1 error:(id *)arg2;
- (void)FPBookmarkableStringFromDocumentURL:(NSURL *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (_Bool)FPURLIsInFileProvider:(NSURL *)arg1;
- (long long)overridePriority;
@end

