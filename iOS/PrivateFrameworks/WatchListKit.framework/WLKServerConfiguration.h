//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSXPCConnection, WLKServerConfigurationResponse;
@protocol OS_dispatch_queue;

@interface WLKServerConfiguration : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSOperationQueue *_fetchQueue;
    NSOperationQueue *_operationQueue;
    WLKServerConfigurationResponse *_response;
    NSArray *_orderedChannels;
    NSDictionary *_channelsByID;
    int _didChangeNotificationToken;
    NSMutableDictionary *_completions;
    NSString *_nextEK;
    NSXPCConnection *_connection;
    _Bool _loaded;
    _Bool _isFetching;
    CDUnknownBlockType _fetchCompletionHandler;
    NSDictionary *_requiredRequestKeyValuePairsDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *requiredRequestKeyValuePairsDictionary; // @synthesize requiredRequestKeyValuePairsDictionary=_requiredRequestKeyValuePairsDictionary;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
- (void).cxx_destruct;
- (id)_connection;
- (void)_clearCompletionsForEnvironment:(id)arg1;
- (id)_completionsForEnvironment:(id)arg1;
- (void)_addCompletion:(CDUnknownBlockType)arg1 forEnvironment:(id)arg2;
- (id)_prevCachePath;
- (id)_cachePath;
- (id)_cacheDir;
- (_Bool)_writeToDisk:(id)arg1;
- (id)_readFromDisk;
- (id)_readFromDiskPath:(id)arg1;
- (void)_setNextEK:(id)arg1;
- (void)_invalidateCache;
- (void)_handleLibraryDidChangeNotification:(id)arg1;
- (_Bool)_needCacheRefresh;
- (void)_fetchConfigurationSynchronously;
- (void)_reloadFromCache:(id)arg1;
- (void)_synchronizeWithCache:(id)arg1 notifySelf:(_Bool)arg2 others:(_Bool)arg3;
- (void)_synchronizeWithCacheAndNotifySelf:(_Bool)arg1 others:(_Bool)arg2;
- (void)_fetchConfigurationInProcess:(CDUnknownBlockType)arg1;
- (void)_fetchConfigurationCache:(CDUnknownBlockType)arg1;
- (void)fetchConfiguration:(CDUnknownBlockType)arg1;
- (id)serverRouteForKey:(id)arg1;
- (id)APIBaseURL;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, copy, nonatomic) NSDictionary *serverRoutesDictionary;
@property(readonly, copy, nonatomic) NSArray *orderedChannels;
@property(readonly, copy, nonatomic) NSDictionary *channels;
- (id)endpointForKey:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (id)_operationQueue;
- (void)dealloc;
- (id)init;
- (id)initOffline;
- (void)_commonInit;
- (id)_init;

@end

