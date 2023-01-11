//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject>
{
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_logDomain;
    NSURL *_crashMarkerURL;
    NSMutableArray *_uncommittedFiles;
    _Bool _keepOriginals;
    _Bool _deleteImmediately;
    CPLPlatformObject *_platformObject;
    NSURL *_baseURL;
}

+ (id)platformImplementationProtocol;
@property(nonatomic) _Bool deleteImmediately; // @synthesize deleteImmediately=_deleteImmediately;
@property(nonatomic) _Bool keepOriginals; // @synthesize keepOriginals=_keepOriginals;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (_Bool)checkIsEmpty;
- (id)fileEnumerator;
- (id)fileEnumeratorIncludingPropertiesForKeys:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (_Bool)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long *)arg2 includeOriginals:(_Bool)arg3 error:(id *)arg4;
- (_Bool)compactStorageIncludeOriginals:(_Bool)arg1 error:(id *)arg2;
- (_Bool)_compactStorageIncludeOriginals:(_Bool)arg1 desiredFreeSpace:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)compactStorage:(id *)arg1;
- (_Bool)discardAllRetainedFileURLsWithError:(id *)arg1;
- (_Bool)releaseFileURL:(id)arg1 error:(id *)arg2;
- (id)retainFileURLForIdentity:(id)arg1 resourceType:(unsigned long long)arg2 error:(id *)arg3;
- (void)checkFileSizeForIdentity:(id)arg1;
- (_Bool)hasFileWithIdentity:(id)arg1;
- (_Bool)storeUnretainedData:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 error:(id *)arg4;
- (_Bool)storeUnretainedFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 error:(id *)arg4;
- (_Bool)deleteFileWithIdentity:(id)arg1 includingOriginal:(_Bool)arg2 error:(id *)arg3;
- (_Bool)deleteFileWithIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)discardUncommittedFileWithIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)commitFileWithIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)storeData:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 needsCommit:(_Bool *)arg4 error:(id *)arg5;
- (_Bool)storeFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 needsCommit:(_Bool *)arg4 error:(id *)arg5;
- (_Bool)_fixupIdentity:(id)arg1 fileURL:(id)arg2 data:(id)arg3 error:(id *)arg4;
- (void)_removeIdentityFromUncommittedFiles:(id)arg1;
- (void)_addIdentityToUncommittedFiles:(id)arg1;
- (_Bool)hasCrashMarker;
- (unsigned long long)countOfUncommittedFiles;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)openWithRecoveryHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)_recoverFromCrashWithRecoveryHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)doWrite:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)doRead:(CDUnknownBlockType)arg1;
- (id)initWithBaseURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

