//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CPDistributedMessagingDelayedReplyContext : NSObject
{
    unsigned int _replyPort;
    _Bool _portPassing;
}

@property(nonatomic) _Bool portPassing; // @synthesize portPassing=_portPassing;
@property(nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;
- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 portPassing:(_Bool)arg2;

@end
