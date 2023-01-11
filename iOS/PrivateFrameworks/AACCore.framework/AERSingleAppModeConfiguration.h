//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AACCore/AERMCSingleAppModeConfigurationRepresentable-Protocol.h>

@class MCSingleAppModeConfiguration;

@interface AERSingleAppModeConfiguration : NSObject <AERMCSingleAppModeConfigurationRepresentable>
{
    _Bool _allowsAutoCorrection;
    _Bool _allowsSmartPunctuation;
    _Bool _allowsSpellCheck;
    _Bool _allowsPredictiveKeyboard;
    _Bool _allowsKeyboardShortcuts;
    _Bool _allowsActivityContinuation;
    _Bool _allowsDictation;
    _Bool _allowsAccessibilitySpeech;
    _Bool _allowsPasswordAutoFill;
    _Bool _allowsContinuousPathKeyboard;
}

@property(nonatomic) _Bool allowsContinuousPathKeyboard; // @synthesize allowsContinuousPathKeyboard=_allowsContinuousPathKeyboard;
@property(nonatomic) _Bool allowsPasswordAutoFill; // @synthesize allowsPasswordAutoFill=_allowsPasswordAutoFill;
@property(nonatomic) _Bool allowsAccessibilitySpeech; // @synthesize allowsAccessibilitySpeech=_allowsAccessibilitySpeech;
@property(nonatomic) _Bool allowsDictation; // @synthesize allowsDictation=_allowsDictation;
@property(nonatomic) _Bool allowsActivityContinuation; // @synthesize allowsActivityContinuation=_allowsActivityContinuation;
@property(nonatomic) _Bool allowsKeyboardShortcuts; // @synthesize allowsKeyboardShortcuts=_allowsKeyboardShortcuts;
@property(nonatomic) _Bool allowsPredictiveKeyboard; // @synthesize allowsPredictiveKeyboard=_allowsPredictiveKeyboard;
@property(nonatomic) _Bool allowsSpellCheck; // @synthesize allowsSpellCheck=_allowsSpellCheck;
@property(nonatomic) _Bool allowsSmartPunctuation; // @synthesize allowsSmartPunctuation=_allowsSmartPunctuation;
@property(nonatomic) _Bool allowsAutoCorrection; // @synthesize allowsAutoCorrection=_allowsAutoCorrection;
@property(readonly, nonatomic) MCSingleAppModeConfiguration *MCSingleAppModeConfigurationRepresentation;

@end
