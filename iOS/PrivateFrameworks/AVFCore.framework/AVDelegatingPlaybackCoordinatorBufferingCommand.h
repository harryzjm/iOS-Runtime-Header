//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCoordinatedPlaybackParticipant, AVDelegatingPlaybackCoordinator, NSDate, NSString;

@interface AVDelegatingPlaybackCoordinatorBufferingCommand
{
    AVDelegatingPlaybackCoordinator *_coordinator;
    AVCoordinatedPlaybackParticipant *_originator;
    NSString *_expectedCurrentItemIdentifier;
    long long _commandOrderIndex;
    float _anticipatedPlaybackRate;
    NSDate *_completionDueDate;
}

@property(readonly, nonatomic) NSDate *completionDueDate; // @synthesize completionDueDate=_completionDueDate;
@property(readonly, nonatomic) float anticipatedPlaybackRate; // @synthesize anticipatedPlaybackRate=_anticipatedPlaybackRate;
- (id)expectedCurrentItemIdentifier;
- (id)originator;
- (void)dealloc;
- (id)initWithCoordinator:(id)arg1 originator:(id)arg2 expectedCurrentItemIdentifier:(id)arg3 commandOrderIndex:(long long)arg4 anticipatedPlaybackRate:(float)arg5 completionDueDate:(id)arg6;
- (id)init;

@end
