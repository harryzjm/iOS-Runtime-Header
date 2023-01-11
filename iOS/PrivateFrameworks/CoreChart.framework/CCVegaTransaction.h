//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CCVegaTransaction : NSObject
{
    int _status;
    NSHashTable *_scheduledRenderers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)singleton;
- (void).cxx_destruct;
- (void)_commitTransactionForRenderers:(id)arg1;
- (void)scheduleDisplay:(id)arg1;
- (void)commit;
- (void)begin;
- (id)init;

@end
