//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSRecentWebSearchEntry : NSObject
{
    NSString *_searchString;
    NSDate *_date;
}

- (void).cxx_destruct;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSString *searchString; // @synthesize searchString=_searchString;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 date:(id)arg2;

@end
