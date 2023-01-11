//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/TVInterfaceCreating-Protocol.h>
#import <VideosUI/_TVInterfaceCreatingPrivate-Protocol.h>

@class NSDictionary, NSString;

@interface VUIMLFactory : NSObject <TVInterfaceCreating, _TVInterfaceCreatingPrivate>
{
    NSDictionary *_elementTypeLookup;
}

+ (void)_registerStyles;
+ (void)_registerElements;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *elementTypeLookup; // @synthesize elementTypeLookup=_elementTypeLookup;
- (void).cxx_destruct;
- (void)_parseAppConfigurationForElement:(id)arg1;
- (id)_styleSheetURLForTemplate:(id)arg1;
- (id)_imageProxyForElement:(id)arg1;
- (id)imageForResource:(id)arg1;
- (Class)collectionViewCellClassForElement:(id)arg1;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)navigationControllerForTabIdentifier:(id)arg1;
- (id)viewForElement:(id)arg1 existingView:(id)arg2;
- (unsigned long long)vuiElementTypeForElement:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
