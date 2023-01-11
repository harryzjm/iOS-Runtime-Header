//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface DSIDRecord : NSObject <NSCopying>
{
    _Bool _dirty;
    int _nextReconcileTimestamp;
    _Bool _accountIsT13;
    _Bool _accountIsU13;
    _Bool _accountIsU18;
    _Bool _accountAgeUnknown;
    _Bool _isActiveRecord;
    _Bool _isRestrictedByEU_GDPR;
    _Bool _isDPIDManatee;
    _Bool _isPlaceholderAccount;
    _Bool _lastSentPersonalizedAdsStatus;
    _Bool _notificationRequired;
    int _personalizedAdsTimestamp;
    int _segmentDataTimestamp;
    int _lastSentSegmentDataTimestamp;
    int _lastSegmentServedTimestamp;
    int _lastSentPersonalizedAdsTimestamp;
    NSString *_DSID;
    NSString *_iCloudDSID;
    NSString *_segmentData;
    NSString *_iAdIDBeforeReset;
    NSMutableDictionary *_ADIDRecords;
    long long _lastJingleAccountStatus;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool notificationRequired; // @synthesize notificationRequired=_notificationRequired;
@property(nonatomic) int lastSentPersonalizedAdsTimestamp; // @synthesize lastSentPersonalizedAdsTimestamp=_lastSentPersonalizedAdsTimestamp;
@property(nonatomic) _Bool lastSentPersonalizedAdsStatus; // @synthesize lastSentPersonalizedAdsStatus=_lastSentPersonalizedAdsStatus;
@property(nonatomic) long long lastJingleAccountStatus; // @synthesize lastJingleAccountStatus=_lastJingleAccountStatus;
@property(retain) NSMutableDictionary *ADIDRecords; // @synthesize ADIDRecords=_ADIDRecords;
@property(nonatomic) _Bool isPlaceholderAccount; // @synthesize isPlaceholderAccount=_isPlaceholderAccount;
@property(nonatomic) int lastSegmentServedTimestamp; // @synthesize lastSegmentServedTimestamp=_lastSegmentServedTimestamp;
@property(nonatomic) int lastSentSegmentDataTimestamp; // @synthesize lastSentSegmentDataTimestamp=_lastSentSegmentDataTimestamp;
@property(nonatomic) int segmentDataTimestamp; // @synthesize segmentDataTimestamp=_segmentDataTimestamp;
@property(nonatomic) int personalizedAdsTimestamp; // @synthesize personalizedAdsTimestamp=_personalizedAdsTimestamp;
@property(nonatomic) _Bool isDPIDManatee; // @synthesize isDPIDManatee=_isDPIDManatee;
@property(retain, nonatomic) NSString *iAdIDBeforeReset; // @synthesize iAdIDBeforeReset=_iAdIDBeforeReset;
@property(readonly, nonatomic) _Bool isRestrictedByEU_GDPR; // @synthesize isRestrictedByEU_GDPR=_isRestrictedByEU_GDPR;
@property(retain, nonatomic) NSString *segmentData; // @synthesize segmentData=_segmentData;
@property(readonly, nonatomic) _Bool isActiveRecord; // @synthesize isActiveRecord=_isActiveRecord;
@property(nonatomic) _Bool accountAgeUnknown; // @synthesize accountAgeUnknown=_accountAgeUnknown;
@property(nonatomic) _Bool accountIsU18; // @synthesize accountIsU18=_accountIsU18;
@property(nonatomic) _Bool accountIsU13; // @synthesize accountIsU13=_accountIsU13;
@property(nonatomic) _Bool accountIsT13; // @synthesize accountIsT13=_accountIsT13;
@property(retain, nonatomic) NSString *iCloudDSID; // @synthesize iCloudDSID=_iCloudDSID;
@property(retain, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(nonatomic) int nextReconcileTimestamp;
- (_Bool)shouldSendNotification;
@property(nonatomic) _Bool dirty;
- (_Bool)iAdIDRecordsDirty;
@property(readonly, nonatomic) _Bool isRestrictedByApple;
- (id)idAccountsDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)encryptedIDForClientType:(long long)arg1;
- (void)setID:(id)arg1 forClientType:(long long)arg2;
- (id)idForClientType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDSID:(id)arg1 serializedRecord:(id)arg2 version:(int)arg3;

@end
