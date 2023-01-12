//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BCSBusinessItem, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface DDPersonAction
{
    _Bool _contactExists;
    _Bool _fromCNContact;
    BCSBusinessItem *_bizItem;
    _Bool _bizItemIsMessageable;
    NSString *_lastBizNumberFetched;
    UIViewController *_menuHeaderViewController;
}

+ (id)viewControllerProviderClass;
+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;
- (void).cxx_destruct;
- (id)menuHeaderView;
- (_Bool)menuHasHeaderView;
- (id)menuHeaderViewController;
- (_Bool)prefersActionMenuStyle;
- (struct CGSize)suggestedContentSize;
- (id)menuActions;
- (id)_menuActionsForPersonWithNumber:(id)arg1 email:(id)arg2;
- (id)_menuActionsForBusinessWithNumber:(id)arg1;
- (_Bool)phoneNumberIsBusiness:(id)arg1;
- (id)_appendActionsForPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 class:(Class)arg3 filter:(id)arg4 scheme:(id)arg5;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;

@end

