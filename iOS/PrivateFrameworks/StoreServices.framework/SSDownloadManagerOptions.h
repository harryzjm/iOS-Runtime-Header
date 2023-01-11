//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying>
{
    NSArray *_downloadKinds;
    _Bool _filterExternalOriginatedDownloads;
    NSString *_persistenceIdentifier;
    NSArray *_prefetchedDownloadExternalProperties;
    NSArray *_prefetchedDownloadProperties;
    _Bool _ignoreDivertedDownloads;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreDivertedDownloads; // @synthesize ignoreDivertedDownloads=_ignoreDivertedDownloads;
@property(copy, nonatomic) NSArray *prefetchedDownloadExternalProperties; // @synthesize prefetchedDownloadExternalProperties=_prefetchedDownloadExternalProperties;
@property(copy, nonatomic) NSArray *prefetchedDownloadProperties; // @synthesize prefetchedDownloadProperties=_prefetchedDownloadProperties;
@property(copy, nonatomic) NSString *persistenceIdentifier; // @synthesize persistenceIdentifier=_persistenceIdentifier;
@property(copy, nonatomic) NSArray *downloadKinds; // @synthesize downloadKinds=_downloadKinds;
@property(nonatomic) _Bool shouldFilterExternalOriginatedDownloads; // @synthesize shouldFilterExternalOriginatedDownloads=_filterExternalOriginatedDownloads;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
