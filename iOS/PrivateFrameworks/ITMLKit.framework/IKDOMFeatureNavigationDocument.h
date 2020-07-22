//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKAppNavigationController-Protocol.h>
#import <ITMLKit/IKDOMFeature-Protocol.h>

@class IKAppContext, NSMutableArray, NSString;
@protocol IKAppNavigationController;

@interface IKDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, IKDOMFeature>
{
    id <IKAppNavigationController> _appNavigationController;
    NSMutableArray *_stackItems;
    NSString *_featureName;
    IKAppContext *_appContext;
    id <IKAppNavigationController> _navigationController;
}

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(retain, nonatomic) id <IKAppNavigationController> navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
- (void).cxx_destruct;
- (void)clear;
- (id)documents;
- (void)removeDocument:(id)arg1;
- (void)popToRootDocument;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
