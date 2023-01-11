//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLResourceDataStoreKey-Protocol.h>
#import <PhotoLibraryServices/PLTableThumbResourceKey-Protocol.h>

@class NSString;

@interface PLThumbnailResourceDataStoreKey : NSObject <PLResourceDataStoreKey, PLTableThumbResourceKey>
{
    struct PLThumbnailDataStoreKeyStruct _keyStruct;
}

+ (_Bool)representsSquareResourceForPayloadKeyData:(unsigned long long)arg1;
+ (struct CGImage *)newTableThumbImageForPayloadKeyData:(unsigned long long)arg1;
+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
@property(nonatomic) struct PLThumbnailDataStoreKeyStruct keyStruct; // @synthesize keyStruct=_keyStruct;
- (id)descriptionForAssetID:(id)arg1;
@property(readonly, nonatomic) unsigned int tableType; // @dynamic tableType;
@property(readonly, nonatomic) int index; // @dynamic index;
- (_Bool)representsSquareResource;
- (struct CGImage *)newTableThumbImage;
- (id)fileURLForAssetID:(id)arg1;
- (_Bool)isValid;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

