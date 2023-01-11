//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TransparencyLogSession, TransparencyManagedDataStore;

@interface TransparencyLogClient : NSObject
{
    TransparencyLogSession *_session;
    TransparencyManagedDataStore *_dataStore;
}

- (void).cxx_destruct;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain) TransparencyLogSession *session; // @synthesize session=_session;
- (void)deleteDownloadId:(id)arg1;
- (void)downloadRequest:(id)arg1 retry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)download:(id)arg1 retry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fetch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)fetch:(id)arg1 shouldRetry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)needsRetry:(id)arg1;
- (id)initWithBackgroundSession:(id)arg1 dataStore:(id)arg2;

@end
