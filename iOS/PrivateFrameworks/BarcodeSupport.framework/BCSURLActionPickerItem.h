//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BCSActionPickerItem.h"

@class LSAppLink, LSApplicationRecord, NSURL;
@protocol BCSCodePayload;

__attribute__((visibility("hidden")))
@interface BCSURLActionPickerItem : BCSActionPickerItem
{
    NSURL *_url;
    LSApplicationRecord *_applicationRecord;
    _Bool _preferApplicationIcon;
    LSAppLink *_appLink;
    id <BCSCodePayload> _codePayload;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <BCSCodePayload> codePayload; // @synthesize codePayload=_codePayload;
@property(readonly, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
- (_Bool)useInlineMenu;
- (id)actionURL;
- (id)targetApplicationBundleIdentifier;
- (void)performAction;
- (void)performActionWithFBOptions:(id)arg1;
- (id)icon;
- (id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4 preferApplicationIcon:(_Bool)arg5;
- (id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4;
- (id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationRecord:(id)arg4;
- (id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationRecord:(id)arg4 preferApplicationIcon:(_Bool)arg5;

@end

