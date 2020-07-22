//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionOptions : NSObject
{
    _Bool _secureInput;
    _Bool _useAutomaticEndpointing;
    _Bool _acceptsDictationSearchResults;
    unsigned long long _version;
    unsigned long long _activationType;
    NSString *_languageCode;
    NSString *_regionCode;
    NSString *_fieldIdentifier;
    NSString *_activationIdentifier;
    NSString *_layoutIdentifier;
    long long _keyboardType;
    long long _returnKeyType;
    NSString *_prefixText;
    NSString *_selectedText;
    NSString *_postfixText;
}

@property(copy, nonatomic) NSString *postfixText; // @synthesize postfixText=_postfixText;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(copy, nonatomic) NSString *prefixText; // @synthesize prefixText=_prefixText;
@property(nonatomic) _Bool acceptsDictationSearchResults; // @synthesize acceptsDictationSearchResults=_acceptsDictationSearchResults;
@property(nonatomic) _Bool useAutomaticEndpointing; // @synthesize useAutomaticEndpointing=_useAutomaticEndpointing;
@property(nonatomic) _Bool secureInput; // @synthesize secureInput=_secureInput;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *layoutIdentifier; // @synthesize layoutIdentifier=_layoutIdentifier;
@property(copy, nonatomic) NSString *activationIdentifier; // @synthesize activationIdentifier=_activationIdentifier;
@property(copy, nonatomic) NSString *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(copy, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) unsigned long long activationType; // @synthesize activationType=_activationType;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (void).cxx_destruct;

@end

