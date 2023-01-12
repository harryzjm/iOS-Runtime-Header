//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSUUID, TIDocumentState, TITextInputTraits, UITextInputMode;

__attribute__((visibility("hidden")))
@interface _UIInputViewControllerState : NSObject <NSCopying>
{
    _Bool _needsInputModeSwitchKey;
    TIDocumentState *_documentState;
    TITextInputTraits *_textInputTraits;
    UITextInputMode *_documentInputMode;
    NSUUID *_documentIdentifier;
}

+ (id)stateForKeyboardState:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsInputModeSwitchKey; // @synthesize needsInputModeSwitchKey=_needsInputModeSwitchKey;
@property(copy, nonatomic) NSUUID *documentIdentifier; // @synthesize documentIdentifier=_documentIdentifier;
@property(retain, nonatomic) UITextInputMode *documentInputMode; // @synthesize documentInputMode=_documentInputMode;
@property(retain, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(retain, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createDocumentStateIfNecessary;

@end

