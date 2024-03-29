//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection;
@protocol BSServiceConnectionClient, UIKeyboardUIServiceProtocol;

__attribute__((visibility("hidden")))
@interface UIKeyboardUIClient : NSObject
{
    BSServiceConnection<BSServiceConnectionClient> *_connection;
    id <UIKeyboardUIServiceProtocol> _remoteTarget;
}

+ (id)sharedInstance;
+ (id)serviceInterface;
- (void).cxx_destruct;
- (void)setKeyboardAlpha:(double)arg1 force:(_Bool)arg2;
- (id)snapshotViewForOptions:(unsigned long long)arg1;
- (void)_initConnectionIfNeeded;
- (void)dealloc;
- (id)init;

@end

