//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface AFMyriadRecord : NSObject
{
    unsigned char _goodness;
    unsigned char _userConfidence;
    unsigned char _deviceGroup;
    unsigned char _deviceClass;
    unsigned char _tieBreaker;
    _Bool _isMe;
    unsigned short _pHash;
    NSUUID *_deviceID;
}

@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(nonatomic) unsigned char tieBreaker; // @synthesize tieBreaker=_tieBreaker;
@property(nonatomic) unsigned char deviceClass; // @synthesize deviceClass=_deviceClass;
@property(retain, nonatomic) NSUUID *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) unsigned char deviceGroup; // @synthesize deviceGroup=_deviceGroup;
@property(nonatomic) unsigned short pHash; // @synthesize pHash=_pHash;
@property(nonatomic) unsigned char userConfidence; // @synthesize userConfidence=_userConfidence;
@property(nonatomic) unsigned char goodness; // @synthesize goodness=_goodness;
- (void).cxx_destruct;
- (id)description;
- (id)asAdvertisementData;
- (_Bool)isAnEmergencyHandled;
- (_Bool)isAnEmergency;
- (_Bool)isAContinuation;
- (_Bool)isATrump;
- (void)generateTiebreaker;
- (id)initWithDeviceID:(id)arg1 data:(id)arg2;
- (void)adjustByMultiplier:(float)arg1 adding:(int)arg2;
- (id)initWithAudioData:(id)arg1;
- (id)init;

@end
