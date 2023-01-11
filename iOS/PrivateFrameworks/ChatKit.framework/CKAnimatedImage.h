//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIImage;

@interface CKAnimatedImage : NSObject
{
    UIImage *_image;
    NSArray *_durations;
}

+ (_Bool)_writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
+ (_Bool)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3;
+ (id)imageWithContentsOfCPBitmapURL:(id)arg1;
+ (id)animatedImageWithContentsOfCPBitmapURL:(id)arg1;
+ (id)filenameExtension;
+ (_Bool)_writeImagesWithDurations:(id)arg1 toOutputStream:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
+ (_Bool)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3;
+ (id)ASTCDataForImagesWithDurations:(id)arg1 imageProvider:(CDUnknownBlockType)arg2;
+ (id)animatedImageWithASTCData:(id)arg1;
+ (id)animatedImageWithContentsOfASTCURL:(id)arg1;
+ (_Bool)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
+ (_Bool)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *durations; // @synthesize durations=_durations;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)_initWithImage:(id)arg1 durations:(id)arg2;
- (_Bool)writeToCPBitmapURL:(id)arg1;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithImages:(id)arg1 durations:(id)arg2;
- (id)description;
- (_Bool)writeToASTCURL:(id)arg1;
- (id)frames;

@end
