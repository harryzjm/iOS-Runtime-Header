//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSMutableSet;

@interface DVTDiskStockManager : NSObject
{
    CDUnknownBlockType _cullingStrategyBlock;
    DVTDispatchLock *_diskStocksLock;
    NSMutableSet *_diskStocks;
}

+ (unsigned long long)_calculateSizeOfDiskStock:(id)arg1 members:(id)arg2;
+ (id)logAspect;
+ (id)defaultDiskStockManager;
- (void).cxx_destruct;
- (void)cullAllDiskStocksOnQueue:(id)arg1 afterDelay:(double)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)cullAllDiskStocksOnQueue:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)cullAllDiskStocksSynchronously;
- (void)cullDiskStockSynchronously:(id)arg1;
- (id)diskStockForIdentifier:(id)arg1;
- (id)registeredDiskStocks;
- (void)registerDiskStock:(id)arg1;
- (id)initWithCullingStrategyBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

