//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface IKStyleMediaQuery : NSObject <NSCopying>
{
    NSString *_identifier;
    _Bool _isNegated;
    NSString *_mediaType;
    NSDictionary *_featureValues;
}

+ (id)mediaQueryListWithCSSMediaQuery:(id)arg1;
@property(readonly, nonatomic) _Bool isNegated; // @synthesize isNegated=_isNegated;
@property(readonly, retain, nonatomic) NSDictionary *featureValues; // @synthesize featureValues=_featureValues;
@property(readonly, retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMediaType:(id)arg1 featureValues:(id)arg2 isNegated:(_Bool)arg3;

@end

