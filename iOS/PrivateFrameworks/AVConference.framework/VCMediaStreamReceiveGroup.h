//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCMediaStreamDelegate-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaStreamReceiveGroup <VCMediaStreamDelegate>
{
    NSNumber *_optedInStreamID;
    NSNumber *_activeStreamID;
    _Bool _receivingEndToEndStream;
    NSMutableDictionary *_streamToMaxNetworkBitrate;
    NSMutableDictionary *_streamToActualNetworkBitrate;
}

@property(retain, nonatomic) NSNumber *activeStreamID; // @synthesize activeStreamID=_activeStreamID;
@property(readonly, nonatomic) NSNumber *optedInStreamID; // @synthesize optedInStreamID=_optedInStreamID;
- (void)notifyChangeInActiveMediaBitrateTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)setupMaxBitrateMap;
- (void)vcMediaStreamDidDecryptionTimeOutForMKMRecovery:(id)arg1;
- (void)vcMediaStreamDidDecryptionTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)setActualBitrateForOptedInStreamWithActiveStreamID:(id)arg1;
- (void)setActiveStreamIDs:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
