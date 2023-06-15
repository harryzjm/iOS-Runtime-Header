//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoFaceTimeAudio
{
    unsigned int _controlInfoReceivedKbits;
    unsigned int _controlInfoReceivedPackets;
    unsigned int _controlInfoAudioPacketSize;
    unsigned int _controlInfoAudioTimestamp;
    double _controlInfoArrivalTime;
    CDStruct_d895cdc1 _controlFeedbackParameter;
    _Bool _videoEnabled;
    unsigned short _controlInfoSequenceNumber;
    _Bool _controlInfoIsDuplicatePacket;
    _Bool _controlInfoIsReceivedOnPrimary;
    _Bool _ecnEnabled;
    unsigned char _controlInfoECNByte;
}

@property _Bool ecnEnabled; // @synthesize ecnEnabled=_ecnEnabled;
@property _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;
- (int)setInfoUnserialized:(CDStruct_d895cdc1 *)arg1 type:(unsigned int)arg2;
- (_Bool)hasInfoType:(unsigned int)arg1;
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (int)getInfoUnserialized:(CDStruct_d895cdc1 *)arg1 type:(unsigned int)arg2;
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_51b15958 *)arg3;
- (int)handleOptionalControlInfo:(CDStruct_51b15958 *)arg1;
- (id)description;
- (unsigned long long)serializedSize;
@property(readonly) unsigned long long feedbackSize;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_51b15958 *)arg3 version:(unsigned char)arg4;
- (id)init;

@end

