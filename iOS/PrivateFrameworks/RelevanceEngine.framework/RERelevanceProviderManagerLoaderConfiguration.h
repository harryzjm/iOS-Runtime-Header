//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REClassLoaderConfiguration-Protocol.h>

@class NSString;

@interface RERelevanceProviderManagerLoaderConfiguration : NSObject <REClassLoaderConfiguration>
{
}

+ (id)sharedInstance;
- (Class)desiredClassFromBundle:(id)arg1 forKey:(id)arg2;
- (Class)desiredClassForLoader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
