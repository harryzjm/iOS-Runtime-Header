//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSBaseMessage.h>

@class NSDictionary, NSString;

@interface FTGetRegionMetadataMessage : IDSBaseMessage
{
    NSString *_language;
    NSDictionary *_responseRegionInformation;
}

- (void).cxx_destruct;
@property(copy) NSDictionary *responseRegionInformation; // @synthesize responseRegionInformation=_responseRegionInformation;
@property(copy) NSString *language; // @synthesize language=_language;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (_Bool)wantsHTTPGet;
- (long long)responseCommand;
- (long long)command;
- (_Bool)wantsBinaryPush;
- (_Bool)wantsCompressedBody;
- (_Bool)wantsHTTPHeaders;
- (_Bool)wantsBagKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

