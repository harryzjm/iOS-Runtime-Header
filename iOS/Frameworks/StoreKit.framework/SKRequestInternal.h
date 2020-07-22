//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class SKPaymentQueueClient, SKXPCConnection;
@protocol SKRequestDelegate;

@interface SKRequestInternal : NSObject
{
    long long _backgroundTaskIdentifier;
    SKPaymentQueueClient *_client;
    SKXPCConnection *_connection;
    id <SKRequestDelegate> _delegate;
    long long _state;
}

- (void)dealloc;

@end

