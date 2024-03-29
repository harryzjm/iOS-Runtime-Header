//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCUIAutomation/XCTElementSnapshotAttributeDataSource-Protocol.h>

@class XCTCapabilities, XCTElementQuery, XCTElementQueryResults;

@protocol XCTRunnerAutomationSession <XCTElementSnapshotAttributeDataSource>
@property(readonly) _Bool supportsMallocStackLogging;
@property(readonly) _Bool isMacCatalyst;
@property(readonly) _Bool supportsAnimationsIdleNotifications;
@property(readonly) _Bool supportsMainRunLoopIdleNotifications;
@property(readonly) _Bool supportsFetchingAttributesForElement;
@property(readonly) XCTCapabilities *remoteInterfaceCapabilities;
- (void)setMallocStackLoggingWithMode:(int)arg1 reply:(void (^)(NSError *))arg2;
- (void)notifyWhenAnimationsAreIdle:(void (^)(NSError *))arg1;
- (void)notifyWhenMainRunLoopIsIdle:(void (^)(NSError *))arg1;
- (XCTElementQueryResults *)matchesForQuery:(XCTElementQuery *)arg1 error:(id *)arg2;
@end

