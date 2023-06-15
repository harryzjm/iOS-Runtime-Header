//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@class NSObject, NSUndoManager, PXActionPerformer;
@protocol PXAnonymousViewController, PXMemoryAssetsActionFactory, PXPresentationEnvironment;

@protocol PXActionPerformerDelegate <NSObject>
- (NSUndoManager *)undoManagerForActionPerformer:(PXActionPerformer *)arg1;

@optional
@property(readonly, nonatomic) id <PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
- (double)progressToastPaddingForActionPerformer:(PXActionPerformer *)arg1;
- (NSObject<PXAnonymousViewController> *)progressToastViewControllerForActionPerformer:(PXActionPerformer *)arg1;
- (NSObject<PXAnonymousViewController> *)hostViewControllerForActionPerformer:(PXActionPerformer *)arg1;
- (_Bool)actionPerformer:(PXActionPerformer *)arg1 presentViewController:(NSObject<PXAnonymousViewController> *)arg2;
- (_Bool)actionPerformer:(PXActionPerformer *)arg1 dismissViewController:(NSObject<PXAnonymousViewController> *)arg2 completionHandler:(void (^)(void))arg3;
- (_Bool)actionPerformer:(PXActionPerformer *)arg1 transitionToViewController:(NSObject<PXAnonymousViewController> *)arg2 transitionType:(long long)arg3;
- (id <PXPresentationEnvironment>)presentationEnvironmentForActionPerformer:(PXActionPerformer *)arg1;
- (void)actionPerformer:(PXActionPerformer *)arg1 didChangeState:(unsigned long long)arg2;
@end

