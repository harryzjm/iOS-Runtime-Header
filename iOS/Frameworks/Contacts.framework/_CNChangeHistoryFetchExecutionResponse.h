//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface _CNChangeHistoryFetchExecutionResponse : NSObject
{
    NSArray *_events;
    long long _count;
    NSData *_token;
}

- (void).cxx_destruct;
@property(readonly, copy) NSData *token; // @synthesize token=_token;
@property(readonly) long long count; // @synthesize count=_count;
@property(readonly, copy) NSArray *events; // @synthesize events=_events;
- (id)initWithEvents:(id)arg1 count:(long long)arg2 token:(id)arg3;

@end

