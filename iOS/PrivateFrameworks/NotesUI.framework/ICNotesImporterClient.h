//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ICNotesImporterClient : NSObject
{
    NSXPCConnection *_connectionToService;
    NSObject<OS_dispatch_queue> *_requestCountQueue;
    unsigned long long _requestCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue; // @synthesize requestCountQueue=_requestCountQueue;
- (void)suspendConnectionIfNeeded;
- (void)resumeConnectionIfNeeded;
- (void)cleanupArchiveId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)unarchiveEvernoteResourceFromArchiveId:(id)arg1 resourceArchiveId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)unarchiveEvernoteNoteFromArchiveId:(id)arg1 noteArchiveId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)archiveEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)parseTitleFromHTMLString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)countEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)parseHTMLStringFromEvernoteContentString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
