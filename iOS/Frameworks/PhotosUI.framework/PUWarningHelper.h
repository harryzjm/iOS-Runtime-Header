//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUWarningHelper : NSObject
{
    NSArray *__assets;
}

+ (void)getRemovalWarningMessage:(id *)arg1 buttonTitle:(id *)arg2 cancelTitle:(id *)arg3 forAssets:(id)arg4;
+ (void)getCombinedRemovalDeletionWarningMessage:(id *)arg1 removeButtonTitle:(id *)arg2 deleteButtonTitle:(id *)arg3 cancelTitle:(id *)arg4 forAssets:(id)arg5;
@property(retain, nonatomic, setter=_setAssets:) NSArray *_assets; // @synthesize _assets=__assets;
- (void).cxx_destruct;
- (id)_suffix;

@end
