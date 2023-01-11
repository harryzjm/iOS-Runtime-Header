//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;
@protocol OS_dispatch_queue;

@interface MPPlaybackUserDefaults : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _allowsHighQualityMusicStreamingOnCellular;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    int _musicEQPreset;
    long long _musicRepeatType;
    long long _musicShuffleType;
    _Bool _soundCheckEnabled;
    _Bool _speakerRouteEnabled;
    NSMutableDictionary *_lastSiriPlaybackContextIDs;
    struct vector<int, std::__1::allocator<int>> _notifyTokens;
    NSObject<OS_dispatch_queue> *_userDefaultsMutationQueue;
}

+ (id)standardUserDefaults;
@property(readonly, nonatomic) int musicEQPreset; // @synthesize musicEQPreset=_musicEQPreset;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_mobileiPodPrefsDidChange;
- (void)_postRepeatShuffleTypeGlobalNotification;
- (long long)_calculateCurrentMusicShuffleType;
- (long long)_calculateCurrentMusicRepeatType;
- (int)_calculateCurrentMusicEQPreset;
- (void)_addNotificationObserver:(CDUnknownBlockType)arg1 forUserDefaultKey:(struct __CFString *)arg2;
- (void)setLastSiriPlaybackContextID:(id)arg1 forPlayerID:(id)arg2;
- (id)lastSiriPlaybackContextIDForPlayerID:(id)arg1;
@property(readonly, nonatomic) _Bool shouldUseNewQueueManagement;
@property(copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property(readonly, nonatomic) unsigned long long preferredVideosAssetQualityOnWifi;
@property(readonly, nonatomic) unsigned long long preferredVideosAssetQualityOnCellular;
@property(readonly, nonatomic) _Bool speakerRouteEnabled;
@property(readonly, nonatomic) _Bool soundCheckEnabled;
@property(nonatomic) long long musicShuffleType;
@property(nonatomic) long long musicRepeatType;
@property(readonly, nonatomic) _Bool allowsHighQualityMusicStreamingOnCellular;
- (void)dealloc;
- (id)init;

@end

