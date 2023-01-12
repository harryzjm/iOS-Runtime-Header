//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NULinkedContentProvider-Protocol.h>

@class NSDictionary, NSString;
@protocol FCContentContext;

@interface NUANFLinkedContentProvider : NSObject <NULinkedContentProvider>
{
    id <FCContentContext> _contentContext;
    NSDictionary *_linkedHeadlines;
    NSDictionary *_linkedTags;
    NSDictionary *_linkedIssues;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *linkedIssues; // @synthesize linkedIssues=_linkedIssues;
@property(copy, nonatomic) NSDictionary *linkedTags; // @synthesize linkedTags=_linkedTags;
@property(copy, nonatomic) NSDictionary *linkedHeadlines; // @synthesize linkedHeadlines=_linkedHeadlines;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
- (id)loadLinkedTagsWithIDs:(id)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)loadLinkedIssuesWithIDs:(id)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)loadLinkedArticlesWithIDs:(id)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tagForIdentifier:(id)arg1;
- (id)issueForIdentifier:(id)arg1;
- (id)headlineForIdentifier:(id)arg1;
- (id)loadLinkedContentForHeadline:(id)arg1 withContext:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)loadLinkedContentForHeadline:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContentContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
