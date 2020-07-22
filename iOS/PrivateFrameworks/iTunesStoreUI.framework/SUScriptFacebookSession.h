//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUScriptAppleAccount;

@interface SUScriptFacebookSession
{
    SUScriptAppleAccount *_account;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) unsigned long long likeStatusFlagMe;
@property(readonly) unsigned long long likeStatusFlagGlobalCount;
@property(readonly) unsigned long long likeStatusFlagFriends;
@property(readonly) unsigned long long likeStatusFlagFriendCount;
@property(readonly) id hasAccounts;
- (id)_className;
- (void)unlikeURL:(id)arg1 completionFunction:(id)arg2;
- (void)likeURL:(id)arg1 completionFunction:(id)arg2;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completionFunction:(id)arg3;
- (void)dealloc;
- (id)initWithAppleAccount:(id)arg1;

@end

