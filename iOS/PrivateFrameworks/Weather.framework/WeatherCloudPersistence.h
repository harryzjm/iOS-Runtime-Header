//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Weather/WeatherPreferencesPersistence-Protocol.h>

@class NSString, NSUbiquitousKeyValueStore;
@protocol WeatherCloudPersistenceDelegate;

__attribute__((visibility("hidden")))
@interface WeatherCloudPersistence : NSObject <WeatherPreferencesPersistence>
{
    id <WeatherCloudPersistenceDelegate> _delegate;
    NSUbiquitousKeyValueStore *_cloudStore;
}

+ (id)cloudPersistenceWithDelegate:(id)arg1;
+ (_Bool)processIsWhitelistedForSync;
@property(retain) NSUbiquitousKeyValueStore *cloudStore; // @synthesize cloudStore=_cloudStore;
@property __weak id <WeatherCloudPersistenceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)synchronize;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (_Bool)isInitialSyncNotification:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

