//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ManagedNetworkSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedMNS;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)reloadMNS;
- (void)reloadNetworkdSettings;
- (void)handleEvent:(id)arg1;
- (id)init;

@end

