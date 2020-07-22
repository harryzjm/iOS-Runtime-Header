//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface DAAccountMonitor : NSObject
{
    NSHashTable *_accounts;
    NSObject<OS_dispatch_queue> *_accountsQueue;
}

+ (id)sharedMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accountsQueue; // @synthesize accountsQueue=_accountsQueue;
@property(retain, nonatomic) NSHashTable *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (id)monitoredAccounts;
- (void)unmonitorAccount:(id)arg1;
- (void)monitorAccount:(id)arg1;
- (id)init;

@end

