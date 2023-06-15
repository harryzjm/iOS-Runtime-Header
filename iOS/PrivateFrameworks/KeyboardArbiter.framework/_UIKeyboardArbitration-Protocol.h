//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSAnimationFenceHandle, NSArray, NSDictionary, NSString, UIKBArbiterClientFocusContext, _UIKeyboardChangedInformation;

@protocol _UIKeyboardArbitration
- (void)signalEventSourceChanged:(long long)arg1 completionHandler:(void (^)(void))arg2;
- (void)setKeyboardTotalDisable:(_Bool)arg1 withFence:(BKSAnimationFenceHandle *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)focusApplicationWithProcessIdentifier:(int)arg1 context:(UIKBArbiterClientFocusContext *)arg2 stealingKeyboard:(_Bool)arg3 onCompletion:(void (^)(_Bool))arg4;
- (void)focusApplicationWithProcessIdentifier:(int)arg1 context:(UIKBArbiterClientFocusContext *)arg2 onCompletion:(void (^)(_Bool))arg3;
- (void)applicationShouldFocusWithBundle:(NSString *)arg1 onCompletion:(void (^)(_Bool))arg2;
- (void)transition:(NSString *)arg1 eventStage:(unsigned long long)arg2 withInfo:(NSDictionary *)arg3;
- (void)notifyHostedPIDsOfSuppression:(_Bool)arg1;
- (void)setWindowHostingPID:(int)arg1 active:(_Bool)arg2;
- (void)notifyIAVHeight:(double)arg1;
- (void)signalKeyboardChangeComplete;
- (void)signalKeyboardChanged:(_UIKeyboardChangedInformation *)arg1 onCompletion:(void (^)(void))arg2;
- (void)setClientFocusContext:(UIKBArbiterClientFocusContext *)arg1;
- (void)setWantsFencing:(_Bool)arg1;
- (void)setWindowContextID:(unsigned int)arg1 focusContext:(UIKBArbiterClientFocusContext *)arg2 windowState:(unsigned long long)arg3 withLevel:(double)arg4;
- (void)startArbitrationWithExpectedState:(_UIKeyboardChangedInformation *)arg1 focusContext:(UIKBArbiterClientFocusContext *)arg2 hostingPIDs:(NSArray *)arg3 usingFence:(_Bool)arg4 withSuppression:(int)arg5 onConnected:(void (^)(_UIKeyboardChangedInformation *, _UIKeyboardUIInformation *, long long, _Bool))arg6;
- (void)startArbitrationWithExpectedState:(_UIKeyboardChangedInformation *)arg1 hostingPIDs:(NSArray *)arg2 usingFence:(_Bool)arg3 withSuppression:(int)arg4 onConnected:(void (^)(_UIKeyboardChangedInformation *, _UIKeyboardUIInformation *, long long, _Bool))arg5;
- (void)setDeactivating:(_Bool)arg1;
- (void)retrieveMoreDebugInformationWithCompletion:(void (^)(NSArray *))arg1;
- (void)retrieveDebugInformation:(void (^)(NSString *))arg1;
@end

