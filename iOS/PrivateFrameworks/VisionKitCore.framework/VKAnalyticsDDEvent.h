//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VKAnalyticsDDEvent
{
    long long _eventType;
    unsigned long long _dataDetectorTypes;
}

@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (id)description;
- (id)coreAnalyticsDictionary;
- (long long)type;
- (id)eventKey;
- (id)initWithElement:(id)arg1 eventType:(long long)arg2 customIdentifier:(id)arg3;

@end
