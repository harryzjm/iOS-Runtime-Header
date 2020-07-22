//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXComponentView, SXImageView;
@protocol SXPresentationDelegate;

@interface SXAnimatedImageController : NSObject <SXViewportChangeListener>
{
    _Bool _isReceivingViewportChanges;
    id <SXPresentationDelegate> _presentationDelegate;
    SXImageView *_imageView;
    double _previousYOffset;
    SXComponentView *_componentView;
}

@property(nonatomic) _Bool isReceivingViewportChanges; // @synthesize isReceivingViewportChanges=_isReceivingViewportChanges;
@property(nonatomic) __weak SXComponentView *componentView; // @synthesize componentView=_componentView;
@property(nonatomic) double previousYOffset; // @synthesize previousYOffset=_previousYOffset;
@property(retain, nonatomic) SXImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <SXPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)unregisterForViewportChanges;
- (void)registerForViewportChanges;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (id)initWithImageComponentView:(id)arg1 presentationDelegate:(id)arg2 imageView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

