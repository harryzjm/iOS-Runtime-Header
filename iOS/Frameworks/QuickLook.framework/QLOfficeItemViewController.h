//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QLItem;

__attribute__((visibility("hidden")))
@interface QLOfficeItemViewController
{
    QLItem *_previewItem;
}

+ (_Bool)providesCustomPrinter;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
- (void).cxx_destruct;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

