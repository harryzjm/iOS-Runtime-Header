//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString, _INUIExtensionContextState;
@protocol _INUIRemoteViewControllerServing;

__attribute__((visibility("hidden")))
@interface _INUIExtensionContext : NSExtensionContext
{
    _INUIExtensionContextState *_currentExtensionContextState;
    id <_INUIRemoteViewControllerServing> _viewController;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_INUIRemoteViewControllerServing> viewController; // @synthesize viewController=_viewController;
- (void)viewWasCancelled;
- (void)queryRepresentedPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)desiresInteractivity:(CDUnknownBlockType)arg1;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_willBeginEditing;
- (void)_requestHandlingOfIntent:(id)arg1;
- (id)interfaceParametersDescription;
- (struct CGSize)_bestAllowedSizeForAllowedSizesDictionary:(id)arg1;
- (struct CGSize)hostedViewMaximumAllowedSize;
- (struct CGSize)hostedViewMinimumAllowedSize;
- (void)setExtensionContextState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_errorHandlingHostProxy;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

