//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCUIAutomation/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, XCAXAuditConfiguration, XCAccessibilityElement, XCTCapabilities, XCUIAccessibilityAction;

@protocol XCUIRemoteAccessibilityInterface <NSObject>
@property(readonly) _Bool axNotificationsIncludeElement;
@property(readonly) _Bool useLegacySnapshotPath;
@property(readonly) XCTCapabilities *remoteInterfaceCapabilities;
- (void)setLocalizableStringsDataGatheringEnabled:(_Bool)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)enableFauxCollectionViewCells:(void (^)(_Bool, NSError *))arg1;
- (void)setAXTimeout:(double)arg1 reply:(void (^)(NSError *))arg2;
- (void)requestElementAtPoint:(struct CGPoint)arg1 reply:(void (^)(XCAccessibilityElement *, NSError *))arg2;
- (void)fetchParameterizedAttribute:(NSString *)arg1 forElement:(XCAccessibilityElement *)arg2 parameter:(id)arg3 reply:(void (^)(id, NSError *))arg4;
- (void)setAttribute:(NSString *)arg1 value:(id)arg2 element:(XCAccessibilityElement *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)fetchAttributes:(NSArray *)arg1 forElement:(XCAccessibilityElement *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)runAccessibilityAuditForElement:(XCAccessibilityElement *)arg1 withConfiguration:(XCAXAuditConfiguration *)arg2 reply:(void (^)(XCAXAuditResultCollection *, NSError *))arg3;
- (void)fetchSnapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(XCUIElementSnapshotRequestResult *, NSError *))arg4;
- (void)requestSnapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(XCElementSnapshot *, NSError *))arg4;
- (void)snapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(XCElementSnapshot *, NSError *))arg4;
- (void)performAccessibilityAction:(XCUIAccessibilityAction *)arg1 onElement:(XCAccessibilityElement *)arg2 value:(id)arg3 reply:(void (^)(NSError *))arg4;
- (void)unregisterForAccessibilityNotification:(int)arg1 registrationToken:(NSNumber *)arg2 reply:(void (^)(NSError *))arg3;
- (void)registerForAccessibilityNotification:(int)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)unloadAccessibility:(void (^)(_Bool, NSError *))arg1;
- (void)loadAccessibilityWithTimeout:(double)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end

