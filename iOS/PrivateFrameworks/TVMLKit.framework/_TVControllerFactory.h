//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVControllerFactory : NSObject
{
}

- (id)_textFieldControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)_listControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)_gridControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)_shelfControllerForElement:(id)arg1 existingController:(id)arg2;
- (void)_registerControllerCreators;
- (id)init;

@end

