//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, UIKeyboardUIService;
@protocol BSServiceConnectionHost;

__attribute__((visibility("hidden")))
@interface UIKeyboardUIHandle : NSObject
{
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    UIKeyboardUIService *_service;
}

- (void).cxx_destruct;
- (void)setKeyboardAlpha:(id)arg1 force:(id)arg2 sessionID:(id)arg3;
- (id)snapshotForOptions:(id)arg1;
- (id)snapshotForView:(id)arg1;
- (id)initWithService:(id)arg1 connection:(id)arg2;

@end

