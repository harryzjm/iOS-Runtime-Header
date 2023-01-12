//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SiriAnalyticsClientMessageStream;

@interface SiriAnalyticsClient : NSObject
{
    SiriAnalyticsClientMessageStream *_defaultMessageStream;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SiriAnalyticsClientMessageStream *defaultMessageStream; // @synthesize defaultMessageStream=_defaultMessageStream;
- (_Bool)clientMessageStream:(id)arg1 shouldEmitMessage:(id)arg2 timestamp:(unsigned long long)arg3 isolatedStreamUUID:(id)arg4;
- (void)setDefaultMessageStream:(id)arg1;

@end
