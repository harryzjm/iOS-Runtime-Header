//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITextField;

__attribute__((visibility("hidden")))
@interface WFWordPressLoginViewController
{
    UITextField *_blogField;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UITextField *blogField; // @synthesize blogField=_blogField;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)loginWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canAttemptLogin;
- (void)configureTextField:(id)arg1 forKey:(id)arg2;
- (id)loginURL;
- (id)initWithAccountClass:(Class)arg1;

@end
