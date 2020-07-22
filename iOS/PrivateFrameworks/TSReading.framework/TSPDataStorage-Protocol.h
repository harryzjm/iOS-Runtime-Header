//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class AVAsset, NSData, NSDictionary, NSString, NSURL, SFUCryptoKey, TSPData;
@protocol TSPPackage;

@protocol TSPDataStorage <NSObject>
@property(readonly, nonatomic) _Bool readOnly;
@property(readonly, nonatomic) unsigned long long encodedLength;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
- (void)performReadWithAccessor:(void (^)(NSURL *))arg1;
- (void)performIOChannelReadWithAccessor:(void (^)(id <TSUReadChannel>))arg1;
- (_Bool)isInPackage:(id <TSPPackage>)arg1;
- (NSString *)filenameForPreferredFilename:(NSString *)arg1;
- (AVAsset *)AVAssetWithOptions:(NSDictionary *)arg1 usingResourceLoaderWithContentTypeUTI:(NSString *)arg2;
- (AVAsset *)AVAssetWithOptions:(NSDictionary *)arg1 contentTypeUTI:(NSString *)arg2;
- (NSData *)NSDataWithOptions:(unsigned long long)arg1;
- (struct CGImageSource *)newCGImageSource;
- (struct CGDataProvider *)newCGDataProvider;
- (NSData *)bookmarkDataWithOptions:(unsigned long long)arg1;

@optional
@property(readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property(readonly, nonatomic) _Bool needsDownload;
- (void)addDownloadObserver:(id)arg1 forData:(TSPData *)arg2 completionHandler:(void (^)(id, TSPData *, long long))arg3;
- (_Bool)copyToTemporaryURL:(NSURL *)arg1;
- (id)storageForDataCopyFromOtherContext;
@end

