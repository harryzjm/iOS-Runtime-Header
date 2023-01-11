//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextPersisting-Protocol.h>

@class NSCountedSet, NSString, _CDSharedMemoryKeyValueStore;
@protocol OS_dispatch_queue;

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting>
{
    _CDSharedMemoryKeyValueStore *_store;
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_keyPathRegistrationCount;
    NSCountedSet *_legacyKeyPathRegistrationCount;
    NSString *_localDeviceID;
}

+ (id)sharedMemoryKeyFromRegistration:(id)arg1;
+ (id)sharedMemoryKeyFromKeyPath:(id)arg1;
+ (id)persistenceWithSharedMemoryKeyValueStore:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
@property(retain, nonatomic) NSCountedSet *legacyKeyPathRegistrationCount; // @synthesize legacyKeyPathRegistrationCount=_legacyKeyPathRegistrationCount;
@property(retain, nonatomic) NSCountedSet *keyPathRegistrationCount; // @synthesize keyPathRegistrationCount=_keyPathRegistrationCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) _CDSharedMemoryKeyValueStore *store; // @synthesize store=_store;
- (void)deleteDataCreatedBefore:(id)arg1;
- (void)deleteAllData;
- (id)loadRegistrations;
- (id)loadValues;
- (id)allKeysForContextStore;
- (void)deleteRegistration:(id)arg1;
- (void)saveRegistration:(id)arg1;
- (void)deleteKeyPaths:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithSharedMemoryKeyValueStore:(id)arg1;

@end
