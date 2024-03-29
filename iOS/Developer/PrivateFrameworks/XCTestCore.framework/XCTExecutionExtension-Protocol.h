//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTestCore/NSObject-Protocol.h>

@class XCTTestIdentifierSet;

@protocol XCTExecutionExtension <NSObject>
- (void)getAllTestIdentifiersWithCompletion:(void (^)(XCTTestIdentifierSet *, NSError *))arg1;
- (void)getParallelizableTestIdentifiersWithCompletion:(void (^)(XCTTestIdentifierSet *, NSError *))arg1;
- (void)executeTestsWithIdentifiers:(XCTTestIdentifierSet *)arg1 skippingTestsWithIdentifiers:(XCTTestIdentifierSet *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

