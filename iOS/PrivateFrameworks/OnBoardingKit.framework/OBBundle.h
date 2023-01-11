//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface OBBundle : NSObject
{
    NSString *_identifier;
    NSBundle *_bundle;
    NSString *_bundleVersion;
}

+ (id)bundleAtPath:(id)arg1;
+ (id)bundleWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)privacyFlow;
- (id)initWithBundle:(id)arg1;

@end

