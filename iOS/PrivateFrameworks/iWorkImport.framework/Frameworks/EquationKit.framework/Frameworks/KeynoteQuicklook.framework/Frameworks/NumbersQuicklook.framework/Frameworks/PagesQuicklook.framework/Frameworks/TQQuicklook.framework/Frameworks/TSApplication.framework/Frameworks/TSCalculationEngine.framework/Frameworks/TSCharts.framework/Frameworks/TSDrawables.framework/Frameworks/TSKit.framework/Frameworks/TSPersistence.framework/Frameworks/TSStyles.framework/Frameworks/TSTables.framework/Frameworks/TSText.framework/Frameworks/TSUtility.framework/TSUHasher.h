//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSUHasher : NSObject
{
    unsigned long long _currentHash;
}

@property(nonatomic) unsigned long long currentHash; // @synthesize currentHash=_currentHash;
- (unsigned long long)hashValue;
- (void)addObject:(id)arg1;
- (void)addUnsignedInteger:(unsigned long long)arg1;
- (void)addInteger:(long long)arg1;
- (void)addBool:(_Bool)arg1;
- (void)addUnsignedInt:(unsigned int)arg1;
- (void)addInt:(int)arg1;
- (void)p_appendUnsignedInteger:(unsigned long long)arg1;
- (id)init;

@end
