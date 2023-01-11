//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagNetworkTaskResult : NSObject
{
    NSDictionary *_data;
    NSDate *_expirationDate;
    NSString *_storefront;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *storefront; // @synthesize storefront=_storefront;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) _Bool expired;
- (id)initWithData:(id)arg1;

@end
