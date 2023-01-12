//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSSetItem : NSObject
{
    id _object;
    NSString *_hashKey;
}

+ (id)setItemWithObject:(id)arg1 hashKey:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *hashKey; // @synthesize hashKey=_hashKey;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1 hashKey:(id)arg2;

@end
