//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSURLKeyValuePair : NSObject
{
    id key;
    id value;
    unsigned long long hash;
}

+ (id)pairWithKey:(id)arg1 value:(id)arg2;
+ (id)pair;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)value;
- (id)key;
- (void)setValue:(id)arg1;
- (void)setKey:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end

