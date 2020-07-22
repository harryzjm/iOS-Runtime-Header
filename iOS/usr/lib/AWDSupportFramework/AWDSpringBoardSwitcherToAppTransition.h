//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDSpringBoardSwitcherToAppTransition : PBCodable <NSCopying>
{
    unsigned long long _absoluteDistanceInList;
    unsigned long long _timestamp;
    NSString *_switcherName;
    _Bool _isGoingToHomeScreen;
    struct {
        unsigned int absoluteDistanceInList:1;
        unsigned int timestamp:1;
        unsigned int isGoingToHomeScreen:1;
    } _has;
}

@property(nonatomic) _Bool isGoingToHomeScreen; // @synthesize isGoingToHomeScreen=_isGoingToHomeScreen;
@property(nonatomic) unsigned long long absoluteDistanceInList; // @synthesize absoluteDistanceInList=_absoluteDistanceInList;
@property(retain, nonatomic) NSString *switcherName; // @synthesize switcherName=_switcherName;
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
@property(nonatomic) _Bool hasIsGoingToHomeScreen;
@property(nonatomic) _Bool hasAbsoluteDistanceInList;
@property(readonly, nonatomic) _Bool hasSwitcherName;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

