//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NRPBTermsEvent : PBCodable <NSCopying>
{
    double _eventDate;
    NSString *_acknowledgedDeviceName;
    NSString *_acknowledgedDeviceSerialNumber;
    NSString *_displayDeviceName;
    NSString *_displayDeviceSerialNumber;
    NSString *_documentationID;
    int _eventType;
    NSString *_loggingProcessName;
    int _presentationLocation;
    NSString *_presentationReason;
    NSData *_termsText;
    struct {
        unsigned int eventDate:1;
        unsigned int eventType:1;
        unsigned int presentationLocation:1;
    } _has;
}

@property(retain, nonatomic) NSString *loggingProcessName; // @synthesize loggingProcessName=_loggingProcessName;
@property(nonatomic) double eventDate; // @synthesize eventDate=_eventDate;
@property(retain, nonatomic) NSString *displayDeviceSerialNumber; // @synthesize displayDeviceSerialNumber=_displayDeviceSerialNumber;
@property(retain, nonatomic) NSString *displayDeviceName; // @synthesize displayDeviceName=_displayDeviceName;
@property(retain, nonatomic) NSString *acknowledgedDeviceSerialNumber; // @synthesize acknowledgedDeviceSerialNumber=_acknowledgedDeviceSerialNumber;
@property(retain, nonatomic) NSString *acknowledgedDeviceName; // @synthesize acknowledgedDeviceName=_acknowledgedDeviceName;
@property(nonatomic) int presentationLocation; // @synthesize presentationLocation=_presentationLocation;
@property(retain, nonatomic) NSString *presentationReason; // @synthesize presentationReason=_presentationReason;
@property(retain, nonatomic) NSString *documentationID; // @synthesize documentationID=_documentationID;
@property(retain, nonatomic) NSData *termsText; // @synthesize termsText=_termsText;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLoggingProcessName;
@property(nonatomic) _Bool hasEventDate;
@property(readonly, nonatomic) _Bool hasDisplayDeviceSerialNumber;
@property(readonly, nonatomic) _Bool hasDisplayDeviceName;
@property(readonly, nonatomic) _Bool hasAcknowledgedDeviceSerialNumber;
@property(readonly, nonatomic) _Bool hasAcknowledgedDeviceName;
@property(nonatomic) _Bool hasPresentationLocation;
@property(readonly, nonatomic) _Bool hasPresentationReason;
@property(readonly, nonatomic) _Bool hasDocumentationID;
@property(readonly, nonatomic) _Bool hasTermsText;
@property(nonatomic) _Bool hasEventType;

@end

