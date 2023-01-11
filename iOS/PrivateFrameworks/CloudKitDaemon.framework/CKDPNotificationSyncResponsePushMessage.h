//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying>
{
    int _badgeCount;
    NSString *_category;
    NSString *_dialog;
    NSData *_payload;
    NSString *_sound;
    int _source;
    NSString *_subtitle;
    NSMutableArray *_subtitleLocalizedArguments;
    NSString *_subtitleLocalizedKey;
    NSString *_title;
    NSMutableArray *_titleLocalizedArguments;
    NSString *_titleLocalizedKey;
    NSString *_uuid;
    _Bool _isRead;
    struct {
        unsigned int badgeCount:1;
        unsigned int source:1;
        unsigned int isRead:1;
    } _has;
}

+ (Class)subtitleLocalizedArgumentsType;
+ (Class)titleLocalizedArgumentsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *subtitleLocalizedArguments; // @synthesize subtitleLocalizedArguments=_subtitleLocalizedArguments;
@property(retain, nonatomic) NSString *subtitleLocalizedKey; // @synthesize subtitleLocalizedKey=_subtitleLocalizedKey;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSMutableArray *titleLocalizedArguments; // @synthesize titleLocalizedArguments=_titleLocalizedArguments;
@property(retain, nonatomic) NSString *titleLocalizedKey; // @synthesize titleLocalizedKey=_titleLocalizedKey;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) int badgeCount; // @synthesize badgeCount=_badgeCount;
@property(retain, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property(retain, nonatomic) NSString *dialog; // @synthesize dialog=_dialog;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subtitleLocalizedArgumentsCount;
- (void)addSubtitleLocalizedArguments:(id)arg1;
- (void)clearSubtitleLocalizedArguments;
@property(readonly, nonatomic) _Bool hasSubtitleLocalizedKey;
@property(readonly, nonatomic) _Bool hasSubtitle;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)titleLocalizedArgumentsCount;
- (void)addTitleLocalizedArguments:(id)arg1;
- (void)clearTitleLocalizedArguments;
@property(readonly, nonatomic) _Bool hasTitleLocalizedKey;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasCategory;
@property(readonly, nonatomic) _Bool hasPayload;
@property(nonatomic) _Bool hasBadgeCount;
@property(readonly, nonatomic) _Bool hasSound;
@property(readonly, nonatomic) _Bool hasDialog;
- (int)StringAsSource:(id)arg1;
- (id)sourceAsString:(int)arg1;
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool hasUuid;
@property(nonatomic) _Bool hasIsRead;

@end
