//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSString;
@protocol MTLDevice, MTLHeap;

@protocol MTLResource <NSObject>
- (_Bool)isAliasable;
- (void)makeAliasable;
@property(nonatomic, readonly) long long allocatedSize;
@property(nonatomic, readonly) long long heapOffset;
@property(nonatomic, readonly) id <MTLHeap> heap;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
@property(nonatomic, readonly) unsigned long long resourceOptions;
@property(nonatomic, readonly) unsigned long long hazardTrackingMode;
@property(nonatomic, readonly) unsigned long long storageMode;
@property(nonatomic, readonly) unsigned long long cpuCacheMode;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, copy) NSString *label;
@end

