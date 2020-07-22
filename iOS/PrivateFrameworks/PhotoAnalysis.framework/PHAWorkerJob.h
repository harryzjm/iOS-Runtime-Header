//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/NSCopying-Protocol.h>

@class PHPhotoLibrary;
@protocol PHAWorkerJobDelegate;

@interface PHAWorkerJob : NSObject <NSCopying>
{
    _Bool _disableReactionCheck;
    _Bool _ignoreFurtherResults;
    _Bool _treatMissingResultsAsFailures;
    _Bool _isReactionJob;
    short _workerType;
    unsigned long long _scenario;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _countOfFailedStarts;
    id <PHAWorkerJobDelegate> _delegate;
    double _lastReportTimeAsInterval;
}

@property(nonatomic, setter=setIsReactionJob:) _Bool isReactionJob; // @synthesize isReactionJob=_isReactionJob;
@property(nonatomic) _Bool treatMissingResultsAsFailures; // @synthesize treatMissingResultsAsFailures=_treatMissingResultsAsFailures;
@property double lastReportTimeAsInterval; // @synthesize lastReportTimeAsInterval=_lastReportTimeAsInterval;
@property(nonatomic) __weak id <PHAWorkerJobDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long countOfFailedStarts; // @synthesize countOfFailedStarts=_countOfFailedStarts;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) _Bool ignoreFurtherResults; // @synthesize ignoreFurtherResults=_ignoreFurtherResults;
@property(nonatomic) _Bool disableReactionCheck; // @synthesize disableReactionCheck=_disableReactionCheck;
@property(readonly, nonatomic) short workerType; // @synthesize workerType=_workerType;
@property(readonly, nonatomic) unsigned long long scenario; // @synthesize scenario=_scenario;
- (void).cxx_destruct;
@property(readonly, nonatomic) float completionScore; // @dynamic completionScore;
@property(readonly, nonatomic) _Bool finished;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (id)statusAsDictionary;
- (void)finish;
- (void)prepare;
@property(readonly) double intervalSinceLastReport; // @dynamic intervalSinceLastReport;
- (void)extendTimeout;
- (void)stopAcceptingResults;
- (_Bool)isEqualToWorkerJob:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3;
- (id)init;

@end

