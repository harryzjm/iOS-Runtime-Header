//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SAStockRequest
{
}

+ (id)requestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)request;
@property(copy, nonatomic) NSDate *startDate;
@property(copy, nonatomic) NSString *requestType;
@property(copy, nonatomic) NSDate *endDate;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

