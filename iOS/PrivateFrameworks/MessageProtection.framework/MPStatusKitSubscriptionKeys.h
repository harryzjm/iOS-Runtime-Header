//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface MPStatusKitSubscriptionKeys : NSObject
{
    unsigned short _index;
    NSData *_chainKey;
    NSData *_signingKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *signingKey; // @synthesize signingKey=_signingKey;
@property(readonly, nonatomic) NSData *chainKey; // @synthesize chainKey=_chainKey;
@property(readonly, nonatomic) unsigned short index; // @synthesize index=_index;
- (id)initWithIndex:(unsigned short)arg1 chainKey:(id)arg2 signingKey:(id)arg3;

@end
