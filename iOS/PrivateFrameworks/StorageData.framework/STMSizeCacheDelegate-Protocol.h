//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StorageData/NSObject-Protocol.h>

@class NSArray, STMSizeCache;

@protocol STMSizeCacheDelegate <NSObject>

@optional
- (void)sizeCache:(STMSizeCache *)arg1 itemSizesChanged:(NSArray *)arg2;
- (void)sizeCacheItemsUpdated:(STMSizeCache *)arg1;
@end

