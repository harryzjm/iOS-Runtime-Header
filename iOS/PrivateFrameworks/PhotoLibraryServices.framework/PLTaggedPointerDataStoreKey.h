//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoFoundation/PFTaggedPointer.h>

#import <PhotoLibraryServices/PLResourceDataStoreKey-Protocol.h>
#import <PhotoLibraryServices/PLTableThumbResourceKey-Protocol.h>

@class NSString;

@interface PLTaggedPointerDataStoreKey : PFTaggedPointer <PLResourceDataStoreKey, PLTableThumbResourceKey>
{
}

+ (id)keyWithKeyStruct:(const void *)arg1 keyLength:(unsigned long long)arg2 forStoreID:(unsigned int)arg3;
@property(readonly, copy) NSString *description;
- (id)descriptionForAssetID:(id)arg1;
- (struct CGImage *)newTableThumbImage;
- (_Bool)representsSquareResource;
- (id)keyData;
- (_Bool)isValid;
- (id)initWithKeyStruct:(const void *)arg1;
- (id)fileURLForAssetID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

