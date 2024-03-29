//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WKWebProcessPlugInNodeHandle;

__attribute__((visibility("hidden")))
@interface SFFormAutoFillNode : NSObject
{
    WKWebProcessPlugInNodeHandle *_nodeHandle;
}

+ (id)autoFillNodeWithNodeHandle:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WKWebProcessPlugInNodeHandle *nodeHandle; // @synthesize nodeHandle=_nodeHandle;
- (void)setSpinnerVisibilityOnHTMLInputElement:(_Bool)arg1;
- (long long)htmlInputElementLastAutoFillButtonType;
- (long long)htmlInputElementAutoFillButtonType;
- (void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(_Bool)arg1;
- (_Bool)isHTMLTextAreaElementUserEdited;
- (_Bool)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutoFilledAndObscured:(_Bool)arg1;
- (void)setHTMLInputElementAutoFilledAndViewable:(_Bool)arg1;
- (void)setHTMLInputElementAutofilled:(_Bool)arg1;
- (struct CGRect)elementBounds;
- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (id)initWithNodeHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

