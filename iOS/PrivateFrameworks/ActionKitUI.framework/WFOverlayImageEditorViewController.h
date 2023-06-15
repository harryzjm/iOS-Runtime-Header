//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSLayoutConstraint, NSMapTable, WFFileRepresentation, WFImage, WFOpacitySliderView, WFOverlayImageEditorCanvasView, WFOverlayImageEditorOptionsView;

__attribute__((visibility("hidden")))
@interface WFOverlayImageEditorViewController : UIViewController
{
    WFImage *_overlayImage;
    NSArray *_fileRepresentations;
    WFFileRepresentation *_currentFile;
    NSMapTable *_transforms;
    CDUnknownBlockType _completionHandler;
    WFOverlayImageEditorOptionsView *_optionsView;
    WFOverlayImageEditorCanvasView *_canvasView;
    WFOpacitySliderView *_opacityView;
    NSLayoutConstraint *_opacityViewVerticalConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *opacityViewVerticalConstraint; // @synthesize opacityViewVerticalConstraint=_opacityViewVerticalConstraint;
@property(nonatomic) __weak WFOpacitySliderView *opacityView; // @synthesize opacityView=_opacityView;
@property(nonatomic) __weak WFOverlayImageEditorCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) __weak WFOverlayImageEditorOptionsView *optionsView; // @synthesize optionsView=_optionsView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSMapTable *transforms; // @synthesize transforms=_transforms;
@property(retain, nonatomic) WFFileRepresentation *currentFile; // @synthesize currentFile=_currentFile;
@property(copy, nonatomic) NSArray *fileRepresentations; // @synthesize fileRepresentations=_fileRepresentations;
@property(retain, nonatomic) WFImage *overlayImage; // @synthesize overlayImage=_overlayImage;
- (void)cancelEditingImage;
- (void)finishEditingImage;
- (void)resetOverlayImageViewTransformations;
@property(nonatomic) _Bool rotationEnabled;
@property(nonatomic) _Bool opacitySliderVisible;
- (void)didChangeOpacity:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (id)editorBackgroundColor;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFileRepresentations:(id)arg1 overlayImage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

