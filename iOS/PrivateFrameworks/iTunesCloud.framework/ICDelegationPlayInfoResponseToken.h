//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate;

@interface ICDelegationPlayInfoResponseToken : NSObject
{
    NSData *_tokenData;
    NSDate *_expirationDate;
}

@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
- (void).cxx_destruct;

@end

