//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNAtomicToggle : NSObject
{
    _Atomic _Bool _state;
}

- (_Bool)trySetState:(_Bool)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithState:(_Bool)arg1;
- (id)init;

@end
