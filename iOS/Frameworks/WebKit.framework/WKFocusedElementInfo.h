//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/_WKFocusedElementInfo-Protocol.h>

@class NSString;
@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface WKFocusedElementInfo : NSObject <_WKFocusedElementInfo>
{
    long long _type;
    struct RetainPtr<NSString> _value;
    _Bool _isUserInitiated;
    struct RetainPtr<NSObject<NSSecureCoding>> _userObject;
    struct RetainPtr<NSString> _placeholder;
    struct RetainPtr<NSString> _label;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *placeholder;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property(readonly, nonatomic, getter=isUserInitiated) _Bool userInitiated;
@property(readonly, copy, nonatomic) NSString *value;
@property(readonly, nonatomic) long long type;
- (id)initWithFocusedElementInformation:(const struct FocusedElementInformation *)arg1 isUserInitiated:(_Bool)arg2 userObject:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
