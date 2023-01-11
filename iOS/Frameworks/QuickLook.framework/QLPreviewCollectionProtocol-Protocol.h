//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, QLAppearance, QLTransitionContext, UIKeyCommand, UITraitCollection;
@protocol QLPreviewControllerStateProtocol, QLPreviewItemProvider, QLTransitionControllerProtocol;

@protocol QLPreviewCollectionProtocol
- (void)setSourceIsManaged:(_Bool)arg1;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(void (^)(void))arg1;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)invalidateService;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(void (^)(void))arg1;
- (void)setLoadingString:(NSString *)arg1;
- (void)tearDownTransition:(_Bool)arg1;
- (void)startTransitionWithSourceViewProvider:(QLTransitionContext *)arg1 transitionController:(id <QLTransitionControllerProtocol>)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(void (^)(void))arg5;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)setAppearance:(QLAppearance *)arg1 animated:(_Bool)arg2;
- (void)keyCommandWasPerformed:(UIKeyCommand *)arg1;
- (void)keyCommandsWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)toolbarButtonPressedWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)toolbarButtonsForTraitCollection:(UITraitCollection *)arg1 withCompletionHandler:(void (^)(NSArray *, NSArray *))arg2;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(_Bool)arg1;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id <QLPreviewItemProvider>)arg3 stateManager:(id <QLPreviewControllerStateProtocol>)arg4;
@end

