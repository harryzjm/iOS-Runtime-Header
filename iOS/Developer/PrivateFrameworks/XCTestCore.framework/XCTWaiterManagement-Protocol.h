//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTestCore/NSObject-Protocol.h>

@class XCTWaiterWait;
@protocol XCTWaiterManagement;

@protocol XCTWaiterManagement <NSObject>
- (void)interruptWait:(XCTWaiterWait *)arg1 forWaiter:(id <XCTWaiterManagement>)arg2;
- (_Bool)allowsNestedWaitersWithWait:(XCTWaiterWait *)arg1;
@end

