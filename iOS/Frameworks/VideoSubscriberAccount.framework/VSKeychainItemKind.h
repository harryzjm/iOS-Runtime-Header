//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VSKeychainItemKind : NSObject
{
    NSString *_itemClassName;
    struct __CFString *_secItemClass;
    NSArray *_properties;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(nonatomic) struct __CFString *secItemClass; // @synthesize secItemClass=_secItemClass;
@property(copy, nonatomic) NSString *itemClassName; // @synthesize itemClassName=_itemClassName;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *attributesBySecItemAttributeKey;
@property(readonly, copy, nonatomic) NSDictionary *attributesByName;
- (void)dealloc;
- (id)init;

@end

