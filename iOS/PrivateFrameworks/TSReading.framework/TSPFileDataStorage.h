//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSPDataStorage-Protocol.h>

@class NSString, SFUCryptoKey;

@interface TSPFileDataStorage : NSObject <TSPDataStorage>
{
}

- (_Bool)isInPackage:(id)arg1;
@property(readonly, nonatomic) _Bool readOnly;
@property(readonly, nonatomic) unsigned long long encodedLength;
- (id)filenameForPreferredFilename:(id)arg1;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;
- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (struct CGImageSource *)newCGImageSource;
- (struct CGDataProvider *)newCGDataProvider;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needsDownload;
@property(readonly) Class superclass;

@end

