//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CDCachedPeopleSuggestion, _CDInteractionStoreNotificationReceiver, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings;
@protocol OS_dispatch_queue, _CDInteractionAdvising;

@interface _CDPeopleSuggester : NSObject
{
    id <_CDInteractionAdvising> _advisor;
    NSObject<OS_dispatch_queue> *_queue;
    _CDCachedPeopleSuggestion *_cache;
    _CDInteractionStoreNotificationReceiver *_receiver;
    int _settingsNotifyToken;
    _Bool _enableCaching;
    _CDPeopleSuggesterContext *_context;
    _CDPeopleSuggesterSettings *_settings;
    double _cacheTimeoutSeconds;
}

+ (id)loggingTagForAutocompleteFeedback;
+ (id)createAdvisorSettingsFromContext:(id)arg1 settings:(id)arg2;
+ (id)restrictedPrefixForPrefix:(id)arg1;
+ (id)peopleSuggesterUsingDaemon;
+ (id)peopleSuggesterWithDirectDBAccess;
+ (id)peopleSuggester;
- (void).cxx_destruct;
@property double cacheTimeoutSeconds; // @synthesize cacheTimeoutSeconds=_cacheTimeoutSeconds;
@property(retain) _CDPeopleSuggesterSettings *settings; // @synthesize settings=_settings;
@property(retain) _CDPeopleSuggesterContext *context; // @synthesize context=_context;
- (id)suggestPeopleWithError:(id *)arg1;
- (void)suggestPeopleWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateSettings;
@property _Bool enableCaching; // @synthesize enableCaching=_enableCaching;
- (void)invalidateCache;
- (id)initWithAdvisor:(id)arg1;
- (id)init;

@end
