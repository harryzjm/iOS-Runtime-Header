//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class BRCPrivateClientZone, NSError, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRCPCSChainEnumerator : NSEnumerator
{
    unsigned long long _maxPathDepth;
    BRCPrivateClientZone *_clientZone;
    NSMutableArray *_stack;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)error;
- (id)nextObject;
- (id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2;

@end
