//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface _EARSpeakerCodeInfo : NSObject
{
    _Bool _isSpeakerCodeUsed;
    NSString *_trainingSpeakerCode;
    NSString *_inferenceSpeakerCode;
    NSString *_accumulatedGradient;
    NSNumber *_numFrames;
    NSNumber *_nnetVersion;
    NSNumber *_trainingOffset;
    NSNumber *_recognitionOffset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSpeakerCodeUsed; // @synthesize isSpeakerCodeUsed=_isSpeakerCodeUsed;
@property(readonly, nonatomic) NSNumber *recognitionOffset; // @synthesize recognitionOffset=_recognitionOffset;
@property(readonly, nonatomic) NSNumber *trainingOffset; // @synthesize trainingOffset=_trainingOffset;
@property(readonly, nonatomic) NSNumber *nnetVersion; // @synthesize nnetVersion=_nnetVersion;
@property(copy, nonatomic) NSNumber *numFrames; // @synthesize numFrames=_numFrames;
@property(readonly, nonatomic) NSString *accumulatedGradient; // @synthesize accumulatedGradient=_accumulatedGradient;
@property(copy, nonatomic) NSString *inferenceSpeakerCode; // @synthesize inferenceSpeakerCode=_inferenceSpeakerCode;
@property(readonly, nonatomic) NSString *trainingSpeakerCode; // @synthesize trainingSpeakerCode=_trainingSpeakerCode;
- (id)initWithLanguage:(id)arg1;

@end
