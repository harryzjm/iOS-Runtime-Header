//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface EDAMAuthenticationRequestResult
{
    NSNumber *_userId;
    NSString *_userEmail;
    NSNumber *_result;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;

@end
