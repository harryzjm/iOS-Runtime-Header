//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSURL;

@interface MPCreateRadioStationCommandEvent
{
    _Bool _requestingPlaybackInitialization;
    NSURL *_stationURL;
    NSNumber *_privateListeningOverride;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *privateListeningOverride; // @synthesize privateListeningOverride=_privateListeningOverride;
@property(readonly, nonatomic, getter=isRequestingPlaybackInitialization) _Bool requestingPlaybackInitialization; // @synthesize requestingPlaybackInitialization=_requestingPlaybackInitialization;
@property(readonly, nonatomic) NSURL *stationURL; // @synthesize stationURL=_stationURL;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
