//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface _GCDeviceDBBundleDevice : NSObject
{
    NSBundle *_bundle;
    NSString *_identifier;
    NSPredicate *_ioMatchingPredicate;
    NSArray *_personalityPaths;
}

- (void).cxx_destruct;
@property(readonly, copy) NSPredicate *ioMatchingPredicate; // @synthesize ioMatchingPredicate=_ioMatchingPredicate;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)personalities;
- (id)init;
- (id)initWithBundle:(id)arg1 dictionary:(id)arg2 error:(out id *)arg3;

@end

