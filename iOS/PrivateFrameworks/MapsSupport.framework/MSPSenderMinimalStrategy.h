//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface MSPSenderMinimalStrategy
{
    NSMutableSet *_participantsNeedingInitialState;
}

- (void).cxx_destruct;
- (void)waypointsUpdated:(id)arg1;
- (void)etaUpdated:(id)arg1;
- (void)didFetchCapabilitiesForParticipants:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)_sendInitialStateIfNeedded;
- (void)setState:(id)arg1;
- (_Bool)_needToSendEtaRefreshFor:(id)arg1 state:(id)arg2;
- (_Bool)_validDestinationState:(id)arg1;
- (id)initWithGroupSession:(id)arg1;

@end

