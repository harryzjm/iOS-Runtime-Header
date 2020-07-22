//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber, NSString, SASmsGroupName;

@interface SASmsSearch
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *unread;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSDate *start;
@property(retain, nonatomic) SASmsGroupName *smsGroup;
@property(copy, nonatomic) NSArray *senders;
@property(copy, nonatomic) NSArray *recipients;
@property(copy, nonatomic) NSNumber *outgoing;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSDate *end;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

