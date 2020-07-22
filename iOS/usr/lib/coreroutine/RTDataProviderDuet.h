//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, RTDefaultsManager, RTLocationTagger;

@interface RTDataProviderDuet
{
    RTLocationTagger *_locationTagger;
    RTDefaultsManager *_defaultsManager;
    NSMutableArray *_duetHelpers;
}

@property(retain, nonatomic) NSMutableArray *duetHelpers; // @synthesize duetHelpers=_duetHelpers;
- (void).cxx_destruct;
- (void)_purge;
- (void)_destroyDuetHelpers;
- (void)_createDuetHelpersWithEventStreamTypes:(id)arg1;
- (id)supportedEventStreams;
- (id)duetHelperForDuetEventStream:(long long)arg1;
- (void)shutdown;
- (id)initWithPurgeManager:(id)arg1 locationTagger:(id)arg2 defaultsManager:(id)arg3;
- (id)init;

@end

