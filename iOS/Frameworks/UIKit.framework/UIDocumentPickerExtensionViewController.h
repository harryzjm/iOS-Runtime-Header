//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIDocumentPickerExtensionViewController-Protocol.h>

@class NSArray, NSString, NSURL;

@interface UIDocumentPickerExtensionViewController <_UIDocumentPickerExtensionViewController>
{
    unsigned long long _documentPickerMode;
    NSURL *_originalURL;
    NSArray *_validTypes;
    NSString *_providerIdentifier;
    NSURL *_documentStorageURL;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
@property(copy, nonatomic, setter=_setDocumentStorageURL:) NSURL *documentStorageURL; // @synthesize documentStorageURL=_documentStorageURL;
@property(copy, nonatomic, setter=_setProviderIdentifier:) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(copy, nonatomic, setter=_setPickableTypes:) NSArray *validTypes; // @synthesize validTypes=_validTypes;
@property(copy, nonatomic, setter=_setUploadURL:) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(nonatomic, setter=_setPickerMode:) unsigned long long documentPickerMode; // @synthesize documentPickerMode=_documentPickerMode;
- (void).cxx_destruct;
- (void)_documentPickerDidDismiss;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForPresentationInMode:(unsigned long long)arg1;
- (void)prepareForDocumentSelectionInMode:(unsigned long long)arg1;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_setTintColor:(id)arg1;
- (void)dismissGrantingAccessToURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

