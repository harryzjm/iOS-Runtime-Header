//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPortCoder.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSConcretePortCoder : NSPortCoder
{
    NSSet *allowlist;
}

- (void)dealloc;
- (_Bool)_classAllowed:(Class)arg1;
- (void)_setAllowList:(id)arg1;

@end

