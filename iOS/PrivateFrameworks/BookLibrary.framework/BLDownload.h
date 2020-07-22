//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookLibrary/NSCopying-Protocol.h>
#import <BookLibrary/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSNumber, NSString;

@interface BLDownload : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_downloadID;
    NSString *_url;
    NSString *_targetDownloadDirectory;
    long long _state;
    NSDate *_startTime;
    NSString *_assetPath;
    NSString *_buyParameters;
    NSString *_permlink;
    NSNumber *_storeIdentifier;
    NSString *_clientIdentifier;
    NSNumber *_persistentIdentifier;
    NSString *_transactionIdentifier;
    NSString *_cancelDownloadURL;
    unsigned long long _fileSize;
    NSDate *_lastStateChangeTime;
    NSString *_hashType;
    NSString *_md5HashStrings;
    long long _numberOfBytesToHash;
    NSNumber *_publicationVersion;
    NSNumber *_isAutomaticDownload;
    NSNumber *_isRestore;
    NSString *_downloadKey;
    NSNumber *_accountID;
    NSNumber *_isZipStreamable;
    NSData *_dpInfo;
    NSNumber *_isSample;
    NSNumber *_isPurchase;
    NSDate *_purchaseDate;
    NSNumber *_isLocalCacheServer;
    NSString *_artistName;
    NSString *_title;
    NSString *_subtitle;
    NSString *_genre;
    NSString *_kind;
    NSString *_thumbnailImageURL;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSNumber *isLocalCacheServer; // @synthesize isLocalCacheServer=_isLocalCacheServer;
@property(retain, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(retain, nonatomic) NSNumber *isPurchase; // @synthesize isPurchase=_isPurchase;
@property(retain, nonatomic) NSNumber *isSample; // @synthesize isSample=_isSample;
@property(copy, nonatomic) NSData *dpInfo; // @synthesize dpInfo=_dpInfo;
@property(copy, nonatomic) NSNumber *isZipStreamable; // @synthesize isZipStreamable=_isZipStreamable;
@property(copy, nonatomic) NSNumber *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) NSString *downloadKey; // @synthesize downloadKey=_downloadKey;
@property(copy, nonatomic) NSNumber *isRestore; // @synthesize isRestore=_isRestore;
@property(nonatomic) NSNumber *isAutomaticDownload; // @synthesize isAutomaticDownload=_isAutomaticDownload;
@property(copy, nonatomic) NSNumber *publicationVersion; // @synthesize publicationVersion=_publicationVersion;
@property(nonatomic) long long numberOfBytesToHash; // @synthesize numberOfBytesToHash=_numberOfBytesToHash;
@property(copy, nonatomic) NSString *md5HashStrings; // @synthesize md5HashStrings=_md5HashStrings;
@property(copy, nonatomic) NSString *hashType; // @synthesize hashType=_hashType;
@property(copy, nonatomic) NSDate *lastStateChangeTime; // @synthesize lastStateChangeTime=_lastStateChangeTime;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *cancelDownloadURL; // @synthesize cancelDownloadURL=_cancelDownloadURL;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(retain, nonatomic) NSNumber *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *permlink; // @synthesize permlink=_permlink;
@property(copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property(copy, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
@property(copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *targetDownloadDirectory; // @synthesize targetDownloadDirectory=_targetDownloadDirectory;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *downloadID; // @synthesize downloadID=_downloadID;
- (void).cxx_destruct;
- (id)description;
- (double)transferProgressFraction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

