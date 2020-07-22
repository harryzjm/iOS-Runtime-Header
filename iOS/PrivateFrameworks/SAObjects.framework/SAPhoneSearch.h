//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber;

@interface SAPhoneSearch
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *voiceMail;
@property(copy, nonatomic) NSDate *start;
@property(copy, nonatomic) NSNumber *outgoing;
@property(copy, nonatomic) NSNumber *missed;
@property(copy, nonatomic) NSNumber *last;
@property(copy, nonatomic) NSNumber *isNew;
@property(copy, nonatomic) NSNumber *faceTimeAudio;
@property(copy, nonatomic) NSNumber *faceTime;
@property(copy, nonatomic) NSDate *end;
@property(copy, nonatomic) NSArray *contacts;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

