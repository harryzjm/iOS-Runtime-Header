//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QLDetailItemViewControllerState;

__attribute__((visibility("hidden")))
@interface QLZipItemViewController
{
    unsigned long long _numberOfContainedFiles;
    QLDetailItemViewControllerState *_readyToUnzipState;
    QLDetailItemViewControllerState *_unzippingState;
    QLDetailItemViewControllerState *_unableToUnzipState;
}

+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (void)performAction;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateZipInformationWithZipSize:(id)arg1;
- (void)viewDidLoad;

@end
