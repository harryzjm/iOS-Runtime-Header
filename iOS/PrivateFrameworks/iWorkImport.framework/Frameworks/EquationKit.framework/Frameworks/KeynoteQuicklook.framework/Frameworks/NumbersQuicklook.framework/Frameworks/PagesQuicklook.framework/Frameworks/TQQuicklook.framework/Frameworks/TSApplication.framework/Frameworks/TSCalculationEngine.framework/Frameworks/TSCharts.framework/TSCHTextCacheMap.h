//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, TSCHTextCache;

@interface TSCHTextCacheMap : NSObject
{
    TSCHTextCache *_mainCache;
    NSMapTable *_map;
}

- (void).cxx_destruct;
- (void)clear;
- (id)textCacheForStyleProvidingSource:(id)arg1;
- (id)init;

@end
