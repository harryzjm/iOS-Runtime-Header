//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSURLCompletionDataSource-Protocol.h>
#import <SafariShared/WBSURLCompletionSessionProtocol-Protocol.h>

@class NSString, WBSHistoryService, WBSHistoryServiceDatabase, WBSURLCompletionDatabase;
@protocol OS_dispatch_queue;

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionDataSource, WBSURLCompletionSessionProtocol>
{
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSHistoryServiceDatabase *_database;
    WBSURLCompletionDatabase *_urlCompletionDatabase;
}

- (void).cxx_destruct;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(_Bool)arg3;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_ensureDatabaseIsWarmed;
- (id)_databaseConnectionOptions;
- (void)_getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_matchSnapshotForCompletionMatch:(id)arg1;
- (void)dealloc;
- (id)initWithHistoryService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
