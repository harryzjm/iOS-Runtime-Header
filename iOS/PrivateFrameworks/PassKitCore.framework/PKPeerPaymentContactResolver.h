//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CNContactStore, NSArray, NSCache, NSHashTable;
@protocol OS_dispatch_queue;

@interface PKPeerPaymentContactResolver : NSObject
{
    NSObject<OS_dispatch_queue> *_contactLookupQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CNContactStore *_contactStore;
    NSArray *_keysToFetch;
    NSCache *_handleToContactCache;
    NSHashTable *_delegates;
}

@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSCache *handleToContactCache; // @synthesize handleToContactCache=_handleToContactCache;
@property(readonly, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (void)contactForHandle:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactForHandle:(id)arg1;
- (_Bool)haveCachedResultForHandle:(id)arg1;
- (id)_predicateForHandle:(id)arg1;
- (void)_handleContactStoreDidChangeNotification:(id)arg1;
- (void)invalidateCache;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2;

@end

