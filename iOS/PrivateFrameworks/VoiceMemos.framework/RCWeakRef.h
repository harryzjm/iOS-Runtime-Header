//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RCWeakRef : NSObject
{
    id _weakStorage;
    id _weakPointer;
    _Bool _useWeakStorage;
}

+ (id)weakRefWithObject:(id)arg1;
- (id)object;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end

