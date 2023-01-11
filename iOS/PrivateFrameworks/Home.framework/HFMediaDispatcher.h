//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSArray, NSHashTable;

@interface HFMediaDispatcher : NSObject
{
    NSArray *_appleMusicMagicAuthCapableAccounts;
    NSHashTable *_appleMusicAccountObservers;
}

+ (id)sharedDispatcher;
@property(retain, nonatomic) NSHashTable *appleMusicAccountObservers; // @synthesize appleMusicAccountObservers=_appleMusicAccountObservers;
@property(copy, nonatomic) NSArray *appleMusicMagicAuthCapableAccounts; // @synthesize appleMusicMagicAuthCapableAccounts=_appleMusicMagicAuthCapableAccounts;
- (void).cxx_destruct;
- (void)_setupAppleMusicAccountStoreIfNecessary;
@property(readonly, nonatomic) _Bool isUsingiCloud;
- (void)removeAppleMusicAccountObserver:(id)arg1;
- (void)addAppleMusicAccountObserver:(id)arg1;
@property(readonly, nonatomic) ACAccountStore *appleMusicAccountStore;
- (id)init;

@end

