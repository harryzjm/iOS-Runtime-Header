//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface FAAcceptChildTransferRequest : AAFamilyRequest
{
    NSString *_requestCode;
}

@property(copy, nonatomic) NSString *requestCode; // @synthesize requestCode=_requestCode;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (_Bool)isUserInitiated;

@end

