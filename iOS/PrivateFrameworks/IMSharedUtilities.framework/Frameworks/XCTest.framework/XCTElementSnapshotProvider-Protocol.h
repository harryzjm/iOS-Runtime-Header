//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTest/NSObject-Protocol.h>

@class NSArray, NSDictionary, XCAccessibilityElement, XCElementSnapshot;

@protocol XCTElementSnapshotProvider <NSObject>
- (XCElementSnapshot *)snapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 error:(id *)arg4;
@end

