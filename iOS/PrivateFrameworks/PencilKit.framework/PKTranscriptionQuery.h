//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHTranscriptionQuery, NSString;

@interface PKTranscriptionQuery
{
    NSString *_transcription;
    CHTranscriptionQuery *_transcriptionQuery;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CHTranscriptionQuery *transcriptionQuery; // @synthesize transcriptionQuery=_transcriptionQuery;
@property(readonly, nonatomic) NSString *transcription; // @synthesize transcription=_transcription;
- (id)contextualTextResultsForContextStrokes:(id)arg1 completion:(CDUnknownBlockType)arg2 shouldCancel:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)teardown;
- (void)pause;
- (void)start;
- (id)initWithRecognitionSessionManager:(id)arg1;

@end
