//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNPRUISPosterAttachment, PRUISPosterAppearanceObservingAttachmentProvider, UIView;

__attribute__((visibility("hidden")))
@interface CNPRUISPosterAppearanceObservingAttachmentProvider : NSObject
{
    PRUISPosterAppearanceObservingAttachmentProvider *_wrappedProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PRUISPosterAppearanceObservingAttachmentProvider *wrappedProvider; // @synthesize wrappedProvider=_wrappedProvider;
- (void)applyPosterAppearanceToObserver:(id)arg1;
@property(readonly, nonatomic) CNPRUISPosterAttachment *overlayContentAttachment;
@property(readonly, nonatomic) CNPRUISPosterAttachment *obscurableContentAttachment;
@property(readonly, nonatomic) UIView *vibrantObscurableContentView;
@property(readonly, nonatomic) UIView *obscurableContentView;
@property(readonly, nonatomic) UIView *overlayContentView;
- (id)initWithConfiguration:(id)arg1;

@end

