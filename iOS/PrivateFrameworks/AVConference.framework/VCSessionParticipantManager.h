//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCSessionParticipantDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantManager : NSObject <VCSessionParticipantDelegate>
{
    NSMutableDictionary *_sessionParticipants;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *sessionParticipants; // @synthesize sessionParticipants=_sessionParticipants;
- (void)vcSessionParticipant:(id)arg1 didFrequencyLevelsChange:(id)arg2;
- (void)registerBlocksForService;
- (id)participantForID:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
