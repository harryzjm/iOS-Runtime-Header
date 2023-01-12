//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADownloadOptions, NSDate, NSDictionary, NSMutableArray, NSString, NSURL, NSURLSessionDownloadTask;
@protocol STExtractor;

__attribute__((visibility("hidden")))
@interface DownloadInfo : NSObject
{
    _Bool _isStalled;
    _Bool _shouldRetry;
    _Bool _changingConfig;
    _Bool _isAutoDownload;
    _Bool _isDiscretionary;
    _Bool _isPallas;
    NSURLSessionDownloadTask *_task;
    NSString *_startingAt;
    NSString *_lengthOfRange;
    id <STExtractor> _extractor;
    NSDate *_date;
    long long _transferredBytesEst;
    long long _totalBytesThisSlice;
    long long _previousTotalDownloaded;
    long long _totalExpectedBytes;
    long long _currentTotalWritten;
    NSString *_taskDescriptor;
    long long _downloadSize;
    unsigned long long _backtracks;
    NSString *_firstClientName;
    NSString *_baseUrlNoACS;
    NSString *_relativePath;
    NSMutableArray *_callbacks;
    NSURL *_originalUrl;
    NSURL *_cacheServerUrl;
    NSString *_assetType;
    NSString *_purpose;
    MADownloadOptions *_options;
    NSMutableArray *_rateHistory;
    NSString *_pallasUrl;
    NSString *_assetAudience;
    NSDictionary *_analyticsData;
    NSDate *_downloadStartTime;
    NSDate *_downloadFinishTime;
    NSDate *_nonDiscretionaryUpgradeTime;
}

- (void).cxx_destruct;
@property(retain) NSDate *nonDiscretionaryUpgradeTime; // @synthesize nonDiscretionaryUpgradeTime=_nonDiscretionaryUpgradeTime;
@property(retain) NSDate *downloadFinishTime; // @synthesize downloadFinishTime=_downloadFinishTime;
@property(retain) NSDate *downloadStartTime; // @synthesize downloadStartTime=_downloadStartTime;
@property(retain, nonatomic) NSDictionary *analyticsData; // @synthesize analyticsData=_analyticsData;
@property(retain) NSString *assetAudience; // @synthesize assetAudience=_assetAudience;
@property(retain) NSString *pallasUrl; // @synthesize pallasUrl=_pallasUrl;
@property(readonly, nonatomic) NSMutableArray *rateHistory; // @synthesize rateHistory=_rateHistory;
@property(readonly, nonatomic) MADownloadOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) NSURL *cacheServerUrl; // @synthesize cacheServerUrl=_cacheServerUrl;
@property(readonly, nonatomic) NSURL *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(readonly, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property _Bool isPallas; // @synthesize isPallas=_isPallas;
@property _Bool isDiscretionary; // @synthesize isDiscretionary=_isDiscretionary;
@property _Bool isAutoDownload; // @synthesize isAutoDownload=_isAutoDownload;
@property(retain) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(retain) NSString *baseUrlNoACS; // @synthesize baseUrlNoACS=_baseUrlNoACS;
@property(retain) NSString *firstClientName; // @synthesize firstClientName=_firstClientName;
@property(readonly, nonatomic) unsigned long long backtracks; // @synthesize backtracks=_backtracks;
@property(readonly, nonatomic) _Bool changingConfig; // @synthesize changingConfig=_changingConfig;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(retain) NSString *taskDescriptor; // @synthesize taskDescriptor=_taskDescriptor;
@property long long currentTotalWritten; // @synthesize currentTotalWritten=_currentTotalWritten;
@property(readonly, nonatomic) _Bool isStalled; // @synthesize isStalled=_isStalled;
@property long long totalExpectedBytes; // @synthesize totalExpectedBytes=_totalExpectedBytes;
@property long long previousTotalDownloaded; // @synthesize previousTotalDownloaded=_previousTotalDownloaded;
@property long long totalBytesThisSlice; // @synthesize totalBytesThisSlice=_totalBytesThisSlice;
@property long long transferredBytesEst; // @synthesize transferredBytesEst=_transferredBytesEst;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) id <STExtractor> extractor; // @synthesize extractor=_extractor;
@property(retain) NSString *lengthOfRange; // @synthesize lengthOfRange=_lengthOfRange;
@property(retain) NSString *startingAt; // @synthesize startingAt=_startingAt;
@property(retain) NSURLSessionDownloadTask *task; // @synthesize task=_task;
- (id)description;
- (id)_taskState;
- (void)clearCacheServerUrl;
- (void)addNewDownloadInfo:(id)arg1;
- (double)currentEstimate;
- (void)updateDownloadData:(long long)arg1;
- (_Bool)addNewRateDataPoint:(double)arg1;
- (void)determineDownloadUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithUrl:(id)arg1 forAssetType:(id)arg2 withPurpose:(id)arg3 clientName:(id)arg4 options:(id)arg5;
- (id)initForAssetType:(id)arg1 withPurpose:(id)arg2 clientName:(id)arg3 options:(id)arg4;
- (id)initWithUrl:(id)arg1 clientName:(id)arg2 options:(id)arg3;

@end

