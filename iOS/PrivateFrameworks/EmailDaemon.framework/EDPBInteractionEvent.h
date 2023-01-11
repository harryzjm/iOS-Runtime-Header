//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/EDPBDataSetters-Protocol.h>
#import <EmailDaemon/EDPETMessageFrameTypeIntrospectable-Protocol.h>
#import <EmailDaemon/NSCopying-Protocol.h>

@class EDPBInteractionEventAppBackground, EDPBInteractionEventAppLaunch, EDPBInteractionEventAppResume, EDPBInteractionEventFlagChanged, EDPBInteractionEventForwardDraftStarted, EDPBInteractionEventForwardSent, EDPBInteractionEventLinkClicked, EDPBInteractionEventMarkedMuteThread, EDPBInteractionEventMessageCopied, EDPBInteractionEventMessageFetched, EDPBInteractionEventMessageMoved, EDPBInteractionEventMessageSent, EDPBInteractionEventMessageViewEnd, EDPBInteractionEventMessageViewStart, EDPBInteractionEventReadChanged, EDPBInteractionEventReplyDraftStarted, EDPBInteractionEventReplySent;

@interface EDPBInteractionEvent : PBCodable <EDPETMessageFrameTypeIntrospectable, EDPBDataSetters, NSCopying>
{
    unsigned long long _timestamp;
    EDPBInteractionEventAppBackground *_appBackground;
    EDPBInteractionEventAppLaunch *_appLaunch;
    EDPBInteractionEventAppResume *_appResume;
    int _eventName;
    EDPBInteractionEventFlagChanged *_flagChanged;
    EDPBInteractionEventForwardDraftStarted *_forwardDraftStarted;
    EDPBInteractionEventForwardSent *_forwardSent;
    EDPBInteractionEventLinkClicked *_linkClicked;
    EDPBInteractionEventMarkedMuteThread *_markedMuteThread;
    EDPBInteractionEventMessageCopied *_messageCopied;
    EDPBInteractionEventMessageFetched *_messageFetched;
    EDPBInteractionEventMessageMoved *_messageMoved;
    EDPBInteractionEventMessageSent *_messageSent;
    EDPBInteractionEventMessageViewEnd *_messageViewEnd;
    EDPBInteractionEventMessageViewStart *_messageViewStart;
    EDPBInteractionEventReadChanged *_readChanged;
    EDPBInteractionEventReplyDraftStarted *_replyDraftStarted;
    EDPBInteractionEventReplySent *_replySent;
    unsigned int _sequenceNumber;
    struct {
        unsigned int timestamp:1;
        unsigned int eventName:1;
        unsigned int sequenceNumber:1;
    } _has;
}

@property(retain, nonatomic) EDPBInteractionEventMarkedMuteThread *markedMuteThread; // @synthesize markedMuteThread=_markedMuteThread;
@property(retain, nonatomic) EDPBInteractionEventForwardSent *forwardSent; // @synthesize forwardSent=_forwardSent;
@property(retain, nonatomic) EDPBInteractionEventReplySent *replySent; // @synthesize replySent=_replySent;
@property(retain, nonatomic) EDPBInteractionEventForwardDraftStarted *forwardDraftStarted; // @synthesize forwardDraftStarted=_forwardDraftStarted;
@property(retain, nonatomic) EDPBInteractionEventReplyDraftStarted *replyDraftStarted; // @synthesize replyDraftStarted=_replyDraftStarted;
@property(retain, nonatomic) EDPBInteractionEventMessageViewEnd *messageViewEnd; // @synthesize messageViewEnd=_messageViewEnd;
@property(retain, nonatomic) EDPBInteractionEventMessageViewStart *messageViewStart; // @synthesize messageViewStart=_messageViewStart;
@property(retain, nonatomic) EDPBInteractionEventReadChanged *readChanged; // @synthesize readChanged=_readChanged;
@property(retain, nonatomic) EDPBInteractionEventFlagChanged *flagChanged; // @synthesize flagChanged=_flagChanged;
@property(retain, nonatomic) EDPBInteractionEventAppResume *appResume; // @synthesize appResume=_appResume;
@property(retain, nonatomic) EDPBInteractionEventAppBackground *appBackground; // @synthesize appBackground=_appBackground;
@property(retain, nonatomic) EDPBInteractionEventAppLaunch *appLaunch; // @synthesize appLaunch=_appLaunch;
@property(retain, nonatomic) EDPBInteractionEventLinkClicked *linkClicked; // @synthesize linkClicked=_linkClicked;
@property(retain, nonatomic) EDPBInteractionEventMessageCopied *messageCopied; // @synthesize messageCopied=_messageCopied;
@property(retain, nonatomic) EDPBInteractionEventMessageMoved *messageMoved; // @synthesize messageMoved=_messageMoved;
@property(retain, nonatomic) EDPBInteractionEventMessageSent *messageSent; // @synthesize messageSent=_messageSent;
@property(retain, nonatomic) EDPBInteractionEventMessageFetched *messageFetched; // @synthesize messageFetched=_messageFetched;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
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
@property(readonly, nonatomic) _Bool hasMarkedMuteThread;
@property(readonly, nonatomic) _Bool hasForwardSent;
@property(readonly, nonatomic) _Bool hasReplySent;
@property(readonly, nonatomic) _Bool hasForwardDraftStarted;
@property(readonly, nonatomic) _Bool hasReplyDraftStarted;
@property(readonly, nonatomic) _Bool hasMessageViewEnd;
@property(readonly, nonatomic) _Bool hasMessageViewStart;
@property(readonly, nonatomic) _Bool hasReadChanged;
@property(readonly, nonatomic) _Bool hasFlagChanged;
@property(readonly, nonatomic) _Bool hasAppResume;
@property(readonly, nonatomic) _Bool hasAppBackground;
@property(readonly, nonatomic) _Bool hasAppLaunch;
@property(readonly, nonatomic) _Bool hasLinkClicked;
@property(readonly, nonatomic) _Bool hasMessageCopied;
@property(readonly, nonatomic) _Bool hasMessageMoved;
@property(readonly, nonatomic) _Bool hasMessageSent;
@property(readonly, nonatomic) _Bool hasMessageFetched;
- (int)StringAsEventName:(id)arg1;
- (id)eventNameAsString:(int)arg1;
@property(nonatomic) _Bool hasEventName;
@property(nonatomic) int eventName; // @synthesize eventName=_eventName;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasSequenceNumber;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)ed_oneOfConcreteEvent;
- (int)messageFrameType;

@end
