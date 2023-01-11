//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSCopying;

@interface PKLRUCacheItem : NSObject
{
    id <NSCopying> _key;
    PKLRUCacheItem *_next;
    PKLRUCacheItem *_prev;
    id _object;
    unsigned long long _cost;
}

- (void).cxx_destruct;

@end

