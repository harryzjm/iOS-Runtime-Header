//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface FCArticleListEditorialMetadata : NSObject
{
    NSDate *_publishDate;
    NSDictionary *_articleMetadata;
}

@property(retain, nonatomic) NSDictionary *articleMetadata; // @synthesize articleMetadata=_articleMetadata;
@property(retain, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
