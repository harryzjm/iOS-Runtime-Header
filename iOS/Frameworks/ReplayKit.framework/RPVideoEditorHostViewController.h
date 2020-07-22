//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ReplayKit/RPVideoEditorExtensionHostProtocol-Protocol.h>

@class RPPreviewViewController, RPVideoEditorExtensionHostContext;

@interface RPVideoEditorHostViewController : _UIRemoteViewController <RPVideoEditorExtensionHostProtocol>
{
    RPPreviewViewController *_previewViewController;
    RPVideoEditorExtensionHostContext *_hostContext;
}

@property(retain, nonatomic) RPVideoEditorExtensionHostContext *hostContext; // @synthesize hostContext=_hostContext;
@property(nonatomic) __weak RPPreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
- (void).cxx_destruct;
- (oneway void)extensionDidFinishWithActivityTypes:(id)arg1;

@end

