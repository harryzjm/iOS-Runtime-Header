//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFParameterDialogProvider-Protocol.h>

@class NSString;

@interface WFTextInputParameter <WFParameterDialogProvider>
{
    _Bool _secureTextEntry;
    _Bool _smartQuotesDisabled;
    _Bool _smartDashesDisabled;
    _Bool _multiline;
    _Bool _processesIntoContentItems;
    NSString *_textContentType;
    NSString *_prefix;
    long long _keyboardType;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _textAlignment;
    unsigned long long _hintDisplayMode;
    unsigned long long _syntaxHighlightingType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool processesIntoContentItems; // @synthesize processesIntoContentItems=_processesIntoContentItems;
@property(readonly, nonatomic) unsigned long long syntaxHighlightingType; // @synthesize syntaxHighlightingType=_syntaxHighlightingType;
@property(readonly, nonatomic) unsigned long long hintDisplayMode; // @synthesize hintDisplayMode=_hintDisplayMode;
@property(readonly, nonatomic, getter=isMultiline) _Bool multiline; // @synthesize multiline=_multiline;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) _Bool smartDashesDisabled; // @synthesize smartDashesDisabled=_smartDashesDisabled;
@property(readonly, nonatomic) _Bool smartQuotesDisabled; // @synthesize smartQuotesDisabled=_smartQuotesDisabled;
@property(readonly, nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(readonly, nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (id)parameterStateFromDialogResponse:(id)arg1;
- (id)createDialogTextFieldConfigurationWithDefaultState:(id)arg1;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLocalizedPlaceholder:(id)arg1;
- (id)defaultSupportedVariableTypes;
- (id)hintForState:(id)arg1;
- (_Bool)shouldAlignLabels;
@property(readonly, copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
