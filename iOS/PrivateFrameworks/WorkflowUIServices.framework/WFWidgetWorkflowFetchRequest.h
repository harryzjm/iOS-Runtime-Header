//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFWidgetWorkflowFetchRequest : NSObject
{
    unsigned long long _type;
    NSString *_identifier;
    unsigned long long _limit;
    unsigned long long _retryCount;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (id)initWithFetchType:(unsigned long long)arg1 identifier:(id)arg2 limit:(unsigned long long)arg3 retryCount:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

