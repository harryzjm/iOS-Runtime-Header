//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface SBEmitSBEventSwitcherEventResponse
{
    unsigned long long _eventType;
    NSDictionary *_payload;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)initWithSBEventWithEventType:(unsigned long long)arg1 payload:(id)arg2;
- (long long)type;

@end
