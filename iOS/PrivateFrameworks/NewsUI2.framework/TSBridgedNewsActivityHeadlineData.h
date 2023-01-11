//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, TSArticleContext;
@protocol FCHeadlineProviding;

@interface TSBridgedNewsActivityHeadlineData : NSObject
{
    MISSING_TYPE *articleID;
    MISSING_TYPE *articleContext;
    MISSING_TYPE *articlePresentationStyle;
    MISSING_TYPE *showShareSheet;
    MISSING_TYPE *forceArticleUpdate;
    MISSING_TYPE *headline;
}

- (void).cxx_destruct;
- (id)init;
- (long long)presentationReason;
@property(nonatomic, readonly) id <FCHeadlineProviding> headline; // @synthesize headline;
@property(nonatomic, readonly) _Bool forceArticleUpdate; // @synthesize forceArticleUpdate;
@property(nonatomic, readonly) _Bool showShareSheet; // @synthesize showShareSheet;
@property(nonatomic, readonly) long long articlePresentationStyle; // @synthesize articlePresentationStyle;
@property(nonatomic, readonly) TSArticleContext *articleContext; // @synthesize articleContext;
@property(nonatomic, readonly) NSString *articleID;

@end
