//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString;

@interface WKUserContentController : NSObject <WKObject, NSCoding>
{
    struct ObjectStorage<WebKit::WebUserContentControllerProxy> _userContentControllerProxy;
}

@property(readonly) struct Object *_apiObject;
- (void)removeScriptMessageHandlerForName:(id)arg1;
- (void)addScriptMessageHandler:(id)arg1 name:(id)arg2;
- (void)removeAllContentRuleLists;
- (void)removeContentRuleList:(id)arg1;
- (void)addContentRuleList:(id)arg1;
- (void)removeAllUserScripts;
- (void)addUserScript:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *userScripts;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_removeAllScriptMessageHandlersAssociatedWithUserContentWorld:(id)arg1;
- (void)_removeScriptMessageHandlerForName:(id)arg1 userContentWorld:(id)arg2;
- (void)_addScriptMessageHandler:(id)arg1 name:(id)arg2 userContentWorld:(id)arg3;
- (void)_removeAllUserStyleSheetsAssociatedWithUserContentWorld:(id)arg1;
- (void)_removeAllUserStyleSheets;
- (void)_removeUserStyleSheet:(id)arg1;
- (void)_addUserStyleSheet:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *_userStyleSheets;
- (void)_removeAllUserContentFilters;
- (void)_removeUserContentFilter:(id)arg1;
- (void)_addUserContentFilter:(id)arg1;
- (void)_removeAllUserScriptsAssociatedWithUserContentWorld:(id)arg1;
- (void)_removeUserScript:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

