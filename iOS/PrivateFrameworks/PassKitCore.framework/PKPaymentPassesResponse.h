//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PKPaymentPassesResponse
{
    NSArray *_passURLs;
    NSString *_lastUpdatedTag;
    NSArray *_devicePassSerialNumbers;
}

@property(copy, nonatomic) NSArray *devicePassSerialNumbers; // @synthesize devicePassSerialNumbers=_devicePassSerialNumbers;
@property(copy, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(copy, nonatomic) NSArray *passURLs; // @synthesize passURLs=_passURLs;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

