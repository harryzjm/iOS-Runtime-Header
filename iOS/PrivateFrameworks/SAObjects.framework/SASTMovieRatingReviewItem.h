//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SASTTemplatePercentageRating, SAUIDecoratedText;

@interface SASTMovieRatingReviewItem <SASTTemplateItem>
{
}

+ (id)movieRatingReviewItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movieRatingReviewItem;
@property(retain, nonatomic) SASTTemplatePercentageRating *templatePercentageRating;
@property(retain, nonatomic) SAUIDecoratedText *reviews;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

