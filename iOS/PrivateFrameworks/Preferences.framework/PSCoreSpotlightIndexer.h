//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface PSCoreSpotlightIndexer : NSObject
{
}

+ (id)sharedInstance;
- (id)specifiersForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)specifiersPlistPathForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)bundleForSpecifier:(id)arg1 parentBundle:(id)arg2;
- (id)indexItemsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2;
- (id)indexItemForSpecifier:(id)arg1 category:(id)arg2 keywords:(id)arg3 url:(id)arg4 description:(id)arg5;
- (id)descriptionForSpecifierName:(id)arg1 withParentSpecifierNames:(id)arg2;
- (void)indexSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6;
- (void)indexSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3;
- (void)deleteIndex;
- (_Bool)controllerIsBlacklisted:(id)arg1;
- (id)blacklistedControllers;

@end
