//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/SGDSuggestManagerAllProtocol-Protocol.h>

@class SGDaemonConnection;

@interface SGRemoteObjectProxy : NSObject <SGDSuggestManagerAllProtocol>
{
    SGDaemonConnection *_connection;
    _Bool _queuesRequestsIfBusy;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1 queuesRequestsIfBusy:(_Bool)arg2;

@end
