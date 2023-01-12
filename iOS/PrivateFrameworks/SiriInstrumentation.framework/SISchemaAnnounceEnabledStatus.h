//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaAnnounceNotifications;

@interface SISchemaAnnounceEnabledStatus
{
    _Bool _announceMessagesEnabled;
    _Bool _announceCallsEnabled;
    SISchemaAnnounceNotifications *_announceNotifications;
    struct {
        unsigned int announceMessagesEnabled:1;
        unsigned int announceCallsEnabled:1;
    } _has;
    _Bool _hasAnnounceNotifications;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasAnnounceNotifications; // @synthesize hasAnnounceNotifications=_hasAnnounceNotifications;
@property(retain, nonatomic) SISchemaAnnounceNotifications *announceNotifications; // @synthesize announceNotifications=_announceNotifications;
@property(nonatomic) _Bool announceCallsEnabled; // @synthesize announceCallsEnabled=_announceCallsEnabled;
@property(nonatomic) _Bool announceMessagesEnabled; // @synthesize announceMessagesEnabled=_announceMessagesEnabled;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasAnnounceCallsEnabled;
@property(nonatomic) _Bool hasAnnounceMessagesEnabled;

@end
