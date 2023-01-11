//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface CTMobileEquipmentInfo : NSObject <NSCopying, NSSecureCoding>
{
    long long _slotId;
    NSString *_currentMobileId;
    NSString *_currentSubscriberId;
    NSString *_IMEI;
    NSString *_ICCID;
    NSString *_IMSI;
    NSString *_cdmaIMSI;
    NSString *_MEID;
    NSString *_EUIMID;
    NSNumber *_PRLVersion;
    NSNumber *_ERIVersion;
    NSString *_MIN;
    NSString *_NAI;
    NSString *_baseVersion;
    NSString *_baseId;
    NSString *_baseProfile;
    NSString *_effectiveICCID;
    NSString *_CSN;
    NSString *_displayCSN;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *displayCSN; // @synthesize displayCSN=_displayCSN;
@property(retain, nonatomic) NSString *CSN; // @synthesize CSN=_CSN;
@property(retain, nonatomic) NSString *effectiveICCID; // @synthesize effectiveICCID=_effectiveICCID;
@property(retain, nonatomic) NSString *baseProfile; // @synthesize baseProfile=_baseProfile;
@property(retain, nonatomic) NSString *baseId; // @synthesize baseId=_baseId;
@property(retain, nonatomic) NSString *baseVersion; // @synthesize baseVersion=_baseVersion;
@property(retain, nonatomic) NSString *NAI; // @synthesize NAI=_NAI;
@property(retain, nonatomic) NSString *MIN; // @synthesize MIN=_MIN;
@property(retain, nonatomic) NSNumber *ERIVersion; // @synthesize ERIVersion=_ERIVersion;
@property(retain, nonatomic) NSNumber *PRLVersion; // @synthesize PRLVersion=_PRLVersion;
@property(retain, nonatomic) NSString *EUIMID; // @synthesize EUIMID=_EUIMID;
@property(retain, nonatomic) NSString *MEID; // @synthesize MEID=_MEID;
@property(retain, nonatomic) NSString *cdmaIMSI; // @synthesize cdmaIMSI=_cdmaIMSI;
@property(retain, nonatomic) NSString *IMSI; // @synthesize IMSI=_IMSI;
@property(retain, nonatomic) NSString *ICCID; // @synthesize ICCID=_ICCID;
@property(retain, nonatomic) NSString *IMEI; // @synthesize IMEI=_IMEI;
@property(retain, nonatomic) NSString *currentSubscriberId; // @synthesize currentSubscriberId=_currentSubscriberId;
@property(retain, nonatomic) NSString *currentMobileId; // @synthesize currentMobileId=_currentMobileId;
@property(nonatomic) long long slotId; // @synthesize slotId=_slotId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

