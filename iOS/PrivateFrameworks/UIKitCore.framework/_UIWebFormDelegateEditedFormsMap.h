//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIWebFormDelegateEditedFormsMap : NSObject
{
    NSMutableDictionary *_map;
    NSMutableArray *_lifetimeHelper;
}

- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)allValues;
- (id)objectForKey:(id)arg1;
- (id)_keyForWebFrame:(id)arg1;
- (void)dealloc;
- (id)init;

@end

