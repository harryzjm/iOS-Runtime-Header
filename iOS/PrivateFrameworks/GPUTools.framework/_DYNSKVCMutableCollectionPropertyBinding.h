//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _DYNSKVCMutableCollectionPropertyBinding : NSObject
{
    NSString *_key;
    NSString *_underlyingIvarName;
}

@property(readonly, copy, nonatomic) NSString *underlyingIvarName; // @synthesize underlyingIvarName=_underlyingIvarName;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)underlyingIvarValueForObject:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 underlyingIvarName:(id)arg2;

@end

