//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SANoteObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) _Bool restricted;
@property(copy, nonatomic) NSDate *lastModifiedDate;
@property(copy, nonatomic) NSDate *createdDate;
@property(copy, nonatomic) NSString *contents;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
