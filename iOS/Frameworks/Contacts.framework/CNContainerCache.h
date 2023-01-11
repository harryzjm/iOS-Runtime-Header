//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CNCache, CNContactStore, CNContainer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CNContainerCache : NSObject
{
    CNContainer *_primaryiCloudContainer;
    CNContactStore *_contactStore;
    ACAccountStore *_accountStore;
    CNCache *_cachedAccounts;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)os_log;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) CNCache *cachedAccounts; // @synthesize cachedAccounts=_cachedAccounts;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) __weak CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContainer *primaryiCloudContainer; // @synthesize primaryiCloudContainer=_primaryiCloudContainer;
- (void).cxx_destruct;
- (void)resetPrimaryiCloudContainer;
- (void)resetAccountCache;
- (id)cnAccountForContainer:(id)arg1;
- (id)accountForContainer:(id)arg1;
- (id)onWorkQueue_findPrimaryiCloudContainer;
- (void)dealloc;
- (void)contactStoreDidChange;
- (void)accountStoreDidChange;
- (id)initWithContactStore:(id)arg1;

@end
