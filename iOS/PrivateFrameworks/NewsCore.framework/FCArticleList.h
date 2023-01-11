//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCArticleListEditorialMetadata, FCInterestToken, NSArray, NSDate, NSString, NTPBArticleListRecord;

@interface FCArticleList : NSObject
{
    NSString *_identifier;
    NSArray *_articleIDs;
    unsigned long long _type;
    FCArticleListEditorialMetadata *_editorialMetadata;
    NSDate *_lastModifiedDate;
    NTPBArticleListRecord *_record;
    FCInterestToken *_interestToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property(readonly, nonatomic) NTPBArticleListRecord *record; // @synthesize record=_record;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, nonatomic) FCArticleListEditorialMetadata *editorialMetadata; // @synthesize editorialMetadata=_editorialMetadata;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;

@end
