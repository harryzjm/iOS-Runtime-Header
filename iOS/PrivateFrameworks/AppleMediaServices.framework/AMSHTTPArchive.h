//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface AMSHTTPArchive : NSObject
{
    _Bool _compressed;
    NSData *_backingJSONData;
    NSData *_JSONData;
    NSString *_urlString;
}

+ (double)_timeIntervalFromFilename:(id)arg1;
+ (id)_generateResponseDictionaryForMetrics:(id)arg1 responseData:(id)arg2;
+ (id)_generateRequestDictionaryForMetrics:(id)arg1 requestData:(id)arg2;
+ (id)_generateHeadersArrayForHTTPHeaders:(id)arg1;
+ (id)_generateContentDictionaryForResponse:(id)arg1 responseData:(id)arg2;
+ (id)_generateCommentsStringForMetrics:(id)arg1;
+ (id)_dateFormatterForTimeZone:(id)arg1;
+ (id)_createJSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (id)_createJSONObjectForEntries:(id)arg1;
+ (void)removeHTTPArchiveFilesOlderThanDate:(id)arg1;
+ (id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2;
+ (id)merge:(id)arg1;
+ (id)directory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) NSData *JSONData; // @synthesize JSONData=_JSONData;
@property(nonatomic, getter=isCompressed) _Bool compressed; // @synthesize compressed=_compressed;
@property(retain, nonatomic) NSData *backingJSONData; // @synthesize backingJSONData=_backingJSONData;
- (_Bool)writeToDiskWithError:(id *)arg1 compressed:(_Bool)arg2;
- (void)logHARData;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
- (id)initWithURLTaskInfo:(id)arg1;

@end
