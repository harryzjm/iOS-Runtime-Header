//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMessageSession.h"

@class COMessageSessionConsumer;

__attribute__((visibility("hidden")))
@interface COMessageConsumedSession : COMessageSession
{
    COMessageSessionConsumer *_consumer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak COMessageSessionConsumer *consumer; // @synthesize consumer=_consumer;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMember:(id)arg1 consumer:(id)arg2;

@end

