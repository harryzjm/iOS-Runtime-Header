//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVContentKeyResponse.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface AVContentKeyResponseClearKey : AVContentKeyResponse
{
    NSData *_keyData;
    NSData *_initializationVector;
}

- (void)dealloc;
- (id)initWithKeyData:(id)arg1 initializationVector:(id)arg2;

@end

