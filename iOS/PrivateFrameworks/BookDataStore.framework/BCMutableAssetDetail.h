//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/BCAssetDetail-Protocol.h>
#import <BookDataStore/NSSecureCoding-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableAssetDetail <BCAssetDetail, NSSecureCoding>
{
    _Bool _isFinished;
    _Bool _notFinished;
    short _taste;
    short _tasteSyncedToStore;
    float _readingProgress;
    float _readingProgressHighWaterMark;
    int _readingPositionLocationRangeStart;
    int _readingPositionLocationRangeEnd;
    int _readingPositionAbsolutePhysicalLocation;
    NSString *_assetID;
    NSDate *_dateFinished;
    NSDate *_lastOpenDate;
    NSString *_readingPositionCFIString;
    NSString *_readingPositionAnnotationVersion;
    NSString *_readingPositionAssetVersion;
    NSData *_readingPositionUserData;
    NSString *_readingPositionStorageUUID;
    NSDate *_datePlaybackTimeUpdated;
    double _bookmarkTime;
    NSDate *_readingPositionLocationUpdateDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *readingPositionLocationUpdateDate; // @synthesize readingPositionLocationUpdateDate=_readingPositionLocationUpdateDate;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(copy, nonatomic) NSDate *datePlaybackTimeUpdated; // @synthesize datePlaybackTimeUpdated=_datePlaybackTimeUpdated;
@property(copy, nonatomic) NSString *readingPositionStorageUUID; // @synthesize readingPositionStorageUUID=_readingPositionStorageUUID;
@property(nonatomic) int readingPositionAbsolutePhysicalLocation; // @synthesize readingPositionAbsolutePhysicalLocation=_readingPositionAbsolutePhysicalLocation;
@property(nonatomic) int readingPositionLocationRangeEnd; // @synthesize readingPositionLocationRangeEnd=_readingPositionLocationRangeEnd;
@property(nonatomic) int readingPositionLocationRangeStart; // @synthesize readingPositionLocationRangeStart=_readingPositionLocationRangeStart;
@property(copy, nonatomic) NSData *readingPositionUserData; // @synthesize readingPositionUserData=_readingPositionUserData;
@property(copy, nonatomic) NSString *readingPositionAssetVersion; // @synthesize readingPositionAssetVersion=_readingPositionAssetVersion;
@property(copy, nonatomic) NSString *readingPositionAnnotationVersion; // @synthesize readingPositionAnnotationVersion=_readingPositionAnnotationVersion;
@property(copy, nonatomic) NSString *readingPositionCFIString; // @synthesize readingPositionCFIString=_readingPositionCFIString;
@property(nonatomic) float readingProgressHighWaterMark; // @synthesize readingProgressHighWaterMark=_readingProgressHighWaterMark;
@property(nonatomic) float readingProgress; // @synthesize readingProgress=_readingProgress;
@property(copy, nonatomic) NSDate *lastOpenDate; // @synthesize lastOpenDate=_lastOpenDate;
@property(copy, nonatomic) NSDate *dateFinished; // @synthesize dateFinished=_dateFinished;
@property(nonatomic) short tasteSyncedToStore; // @synthesize tasteSyncedToStore=_tasteSyncedToStore;
@property(nonatomic) short taste; // @synthesize taste=_taste;
@property(nonatomic) _Bool notFinished; // @synthesize notFinished=_notFinished;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(readonly, nonatomic) _Bool isAudiobook;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)configuredRecordFromAttributes;
- (id)zoneName;
- (id)identifier;
- (id)recordType;
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;
- (id)initWithCloudData:(id)arg1;
- (id)initWithAssetID:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end
