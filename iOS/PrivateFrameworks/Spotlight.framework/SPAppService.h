//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SPAppService : NSObject
{
    int _awakeNotifyToken;
    NSObject<OS_dispatch_queue> *_appServiceQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)_registerAwakeNotifyToken;
- (void)_cancelAwakeNotifyToken;

@end
