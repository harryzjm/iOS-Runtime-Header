//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVContentKeyResponse.h"

@class NSData, NSDate;

__attribute__((visibility("hidden")))
@interface AVContentKeyResponseFairPlayStreaming : AVContentKeyResponse
{
    NSData *_keyData;
    NSDate *_renewalDate;
}

- (void)dealloc;
- (id)initWithKeyData:(id)arg1 renewalDate:(id)arg2;

@end

