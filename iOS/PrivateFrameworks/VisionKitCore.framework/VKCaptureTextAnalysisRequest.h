//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisionKitCore/NSCopying-Protocol.h>
#import <VisionKitCore/VKFeedbackAssetsProvider-Protocol.h>

@class NSString, UIImage, VKQuad;
@protocol VKCaptureTextAnalysisRequestDelegate;

@interface VKCaptureTextAnalysisRequest : NSObject <NSCopying, VKFeedbackAssetsProvider>
{
    UIImage *_image;
    VKQuad *_focusQuad;
    id <VKCaptureTextAnalysisRequestDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <VKCaptureTextAnalysisRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VKQuad *focusQuad; // @synthesize focusQuad=_focusQuad;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (_Bool)saveAssetsToFeedbackAttachmentsFolder:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)requestHandler;
@property(readonly, nonatomic) struct CGRect focusRect;
- (id)initWithImage:(id)arg1 focusQuad:(id)arg2 delegate:(id)arg3;
- (id)initWithImage:(id)arg1 focusRect:(struct CGRect)arg2 delegate:(id)arg3;
- (id)initWithImage:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
