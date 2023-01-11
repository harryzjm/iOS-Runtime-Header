//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSDictionary, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue, SGSuggestionsServiceContactsProtocol;

@interface IMSuggestionsService : NSObject
{
    NSObject<SGSuggestionsServiceContactsProtocol> *_connection;
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pending;
    NSDictionary *_localTable;
    NSHashTable *_handlesToRetry;
    id _newContactNotificationToken;
    struct __CFRunLoopObserver *_notificationObserver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)personNameComponentsForHandle:(id)arg1;
- (id)fetchCNContactForSuggestedHandle:(id)arg1;
- (id)_contactForSGContactMatch:(id)arg1;
- (void)scheduleFetchIfNecessaryForHandle:(id)arg1;
- (void)_startRequestForDisplayNameCallbackWithSuggestedName:(id)arg1 displayName:(id)arg2 queue:(id)arg3;
- (void)_startRequestForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3;
- (void)fetchSuggestedRealNameForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)suggestedNameFromCache:(id)arg1 wasFound:(_Bool *)arg2;
- (void)stopUsingLocalLookups;
- (void)startUsingLocalLookupsWithTable:(id)arg1;
- (_Bool)isBusiness:(id)arg1;
- (_Bool)_maybeEmailAddress:(id)arg1;
- (_Bool)_maybePhoneNumber:(id)arg1;
- (id)serviceConnection;
- (void)dealloc;
- (id)init;

@end
