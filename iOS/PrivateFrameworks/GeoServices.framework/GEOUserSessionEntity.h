//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface GEOUserSessionEntity : NSObject <NSCopying>
{
    struct GEOSessionID _sessionID;
    unsigned int _sequenceNumber;
    double _sessionCreationTime;
}

@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property double sessionCreationTime; // @synthesize sessionCreationTime=_sessionCreationTime;
@property struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateSessionIDFromUUIDString:(id)arg1;
- (void)updateWithSessionEntityString:(id)arg1;
- (_Bool)_isValidSessionIDHighOrLowString:(id)arg1;
@property(readonly, nonatomic) NSString *sessionIDHighString;
@property(readonly, nonatomic) NSString *sessionIDLowString;
@property(readonly, nonatomic) NSNumber *sessionIDHigh;
@property(readonly, nonatomic) NSNumber *sessionIDLow;
@property(readonly, nonatomic) NSString *sessionUUIDString;
@property(readonly, nonatomic) NSString *sessionIDString;
@property(readonly, nonatomic) NSString *sessionEntityString;
- (id)description;
- (id)initWithSessionEntityString:(id)arg1;
- (id)initWithSessionID:(struct GEOSessionID)arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned int)arg3;
- (double)sessionRelativeTimestampForEventTime:(double)arg1;
@property(readonly) double sessionRelativeTimestamp;
- (unsigned int)rawSequenceNumber;

@end
