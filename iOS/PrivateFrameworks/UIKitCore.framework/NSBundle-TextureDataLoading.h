//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (TextureDataLoading)
+ (id)currentNibLoadingBundle;
+ (void)popNibLoadingBundle;
+ (void)pushNibLoadingBundle:(id)arg1;
+ (id)currentNibPath;
+ (void)popNibPath;
+ (void)pushNibPath:(id)arg1;
- (id)dataForResourceName:(id)arg1;
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;
- (id)_preferredEnglishLocalizationBundle;
@end
