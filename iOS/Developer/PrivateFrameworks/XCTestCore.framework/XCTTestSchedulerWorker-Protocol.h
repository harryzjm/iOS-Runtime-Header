//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTestCore/NSObject-Protocol.h>

@class NSObject, XCTTestIdentifierSet;
@protocol OS_dispatch_queue;

@protocol XCTTestSchedulerWorker <NSObject>
- (void)shutdown;
- (void)executeTestIdentifiers:(XCTTestIdentifierSet *)arg1 skippingTestIdentifiers:(XCTTestIdentifierSet *)arg2 completionHandler:(void (^)(NSError *))arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4;
@end
