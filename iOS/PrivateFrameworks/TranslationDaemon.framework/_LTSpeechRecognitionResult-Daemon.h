//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Translation/_LTSpeechRecognitionResult.h>

@interface _LTSpeechRecognitionResult (Daemon)
+ (id)emptyResultWithLocale:(id)arg1 isFinal:(_Bool)arg2;
+ (id)resultWithResult:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(_Bool)arg4;
+ (id)resultWithPackage:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(_Bool)arg4;
- (id)_transcriptionWithResult:(id)arg1 locale:(id)arg2;
- (id)initEmptyResultWithLocale:(id)arg1 isFinal:(_Bool)arg2;
- (id)initWithResult:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(_Bool)arg4;
- (id)initWithPackage:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(_Bool)arg4;
- (id)initWithOspreyPartialRecognitionResponse:(id)arg1 isSanitized:(_Bool)arg2;
- (id)initWithOspreyResponse:(id)arg1 confidenceThreshold:(long long)arg2 isSanitized:(_Bool)arg3;
@end

