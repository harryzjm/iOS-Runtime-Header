//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAssetDataProvider-Protocol.h>

@class FCInterestToken, NSData, NSString;

@interface FCRawFileDataProvider : NSObject <FCAssetDataProvider>
{
    _Bool _isRawFileConsumable;
    NSString *_filePath;
    FCInterestToken *_holdToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCInterestToken *holdToken; // @synthesize holdToken=_holdToken;
@property(readonly, nonatomic) _Bool isRawFileConsumable; // @synthesize isRawFileConsumable=_isRawFileConsumable;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) NSData *data;
- (id)init;
- (id)initWithFilePath:(id)arg1;
- (id)initWithFilePath:(id)arg1 holdToken:(id)arg2;

@end
