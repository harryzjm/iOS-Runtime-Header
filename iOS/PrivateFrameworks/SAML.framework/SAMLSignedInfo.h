//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SAMLSignedInfo
{
}

+ (id)createElement:(id *)arg1;
@property(readonly, nonatomic) NSArray *references;
@property(readonly, nonatomic) NSString *signatureMethod;
@property(readonly, nonatomic) NSNumber *signatureMethodLength;
@property(readonly, nonatomic) NSString *canonicalizationMethod;
@property(readonly, nonatomic) NSString *identifier;
- (struct _xmlNode *)xmlNode:(id *)arg1;

@end

