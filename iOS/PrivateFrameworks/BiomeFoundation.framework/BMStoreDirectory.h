//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BMStoreDirectory : NSObject
{
}

+ (id)_directoryForType:(unsigned char)arg1;
+ (id)directoryForPrivateStreams;
+ (id)directoryForRestrictedStreams;
+ (id)directoryForPublicStreams;
+ (void)unsetBasePathForTesting;
+ (void)setBasePathForTestingWithPath:(id)arg1;

@end
