//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface QLMarkupImageItemViewController
{
    UIScrollView *_scrollView;
    _Bool _isVisible;
}

+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (struct CGSize)imageSize;
- (id)parallaxView;
- (void)transitionWillFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (id)scrollView;
- (struct UIEdgeInsets)customSketchOverlayInsets;
- (struct UIEdgeInsets)customEdgeInsets;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

