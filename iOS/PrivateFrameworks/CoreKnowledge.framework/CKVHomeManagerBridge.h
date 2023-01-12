//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVProviderDatasetBridge-Protocol.h>
#import <CoreKnowledge/HMHomeManagerDelegate-Protocol.h>

@class HMHomeManager, NSString;
@protocol OS_dispatch_group;

@interface CKVHomeManagerBridge : NSObject <HMHomeManagerDelegate, CKVProviderDatasetBridge>
{
    _Bool _homesLoaded;
    HMHomeManager *_homeManager;
    NSObject<OS_dispatch_group> *_waitGroup;
    double _setupTimeout;
}

- (void).cxx_destruct;
@property _Bool homesLoaded; // @synthesize homesLoaded=_homesLoaded;
@property(readonly, nonatomic) double setupTimeout; // @synthesize setupTimeout=_setupTimeout;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *waitGroup; // @synthesize waitGroup=_waitGroup;
@property(readonly, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (id)_parseHMAccessory:(id)arg1;
- (id)_parseHMTrigger:(id)arg1;
- (id)_parseHMActionSet:(id)arg1;
- (id)_parseHMServiceGroup:(id)arg1;
- (id)_parseHMService:(id)arg1;
- (id)_parseHMRoom:(id)arg1;
- (id)_parseHMZone:(id)arg1;
- (id)_parseHMHome:(id)arg1;
- (_Bool)enumerateVocabularyItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)originApp;
- (Class)itemClass;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)initWithHomeManager:(id)arg1 waitGroup:(id)arg2 setupTimeout:(double)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
