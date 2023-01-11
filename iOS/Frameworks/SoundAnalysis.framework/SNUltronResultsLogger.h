//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SNUltronResultsLogger : NSObject
{
    NSString *_dateString;
    NSString *_soundIdentifier;
    _Bool _wroteResults;
    CDStruct_1b6d18a9 _startingTime;
    NSMutableArray *_detectionResults;
    NSString *_directoryPath;
    NSString *_fileNameWithoutExtension;
}

+ (_Bool)writeDictionaryAsJSON:(id)arg1 fileNameWithoutExtension:(id)arg2 directoryPath:(id)arg3 error:(id *)arg4;
+ (id)createUltronResultsDictionaryFromDetectionResults:(id)arg1;
+ (id)createUltronFinalDictionaryWithDetectionResults:(id)arg1 dateString:(id)arg2 fileNameWithoutExtension:(id)arg3 soundIdenfifier:(id)arg4 frameCount:(long long)arg5;
- (void).cxx_destruct;
@property(readonly) NSArray *detectionResults; // @synthesize detectionResults=_detectionResults;
@property(readonly) NSString *fileNameWithoutExtension; // @synthesize fileNameWithoutExtension=_fileNameWithoutExtension;
@property(readonly) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (_Bool)writeResultsToFileWithAudioFrameCount:(long long)arg1 error:(id *)arg2;
- (void)addResult:(id)arg1;
- (id)initWithDirectoryPath:(id)arg1 fileNameWithoutExtension:(id)arg2 dateString:(id)arg3 soundIdentifier:(id)arg4;

@end
