//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTest/NSObject-Protocol.h>

@class NSError;

@protocol XCTAsyncActivity <NSObject>
@property(readonly) _Bool timedOut;
@property(readonly) NSError *error;
- (void)finishWithError:(NSError *)arg1;
@end

