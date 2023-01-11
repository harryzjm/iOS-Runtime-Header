//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TSURemotePropertyList : NSObject
{
    NSURL *_remoteURL;
    NSURL *_localURL;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_propertyList;
    NSObject<OS_dispatch_queue> *_checkQueue;
    NSObject<OS_dispatch_source> *_updateTimer;
    _Bool _didUpdateAtLeastOnce;
}

- (void).cxx_destruct;
- (void)processPropertyList:(id)arg1;
- (id)deserializePropertyListData:(id)arg1 error:(out id *)arg2;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)URLRequest;
- (double)timeIntervalUntilNextUpdate;
- (id)validateUserDefaultsDownloadURL:(id)arg1;
- (void)checkForUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)updateIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithRemoteURL:(id)arg1 localURL:(id)arg2;
- (id)init;

@end

