//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MADAutoSetDescriptor : NSObject
{
    _Bool _isOnFilesystem;
    _Bool _onFilesystemIncomplete;
    _Bool _isDiscoveredFullyDownloaded;
    _Bool _neverBeenLocked;
    _Bool _downloadUserInitiated;
    _Bool _stagedPriorToAvailable;
    NSString *_clientDomainName;
    NSString *_assetSetIdentifier;
    NSString *_catalogCachedAssetSetID;
    NSURL *_catalogDownloadedFromLive;
    NSDate *_catalogLastTimeChecked;
    NSDate *_catalogPostedDate;
    NSString *_discoveredAtomicInstance;
    NSArray *_discoveredAtomicEntries;
    NSString *_latestDownloadedAtomicInstance;
    NSArray *_latestDowloadedAtomicInstanceEntries;
    NSString *_downloadedCatalogCachedAssetSetID;
    NSURL *_downloadedCatalogDownloadedFromLive;
    NSDate *_downloadedCatalogLastTimeChecked;
    NSDate *_downloadedCatalogPostedDate;
    long long _downloadedNetworkBytes;
    long long _downloadedFilesystemBytes;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool stagedPriorToAvailable; // @synthesize stagedPriorToAvailable=_stagedPriorToAvailable;
@property(nonatomic) long long downloadedFilesystemBytes; // @synthesize downloadedFilesystemBytes=_downloadedFilesystemBytes;
@property(nonatomic) long long downloadedNetworkBytes; // @synthesize downloadedNetworkBytes=_downloadedNetworkBytes;
@property(nonatomic) _Bool downloadUserInitiated; // @synthesize downloadUserInitiated=_downloadUserInitiated;
@property(nonatomic) _Bool neverBeenLocked; // @synthesize neverBeenLocked=_neverBeenLocked;
@property(nonatomic) _Bool isDiscoveredFullyDownloaded; // @synthesize isDiscoveredFullyDownloaded=_isDiscoveredFullyDownloaded;
@property(nonatomic) _Bool onFilesystemIncomplete; // @synthesize onFilesystemIncomplete=_onFilesystemIncomplete;
@property(nonatomic) _Bool isOnFilesystem; // @synthesize isOnFilesystem=_isOnFilesystem;
@property(retain, nonatomic) NSDate *downloadedCatalogPostedDate; // @synthesize downloadedCatalogPostedDate=_downloadedCatalogPostedDate;
@property(retain, nonatomic) NSDate *downloadedCatalogLastTimeChecked; // @synthesize downloadedCatalogLastTimeChecked=_downloadedCatalogLastTimeChecked;
@property(retain, nonatomic) NSURL *downloadedCatalogDownloadedFromLive; // @synthesize downloadedCatalogDownloadedFromLive=_downloadedCatalogDownloadedFromLive;
@property(retain, nonatomic) NSString *downloadedCatalogCachedAssetSetID; // @synthesize downloadedCatalogCachedAssetSetID=_downloadedCatalogCachedAssetSetID;
@property(retain, nonatomic) NSArray *latestDowloadedAtomicInstanceEntries; // @synthesize latestDowloadedAtomicInstanceEntries=_latestDowloadedAtomicInstanceEntries;
@property(retain, nonatomic) NSString *latestDownloadedAtomicInstance; // @synthesize latestDownloadedAtomicInstance=_latestDownloadedAtomicInstance;
@property(retain, nonatomic) NSArray *discoveredAtomicEntries; // @synthesize discoveredAtomicEntries=_discoveredAtomicEntries;
@property(readonly, retain, nonatomic) NSString *discoveredAtomicInstance; // @synthesize discoveredAtomicInstance=_discoveredAtomicInstance;
@property(retain, nonatomic) NSDate *catalogPostedDate; // @synthesize catalogPostedDate=_catalogPostedDate;
@property(retain, nonatomic) NSDate *catalogLastTimeChecked; // @synthesize catalogLastTimeChecked=_catalogLastTimeChecked;
@property(retain, nonatomic) NSURL *catalogDownloadedFromLive; // @synthesize catalogDownloadedFromLive=_catalogDownloadedFromLive;
@property(retain, nonatomic) NSString *catalogCachedAssetSetID; // @synthesize catalogCachedAssetSetID=_catalogCachedAssetSetID;
@property(readonly, retain, nonatomic) NSString *assetSetIdentifier; // @synthesize assetSetIdentifier=_assetSetIdentifier;
@property(readonly, retain, nonatomic) NSString *clientDomainName; // @synthesize clientDomainName=_clientDomainName;
- (id)newIdentityName;
- (id)newSummaryWithoutEntryID;
- (id)summary;
- (id)description;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForClientDomainName:(id)arg1 forAssetSetIdentifier:(id)arg2 withDiscoveredAtomicInstance:(id)arg3 withDiscoveredAtomicEntries:(id)arg4;

@end

