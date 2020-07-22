//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PMLSpotlightReference : NSObject
{
    NSArray *_itemIdentifiers;
    NSString *_domainIdentifier;
    NSString *_bundleIdentifier;
}

+ (id)referenceWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3;

@end

