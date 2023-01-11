//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class AWDNWActivity, AWDNWDeviceReport, AWDNWL2Report;

@interface AWDNWActivityEpilogue : PBCodable <NSCopying>
{
    unsigned long long _durationMsecs;
    unsigned long long _fragmentsQuenched;
    unsigned long long _timestamp;
    AWDNWActivity *_activity;
    int _completionReason;
    AWDNWDeviceReport *_deviceReport;
    AWDNWL2Report *_l2Report;
    int _underlyingErrorCode;
    int _underlyingErrorDomain;
    struct {
        unsigned int durationMsecs:1;
        unsigned int fragmentsQuenched:1;
        unsigned int timestamp:1;
        unsigned int completionReason:1;
        unsigned int underlyingErrorCode:1;
        unsigned int underlyingErrorDomain:1;
    } _has;
}

@property(nonatomic) int underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(nonatomic) int underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(retain, nonatomic) AWDNWDeviceReport *deviceReport; // @synthesize deviceReport=_deviceReport;
@property(retain, nonatomic) AWDNWL2Report *l2Report; // @synthesize l2Report=_l2Report;
@property(nonatomic) unsigned long long fragmentsQuenched; // @synthesize fragmentsQuenched=_fragmentsQuenched;
@property(nonatomic) unsigned long long durationMsecs; // @synthesize durationMsecs=_durationMsecs;
@property(retain, nonatomic) AWDNWActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUnderlyingErrorCode;
@property(nonatomic) _Bool hasUnderlyingErrorDomain;
@property(readonly, nonatomic) _Bool hasDeviceReport;
@property(readonly, nonatomic) _Bool hasL2Report;
- (int)StringAsCompletionReason:(id)arg1;
- (id)completionReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasCompletionReason;
@property(nonatomic) int completionReason; // @synthesize completionReason=_completionReason;
@property(nonatomic) _Bool hasFragmentsQuenched;
@property(nonatomic) _Bool hasDurationMsecs;
@property(readonly, nonatomic) _Bool hasActivity;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
