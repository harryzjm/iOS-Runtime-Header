//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKProductsRequestInternal : NSObject
{
    NSSet *_productIdentifiers;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

- (void).cxx_destruct;
- (id)init;

@end

