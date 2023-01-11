//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADInstallAttributionData, NSDictionary, NSString;

@interface ADResponseData : NSObject
{
    NSString *_impressionID;
    NSString *_metadata;
    NSString *_lineItem;
    NSString *_algoID;
    NSString *_privacy;
    NSString *_templateType;
    NSString *_clientRequestID;
    NSDictionary *_format;
    ADInstallAttributionData *_installAttribution;
}

@property(readonly, copy, nonatomic) ADInstallAttributionData *installAttribution; // @synthesize installAttribution=_installAttribution;
@property(readonly, copy, nonatomic) NSDictionary *format; // @synthesize format=_format;
@property(readonly, copy, nonatomic) NSString *clientRequestID; // @synthesize clientRequestID=_clientRequestID;
@property(readonly, copy, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(readonly, copy, nonatomic) NSString *privacy; // @synthesize privacy=_privacy;
@property(readonly, copy, nonatomic) NSString *algoID; // @synthesize algoID=_algoID;
@property(readonly, copy, nonatomic) NSString *lineItem; // @synthesize lineItem=_lineItem;
@property(readonly, copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

