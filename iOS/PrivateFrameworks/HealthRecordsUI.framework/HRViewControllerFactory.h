//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HRViewControllerFactory : NSObject
{
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (id)makeDetailViewControllerForRecord:(id)arg1 usingProfile:(id)arg2;
- (id)makeViewControllerForRecord:(id)arg1 usingProfile:(id)arg2;
- (id)makeSettingsViewControllerUsing:(id)arg1;
- (id)makeOnboadingTileViewControllerUsing:(id)arg1;

@end
