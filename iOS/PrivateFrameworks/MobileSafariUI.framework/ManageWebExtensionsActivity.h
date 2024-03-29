//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class NSString, UIActivityViewController, UIViewController;
@protocol _SFBrowserDocument;

__attribute__((visibility("hidden")))
@interface ManageWebExtensionsActivity : UIActivity
{
    NSString *_numberOfNewlyInstalledExtensions;
    UIViewController *_activityViewController;
    UIActivityViewController *_parentActivityViewController;
    id <_SFBrowserDocument> _browserDocument;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_SFBrowserDocument> browserDocument; // @synthesize browserDocument=_browserDocument;
@property(nonatomic) __weak UIActivityViewController *parentActivityViewController; // @synthesize parentActivityViewController=_parentActivityViewController;
- (void)extensionsControllerExtensionListDidChange:(id)arg1;
- (void)_reloadBadgeCount;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)_activityBadgeTextColor;
- (id)_activityBadgeColor;
- (id)_activityBadgeText;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;
- (void)_formatBadgeText;
- (id)init;

@end

