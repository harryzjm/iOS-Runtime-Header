//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAPSPasscodeType, NSString;

__attribute__((visibility("hidden")))
@interface LAPSFetchOldPasscodeViewControllerInput : NSObject
{
    NSString *_title;
    NSString *_prompt;
    NSString *_nextButton;
    NSString *_errorMessage;
    long long _backoffTimeout;
    LAPSPasscodeType *_passcodeType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LAPSPasscodeType *passcodeType; // @synthesize passcodeType=_passcodeType;
@property(nonatomic) long long backoffTimeout; // @synthesize backoffTimeout=_backoffTimeout;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

