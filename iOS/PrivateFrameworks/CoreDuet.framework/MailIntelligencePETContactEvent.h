//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSString;

@interface MailIntelligencePETContactEvent : PBCodable <NSCopying>
{
    double _callAvgDur;
    double _callDurEveFri;
    double _callDurEveSat;
    double _callDurEveSun;
    double _callDurEveWeekday;
    double _callDurMorningFri;
    double _callDurMorningSat;
    double _callDurMorningSun;
    double _callDurMorningWeekday;
    double _callDurNightFri;
    double _callDurNightSat;
    double _callDurNightSun;
    double _callDurNightWeekday;
    double _callDurNoonFri;
    double _callDurNoonSat;
    double _callDurNoonSun;
    double _callDurNoonWeekday;
    double _callEveFri;
    double _callEveSat;
    double _callEveSun;
    double _callEveWeekday;
    double _callLongEveFri;
    double _callLongEveSat;
    double _callLongEveSun;
    double _callLongEveWeekday;
    double _callLongMorningFri;
    double _callLongMorningSat;
    double _callLongMorningSun;
    double _callLongMorningWeekday;
    double _callLongNightFri;
    double _callLongNightSat;
    double _callLongNightSun;
    double _callLongNightWeekday;
    double _callLongNoonFri;
    double _callLongNoonSat;
    double _callLongNoonSun;
    double _callLongNoonWeekday;
    double _callLongRatio;
    double _callMaxDur;
    double _callMorningFri;
    double _callMorningSat;
    double _callMorningSun;
    double _callMorningWeekday;
    double _callNightFri;
    double _callNightSat;
    double _callNightSun;
    double _callNightWeekday;
    double _callNoonFri;
    double _callNoonSat;
    double _callNoonSun;
    double _callNoonWeekday;
    double _callOutgoingRatio;
    unsigned long long _callTotal;
    double _callTotalDur;
    double _firstPartyMsgEveFri;
    double _firstPartyMsgEveSat;
    double _firstPartyMsgEveSun;
    double _firstPartyMsgEveWeekday;
    double _firstPartyMsgMorningFri;
    double _firstPartyMsgMorningSat;
    double _firstPartyMsgMorningSun;
    double _firstPartyMsgMorningWeekday;
    double _firstPartyMsgNightFri;
    double _firstPartyMsgNightSat;
    double _firstPartyMsgNightSun;
    double _firstPartyMsgNightWeekday;
    double _firstPartyMsgNoonFri;
    double _firstPartyMsgNoonSat;
    double _firstPartyMsgNoonSun;
    double _firstPartyMsgNoonWeekday;
    double _firstPartyMsgOutgoingRatio;
    unsigned long long _firstPartyMsgTotal;
    unsigned long long _mailIntelligenceContactId;
    double _thirdPartyMsgEveFri;
    double _thirdPartyMsgEveSat;
    double _thirdPartyMsgEveSun;
    double _thirdPartyMsgEveWeekday;
    double _thirdPartyMsgMorningFri;
    double _thirdPartyMsgMorningSat;
    double _thirdPartyMsgMorningSun;
    double _thirdPartyMsgMorningWeekday;
    double _thirdPartyMsgNightFri;
    double _thirdPartyMsgNightSat;
    double _thirdPartyMsgNightSun;
    double _thirdPartyMsgNightWeekday;
    double _thirdPartyMsgNoonFri;
    double _thirdPartyMsgNoonSat;
    double _thirdPartyMsgNoonSun;
    double _thirdPartyMsgNoonWeekday;
    unsigned long long _thirdPartyMsgTotal;
    unsigned int _callBirthday;
    unsigned int _contactEmergency;
    unsigned int _contactEmergencyFamily;
    unsigned int _contactFamilyName;
    unsigned int _contactFamilyRelation;
    unsigned int _contactFavorite;
    unsigned int _contactInAirDrop;
    unsigned int _contactInAirDropAtHome;
    unsigned int _contactInFMFFavorite;
    unsigned int _contactInFMFFollowingMe;
    unsigned int _contactInFMFSharingWithMe;
    unsigned int _contactInHome;
    unsigned int _contactInPhotos;
    unsigned int _contactParent;
    NSString *_contactRelation;
    struct {
        unsigned int callAvgDur:1;
        unsigned int callDurEveFri:1;
        unsigned int callDurEveSat:1;
        unsigned int callDurEveSun:1;
        unsigned int callDurEveWeekday:1;
        unsigned int callDurMorningFri:1;
        unsigned int callDurMorningSat:1;
        unsigned int callDurMorningSun:1;
        unsigned int callDurMorningWeekday:1;
        unsigned int callDurNightFri:1;
        unsigned int callDurNightSat:1;
        unsigned int callDurNightSun:1;
        unsigned int callDurNightWeekday:1;
        unsigned int callDurNoonFri:1;
        unsigned int callDurNoonSat:1;
        unsigned int callDurNoonSun:1;
        unsigned int callDurNoonWeekday:1;
        unsigned int callEveFri:1;
        unsigned int callEveSat:1;
        unsigned int callEveSun:1;
        unsigned int callEveWeekday:1;
        unsigned int callLongEveFri:1;
        unsigned int callLongEveSat:1;
        unsigned int callLongEveSun:1;
        unsigned int callLongEveWeekday:1;
        unsigned int callLongMorningFri:1;
        unsigned int callLongMorningSat:1;
        unsigned int callLongMorningSun:1;
        unsigned int callLongMorningWeekday:1;
        unsigned int callLongNightFri:1;
        unsigned int callLongNightSat:1;
        unsigned int callLongNightSun:1;
        unsigned int callLongNightWeekday:1;
        unsigned int callLongNoonFri:1;
        unsigned int callLongNoonSat:1;
        unsigned int callLongNoonSun:1;
        unsigned int callLongNoonWeekday:1;
        unsigned int callLongRatio:1;
        unsigned int callMaxDur:1;
        unsigned int callMorningFri:1;
        unsigned int callMorningSat:1;
        unsigned int callMorningSun:1;
        unsigned int callMorningWeekday:1;
        unsigned int callNightFri:1;
        unsigned int callNightSat:1;
        unsigned int callNightSun:1;
        unsigned int callNightWeekday:1;
        unsigned int callNoonFri:1;
        unsigned int callNoonSat:1;
        unsigned int callNoonSun:1;
        unsigned int callNoonWeekday:1;
        unsigned int callOutgoingRatio:1;
        unsigned int callTotal:1;
        unsigned int callTotalDur:1;
        unsigned int firstPartyMsgEveFri:1;
        unsigned int firstPartyMsgEveSat:1;
        unsigned int firstPartyMsgEveSun:1;
        unsigned int firstPartyMsgEveWeekday:1;
        unsigned int firstPartyMsgMorningFri:1;
        unsigned int firstPartyMsgMorningSat:1;
        unsigned int firstPartyMsgMorningSun:1;
        unsigned int firstPartyMsgMorningWeekday:1;
        unsigned int firstPartyMsgNightFri:1;
        unsigned int firstPartyMsgNightSat:1;
        unsigned int firstPartyMsgNightSun:1;
        unsigned int firstPartyMsgNightWeekday:1;
        unsigned int firstPartyMsgNoonFri:1;
        unsigned int firstPartyMsgNoonSat:1;
        unsigned int firstPartyMsgNoonSun:1;
        unsigned int firstPartyMsgNoonWeekday:1;
        unsigned int firstPartyMsgOutgoingRatio:1;
        unsigned int firstPartyMsgTotal:1;
        unsigned int thirdPartyMsgEveFri:1;
        unsigned int thirdPartyMsgEveSat:1;
        unsigned int thirdPartyMsgEveSun:1;
        unsigned int thirdPartyMsgEveWeekday:1;
        unsigned int thirdPartyMsgMorningFri:1;
        unsigned int thirdPartyMsgMorningSat:1;
        unsigned int thirdPartyMsgMorningSun:1;
        unsigned int thirdPartyMsgMorningWeekday:1;
        unsigned int thirdPartyMsgNightFri:1;
        unsigned int thirdPartyMsgNightSat:1;
        unsigned int thirdPartyMsgNightSun:1;
        unsigned int thirdPartyMsgNightWeekday:1;
        unsigned int thirdPartyMsgNoonFri:1;
        unsigned int thirdPartyMsgNoonSat:1;
        unsigned int thirdPartyMsgNoonSun:1;
        unsigned int thirdPartyMsgNoonWeekday:1;
        unsigned int thirdPartyMsgTotal:1;
        unsigned int callBirthday:1;
        unsigned int contactEmergency:1;
        unsigned int contactEmergencyFamily:1;
        unsigned int contactFamilyName:1;
        unsigned int contactFamilyRelation:1;
        unsigned int contactFavorite:1;
        unsigned int contactInAirDrop:1;
        unsigned int contactInAirDropAtHome:1;
        unsigned int contactInFMFFavorite:1;
        unsigned int contactInFMFFollowingMe:1;
        unsigned int contactInFMFSharingWithMe:1;
        unsigned int contactInHome:1;
        unsigned int contactInPhotos:1;
        unsigned int contactParent:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mailIntelligenceContactId; // @synthesize mailIntelligenceContactId=_mailIntelligenceContactId;
@property(nonatomic) unsigned int contactInFMFFavorite; // @synthesize contactInFMFFavorite=_contactInFMFFavorite;
@property(nonatomic) unsigned int contactInFMFSharingWithMe; // @synthesize contactInFMFSharingWithMe=_contactInFMFSharingWithMe;
@property(nonatomic) unsigned int contactInFMFFollowingMe; // @synthesize contactInFMFFollowingMe=_contactInFMFFollowingMe;
@property(nonatomic) unsigned int contactInAirDropAtHome; // @synthesize contactInAirDropAtHome=_contactInAirDropAtHome;
@property(nonatomic) unsigned int contactInAirDrop; // @synthesize contactInAirDrop=_contactInAirDrop;
@property(nonatomic) unsigned int contactInPhotos; // @synthesize contactInPhotos=_contactInPhotos;
@property(nonatomic) unsigned int contactInHome; // @synthesize contactInHome=_contactInHome;
@property(nonatomic) unsigned int contactEmergencyFamily; // @synthesize contactEmergencyFamily=_contactEmergencyFamily;
@property(nonatomic) unsigned int contactEmergency; // @synthesize contactEmergency=_contactEmergency;
@property(nonatomic) unsigned int contactParent; // @synthesize contactParent=_contactParent;
@property(nonatomic) unsigned int contactFamilyName; // @synthesize contactFamilyName=_contactFamilyName;
@property(retain, nonatomic) NSString *contactRelation; // @synthesize contactRelation=_contactRelation;
@property(nonatomic) unsigned int contactFamilyRelation; // @synthesize contactFamilyRelation=_contactFamilyRelation;
@property(nonatomic) double callLongNightSun; // @synthesize callLongNightSun=_callLongNightSun;
@property(nonatomic) double callLongNightSat; // @synthesize callLongNightSat=_callLongNightSat;
@property(nonatomic) double callLongNightFri; // @synthesize callLongNightFri=_callLongNightFri;
@property(nonatomic) double callLongNightWeekday; // @synthesize callLongNightWeekday=_callLongNightWeekday;
@property(nonatomic) double callLongEveSun; // @synthesize callLongEveSun=_callLongEveSun;
@property(nonatomic) double callLongEveSat; // @synthesize callLongEveSat=_callLongEveSat;
@property(nonatomic) double callLongEveFri; // @synthesize callLongEveFri=_callLongEveFri;
@property(nonatomic) double callLongEveWeekday; // @synthesize callLongEveWeekday=_callLongEveWeekday;
@property(nonatomic) double callLongNoonSun; // @synthesize callLongNoonSun=_callLongNoonSun;
@property(nonatomic) double callLongNoonSat; // @synthesize callLongNoonSat=_callLongNoonSat;
@property(nonatomic) double callLongNoonFri; // @synthesize callLongNoonFri=_callLongNoonFri;
@property(nonatomic) double callLongNoonWeekday; // @synthesize callLongNoonWeekday=_callLongNoonWeekday;
@property(nonatomic) double callLongMorningSun; // @synthesize callLongMorningSun=_callLongMorningSun;
@property(nonatomic) double callLongMorningSat; // @synthesize callLongMorningSat=_callLongMorningSat;
@property(nonatomic) double callLongMorningFri; // @synthesize callLongMorningFri=_callLongMorningFri;
@property(nonatomic) double callLongMorningWeekday; // @synthesize callLongMorningWeekday=_callLongMorningWeekday;
@property(nonatomic) double callDurNightSun; // @synthesize callDurNightSun=_callDurNightSun;
@property(nonatomic) double callDurNightSat; // @synthesize callDurNightSat=_callDurNightSat;
@property(nonatomic) double callDurNightFri; // @synthesize callDurNightFri=_callDurNightFri;
@property(nonatomic) double callDurNightWeekday; // @synthesize callDurNightWeekday=_callDurNightWeekday;
@property(nonatomic) double callDurEveSun; // @synthesize callDurEveSun=_callDurEveSun;
@property(nonatomic) double callDurEveSat; // @synthesize callDurEveSat=_callDurEveSat;
@property(nonatomic) double callDurEveFri; // @synthesize callDurEveFri=_callDurEveFri;
@property(nonatomic) double callDurEveWeekday; // @synthesize callDurEveWeekday=_callDurEveWeekday;
@property(nonatomic) double callDurNoonSun; // @synthesize callDurNoonSun=_callDurNoonSun;
@property(nonatomic) double callDurNoonSat; // @synthesize callDurNoonSat=_callDurNoonSat;
@property(nonatomic) double callDurNoonFri; // @synthesize callDurNoonFri=_callDurNoonFri;
@property(nonatomic) double callDurNoonWeekday; // @synthesize callDurNoonWeekday=_callDurNoonWeekday;
@property(nonatomic) double callDurMorningSun; // @synthesize callDurMorningSun=_callDurMorningSun;
@property(nonatomic) double callDurMorningSat; // @synthesize callDurMorningSat=_callDurMorningSat;
@property(nonatomic) double callDurMorningFri; // @synthesize callDurMorningFri=_callDurMorningFri;
@property(nonatomic) double callDurMorningWeekday; // @synthesize callDurMorningWeekday=_callDurMorningWeekday;
@property(nonatomic) double callNightSun; // @synthesize callNightSun=_callNightSun;
@property(nonatomic) double callNightSat; // @synthesize callNightSat=_callNightSat;
@property(nonatomic) double callNightFri; // @synthesize callNightFri=_callNightFri;
@property(nonatomic) double callNightWeekday; // @synthesize callNightWeekday=_callNightWeekday;
@property(nonatomic) double callEveSun; // @synthesize callEveSun=_callEveSun;
@property(nonatomic) double callEveSat; // @synthesize callEveSat=_callEveSat;
@property(nonatomic) double callEveFri; // @synthesize callEveFri=_callEveFri;
@property(nonatomic) double callEveWeekday; // @synthesize callEveWeekday=_callEveWeekday;
@property(nonatomic) double callNoonSun; // @synthesize callNoonSun=_callNoonSun;
@property(nonatomic) double callNoonSat; // @synthesize callNoonSat=_callNoonSat;
@property(nonatomic) double callNoonFri; // @synthesize callNoonFri=_callNoonFri;
@property(nonatomic) double callNoonWeekday; // @synthesize callNoonWeekday=_callNoonWeekday;
@property(nonatomic) double callMorningSun; // @synthesize callMorningSun=_callMorningSun;
@property(nonatomic) double callMorningSat; // @synthesize callMorningSat=_callMorningSat;
@property(nonatomic) double callMorningFri; // @synthesize callMorningFri=_callMorningFri;
@property(nonatomic) double callMorningWeekday; // @synthesize callMorningWeekday=_callMorningWeekday;
@property(nonatomic) double callMaxDur; // @synthesize callMaxDur=_callMaxDur;
@property(nonatomic) double callAvgDur; // @synthesize callAvgDur=_callAvgDur;
@property(nonatomic) double callOutgoingRatio; // @synthesize callOutgoingRatio=_callOutgoingRatio;
@property(nonatomic) double callLongRatio; // @synthesize callLongRatio=_callLongRatio;
@property(nonatomic) double callTotalDur; // @synthesize callTotalDur=_callTotalDur;
@property(nonatomic) unsigned int contactFavorite; // @synthesize contactFavorite=_contactFavorite;
@property(nonatomic) unsigned int callBirthday; // @synthesize callBirthday=_callBirthday;
@property(nonatomic) unsigned long long callTotal; // @synthesize callTotal=_callTotal;
@property(nonatomic) double thirdPartyMsgNightSun; // @synthesize thirdPartyMsgNightSun=_thirdPartyMsgNightSun;
@property(nonatomic) double thirdPartyMsgNightSat; // @synthesize thirdPartyMsgNightSat=_thirdPartyMsgNightSat;
@property(nonatomic) double thirdPartyMsgNightFri; // @synthesize thirdPartyMsgNightFri=_thirdPartyMsgNightFri;
@property(nonatomic) double thirdPartyMsgNightWeekday; // @synthesize thirdPartyMsgNightWeekday=_thirdPartyMsgNightWeekday;
@property(nonatomic) double thirdPartyMsgEveSun; // @synthesize thirdPartyMsgEveSun=_thirdPartyMsgEveSun;
@property(nonatomic) double thirdPartyMsgEveSat; // @synthesize thirdPartyMsgEveSat=_thirdPartyMsgEveSat;
@property(nonatomic) double thirdPartyMsgEveFri; // @synthesize thirdPartyMsgEveFri=_thirdPartyMsgEveFri;
@property(nonatomic) double thirdPartyMsgEveWeekday; // @synthesize thirdPartyMsgEveWeekday=_thirdPartyMsgEveWeekday;
@property(nonatomic) double thirdPartyMsgNoonSun; // @synthesize thirdPartyMsgNoonSun=_thirdPartyMsgNoonSun;
@property(nonatomic) double thirdPartyMsgNoonSat; // @synthesize thirdPartyMsgNoonSat=_thirdPartyMsgNoonSat;
@property(nonatomic) double thirdPartyMsgNoonFri; // @synthesize thirdPartyMsgNoonFri=_thirdPartyMsgNoonFri;
@property(nonatomic) double thirdPartyMsgNoonWeekday; // @synthesize thirdPartyMsgNoonWeekday=_thirdPartyMsgNoonWeekday;
@property(nonatomic) double thirdPartyMsgMorningSun; // @synthesize thirdPartyMsgMorningSun=_thirdPartyMsgMorningSun;
@property(nonatomic) double thirdPartyMsgMorningSat; // @synthesize thirdPartyMsgMorningSat=_thirdPartyMsgMorningSat;
@property(nonatomic) double thirdPartyMsgMorningFri; // @synthesize thirdPartyMsgMorningFri=_thirdPartyMsgMorningFri;
@property(nonatomic) double thirdPartyMsgMorningWeekday; // @synthesize thirdPartyMsgMorningWeekday=_thirdPartyMsgMorningWeekday;
@property(nonatomic) unsigned long long thirdPartyMsgTotal; // @synthesize thirdPartyMsgTotal=_thirdPartyMsgTotal;
@property(nonatomic) double firstPartyMsgNightSun; // @synthesize firstPartyMsgNightSun=_firstPartyMsgNightSun;
@property(nonatomic) double firstPartyMsgNightSat; // @synthesize firstPartyMsgNightSat=_firstPartyMsgNightSat;
@property(nonatomic) double firstPartyMsgNightFri; // @synthesize firstPartyMsgNightFri=_firstPartyMsgNightFri;
@property(nonatomic) double firstPartyMsgNightWeekday; // @synthesize firstPartyMsgNightWeekday=_firstPartyMsgNightWeekday;
@property(nonatomic) double firstPartyMsgEveSun; // @synthesize firstPartyMsgEveSun=_firstPartyMsgEveSun;
@property(nonatomic) double firstPartyMsgEveSat; // @synthesize firstPartyMsgEveSat=_firstPartyMsgEveSat;
@property(nonatomic) double firstPartyMsgEveFri; // @synthesize firstPartyMsgEveFri=_firstPartyMsgEveFri;
@property(nonatomic) double firstPartyMsgEveWeekday; // @synthesize firstPartyMsgEveWeekday=_firstPartyMsgEveWeekday;
@property(nonatomic) double firstPartyMsgNoonSun; // @synthesize firstPartyMsgNoonSun=_firstPartyMsgNoonSun;
@property(nonatomic) double firstPartyMsgNoonSat; // @synthesize firstPartyMsgNoonSat=_firstPartyMsgNoonSat;
@property(nonatomic) double firstPartyMsgNoonFri; // @synthesize firstPartyMsgNoonFri=_firstPartyMsgNoonFri;
@property(nonatomic) double firstPartyMsgNoonWeekday; // @synthesize firstPartyMsgNoonWeekday=_firstPartyMsgNoonWeekday;
@property(nonatomic) double firstPartyMsgMorningSun; // @synthesize firstPartyMsgMorningSun=_firstPartyMsgMorningSun;
@property(nonatomic) double firstPartyMsgMorningSat; // @synthesize firstPartyMsgMorningSat=_firstPartyMsgMorningSat;
@property(nonatomic) double firstPartyMsgMorningFri; // @synthesize firstPartyMsgMorningFri=_firstPartyMsgMorningFri;
@property(nonatomic) double firstPartyMsgMorningWeekday; // @synthesize firstPartyMsgMorningWeekday=_firstPartyMsgMorningWeekday;
@property(nonatomic) double firstPartyMsgOutgoingRatio; // @synthesize firstPartyMsgOutgoingRatio=_firstPartyMsgOutgoingRatio;
@property(nonatomic) unsigned long long firstPartyMsgTotal; // @synthesize firstPartyMsgTotal=_firstPartyMsgTotal;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasContactInFMFFavorite;
@property(nonatomic) _Bool hasContactInFMFSharingWithMe;
@property(nonatomic) _Bool hasContactInFMFFollowingMe;
@property(nonatomic) _Bool hasContactInAirDropAtHome;
@property(nonatomic) _Bool hasContactInAirDrop;
@property(nonatomic) _Bool hasContactInPhotos;
@property(nonatomic) _Bool hasContactInHome;
@property(nonatomic) _Bool hasContactEmergencyFamily;
@property(nonatomic) _Bool hasContactEmergency;
@property(nonatomic) _Bool hasContactParent;
@property(nonatomic) _Bool hasContactFamilyName;
@property(readonly, nonatomic) _Bool hasContactRelation;
@property(nonatomic) _Bool hasContactFamilyRelation;
@property(nonatomic) _Bool hasCallLongNightSun;
@property(nonatomic) _Bool hasCallLongNightSat;
@property(nonatomic) _Bool hasCallLongNightFri;
@property(nonatomic) _Bool hasCallLongNightWeekday;
@property(nonatomic) _Bool hasCallLongEveSun;
@property(nonatomic) _Bool hasCallLongEveSat;
@property(nonatomic) _Bool hasCallLongEveFri;
@property(nonatomic) _Bool hasCallLongEveWeekday;
@property(nonatomic) _Bool hasCallLongNoonSun;
@property(nonatomic) _Bool hasCallLongNoonSat;
@property(nonatomic) _Bool hasCallLongNoonFri;
@property(nonatomic) _Bool hasCallLongNoonWeekday;
@property(nonatomic) _Bool hasCallLongMorningSun;
@property(nonatomic) _Bool hasCallLongMorningSat;
@property(nonatomic) _Bool hasCallLongMorningFri;
@property(nonatomic) _Bool hasCallLongMorningWeekday;
@property(nonatomic) _Bool hasCallDurNightSun;
@property(nonatomic) _Bool hasCallDurNightSat;
@property(nonatomic) _Bool hasCallDurNightFri;
@property(nonatomic) _Bool hasCallDurNightWeekday;
@property(nonatomic) _Bool hasCallDurEveSun;
@property(nonatomic) _Bool hasCallDurEveSat;
@property(nonatomic) _Bool hasCallDurEveFri;
@property(nonatomic) _Bool hasCallDurEveWeekday;
@property(nonatomic) _Bool hasCallDurNoonSun;
@property(nonatomic) _Bool hasCallDurNoonSat;
@property(nonatomic) _Bool hasCallDurNoonFri;
@property(nonatomic) _Bool hasCallDurNoonWeekday;
@property(nonatomic) _Bool hasCallDurMorningSun;
@property(nonatomic) _Bool hasCallDurMorningSat;
@property(nonatomic) _Bool hasCallDurMorningFri;
@property(nonatomic) _Bool hasCallDurMorningWeekday;
@property(nonatomic) _Bool hasCallNightSun;
@property(nonatomic) _Bool hasCallNightSat;
@property(nonatomic) _Bool hasCallNightFri;
@property(nonatomic) _Bool hasCallNightWeekday;
@property(nonatomic) _Bool hasCallEveSun;
@property(nonatomic) _Bool hasCallEveSat;
@property(nonatomic) _Bool hasCallEveFri;
@property(nonatomic) _Bool hasCallEveWeekday;
@property(nonatomic) _Bool hasCallNoonSun;
@property(nonatomic) _Bool hasCallNoonSat;
@property(nonatomic) _Bool hasCallNoonFri;
@property(nonatomic) _Bool hasCallNoonWeekday;
@property(nonatomic) _Bool hasCallMorningSun;
@property(nonatomic) _Bool hasCallMorningSat;
@property(nonatomic) _Bool hasCallMorningFri;
@property(nonatomic) _Bool hasCallMorningWeekday;
@property(nonatomic) _Bool hasCallMaxDur;
@property(nonatomic) _Bool hasCallAvgDur;
@property(nonatomic) _Bool hasCallOutgoingRatio;
@property(nonatomic) _Bool hasCallLongRatio;
@property(nonatomic) _Bool hasCallTotalDur;
@property(nonatomic) _Bool hasContactFavorite;
@property(nonatomic) _Bool hasCallBirthday;
@property(nonatomic) _Bool hasCallTotal;
@property(nonatomic) _Bool hasThirdPartyMsgNightSun;
@property(nonatomic) _Bool hasThirdPartyMsgNightSat;
@property(nonatomic) _Bool hasThirdPartyMsgNightFri;
@property(nonatomic) _Bool hasThirdPartyMsgNightWeekday;
@property(nonatomic) _Bool hasThirdPartyMsgEveSun;
@property(nonatomic) _Bool hasThirdPartyMsgEveSat;
@property(nonatomic) _Bool hasThirdPartyMsgEveFri;
@property(nonatomic) _Bool hasThirdPartyMsgEveWeekday;
@property(nonatomic) _Bool hasThirdPartyMsgNoonSun;
@property(nonatomic) _Bool hasThirdPartyMsgNoonSat;
@property(nonatomic) _Bool hasThirdPartyMsgNoonFri;
@property(nonatomic) _Bool hasThirdPartyMsgNoonWeekday;
@property(nonatomic) _Bool hasThirdPartyMsgMorningSun;
@property(nonatomic) _Bool hasThirdPartyMsgMorningSat;
@property(nonatomic) _Bool hasThirdPartyMsgMorningFri;
@property(nonatomic) _Bool hasThirdPartyMsgMorningWeekday;
@property(nonatomic) _Bool hasThirdPartyMsgTotal;
@property(nonatomic) _Bool hasFirstPartyMsgNightSun;
@property(nonatomic) _Bool hasFirstPartyMsgNightSat;
@property(nonatomic) _Bool hasFirstPartyMsgNightFri;
@property(nonatomic) _Bool hasFirstPartyMsgNightWeekday;
@property(nonatomic) _Bool hasFirstPartyMsgEveSun;
@property(nonatomic) _Bool hasFirstPartyMsgEveSat;
@property(nonatomic) _Bool hasFirstPartyMsgEveFri;
@property(nonatomic) _Bool hasFirstPartyMsgEveWeekday;
@property(nonatomic) _Bool hasFirstPartyMsgNoonSun;
@property(nonatomic) _Bool hasFirstPartyMsgNoonSat;
@property(nonatomic) _Bool hasFirstPartyMsgNoonFri;
@property(nonatomic) _Bool hasFirstPartyMsgNoonWeekday;
@property(nonatomic) _Bool hasFirstPartyMsgMorningSun;
@property(nonatomic) _Bool hasFirstPartyMsgMorningSat;
@property(nonatomic) _Bool hasFirstPartyMsgMorningFri;
@property(nonatomic) _Bool hasFirstPartyMsgMorningWeekday;
@property(nonatomic) _Bool hasFirstPartyMsgOutgoingRatio;
@property(nonatomic) _Bool hasFirstPartyMsgTotal;

@end
