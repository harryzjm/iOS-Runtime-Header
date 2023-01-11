//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface DAStatusReport : NSObject
{
    _Bool _syncingAllowed;
    int _numHBIDataPoints;
    NSString *_persistentUUID;
    NSString *_displayName;
    NSString *_accountType;
    NSNumber *_timeSpan;
    NSNumber *_timeInNetworking;
    NSNumber *_averageHBI;
    NSNumber *_successfulRequests;
    NSNumber *_failedNetworkRequests;
    NSNumber *_failedProtocolRequests;
    NSNumber *_downloadedElements;
    NSNumber *_uploadedElements;
    NSNumber *_falseMoreAvailableCount;
    NSString *_protocolVersion;
    NSDate *_lastSuccessDate;
    NSDate *_lastFailureDate;
    NSDate *_creationDate;
}

- (void).cxx_destruct;
@property(nonatomic) int numHBIDataPoints; // @synthesize numHBIDataPoints=_numHBIDataPoints;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSDate *lastFailureDate; // @synthesize lastFailureDate=_lastFailureDate;
@property(retain, nonatomic) NSDate *lastSuccessDate; // @synthesize lastSuccessDate=_lastSuccessDate;
@property(nonatomic) _Bool syncingAllowed; // @synthesize syncingAllowed=_syncingAllowed;
@property(retain, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSNumber *falseMoreAvailableCount; // @synthesize falseMoreAvailableCount=_falseMoreAvailableCount;
@property(retain, nonatomic) NSNumber *uploadedElements; // @synthesize uploadedElements=_uploadedElements;
@property(retain, nonatomic) NSNumber *downloadedElements; // @synthesize downloadedElements=_downloadedElements;
@property(retain, nonatomic) NSNumber *failedProtocolRequests; // @synthesize failedProtocolRequests=_failedProtocolRequests;
@property(retain, nonatomic) NSNumber *failedNetworkRequests; // @synthesize failedNetworkRequests=_failedNetworkRequests;
@property(retain, nonatomic) NSNumber *successfulRequests; // @synthesize successfulRequests=_successfulRequests;
@property(retain, nonatomic) NSNumber *averageHBI; // @synthesize averageHBI=_averageHBI;
@property(retain, nonatomic) NSNumber *timeInNetworking; // @synthesize timeInNetworking=_timeInNetworking;
@property(retain, nonatomic) NSNumber *timeSpan; // @synthesize timeSpan=_timeSpan;
@property(retain, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *persistentUUID; // @synthesize persistentUUID=_persistentUUID;
- (void)noteFalseMoreAvailableResponse;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteNewHBIDataPoint:(int)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1 numUploadedElements:(int)arg2;
- (id)description;
- (void)mergeStatusReport:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)init;

@end
