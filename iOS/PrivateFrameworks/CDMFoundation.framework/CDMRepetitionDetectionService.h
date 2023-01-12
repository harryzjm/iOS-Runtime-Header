//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QRRepetitionDetectionPredictor;

@interface CDMRepetitionDetectionService
{
    QRRepetitionDetectionPredictor *_repetitionDetector;
}

+ (id)trialFactorName;
+ (id)assetFolderName;
- (void).cxx_destruct;
@property(retain, nonatomic) QRRepetitionDetectionPredictor *repetitionDetector; // @synthesize repetitionDetector=_repetitionDetector;
- (id)doInference:(id)arg1 status:(id *)arg2;
- (id)getPredictor:(id)arg1 FilesPath:(id)arg2 status:(id *)arg3;
- (_Bool)isAssetRequired;
- (id)handle:(id)arg1;
- (id)setup:(id)arg1;
- (_Bool)isEnabled;
- (id)handleRequestCommandTypeNames;

@end
