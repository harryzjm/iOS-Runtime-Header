//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC18PodcastsFoundation40FairPlayTemporaryKeyStorageProvidingMock : _TtCs12_SwiftObject
{
    MISSING_TYPE *createDirectoryHandler;
    MISSING_TYPE *removeDirectoryHandler;
    MISSING_TYPE *directoryExistsHandler;
    MISSING_TYPE *directoryLocationHandler;
}

- (id)directoryLocationFor:(long long)arg1;
- (_Bool)directoryExistsFor:(long long)arg1;
- (_Bool)removeDirectoryFor:(long long)arg1 error:(id *)arg2;
- (id)createDirectoryFor:(long long)arg1 error:(id *)arg2;

@end

