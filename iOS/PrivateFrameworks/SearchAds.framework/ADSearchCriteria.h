//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchAds/NSCopying-Protocol.h>

@class NSString;

@interface ADSearchCriteria : NSObject <NSCopying>
{
    NSString *_languageLocale;
    NSString *_searchTerm;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(copy, nonatomic) NSString *languageLocale; // @synthesize languageLocale=_languageLocale;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
