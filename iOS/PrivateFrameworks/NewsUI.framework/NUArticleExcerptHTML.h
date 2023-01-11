//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface NUArticleExcerptHTML : NSObject
{
    NSString *_processedHTML;
    NSURL *_URL;
    unsigned long long _lengthType;
}

+ (id)articleExcerptHTML;
+ (id)articleExcerptCSS;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long lengthType; // @synthesize lengthType=_lengthType;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *processedHTML; // @synthesize processedHTML=_processedHTML;
- (id)embedCSSIntoExcerptHTML:(id)arg1 scale:(double)arg2;
- (id)paragraphShortExcerptHTML:(id)arg1 headline:(id)arg2;
- (id)excerptHTMLToProcessedHTML:(id)arg1 headline:(id)arg2 scale:(double)arg3;
- (id)stripHTMLTagsFromExcerptHTML:(id)arg1;
- (id)initWitHeadline:(id)arg1 excerptHTML:(id)arg2 scale:(double)arg3;

@end
