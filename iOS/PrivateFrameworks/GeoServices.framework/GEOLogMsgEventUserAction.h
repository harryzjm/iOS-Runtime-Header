//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying>
{
    NSString *_userActionEventKey;
    int _userActionEventTarget;
    NSString *_userActionEventValue;
    struct {
        unsigned int userActionEventTarget:1;
    } _has;
}

@property(retain, nonatomic) NSString *userActionEventValue; // @synthesize userActionEventValue=_userActionEventValue;
@property(retain, nonatomic) NSString *userActionEventKey; // @synthesize userActionEventKey=_userActionEventKey;
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
- (int)StringAsUserActionEventTarget:(id)arg1;
- (id)userActionEventTargetAsString:(int)arg1;
@property(nonatomic) _Bool hasUserActionEventTarget;
@property(nonatomic) int userActionEventTarget; // @synthesize userActionEventTarget=_userActionEventTarget;
@property(readonly, nonatomic) _Bool hasUserActionEventValue;
@property(readonly, nonatomic) _Bool hasUserActionEventKey;

@end

