//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CSAudioChunkForTV : NSObject
{
    float _avgPower;
    float _peakPower;
    unsigned int _numChannels;
    unsigned int _audioFormat;
    NSArray *_packets;
    unsigned long long _timeStamp;
    unsigned long long _streamHandleID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long streamHandleID; // @synthesize streamHandleID=_streamHandleID;
@property(nonatomic) unsigned int audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) unsigned int numChannels; // @synthesize numChannels=_numChannels;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) float peakPower; // @synthesize peakPower=_peakPower;
@property(nonatomic) float avgPower; // @synthesize avgPower=_avgPower;
@property(retain, nonatomic) NSArray *packets; // @synthesize packets=_packets;
- (id)xpcObject;
- (id)initWithXPCObject:(id)arg1;

@end
