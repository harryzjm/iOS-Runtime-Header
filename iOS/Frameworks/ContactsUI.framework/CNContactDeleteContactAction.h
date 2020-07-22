//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNUICoreRecentsManager, CNUIExternalComponentsFactory;

__attribute__((visibility("hidden")))
@interface CNContactDeleteContactAction
{
    CNUIExternalComponentsFactory *_componentsFactory;
    CNUICoreRecentsManager *_recentsManager;
}

@property(readonly, nonatomic) CNUICoreRecentsManager *recentsManager; // @synthesize recentsManager=_recentsManager;
@property(readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // @synthesize componentsFactory=_componentsFactory;
- (void).cxx_destruct;
- (void)showDeleteFailureAlert;
- (_Bool)deleteContact;
- (void)performActionWithSender:(id)arg1;
- (id)initWithContact:(id)arg1 recentsManager:(id)arg2 componentsFactory:(id)arg3;

@end

