//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CUXPCCodable-Protocol.h>

@class NSString;

@interface CBAudioLinkQualityInfo : NSObject <CUXPCCodable>
{
    BOOL _codecType;
    BOOL _noiseFloor90;
    BOOL _rssiAverage;
    BOOL _signalToNoiseRatio;
    unsigned int _bitRate;
    NSString *_deviceName;
    double _jitterBufferSeconds;
    double _retransmitRate;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL signalToNoiseRatio; // @synthesize signalToNoiseRatio=_signalToNoiseRatio;
@property(nonatomic) BOOL rssiAverage; // @synthesize rssiAverage=_rssiAverage;
@property(nonatomic) double retransmitRate; // @synthesize retransmitRate=_retransmitRate;
@property(nonatomic) BOOL noiseFloor90; // @synthesize noiseFloor90=_noiseFloor90;
@property(nonatomic) double jitterBufferSeconds; // @synthesize jitterBufferSeconds=_jitterBufferSeconds;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) BOOL codecType; // @synthesize codecType=_codecType;
@property(nonatomic) unsigned int bitRate; // @synthesize bitRate=_bitRate;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;

@end
