//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MURemoteViewController;
@protocol MFMailMarkupDelegate;

@interface MFMailMarkup : NSObject
{
    MURemoteViewController *markupViewController;
    id <MFMailMarkupDelegate> _delegate;
}

+ (id)markupIcon;
@property(nonatomic) id <MFMailMarkupDelegate> delegate; // @synthesize delegate=_delegate;
@property MURemoteViewController *markupViewController; // @synthesize markupViewController;
- (void)_handleMarkupImage:(id)arg1 forAttachment:(id)arg2;
- (void)_requestMarkupImage:(id)arg1 forAttachment:(id)arg2;
- (void)_handleMarkupData:(id)arg1 forAttachment:(id)arg2;
- (void)_requestMarkupData:(id)arg1 forAttachment:(id)arg2;
- (void)_requestMarkupURL:(id)arg1 forAttachment:(id)arg2;
- (void)_processMarkupURL:(id)arg1 forAttachment:(id)arg2;
- (void)handleReturnedMarkupItems:(id)arg1 forAttachment:(id)arg2;
- (void)exitMarkupWithReplacementAttachment:(id)arg1 targetRect:(struct CGRect)arg2;
- (void)markupAttachment:(id)arg1 fromRect:(struct CGRect)arg2 maskRect:(struct CGRect)arg3;
- (id)initWithMarkupDelegate:(id)arg1;

@end

