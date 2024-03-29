//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, VUIAction;

__attribute__((visibility("hidden")))
@interface VUIOpenURLRouterDataSource : NSObject
{
    _Bool _actionFirst;
    NSArray *_documentDataSources;
    VUIAction *_action;
    VUIAction *_postAction;
    NSString *_tabIdentifier;
    NSDictionary *_localLibraryLink;
    NSString *_nativePageName;
}

+ (id)routerDataSourceWithDict:(id)arg1 appContext:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool actionFirst; // @synthesize actionFirst=_actionFirst;
@property(retain, nonatomic) NSString *nativePageName; // @synthesize nativePageName=_nativePageName;
@property(copy, nonatomic) NSDictionary *localLibraryLink; // @synthesize localLibraryLink=_localLibraryLink;
@property(retain, nonatomic) NSString *tabIdentifier; // @synthesize tabIdentifier=_tabIdentifier;
@property(retain, nonatomic) VUIAction *postAction; // @synthesize postAction=_postAction;
@property(retain, nonatomic) VUIAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSArray *documentDataSources; // @synthesize documentDataSources=_documentDataSources;

@end

