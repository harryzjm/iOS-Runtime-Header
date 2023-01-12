//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Announce/ANAnnouncement.h>

@class NSDictionary, NSURL;

@interface ANAnnouncement (RemotePlaybackSession)
+ (unsigned long long)defaultAudioEffects;
+ (void)uniqueAnnouncersInAnnouncements:(id)arg1 inHome:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)contextsFrom:(id)arg1;
@property(readonly, nonatomic) NSURL *defaultActionURL;
@property(readonly, nonatomic) NSDictionary *sendFailureDictionary;
@property(readonly, nonatomic) NSDictionary *remoteSessionDictionary;
- (_Bool)processAudioWithEffects:(unsigned long long)arg1 error:(id *)arg2;
- (id)announcerNameInHome:(id)arg1;
- (_Bool)isAnnouncerInSameRoomAsAccessory:(id)arg1;
@end

