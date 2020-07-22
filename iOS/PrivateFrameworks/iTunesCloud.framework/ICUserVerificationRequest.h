//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICStoreRequestContext, ICUserVerificationContext;

@interface ICUserVerificationRequest : NSObject <NSCopying>
{
    long long _qualityOfService;
    ICStoreRequestContext *_storeRequestContext;
    ICUserVerificationContext *_verificationContext;
}

@property(readonly, copy, nonatomic) ICUserVerificationContext *verificationContext; // @synthesize verificationContext=_verificationContext;
@property(copy, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVerificationContext:(id)arg1;

@end
