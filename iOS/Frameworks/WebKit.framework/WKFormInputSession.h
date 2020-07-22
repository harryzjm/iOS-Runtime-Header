//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/_WKFormInputSession-Protocol.h>

@class NSArray, NSString, UIView, WKContentView;
@protocol NSSecureCoding, _WKFocusedElementInfo;

__attribute__((visibility("hidden")))
@interface WKFormInputSession : NSObject <_WKFormInputSession>
{
    WKContentView *_contentView;
    struct RetainPtr<NSObject<NSSecureCoding>> _userObject;
    struct RetainPtr<WKFocusedElementInfo> _focusedElementInfo;
    struct RetainPtr<UIView> _customInputView;
    struct RetainPtr<NSArray<UITextSuggestion *>> _suggestions;
    _Bool _accessoryViewShouldNotShow;
    _Bool _forceSecureTextEntry;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidate;
@property(copy, nonatomic) NSArray *suggestions;
@property(retain, nonatomic) UIView *customInputView;
@property(nonatomic) _Bool forceSecureTextEntry;
@property(nonatomic) _Bool accessoryViewShouldNotShow;
@property(copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property(readonly, nonatomic) id <_WKFocusedElementInfo> focusedElementInfo;
- (id)initWithContentView:(id)arg1 focusedElementInfo:(id)arg2 userObject:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

