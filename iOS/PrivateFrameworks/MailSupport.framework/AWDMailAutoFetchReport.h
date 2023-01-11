//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MailSupport/NSCopying-Protocol.h>

@class AWDMailError;

@interface AWDMailAutoFetchReport : PBCodable <NSCopying>
{
    unsigned long long _bucketedLocalNonDeletedCount;
    unsigned long long _duration;
    unsigned long long _fetchSize;
    unsigned long long _numMessagesFetched;
    unsigned long long _options;
    unsigned long long _timestamp;
    int _emailProvider;
    AWDMailError *_mailError;
    int _mailboxType;
    int _newMessagesState;
    int _protocol;
    int _totalBytesReceived;
    int _totalBytesSent;
    int _trigger;
    _Bool _didTimeout;
    _Bool _foreground;
    struct {
        unsigned int bucketedLocalNonDeletedCount:1;
        unsigned int duration:1;
        unsigned int fetchSize:1;
        unsigned int numMessagesFetched:1;
        unsigned int options:1;
        unsigned int timestamp:1;
        unsigned int emailProvider:1;
        unsigned int mailboxType:1;
        unsigned int newMessagesState:1;
        unsigned int protocol:1;
        unsigned int totalBytesReceived:1;
        unsigned int totalBytesSent:1;
        unsigned int trigger:1;
        unsigned int didTimeout:1;
        unsigned int foreground:1;
    } _has;
}

@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long bucketedLocalNonDeletedCount; // @synthesize bucketedLocalNonDeletedCount=_bucketedLocalNonDeletedCount;
@property(nonatomic) unsigned long long numMessagesFetched; // @synthesize numMessagesFetched=_numMessagesFetched;
@property(nonatomic) unsigned long long fetchSize; // @synthesize fetchSize=_fetchSize;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) _Bool didTimeout; // @synthesize didTimeout=_didTimeout;
@property(nonatomic) _Bool foreground; // @synthesize foreground=_foreground;
@property(retain, nonatomic) AWDMailError *mailError; // @synthesize mailError=_mailError;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasBucketedLocalNonDeletedCount;
- (int)StringAsTotalBytesReceived:(id)arg1;
- (id)totalBytesReceivedAsString:(int)arg1;
@property(nonatomic) _Bool hasTotalBytesReceived;
@property(nonatomic) int totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
- (int)StringAsTotalBytesSent:(id)arg1;
- (id)totalBytesSentAsString:(int)arg1;
@property(nonatomic) _Bool hasTotalBytesSent;
@property(nonatomic) int totalBytesSent; // @synthesize totalBytesSent=_totalBytesSent;
@property(nonatomic) _Bool hasNumMessagesFetched;
@property(nonatomic) _Bool hasFetchSize;
@property(nonatomic) _Bool hasOptions;
@property(nonatomic) _Bool hasDidTimeout;
@property(nonatomic) _Bool hasForeground;
- (int)StringAsNewMessagesState:(id)arg1;
- (id)newMessagesStateAsString:(int)arg1;
@property(nonatomic) _Bool hasNewMessagesState;
@property(nonatomic) int newMessagesState; // @synthesize newMessagesState=_newMessagesState;
- (int)StringAsTrigger:(id)arg1;
- (id)triggerAsString:(int)arg1;
@property(nonatomic) _Bool hasTrigger;
@property(nonatomic) int trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) _Bool hasMailError;
- (int)StringAsMailboxType:(id)arg1;
- (id)mailboxTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMailboxType;
@property(nonatomic) int mailboxType; // @synthesize mailboxType=_mailboxType;
- (int)StringAsEmailProvider:(id)arg1;
- (id)emailProviderAsString:(int)arg1;
@property(nonatomic) _Bool hasEmailProvider;
@property(nonatomic) int emailProvider; // @synthesize emailProvider=_emailProvider;
- (int)StringAsProtocol:(id)arg1;
- (id)protocolAsString:(int)arg1;
@property(nonatomic) _Bool hasProtocol;
@property(nonatomic) int protocol; // @synthesize protocol=_protocol;
@property(nonatomic) _Bool hasTimestamp;

@end

