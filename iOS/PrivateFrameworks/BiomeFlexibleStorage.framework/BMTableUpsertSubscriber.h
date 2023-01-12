//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeFlexibleStorage/BMTableSubscriber-Protocol.h>

@class BMTableStore, BPSSubscription, NSError, NSString;
@protocol BMFlexibleSimpleKeyValueStorage;

@interface BMTableUpsertSubscriber : NSObject <BMTableSubscriber>
{
    _Bool _tableSetupComplete;
    struct os_unfair_lock_s _lock;
    NSString *_tableName;
    NSString *_identifier;
    BMTableStore *_store;
    BPSSubscription *_subscription;
    NSError *_tableSetupError;
    id <BMFlexibleSimpleKeyValueStorage> _keyValueStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <BMFlexibleSimpleKeyValueStorage> keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(retain, nonatomic) NSError *tableSetupError; // @synthesize tableSetupError=_tableSetupError;
@property(nonatomic) BPSSubscription *subscription; // @synthesize subscription=_subscription;
@property(nonatomic) _Bool tableSetupComplete; // @synthesize tableSetupComplete=_tableSetupComplete;
@property(readonly, nonatomic) BMTableStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (void)receiveSubscription:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (id)newBookmark;
- (void)receiveCompletion:(id)arg1;
- (void)cancel;
- (id)initWithTableName:(id)arg1 identifier:(id)arg2;
- (id)initWithTableName:(id)arg1 identifier:(id)arg2 keyValueStore:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
