//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SUScriptDictionary : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_stringKeys;
    NSMutableDictionary *_cachedNestedScriptDictionaries;
    NSDictionary *_dictionary;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (_Bool)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (_Bool)isKeyExcludedFromWebScript:(const char *)arg1;
@property(readonly) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)attributeKeys;
- (id)stringRepresentation;
- (id)valueForNotNativelySupportedKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

