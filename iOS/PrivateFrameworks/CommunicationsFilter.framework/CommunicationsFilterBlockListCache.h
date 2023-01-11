//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CommunicationsFilterBlockListCache : NSObject
{
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    _Bool _listIsEmpty;
}

- (void)_blockListChanged:(id)arg1;
- (void)syncListEmptyState;
- (void)setResponse:(_Bool)arg1 forItem:(id)arg2;
- (void)removeItemFromCache:(id)arg1;
- (long long)cachedResponseForItem:(id)arg1;
- (id)init;

@end

