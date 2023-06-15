//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SUUIItemContentRating : NSObject
{
    NSArray *_contentRatingAdvisories;
    NSString *_contentRatingName;
    NSString *_contentRatingSystemName;
    NSString *_contentRank;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contentRank; // @synthesize contentRank=_contentRank;
@property(readonly, nonatomic) NSString *contentRatingSystemName; // @synthesize contentRatingSystemName=_contentRatingSystemName;
@property(readonly, nonatomic) NSArray *contentRatingAdvisories; // @synthesize contentRatingAdvisories=_contentRatingAdvisories;
@property(readonly, nonatomic) NSString *contentRatingName; // @synthesize contentRatingName=_contentRatingName;
- (id)description;
- (id)initWithContentRatingDictionary:(id)arg1 systemName:(id)arg2;

@end

