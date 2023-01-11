//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, RERelevanceEngine;
@protocol NTKCUpNextDataSourcesManagerIdentifiersDelegate, OS_dispatch_queue;

@interface NTKCUpNextDataSourcesManager : NSObject
{
    RERelevanceEngine *_relevanceEngine;
    NSArray *_firstPartyDataSourceEntries;
    NSArray *_thirdPartyDataSourceEntries;
    NSArray *_sportsDataSourceEntries;
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _firstPartyIdentifiersDelegate;
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _thirdPartyIdentifiersDelegate;
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _sportsIdentifiersDelegate;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    CDStruct_f6aba300 _watchVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(nonatomic) __weak id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> sportsIdentifiersDelegate; // @synthesize sportsIdentifiersDelegate=_sportsIdentifiersDelegate;
@property(nonatomic) __weak id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> thirdPartyIdentifiersDelegate; // @synthesize thirdPartyIdentifiersDelegate=_thirdPartyIdentifiersDelegate;
@property(nonatomic) __weak id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> firstPartyIdentifiersDelegate; // @synthesize firstPartyIdentifiersDelegate=_firstPartyIdentifiersDelegate;
@property(copy) NSArray *sportsDataSourceEntries; // @synthesize sportsDataSourceEntries=_sportsDataSourceEntries;
@property(copy) NSArray *thirdPartyDataSourceEntries; // @synthesize thirdPartyDataSourceEntries=_thirdPartyDataSourceEntries;
@property(copy) NSArray *firstPartyDataSourceEntries; // @synthesize firstPartyDataSourceEntries=_firstPartyDataSourceEntries;
@property(readonly, nonatomic) CDStruct_f6aba300 watchVersion; // @synthesize watchVersion=_watchVersion;
- (void)_buildRows;
- (void)_fetchThirdPartyBundleIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dedupeAndSortThirdPartyDataSourcesFromIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_phoneDedupeFromIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_firstPartyDataSourceEntries;
- (id)_dedupeAndSortFirstPartyDataSourcesFromIdentifiers:(id)arg1;
- (_Bool)_isNanoWeatherAppID:(id)arg1;
- (id)_preGraceThirdPartyBundleIdentifiers;
- (void)fetchIdentifiers;
- (void)_dataSourcesChangedNotification:(id)arg1;
- (void)_appsChangedNotification:(id)arg1;
- (void)dealloc;
- (id)initWatchVersion:(CDStruct_f6aba300)arg1;

@end
