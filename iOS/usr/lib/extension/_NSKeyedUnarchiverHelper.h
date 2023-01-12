//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSKeyedUnarchiverHelper : NSObject
{
    NSArray *_allowed;
    unsigned int _lastRef;
    NSMutableArray *_allowedClasses;
    NSError *_decodeError;
    _Bool expectsUnnestedCollection;
    _Bool decodedCollection;
}

@property(copy) NSError *decodeError; // @synthesize decodeError=_decodeError;
- (_Bool)classNameAllowed:(Class)arg1;
- (void)setAllowedClassNames:(id)arg1;
- (id)allowedClassNames;
- (void)dealloc;
- (id)init;

@end

