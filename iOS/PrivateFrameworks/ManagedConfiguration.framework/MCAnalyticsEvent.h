//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MCAnalyticsEvent : NSObject
{
    NSString *_eventKey;
    CDUnknownBlockType _eventPayloadBuilder;
}

- (void).cxx_destruct;
- (void)sendEventLazy;
- (void)sendEvent;
- (id)initWithEventKey:(id)arg1 eventPayloadBuilder:(CDUnknownBlockType)arg2;

@end
