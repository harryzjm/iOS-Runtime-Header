//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAContext, NSString;

__attribute__((visibility("hidden")))
@interface LAAuthenticatorServiceConfiguration : NSObject
{
    _Bool _headerHidden;
    _Bool _requiresIntent;
    NSString *_title;
    NSString *_bundleIdentifier;
    NSString *_subtitle;
    NSString *_prompt;
    NSString *_verifyPrompt;
    NSString *_cancelButtonTitle;
    NSString *_fallbackButtonTitle;
    NSString *_passwordFieldPlaceholder;
    unsigned long long _requirement;
    long long _passcodeLength;
    unsigned long long _mode;
    LAContext *_context;
    unsigned long long _style;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool requiresIntent; // @synthesize requiresIntent=_requiresIntent;
@property(nonatomic) _Bool headerHidden; // @synthesize headerHidden=_headerHidden;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) LAContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long passcodeLength; // @synthesize passcodeLength=_passcodeLength;
@property(readonly, nonatomic) unsigned long long requirement; // @synthesize requirement=_requirement;
@property(retain, nonatomic) NSString *passwordFieldPlaceholder; // @synthesize passwordFieldPlaceholder=_passwordFieldPlaceholder;
@property(retain, nonatomic) NSString *fallbackButtonTitle; // @synthesize fallbackButtonTitle=_fallbackButtonTitle;
@property(retain, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(retain, nonatomic) NSString *verifyPrompt; // @synthesize verifyPrompt=_verifyPrompt;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)validateConfiguration;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 requirement:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithContext:(id)arg1 requirement:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithCustomPasswordConfiguration:(id)arg1 context:(id)arg2;

@end

