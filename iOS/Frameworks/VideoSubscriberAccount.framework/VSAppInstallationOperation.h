//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VSOptional;

@interface VSAppInstallationOperation
{
    NSString *_buyParams;
    VSOptional *_result;
}

@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end

