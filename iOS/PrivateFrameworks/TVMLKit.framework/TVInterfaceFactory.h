//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVInterfaceCreating-Protocol.h>

@class NSMutableDictionary, NSString, _TVControllerFactory, _TVLockupFactory, _TVTemplateFactory, _TVViewFactory;
@protocol TVInterfaceCreating;

@interface TVInterfaceFactory : NSObject <TVInterfaceCreating>
{
    struct {
        unsigned int respondsToViewForElement:1;
        unsigned int respondsToViewControllerForElement:1;
        unsigned int respondsToURLForResource:1;
        unsigned int respondsToImageForResource:1;
        unsigned int respondsToCollectionViewCellClassForElement:1;
        unsigned int respondsToImageProxyForElement:1;
        unsigned int respondsToStyleSheetURLForTemplate:1;
    } _extenderFlags;
    NSMutableDictionary *_viewCreatorsByKey;
    NSMutableDictionary *_viewControllerCreatorsByKey;
    NSMutableDictionary *_controllerTransitionCreatorsByKey;
    _TVViewFactory *_viewFactory;
    _TVLockupFactory *_lockupFactory;
    _TVControllerFactory *_controllerFactory;
    _TVTemplateFactory *_templateFactory;
    id <TVInterfaceCreating> _extendedInterfaceCreator;
}

+ (id)_URLForResource:(id)arg1 bundle:(id)arg2;
+ (id)_tvmlResourceMap;
+ (id)sharedInterfaceFactory;
+ (void)initialize;
@property(retain, nonatomic) id <TVInterfaceCreating> extendedInterfaceCreator; // @synthesize extendedInterfaceCreator=_extendedInterfaceCreator;
- (void).cxx_destruct;
- (id)_getImageFromURLorBundle:(id)arg1;
- (void)_setViewProxy:(id)arg1 forViewElement:(id)arg2;
- (id)_viewForElement:(id)arg1;
- (id)_styleSheetURLForTemplate:(id)arg1;
- (id)_imageProxyForElement:(id)arg1;
- (id)_controllerTransitionFromElement:(id)arg1 toElement:(id)arg2 forNavigationControllerOperation:(long long)arg3 relativeToFrom:(_Bool)arg4;
- (void)_registerControllerTransitioningCreator:(CDUnknownBlockType)arg1 withType:(unsigned long long)arg2;
- (id)_viewControllerFromElement:(id)arg1 existingController:(id)arg2;
- (id)_viewFromElement:(id)arg1 existingView:(id)arg2;
- (void)_registerViewControllerCreator:(CDUnknownBlockType)arg1 withType:(unsigned long long)arg2;
- (void)_registerViewCreator:(CDUnknownBlockType)arg1 withType:(unsigned long long)arg2;
- (Class)collectionViewCellClassForElement:(id)arg1;
- (id)imageForResource:(id)arg1;
- (id)URLForResource:(id)arg1;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)viewForElement:(id)arg1 existingView:(id)arg2;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

