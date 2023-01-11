//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSString;

@interface RERecentAction : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    unsigned long long _actionIdentifier;
}

+ (id)actionWithBundleIdentifier:(id)arg1 actionIdentifier:(unsigned long long)arg2;
@property(nonatomic) unsigned long long actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

