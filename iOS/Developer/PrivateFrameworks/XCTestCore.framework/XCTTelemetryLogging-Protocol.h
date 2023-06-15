//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTestCore/NSObject-Protocol.h>

@class NSString;

@protocol XCTTelemetryLogging <NSObject>
- (void)flushWithCompletion:(void (^)(void))arg1;
- (void)logCompletionOfTestIdentifier:(NSString *)arg1;
- (void)logUsageOfFunction:(NSString *)arg1;
- (void)logUsageOfClass:(NSString *)arg1 method:(NSString *)arg2;
- (void)logEventWithName:(NSString *)arg1;
@end

