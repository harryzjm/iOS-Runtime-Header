//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NoiseSampler : NSObject
{
    struct vector<unsigned long, std::allocator<unsigned long>> _alias;
    struct vector<float, std::allocator<float>> _unigram;
    struct mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> _generator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)drawNoise;
- (id)initWithUnigram:(float *)arg1 ofSize:(unsigned long long)arg2;
- (id)initWithZipfOfSize:(unsigned long long)arg1;
- (id)init;

@end

