//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface SAGetRequestOrigin
{
}

+ (id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getRequestOrigin;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *searchTimeout;
@property(copy, nonatomic) NSNumber *maxAge;
@property(copy, nonatomic) NSString *desiredAccuracy;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
