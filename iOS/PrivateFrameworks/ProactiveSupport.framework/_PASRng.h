//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PASRng : NSObject
{
    struct {
        unsigned long long s[2];
    } _state;
}

- (float)nextFloat;
- (unsigned long long)next;
- (id)initWithSeed:(unsigned long long)arg1;
- (id)init;

@end

