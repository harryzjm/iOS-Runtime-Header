//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSHashTable, NSURL;

@interface NSFileWrapperMoreIVars : NSObject
{
    NSURL *contentsURL;
    _Bool contentsMustBeReadWithoutMapping;
    _Bool attributesMustBeWrittenSoNoHardLinking;
    NSHashTable *parents;
    NSError *contentsLazyReadingError;
    NSDictionary *cachedDirectoryChildrenAsDictionary;
}

@end

