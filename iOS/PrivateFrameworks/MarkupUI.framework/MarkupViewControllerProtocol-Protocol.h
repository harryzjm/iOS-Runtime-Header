//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKController, NSArray, NSData, NSDictionary, NSString, NSURL, UIImage, UINavigationBar, UIView, UIViewController, UTType;
@protocol MUContentViewControllerProtocol;

@protocol MarkupViewControllerProtocol
+ (NSArray *)supportedOutputTypes;
@property(readonly, nonatomic) NSString *outputType;
@property(readonly, nonatomic) UTType *outputContentType;
@property(readonly) UIViewController<MUContentViewControllerProtocol> *contentViewController;
@property(nonatomic, getter=isNavigationModeHorizontal) _Bool navigationModeHorizontal;
@property(nonatomic) _Bool pencilAlwaysDraws;
@property(nonatomic) _Bool formFillingEnabled;
@property(nonatomic) _Bool annotationEditingEnabled;
@property(nonatomic) _Bool allEditingDisabled;
@property(nonatomic) _Bool showThumbnailViewForMultipage;
@property(nonatomic, getter=isThumbnailViewHidden) _Bool thumbnailViewHidden;
@property(retain, nonatomic) UINavigationBar *navBar;
@property(nonatomic) long long toolbarPosition;
@property(nonatomic, getter=isToolbarHidden) _Bool toolbarHidden;
@property(readonly, nonatomic) UIView *toolbar;
@property(readonly, nonatomic) AKController *annotationController;
- (void)revert;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (_Bool)validateUndo:(id)arg1;
- (_Bool)validateRedo:(id)arg1;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)finalizeCrop;
- (NSData *)createArchivedModelData;
- (NSData *)dataRepresentationEmbeddingSourceImageAndEditModel:(_Bool)arg1 error:(id *)arg2;
- (NSData *)dataRepresentationWithError:(id *)arg1;
- (_Bool)writeToURL:(NSURL *)arg1 embeddingSourceImageAndEditModel:(_Bool)arg2 error:(id *)arg3;
- (_Bool)writeToURL:(NSURL *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (_Bool)writeToURL:(NSURL *)arg1 error:(id *)arg2;
- (void)setData:(NSData *)arg1;
- (void)setData:(NSData *)arg1 withArchivedModelData:(NSData *)arg2;
- (void)setData:(NSData *)arg1 withArchivedModelData:(NSData *)arg2 placeholderImage:(UIImage *)arg3;
- (void)setImage:(UIImage *)arg1;
- (void)setImage:(UIImage *)arg1 withArchivedModelData:(NSData *)arg2;
- (void)setImage:(UIImage *)arg1 withArchivedModelData:(NSData *)arg2 placeholderImage:(UIImage *)arg3;
- (void)setFileURL:(NSURL *)arg1;
- (void)setFileURL:(NSURL *)arg1 withArchivedModelData:(NSData *)arg2;
- (void)setFileURL:(NSURL *)arg1 withArchivedModelData:(NSData *)arg2 placeholderImage:(UIImage *)arg3;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)fullTeardown;
- (void)documentDidCloseTeardown;
- (void)willBeginLoadingNewDocument;
@end

