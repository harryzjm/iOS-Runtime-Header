//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MPStoreLibraryMappingResponse : NSObject
{
    NSMutableDictionary *_storeIdentifierSetToLibraryIdentifierSet;
    long long _libraryAddedStatus;
}

- (void).cxx_destruct;
@property(nonatomic) long long libraryAddedStatus; // @synthesize libraryAddedStatus=_libraryAddedStatus;
- (void)setLibraryIdentifierSet:(id)arg1 forIdentifierSet:(id)arg2;
- (id)libraryIdentifierSetForIdentifierSet:(id)arg1;

@end

