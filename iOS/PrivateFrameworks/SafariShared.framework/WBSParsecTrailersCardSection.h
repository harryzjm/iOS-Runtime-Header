//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface WBSParsecTrailersCardSection
{
    NSString *_title;
    NSArray *_trailers;
}

+ (id)_specializedCardSectionSchema;
@property(readonly, nonatomic) NSArray *trailers; // @synthesize trailers=_trailers;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;

@end
