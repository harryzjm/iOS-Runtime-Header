//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTAutomationSupport/NSObject-Protocol.h>

@class XCTRuntimeIssueContext;
@protocol XCTRuntimeIssue;

@protocol XCTRuntimeIssueContextReportingDelegate <NSObject>
+ (_Bool)shouldRuntimeIssueContext:(XCTRuntimeIssueContext *)arg1 reportIssue:(id <XCTRuntimeIssue>)arg2;
@end
