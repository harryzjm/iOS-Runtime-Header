//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@class RTTokenBucket;

@interface RTPersistenceMirroringPolicy : NSObject <NSCopying>
{
    long long _qualityOfService;
    RTTokenBucket *_tokenBucket;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RTTokenBucket *tokenBucket; // @synthesize tokenBucket=_tokenBucket;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
- (id)qualityOfServiceToString:(long long)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)timeIntervalUntilOperationAllowed;
@property(readonly, nonatomic) _Bool mirroringOperationAllowed;
@property(readonly, nonatomic) _Bool allowsMirroringViaCellular;
- (id)initWithQualityOfService:(long long)arg1 tokenBucket:(id)arg2;
- (id)initWithQualityOfService:(long long)arg1;
- (id)init;

@end
