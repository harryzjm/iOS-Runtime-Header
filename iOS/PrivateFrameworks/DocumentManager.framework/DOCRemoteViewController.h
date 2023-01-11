//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

#import <DocumentManager/DOCRemoteContextInterface-Protocol.h>

@class DOCAppearance, DOCConfiguration, DOCRemoteContext;
@protocol DOCRemoteViewControllerDelegate;

@interface DOCRemoteViewController : _UIRemoteViewController <DOCRemoteContextInterface>
{
    _Bool _isBrowserViewController;
    id <DOCRemoteViewControllerDelegate> _delegate;
    DOCRemoteContext *_hostContext;
    DOCConfiguration *_configuration;
    DOCAppearance *_lastAppearance;
}

+ (id)serviceExtension;
+ (id)instantiateRemoteTargetSelectionBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)instantiateRemoteDocumentBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)instantiateRemoteViewControllerWithConfiguration:(id)arg1 transparent:(_Bool)arg2 errorHandler:(CDUnknownBlockType)arg3 hostProxy:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(retain) DOCAppearance *lastAppearance; // @synthesize lastAppearance=_lastAppearance;
@property _Bool isBrowserViewController; // @synthesize isBrowserViewController=_isBrowserViewController;
@property(retain) DOCConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) DOCRemoteContext *hostContext; // @synthesize hostContext=_hostContext;
@property __weak id <DOCRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)updateAppearance:(id)arg1 shouldFlushCA:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateAppearance:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateEditingTo:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;

@end
