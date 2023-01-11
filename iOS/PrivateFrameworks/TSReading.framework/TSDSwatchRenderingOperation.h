//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSString, TSKDocumentRoot, UIView;
@protocol TSSPreset;

@interface TSDSwatchRenderingOperation : NSOperation
{
    UIView *mView;
    NSObject<TSSPreset> *mPreset;
    struct CGSize mImageSize;
    double mImageScale;
    struct CGRect mSwatchFrame;
    TSKDocumentRoot *mDocumentRoot;
    struct CGImage *mDeliveredImage;
    unsigned long long mInsertPopoverPageType;
    unsigned long long mInsertPopoverPageNumber;
    NSString *mIdentifier;
}

@property(copy) NSString *identifier; // @synthesize identifier=mIdentifier;
@property unsigned long long insertPopoverPageNumber; // @synthesize insertPopoverPageNumber=mInsertPopoverPageNumber;
@property unsigned long long insertPopoverPageType; // @synthesize insertPopoverPageType=mInsertPopoverPageType;
@property(readonly) struct CGRect swatchFrame; // @synthesize swatchFrame=mSwatchFrame;
@property(readonly) double imageScale; // @synthesize imageScale=mImageScale;
@property(readonly) struct CGSize imageSize; // @synthesize imageSize=mImageSize;
@property(readonly) NSObject<TSSPreset> *preset; // @synthesize preset=mPreset;
@property(retain) UIView *view; // @synthesize view=mView;
- (void)main;
- (void)doWorkWithReadLock;
- (struct UIEdgeInsets)swatchEdgeInsets;
- (_Bool)needsPressedStateBackground;
@property(readonly, nonatomic) struct CGImage *deliveredImage;
- (void)deliverCGImage:(struct CGImage *)arg1;
- (void)p_deliverResultOnMainThread:(id)arg1;
- (struct CGImage *)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage *)arg1;
- (void)p_animateSwatchIn;
- (void)dealloc;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 documentRoot:(id)arg5;

@end
