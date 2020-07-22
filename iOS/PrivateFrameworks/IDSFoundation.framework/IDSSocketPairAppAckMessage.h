//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IDSSocketPairAppAckMessage
{
    unsigned long long _offset;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    NSString *_peerResponseIdentifier;
}

@property(readonly, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
- (void).cxx_destruct;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 peerResponseIdentifier:(id)arg3;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

