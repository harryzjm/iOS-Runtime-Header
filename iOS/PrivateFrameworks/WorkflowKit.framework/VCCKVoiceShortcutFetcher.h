//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDatabase;
@protocol OS_dispatch_queue;

@interface VCCKVoiceShortcutFetcher : NSObject
{
    _Bool _completed;
    NSObject<OS_dispatch_queue> *_queue;
    CKDatabase *_database;
    long long _qualityOfService;
    CDUnknownBlockType _recordHandler;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType recordHandler; // @synthesize recordHandler=_recordHandler;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)fetchRecordsFromZone:(id)arg1;
- (void)fetchRecordZones;
- (void)start;
- (void)addOperation:(id)arg1;
- (void)finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithRecordHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
