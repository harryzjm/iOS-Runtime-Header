//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <CloudDocs/BRNonLocalVersionReceiving-Protocol.h>

@class GSPermanentStorage, NSError, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol BRNonLocalVersionSending;

@interface BRListNonLocalVersionsOperation : NSOperation <BRNonLocalVersionReceiving>
{
    NSURL *_documentURL;
    NSMutableArray *_versions;
    NSMutableDictionary *_versionsByEtag;
    GSPermanentStorage *_versionsStore;
    id <BRNonLocalVersionSending> _sender;
    _Bool _executing;
    _Bool _finished;
    _Bool _includeCachedVersions;
    BOOL _state;
    CDUnknownBlockType _fetchingVersionsDoneBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fetchingVersionsDoneBlock; // @synthesize fetchingVersionsDoneBlock=_fetchingVersionsDoneBlock;
@property(nonatomic) _Bool includeCachedVersions; // @synthesize includeCachedVersions=_includeCachedVersions;
@property(readonly, nonatomic) NSMutableArray *versions; // @synthesize versions=_versions;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (oneway void)newThumbnailForVersionWithEtag:(id)arg1;
- (oneway void)versionsDone;
- (oneway void)newCachedVersionAtURL:(id)arg1 size:(id)arg2 etag:(id)arg3 hasThumbnail:(_Bool)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorNameComponents:(id)arg7 modificationDate:(id)arg8;
- (oneway void)newFaultVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(_Bool)arg5 displayName:(id)arg6 lastEditorDeviceName:(id)arg7 lastEditorNameComponents:(id)arg8 modificationDate:(id)arg9;
- (void)_addVersion:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)start;
- (_Bool)_setVersionStoreForDocumentAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)_advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (_Bool)__advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (_Bool)__finishIfCancelled;
- (void)cancel;
- (void)_senderInvalidate;
- (_Bool)isConcurrent;
- (void)dealloc;
- (id)initWithDocumentURL:(id)arg1;
@property(retain, nonatomic) NSError *error;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
