//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, _EARSpeechRecognitionResultPackage;

__attribute__((visibility("hidden")))
@interface _EARResultContext : NSObject
{
    _Bool _anyResults;
    unsigned long long _countOfIsFinalFalseAlreadyWritten;
    _EARSpeechRecognitionResultPackage *_prevPackage;
    NSDictionary *_prevMuxPackages;
    _EARSpeechRecognitionResultPackage *_prevPackageWithoutPersonalization;
    unsigned long long _partialResultIndexOffset;
    shared_ptr_9d440e49 _continuousListeningResultHelper;
    basic_string_0ec669f3 _prevBestRecogText;
    vector_daa4424d _partialResults;
    vector_daa4424d _loggableConcatResult;
    vector_0e047154 _loggableConcatCosts;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) vector_0e047154 loggableConcatCosts; // @synthesize loggableConcatCosts=_loggableConcatCosts;
@property(nonatomic) vector_daa4424d loggableConcatResult; // @synthesize loggableConcatResult=_loggableConcatResult;
@property(readonly, nonatomic) unsigned long long partialResultIndexOffset; // @synthesize partialResultIndexOffset=_partialResultIndexOffset;
@property(readonly, nonatomic) vector_daa4424d partialResults; // @synthesize partialResults=_partialResults;
@property(nonatomic) shared_ptr_9d440e49 continuousListeningResultHelper; // @synthesize continuousListeningResultHelper=_continuousListeningResultHelper;
@property(nonatomic) _Bool anyResults; // @synthesize anyResults=_anyResults;
@property(retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackageWithoutPersonalization; // @synthesize prevPackageWithoutPersonalization=_prevPackageWithoutPersonalization;
@property(retain, nonatomic) NSDictionary *prevMuxPackages; // @synthesize prevMuxPackages=_prevMuxPackages;
@property(retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackage; // @synthesize prevPackage=_prevPackage;
@property(nonatomic) unsigned long long countOfIsFinalFalseAlreadyWritten; // @synthesize countOfIsFinalFalseAlreadyWritten=_countOfIsFinalFalseAlreadyWritten;
@property(nonatomic) basic_string_0ec669f3 prevBestRecogText; // @synthesize prevBestRecogText=_prevBestRecogText;
- (void)updateLoggableResultWithCurrentResult:(const void *)arg1 currentCosts:(const void *)arg2 startMilliseconds:(unsigned int)arg3;
- (id)description;
- (void)resetPartialResultContext;
- (void)addPartialResultToContext:(const void *)arg1;
- (void)incrementCountOfIsFinalFalseAlreadyWritten;

@end

