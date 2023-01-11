//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSDate, NSString, NSURL;

@interface WFArticle : NSObject <WFNaming, WFSerializableContent>
{
    NSString *_title;
    NSString *_author;
    NSDate *_publishedDate;
    NSString *_body;
    NSString *_excerpt;
    unsigned long long _numberOfWords;
    NSURL *_URL;
    NSURL *_mainImageURL;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)articleWithTitle:(id)arg1 author:(id)arg2 publishedDate:(id)arg3 body:(id)arg4 excerpt:(id)arg5 numberOfWords:(unsigned long long)arg6 mainImageURL:(id)arg7 URL:(id)arg8;
+ (id)mainImageURLFromHTML:(id)arg1;
+ (id)summaryOfParagraph:(id)arg1;
+ (unsigned long long)numberOfWordsInString:(id)arg1;
+ (void)fetchArticleFromURL:(id)arg1 pageHTML:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) NSURL *mainImageURL; // @synthesize mainImageURL=_mainImageURL;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) unsigned long long numberOfWords; // @synthesize numberOfWords=_numberOfWords;
@property(readonly, copy, nonatomic) NSString *excerpt; // @synthesize excerpt=_excerpt;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSDate *publishedDate; // @synthesize publishedDate=_publishedDate;
@property(readonly, copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)wfSerializedRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)initWithTitle:(id)arg1 author:(id)arg2 publishedDate:(id)arg3 body:(id)arg4 excerpt:(id)arg5 numberOfWords:(unsigned long long)arg6 mainImageURL:(id)arg7 URL:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
