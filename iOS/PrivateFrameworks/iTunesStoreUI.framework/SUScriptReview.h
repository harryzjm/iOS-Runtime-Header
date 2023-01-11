//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSURL, SKUIReviewMetadata;

@interface SUScriptReview
{
    NSURL *_infoURL;
    SKUIReviewMetadata *_review;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(retain) NSString *title;
@property(retain) NSNumber *rating;
@property(retain) id nicknameIsConfirmed;
@property(retain) NSString *nickname;
@property(retain) NSString *itemType;
@property(retain) NSString *infoURL;
@property(retain) NSString *body;
@property(readonly) id hasSavedDraft;
- (id)_className;
@property(readonly) NSNumber *adamID;
- (id)saveAsDraft;
- (id)restoreFromDraft;
- (id)removeDraft;
- (id)copyReview;
- (void)dealloc;
- (id)initWithReview:(id)arg1;
- (id)init;

@end
