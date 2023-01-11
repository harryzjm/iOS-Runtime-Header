//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSUUID;

@interface AFMyriadAdvertisementContextRecord : NSObject
{
    unsigned char _advertisementContextVersion;
    long long _advertisementRecordType;
    double _voiceTriggerEndTime;
    NSData *_advertisementPayload;
    NSUUID *_deviceID;
    double _advertisementDispatchTime;
}

- (void).cxx_destruct;
@property(nonatomic) double advertisementDispatchTime; // @synthesize advertisementDispatchTime=_advertisementDispatchTime;
@property(readonly, copy, nonatomic) NSUUID *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, copy, nonatomic) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
@property(readonly, nonatomic) double voiceTriggerEndTime; // @synthesize voiceTriggerEndTime=_voiceTriggerEndTime;
@property(readonly, nonatomic) long long advertisementRecordType; // @synthesize advertisementRecordType=_advertisementRecordType;
@property(readonly, nonatomic) unsigned char advertisementContextVersion; // @synthesize advertisementContextVersion=_advertisementContextVersion;
- (id)_deviceIDFromBytes:(const unsigned char (*)[16])arg1;
- (_Bool)compareAdvertisementPayload:(id)arg1;
- (id)recordForDeviceId:(id)arg1;
- (void)_initializeMyriadAdvertisementContextRecordFromData:(id)arg1;
- (id)_getDeviceIdForVersion:(unsigned char)arg1 data:(id)arg2;
- (id)_getMyriadAdvertisementDataForVersion:(unsigned char)arg1 data:(id)arg2;
- (double)_getVoiceTriggerEndTimeForVersion:(unsigned char)arg1 data:(id)arg2;
- (BOOL)_getAdvertismentRecordTypeForVersion:(unsigned char)arg1 data:(id)arg2;
- (unsigned long long)_advertismentPayloadSizeForVersion:(unsigned char)arg1;
- (_Bool)isSaneForVoiceTriggerEndTime:(double)arg1 endtimeDistanceThreshold:(double)arg2;
- (id)myriadAdvertisementContextAsData;
- (id)description;
- (id)initWithMyriadAdvertisementContextRecordData:(id)arg1;
- (id)initWithAdvertisementRecordType:(long long)arg1 voiceTriggerEndTime:(double)arg2 advertisementPayload:(id)arg3 deviceID:(id)arg4;

@end
