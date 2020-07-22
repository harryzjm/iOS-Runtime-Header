//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActionSheetPresentationControllerDelegate-Protocol.h>
#import <UIKit/_UIDocumentPickerRemoteViewControllerContaining-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSURL, _UIDocumentPickerRemoteViewController, _UIResilientRemoteViewContainerViewController;
@protocol UIDocumentMenuDelegate;

@interface UIDocumentMenuViewController <_UIDocumentPickerRemoteViewControllerContaining, UIActionSheetPresentationControllerDelegate>
{
    id <UIDocumentMenuDelegate> _weak_delegate;
    _Bool _ignoreApplicationEntitlementForImport;
    _Bool _dismissDelegateCalled;
    _Bool _sourceIsManaged;
    id <UIDocumentMenuDelegate> _delegate;
    NSMutableArray *_auxiliaryOptions;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    unsigned long long _documentPickerMode;
    NSURL *_uploadURL;
    NSArray *_allowedUTIs;
}

@property(nonatomic, getter=_sourceIsManaged, setter=_setSourceIsManaged:) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(copy, nonatomic) NSArray *allowedUTIs; // @synthesize allowedUTIs=_allowedUTIs;
@property(copy, nonatomic) NSURL *uploadURL; // @synthesize uploadURL=_uploadURL;
@property(nonatomic) unsigned long long documentPickerMode; // @synthesize documentPickerMode=_documentPickerMode;
@property(nonatomic) _Bool dismissDelegateCalled; // @synthesize dismissDelegateCalled=_dismissDelegateCalled;
@property(retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(retain, nonatomic) NSMutableArray *auxiliaryOptions; // @synthesize auxiliaryOptions=_auxiliaryOptions;
@property(nonatomic) __weak id <UIDocumentMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:) _Bool _ignoreApplicationEntitlementForImport; // @synthesize _ignoreApplicationEntitlementForImport;
- (void).cxx_destruct;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_dismissViewController;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_didSelectURL:(id)arg1;
- (void)_didSelectPicker;
@property(readonly, retain, nonatomic, getter=_remoteViewController) _UIDocumentPickerRemoteViewController *remoteViewController;
- (void)addOptionWithTitle:(id)arg1 image:(id)arg2 order:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

